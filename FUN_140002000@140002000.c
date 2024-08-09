
void FUN_140002000(void)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  undefined auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  DWORD DVar8;
  BOOL BVar9;
  uint uVar10;
  int iVar11;
  void *pvVar12;
  LPCSTR lpFileName;
  __uint64 _Var13;
  void *pvVar14;
  HWND pHVar15;
  undefined4 *puVar16;
  char *pcVar17;
  ulonglong uVar18;
  LPSTR lpCommandLine;
  ulonglong uVar19;
  undefined *puVar20;
  void *pvVar21;
  ulonglong uVar22;
  undefined4 *puVar23;
  longlong lVar24;
  char *pcVar25;
  undefined8 uVar26;
  undefined4 *lpReturnedString;
  undefined8 uVar27;
  undefined auStackY_488 [32];
  undefined local_438 [16];
  undefined8 local_428;
  undefined local_420 [8];
  undefined8 uStack_418;
  ulonglong local_410;
  ulonglong local_408;
  undefined local_400 [16];
  ulonglong local_3f0;
  ulonglong local_3e8;
  undefined local_3d8 [24];
  undefined local_3c0 [16];
  undefined local_3b0 [16];
  undefined local_3a0 [16];
  undefined local_390 [16];
  undefined local_380 [16];
  undefined local_368 [24];
  undefined auStack_350 [16];
  undefined local_340 [16];
  undefined local_330 [16];
  undefined local_320 [16];
  undefined local_310 [16];
  undefined local_300 [16];
  undefined local_2f0 [16];
  undefined local_2e0 [16];
  undefined4 local_258;
  CHAR local_148;
  char acStack_147 [271];
  ulonglong local_38;
  
  local_38 = DAT_140006000 ^ (ulonglong)auStackY_488;
  GetCurrentDirectoryA(0x104,&local_148);
  auVar4 = ZEXT816(0);
  local_400._8_8_ = 0;
  pvVar21 = (void *)0x0;
  local_3f0 = 0;
  local_3e8 = 0;
  uVar19 = 0xffffffffffffffff;
  do {
    uVar18 = uVar19;
    uVar19 = uVar18 + 1;
  } while ((&local_148)[uVar18 + 1] != '\0');
  if (0x7fffffffffffffff < uVar19) goto LAB_14000274c;
  local_400 = auVar4;
  if (0xf < uVar19) {
    uVar18 = uVar19 | 0xf;
    if (0x7fffffffffffffff < uVar18) {
      uVar18 = 0x7fffffffffffffff;
      _Var13 = 0x8000000000000027;
LAB_1400020de:
      pvVar12 = operator_new(_Var13);
      if (pvVar12 == (void *)0x0) goto LAB_1400023d4;
      pvVar14 = (void *)((longlong)pvVar12 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)pvVar14 - 8) = pvVar12;
LAB_140002132:
      local_400._0_8_ = pvVar14;
      uVar22 = uVar19;
      local_3f0 = uVar19;
      local_3e8 = uVar18;
                    /* [BAD 1] memcpy */
      memcpy(pvVar14,&local_148,uVar19);
      *(undefined *)((longlong)pvVar14 + uVar19) = 0;
      goto LAB_14000215a;
    }
    if (uVar18 < 0x16) {
      uVar18 = 0x16;
    }
    uVar22 = uVar18 + 1;
    if (uVar22 < 0x1000) {
      pvVar14 = pvVar21;
      if (uVar22 != 0) {
        pvVar14 = operator_new(uVar22);
      }
      goto LAB_140002132;
    }
    _Var13 = uVar18 + 0x28;
    if (uVar22 < _Var13) goto LAB_1400020de;
LAB_140002740:
    FUN_140001df0();
LAB_140002746:
    FUN_140001df0();
    auVar4 = local_400;
LAB_14000274c:
    local_400 = auVar4;
    FUN_140001e90();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_3e8 = 0xf;
  local_3f0 = uVar19;
                    /* [BAD 1] memcpy */
  memcpy(local_400,&local_148,uVar19);
  local_400[uVar18 + 1] = 0;
  uVar22 = uVar19;
LAB_14000215a:
  if (local_3e8 - local_3f0 < 0xe) {
    FUN_1400027c0((void **)local_400,0xe,uVar22,"\\Pipsi-HSR.ini",0xe);
  }
  else {
    puVar20 = local_400;
    if (0xf < local_3e8) {
      puVar20 = (undefined *)local_400._0_8_;
    }
    puVar20 = puVar20 + local_3f0;
    local_3f0 = local_3f0 + 0xe;
                    /* [BAD 1] memmove */
    memmove(puVar20,"\\Pipsi-HSR.ini",0xe);
    puVar20[0xe] = 0;
  }
                    /* [BAD 1] memset */
  memset(&local_258,0,0x104);
  lpFileName = local_400;
  if (0xf < local_3e8) {
    lpFileName = (LPCSTR)local_400._0_8_;
  }
  lpReturnedString = &local_258;
  puVar23 = (undefined4 *)&DAT_140004740;
  DVar8 = GetPrivateProfileStringA
                    ("Paths","ExecutablePath","",(LPSTR)lpReturnedString,0x104,lpFileName);
  if (DVar8 == 0) {
    local_368._0_4_ = 0x98;
    local_368._8_16_ = ZEXT816(0);
    local_320 = ZEXT816(0);
    local_300 = ZEXT816(0);
    local_2f0 = ZEXT816(0);
    local_2e0 = ZEXT816(0);
    local_330._4_12_ = SUB1612(ZEXT816(0),4);
    local_330._0_4_ = 0x104;
    auStack_350 = ZEXT816(0x140004878);
    local_340._8_8_ = &local_258;
    local_340._0_8_ = 0x100000000;
    local_310._0_12_ = ZEXT412(0x1800) << 0x40;
    local_310._12_4_ = 0;
    BVar9 = GetOpenFileNameA((LPOPENFILENAMEA)local_368);
    if (BVar9 != 0) {
      lpReturnedString = (undefined4 *)local_400;
      if (0xf < local_3e8) {
        lpReturnedString = (undefined4 *)local_400._0_8_;
      }
      puVar23 = &local_258;
      WritePrivateProfileStringA("Paths","ExecutablePath",(LPCSTR)puVar23,(LPCSTR)lpReturnedString);
      SetCurrentDirectoryA(&local_148);
      goto LAB_1400022c5;
    }
  }
  else {
LAB_1400022c5:
    FUN_140001130("Executable Path: %s\n",&local_258,puVar23,lpReturnedString);
    puVar23 = &local_258;
    lVar24 = 2;
    puVar16 = (undefined4 *)local_368;
    do {
      uVar5 = puVar23[1];
      uVar6 = puVar23[2];
      uVar7 = puVar23[3];
      *puVar16 = *puVar23;
      puVar16[1] = uVar5;
      puVar16[2] = uVar6;
      puVar16[3] = uVar7;
      uVar5 = puVar23[5];
      uVar6 = puVar23[6];
      uVar7 = puVar23[7];
      puVar16[4] = puVar23[4];
      puVar16[5] = uVar5;
      puVar16[6] = uVar6;
      puVar16[7] = uVar7;
      uVar5 = puVar23[9];
      uVar6 = puVar23[10];
      uVar7 = puVar23[0xb];
      puVar16[8] = puVar23[8];
      puVar16[9] = uVar5;
      puVar16[10] = uVar6;
      puVar16[0xb] = uVar7;
      uVar5 = puVar23[0xd];
      uVar6 = puVar23[0xe];
      uVar7 = puVar23[0xf];
      puVar16[0xc] = puVar23[0xc];
      puVar16[0xd] = uVar5;
      puVar16[0xe] = uVar6;
      puVar16[0xf] = uVar7;
      uVar5 = puVar23[0x11];
      uVar6 = puVar23[0x12];
      uVar7 = puVar23[0x13];
      puVar16[0x10] = puVar23[0x10];
      puVar16[0x11] = uVar5;
      puVar16[0x12] = uVar6;
      puVar16[0x13] = uVar7;
      uVar5 = puVar23[0x15];
      uVar6 = puVar23[0x16];
      uVar7 = puVar23[0x17];
      puVar16[0x14] = puVar23[0x14];
      puVar16[0x15] = uVar5;
      puVar16[0x16] = uVar6;
      puVar16[0x17] = uVar7;
      uVar5 = puVar23[0x19];
      uVar6 = puVar23[0x1a];
      uVar7 = puVar23[0x1b];
      puVar16[0x18] = puVar23[0x18];
      puVar16[0x19] = uVar5;
      puVar16[0x1a] = uVar6;
      puVar16[0x1b] = uVar7;
      puVar1 = puVar16 + 0x20;
      uVar5 = puVar23[0x1d];
      uVar6 = puVar23[0x1e];
      uVar7 = puVar23[0x1f];
      puVar16[0x1c] = puVar23[0x1c];
      puVar16[0x1d] = uVar5;
      puVar16[0x1e] = uVar6;
      puVar16[0x1f] = uVar7;
      puVar23 = puVar23 + 0x20;
      lVar24 = lVar24 + -1;
      puVar16 = puVar1;
    } while (lVar24 != 0);
    *puVar1 = *puVar23;
    BVar9 = PathRemoveFileSpecA(local_368);
    if (BVar9 != 0) {
      pcVar25 = "\\GameAssembly.dll";
      uVar18 = 0x104;
      strcat_s(local_368,0x104,"\\GameAssembly.dll");
      uVar10 = FUN_140001000(local_368);
      uVar19 = (ulonglong)uVar10;
      if (uVar10 == 0xffffffff) {
        pcVar17 = "Unable to generate checksum.\n";
        uVar19 = uVar18;
      }
      else {
        FUN_140001130("Checksum of your game: %X\n",uVar19,pcVar25,lpReturnedString);
        if (uVar10 == 0xbd0bbaff) {
          auVar4 = ZEXT816(0);
          uStack_418 = 0;
          local_410 = 0;
          local_408 = 0;
          uVar19 = 0xffffffffffffffff;
          do {
            uVar18 = uVar19;
            uVar19 = uVar18 + 1;
          } while (*(char *)((longlong)&local_258 + uVar18 + 1) != '\0');
          _local_420 = auVar4;
          if (0x7fffffffffffffff < uVar19) {
            FUN_140001e90();
            goto LAB_140002740;
          }
          if (uVar19 < 0x10) {
            local_408 = 0xf;
            local_410 = uVar19;
                    /* [BAD 1] memcpy */
            memcpy(local_420,&local_258,uVar19);
            local_420[uVar18 + 1] = 0;
            uVar22 = uVar19;
          }
          else {
            uVar18 = uVar19 | 0xf;
            if (uVar18 < 0x8000000000000000) {
              if (uVar18 < 0x16) {
                uVar18 = 0x16;
              }
              uVar22 = uVar18 + 1;
              if (0xfff < uVar22) {
                _Var13 = uVar18 + 0x28;
                if (_Var13 <= uVar22) goto LAB_140002746;
                goto LAB_140002483;
              }
              if (uVar22 != 0) {
                pvVar21 = operator_new(uVar22);
              }
            }
            else {
              _Var13 = 0x8000000000000027;
              uVar18 = 0x7fffffffffffffff;
LAB_140002483:
              pvVar14 = operator_new(_Var13);
              if (pvVar14 == (void *)0x0) goto LAB_1400026df;
              pvVar21 = (void *)((longlong)pvVar14 + 0x27U & 0xffffffffffffffe0);
              *(void **)((longlong)pvVar21 - 8) = pvVar14;
            }
            local_420 = (undefined  [8])pvVar21;
            uVar22 = uVar19;
            local_410 = uVar19;
            local_408 = uVar18;
                    /* [BAD 1] memcpy */
            memcpy(pvVar21,&local_258,uVar19);
            *(undefined *)((longlong)pvVar21 + uVar19) = 0;
          }
          if (local_408 == local_410) {
            FUN_1400027c0((void **)local_420,1,uVar22,&DAT_1400048d0,1);
          }
          else {
            puVar20 = local_420;
            if (0xf < local_408) {
              puVar20 = (undefined *)local_420;
            }
            puVar2 = (undefined2 *)(puVar20 + local_410);
            local_410 = local_410 + 1;
            *puVar2 = 0x20;
          }
          puVar20 = local_420;
          if (0xf < local_408) {
            puVar20 = (undefined *)local_420;
          }
          puVar20[local_410] = 0;
          local_3d8._0_4_ = 0x68;
          local_3d8._8_16_ = ZEXT816(0);
          local_3c0 = ZEXT816(0);
          local_3b0 = ZEXT816(0);
          local_3a0 = ZEXT816(0);
          local_390 = ZEXT816(0);
          local_380 = ZEXT816(0);
          local_438 = ZEXT816(0);
          local_428._0_4_ = 0;
          local_428._4_4_ = 0;
          lpCommandLine = local_420;
          if (0xf < local_408) {
            lpCommandLine = (LPSTR)local_420;
          }
          uVar27 = 0;
          uVar26 = 0;
          BVar9 = CreateProcessA((LPCSTR)0x0,lpCommandLine,(LPSECURITY_ATTRIBUTES)0x0,
                                 (LPSECURITY_ATTRIBUTES)0x0,0,4,(LPVOID)0x0,(LPCSTR)0x0,
                                 (LPSTARTUPINFOA)local_3d8,(LPPROCESS_INFORMATION)local_438);
          if (BVar9 != 0) {
            pcVar25 = "Bypass.dll";
            iVar11 = FUN_140001eb0((HANDLE)local_438._0_8_,"Bypass.dll",uVar26,uVar27);
            if (iVar11 == 0) {
            }
            else {
              ResumeThread((HANDLE)local_438._8_8_);
              FUN_140001130("Waiting for the game to initialize..\n",pcVar25,uVar26,uVar27);
              pHVar15 = FindWindowA("UnityWndClass",(LPCSTR)0x0);
              while (pHVar15 == (HWND)0x0) {
                Sleep(1000);
                pHVar15 = FindWindowA("UnityWndClass",(LPCSTR)0x0);
              }
              Sleep(20000);
              iVar11 = FUN_140001eb0((HANDLE)local_438._0_8_,"Cheat.dll",uVar26,uVar27);
              if (iVar11 != 0) {
                CloseHandle((HANDLE)local_438._0_8_);
                CloseHandle((HANDLE)local_438._8_8_);
                goto LAB_1400026ac;
              }
            }
            TerminateProcess((HANDLE)local_438._0_8_,0);
            system("pause");
          }
LAB_1400026ac:
          if (0xf < local_408) {
            pvVar21 = (void *)local_420;
            if ((0xfff < local_408 + 1) &&
               (pvVar21 = *(void **)((longlong)local_420 + -8),
               0x1f < (ulonglong)((longlong)local_420 + (-8 - (longlong)pvVar21)))) {
LAB_1400026df:
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
                    /* [BAD 2] free */
            free(pvVar21);
          }
          local_410 = 0;
          local_408 = 0xf;
          auVar4[0xf] = 0;
          auVar4._0_15_ = stack0xfffffffffffffbe1;
          _local_420 = auVar4 << 8;
          goto LAB_140002396;
        }
        FUN_140001130("Your game version is not supported.\n",uVar19,pcVar25,lpReturnedString);
        if (uVar10 != 0x26143c7f) goto LAB_140002386;
        pcVar17 = "Use the global version of the cheat.\n";
      }
      FUN_140001130(pcVar17,uVar19,pcVar25,lpReturnedString);
    }
LAB_140002386:
    system("pause");
  }
LAB_140002396:
  if (0xf < local_3e8) {
    pvVar21 = (void *)local_400._0_8_;
    if ((0xfff < local_3e8 + 1) &&
       (pvVar21 = *(void **)(local_400._0_8_ + -8),
       0x1f < (ulonglong)(local_400._0_8_ + (-8 - (longlong)pvVar21)))) {
LAB_1400023d4:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
                    /* [BAD 2] free */
    free(pvVar21);
  }
  FUN_140002960(local_38 ^ (ulonglong)auStackY_488);
  return;
}

