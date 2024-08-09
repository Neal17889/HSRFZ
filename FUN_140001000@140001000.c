
void FUN_140001000(LPCSTR param_1)

{
  DWORD nNumberOfBytesToRead;
  BOOL BVar1;
  HANDLE hFile;
  void *lpBuffer;
  void *pvVar2;
  undefined auStackY_88 [32];
  DWORD local_2c;
  ulonglong local_28;
  
  local_28 = DAT_140006000 ^ (ulonglong)auStackY_88;
  pvVar2 = (void *)0x0;
  hFile = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  lpBuffer = pvVar2;
  if (hFile != (HANDLE)0xffffffffffffffff) {
    nNumberOfBytesToRead = GetFileSize(hFile,(LPDWORD)0x0);
    lpBuffer = (void *)0x0;
    if (nNumberOfBytesToRead != 0xffffffff) {
      lpBuffer = operator_new((ulonglong)nNumberOfBytesToRead);
      local_2c = 0;
      BVar1 = ReadFile(hFile,lpBuffer,nNumberOfBytesToRead,&local_2c,(LPOVERLAPPED)0x0);
      if (BVar1 != 0) {
        while( true ) {
          if (nNumberOfBytesToRead <= (uint)pvVar2) break;
          pvVar2 = (void *)(ulonglong)((uint)pvVar2 + 1);
        }
      }
    }
  }
  if ((longlong)hFile - 1U < 0xfffffffffffffffe) {
    CloseHandle(hFile);
  }
  if (lpBuffer != (void *)0x0) {
                    /* [BAD 2] free */
    free(lpBuffer);
  }
  FUN_140002960(local_28 ^ (ulonglong)auStackY_88);
  return;
}

