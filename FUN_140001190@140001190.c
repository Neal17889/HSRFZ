
void FUN_140001190(HANDLE param_1,short *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  BOOL BVar4;
  LPVOID lpAddress;
  LPVOID lpBaseAddress;
  LPTHREAD_START_ROUTINE lpStartAddress;
  HANDLE hObject;
  void *_Dst;
  LPVOID pvVar5;
  uint uVar6;
  uint *puVar7;
  ulonglong uVar8;
  short *psVar9;
  LPCVOID lpBuffer;
  code **lpBuffer_00;
  code *pcVar10;
  undefined *lpBuffer_01;
  undefined8 uVar11;
  undefined8 uVar12;
  LPTHREAD_START_ROUTINE pPVar13;
  undefined auStackY_f8 [32];
  code *local_b8;
  code *local_b0;
  code *local_a8;
  LPVOID local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined local_78 [16];
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [16];
  uint local_38;
  DWORD local_34;
  ulonglong local_30;
  
  local_30 = DAT_140006000 ^ (ulonglong)auStackY_f8;
  if (*param_2 == 0x5a4d) {
    uVar11 = 0x3000;
    iVar1 = *(int *)(param_2 + 0x1e);
    uVar8 = (ulonglong)*(uint *)((longlong)param_2 + (longlong)iVar1 + 0x50);
    lpAddress = VirtualAllocEx(param_1,(LPVOID)0x0,uVar8,0x3000,4);
    if (lpAddress == (LPVOID)0x0) {
      DVar3 = GetLastError();
      FUN_140001130("Target process memory allocation failed (ex) 0x%X\n",(ulonglong)DVar3,uVar8,
                    uVar11);
    }
    else {
      uVar6 = 0;
      local_34 = 0;
      VirtualProtectEx(param_1,lpAddress,
                       (ulonglong)*(uint *)((longlong)param_2 + (longlong)iVar1 + 0x50),0x40,
                       &local_34);
      uVar11 = 0x1000;
      local_b8 = LoadLibraryA_exref;
      local_b0 = GetProcAddress_exref;
      local_a8 = RtlAddFunctionTable_exref;
      local_98 = 0;
      local_90 = 1;
      local_80 = 1;
      local_88 = 0;
      psVar9 = param_2;
      local_a0 = lpAddress;
      BVar4 = WriteProcessMemory(param_1,lpAddress,param_2,0x1000,(SIZE_T *)0x0);
      if (BVar4 == 0) {
        DVar3 = GetLastError();
        FUN_140001130("Can\'t write file header 0x%X\n",(ulonglong)DVar3,psVar9,uVar11);
        VirtualFreeEx(param_1,lpAddress,0,0x8000);
      }
      else {
        if (*(short *)((longlong)param_2 + (longlong)iVar1 + 6) != 0) {
          puVar7 = (uint *)((longlong)param_2 +
                           (ulonglong)*(ushort *)((longlong)param_2 + (longlong)iVar1 + 0x14) + 0x2c
                           + (longlong)iVar1);
          do {
            if (puVar7[-1] != 0) {
              uVar8 = (ulonglong)puVar7[-1];
              lpBuffer = (LPCVOID)((ulonglong)*puVar7 + (longlong)param_2);
              BVar4 = WriteProcessMemory(param_1,(LPVOID)((ulonglong)puVar7[-2] +
                                                         (longlong)lpAddress),lpBuffer,uVar8,
                                         (SIZE_T *)0x0);
              if (BVar4 == 0) {
                DVar3 = GetLastError();
                FUN_140001130("Can\'t map sections: 0x%x\n",(ulonglong)DVar3,lpBuffer,uVar8);
                VirtualFreeEx(param_1,lpAddress,0,0x8000);
                goto LAB_14000177f;
              }
            }
            uVar6 = uVar6 + 1;
            puVar7 = puVar7 + 10;
          } while (uVar6 != *(ushort *)((longlong)param_2 + (longlong)iVar1 + 6));
        }
        uVar12 = 0x3000;
        uVar11 = 0x40;
        lpBaseAddress = VirtualAllocEx(param_1,(LPVOID)0x0,0x40,0x3000,4);
        if (lpBaseAddress == (LPVOID)0x0) {
          DVar3 = GetLastError();
          FUN_140001130("Target process mapping allocation failed (ex) 0x%X\n",(ulonglong)DVar3,
                        uVar11,uVar12);
          VirtualFreeEx(param_1,lpAddress,0,0x8000);
        }
        else {
          uVar11 = 0x40;
          lpBuffer_00 = &local_b8;
          BVar4 = WriteProcessMemory(param_1,lpBaseAddress,lpBuffer_00,0x40,(SIZE_T *)0x0);
          if (BVar4 == 0) {
            DVar3 = GetLastError();
            FUN_140001130("Can\'t write mapping 0x%X\n",(ulonglong)DVar3,lpBuffer_00,uVar11);
            VirtualFreeEx(param_1,lpAddress,0,0x8000);
            VirtualFreeEx(param_1,lpBaseAddress,0,0x8000);
          }
          else {
            uVar12 = 0x3000;
            uVar11 = 0x1000;
            lpStartAddress =
                 (LPTHREAD_START_ROUTINE)VirtualAllocEx(param_1,(LPVOID)0x0,0x1000,0x3000,0x40);
            if (lpStartAddress == (LPTHREAD_START_ROUTINE)0x0) {
              DVar3 = GetLastError();
              FUN_140001130("Memory shellcode allocation failed (ex) 0x%X\n",(ulonglong)DVar3,uVar11
                            ,uVar12);
              VirtualFreeEx(param_1,lpAddress,0,0x8000);
              VirtualFreeEx(param_1,lpBaseAddress,0,0x8000);
            }
            else {
              uVar11 = 0x1000;
              pcVar10 = FUN_1400017a0;
              BVar4 = WriteProcessMemory(param_1,lpStartAddress,FUN_1400017a0,0x1000,(SIZE_T *)0x0);
              if (BVar4 == 0) {
                DVar3 = GetLastError();
                FUN_140001130("Can\'t write shellcode 0x%X\n",(ulonglong)DVar3,pcVar10,uVar11);
LAB_1400014cb:
                VirtualFreeEx(param_1,lpAddress,0,0x8000);
                VirtualFreeEx(param_1,lpBaseAddress,0,0x8000);
                VirtualFreeEx(param_1,lpStartAddress,0,0x8000);
              }
              else {
                FUN_140001130("Mapped DLL at %p\n",lpAddress,pcVar10,uVar11);
                FUN_140001130("Mapping info at %p\n",lpBaseAddress,pcVar10,uVar11);
                pPVar13 = lpStartAddress;
                FUN_140001130("Shell code at %p\n",lpStartAddress,pcVar10,uVar11);
                FUN_140001130("Data allocated\n",pPVar13,pcVar10,uVar11);
                lpBuffer_01 = (undefined *)0x0;
                pPVar13 = lpStartAddress;
                hObject = CreateRemoteThread(param_1,(LPSECURITY_ATTRIBUTES)0x0,0,lpStartAddress,
                                             lpBaseAddress,0,(LPDWORD)0x0);
                if (hObject == (HANDLE)0x0) {
                  DVar3 = GetLastError();
                  FUN_140001130("Thread creation failed 0x%X\n",(ulonglong)DVar3,lpBuffer_01,pPVar13
                               );
                  VirtualFreeEx(param_1,lpAddress,0,0x8000);
                  VirtualFreeEx(param_1,lpBaseAddress,0,0x8000);
                  VirtualFreeEx(param_1,lpStartAddress,0,0x8000);
                }
                else {
                  CloseHandle(hObject);
                  FUN_140001130("Thread created at: %p, waiting for return...\n",lpStartAddress,
                                lpBuffer_01,pPVar13);
                  do {
                    local_38 = 0;
                    GetExitCodeProcess(param_1,&local_38);
                    if (local_38 != 0x103) {
                      FUN_140001130("Process crashed, exit code: 0x%X\n",(ulonglong)local_38,
                                    lpBuffer_01,pPVar13);
                      goto LAB_14000177f;
                    }
                    pPVar13 = (LPTHREAD_START_ROUTINE)0x40;
                    lpBuffer_01 = local_78;
                    local_78 = ZEXT816(0);
                    local_68 = ZEXT816(0);
                    local_58 = ZEXT816(0);
                    local_48 = ZEXT816(0);
                    pvVar5 = lpBaseAddress;
                    ReadProcessMemory(param_1,lpBaseAddress,lpBuffer_01,0x40,(SIZE_T *)0x0);
                    lVar2 = local_58._0_8_;
                    if (local_58._0_8_ == 0x404040) {
                      FUN_140001130("Wrong mapping ptr\n",pvVar5,lpBuffer_01,pPVar13);
                      goto LAB_1400014cb;
                    }
                    if (local_58._0_8_ == 0x505050) {
                      FUN_140001130("WARNING: Exception support failed!\n",pvVar5,lpBuffer_01,
                                    pPVar13);
                    }
                    Sleep(10);
                  } while (lVar2 == 0);
                  _Dst = malloc(0x1400000);
                  if (_Dst == (void *)0x0) {
                    FUN_140001130("Unable to allocate memory\n",pvVar5,lpBuffer_01,pPVar13);
                  }
                  else {
                    /* [BAD 1] memset */
                    memset(_Dst,0,0x1400000);
                    uVar11 = 0x1000;
                    pPVar13 = lpStartAddress;
                    BVar4 = WriteProcessMemory(param_1,lpStartAddress,_Dst,0x1000,(SIZE_T *)0x0);
                    if (BVar4 == 0) {
                      FUN_140001130("WARNING: Can\'t clear shellcode\n",pPVar13,_Dst,uVar11);
                    }
                    uVar12 = 0x8000;
                    uVar11 = 0;
                    BVar4 = VirtualFreeEx(param_1,lpStartAddress,0,0x8000);
                    if (BVar4 == 0) {
                      FUN_140001130("WARNING: can\'t release shell code memory\n",lpStartAddress,
                                    uVar11,uVar12);
                    }
                    uVar12 = 0x8000;
                    uVar11 = 0;
                    BVar4 = VirtualFreeEx(param_1,lpBaseAddress,0,0x8000);
                    if (BVar4 == 0) {
                      FUN_140001130("WARNING: can\'t release mapping data memory\n",lpBaseAddress,
                                    uVar11,uVar12);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    FUN_140001130("Invalid file\n",param_2,param_3,param_4);
  }
LAB_14000177f:
  FUN_140002960(local_30 ^ (ulonglong)auStackY_f8);
  return;
}

