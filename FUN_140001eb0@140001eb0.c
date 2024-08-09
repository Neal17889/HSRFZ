
void FUN_140001eb0(HANDLE param_1,LPCSTR param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  DWORD nNumberOfBytesToRead;
  BOOL BVar2;
  HANDLE hFile;
  short *lpBuffer;
  ulonglong uVar3;
  LPDWORD lpNumberOfBytesRead;
  undefined auStackY_78 [32];
  DWORD local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_140006000 ^ (ulonglong)auStackY_78;
  FUN_140001130("Injecting %s..\n",param_2,param_3,param_4);
  lpBuffer = (short *)0x0;
  lpNumberOfBytesRead = (LPDWORD)0x0;
  local_38[0] = 0;
  uVar3 = 1;
  hFile = CreateFileA(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if ((longlong)hFile - 1U < 0xfffffffffffffffe) {
    nNumberOfBytesToRead = GetFileSize(hFile,(LPDWORD)0x0);
    if (nNumberOfBytesToRead == 0xffffffff) {
LAB_140001f65:
      CloseHandle(hFile);
      goto LAB_140001f6e;
    }
    lpBuffer = (short *)operator_new((ulonglong)nNumberOfBytesToRead);
    lpNumberOfBytesRead = local_38;
    uVar3 = (ulonglong)nNumberOfBytesToRead;
    BVar2 = ReadFile(hFile,lpBuffer,nNumberOfBytesToRead,lpNumberOfBytesRead,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
                    /* [BAD 2] free */
      free(lpBuffer);
      lpBuffer = (short *)0x8123;
      goto LAB_140001f65;
    }
    CloseHandle(hFile);
    cVar1 = FUN_140001190(param_1,lpBuffer,uVar3,lpNumberOfBytesRead);
    if (cVar1 != '\0') {
                    /* [BAD 2] free */
      free(lpBuffer);
      FUN_140001130("%s successfully injected!\n",param_2,uVar3,lpNumberOfBytesRead);
      goto LAB_140001f87;
    }
    FUN_140001130("Failed to inject %s\n",param_2,uVar3,lpNumberOfBytesRead);
  }
  else {
LAB_140001f6e:
    FUN_140001130("Unable to load/find %s\n",param_2,uVar3,lpNumberOfBytesRead);
  }
                    /* [BAD 2] free */
  free(lpBuffer);
LAB_140001f87:
  FUN_140002960(local_30 ^ (ulonglong)auStackY_78);
  return;
}

