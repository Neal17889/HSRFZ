
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

int FUN_140002ae4(void)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  code **ppcVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint *puVar7;
  ulonglong uVar8;
  undefined8 unaff_RBX;
  undefined8 in_R9;
  undefined uVar9;
  
  iVar2 = (int)unaff_RBX;
  uVar3 = FUN_140002e6c(1);
  if ((char)uVar3 == '\0') {
    FUN_140003190(7);
  }
  else {
    bVar1 = false;
    uVar9 = 0;
    uVar3 = __scrt_acquire_startup_lock();
    iVar2 = (int)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)uVar3);
    if (DAT_140006690 != 1) {
      if (DAT_140006690 == 0) {
        DAT_140006690 = 1;
        iVar2 = _initterm_e(&DAT_140004348,&DAT_140004360);
        if (iVar2 != 0) {
          return 0xff;
        }
        _initterm(&DAT_140004330,&DAT_140004340);
        DAT_140006690 = 2;
      }
      else {
        bVar1 = true;
        uVar9 = 1;
      }
      __scrt_release_startup_lock((char)uVar3);
      ppcVar4 = (code **)FUN_140003178();
      if ((*ppcVar4 != (code *)0x0) &&
         (uVar5 = FUN_140002f34((longlong)ppcVar4), (char)uVar5 != '\0')) {
        (**ppcVar4)(0,2,0,in_R9,uVar9);
      }
      plVar6 = (longlong *)FUN_140003180();
      if ((*plVar6 != 0) && (uVar5 = FUN_140002f34((longlong)plVar6), (char)uVar5 != '\0')) {
        _register_thread_local_exe_atexit_callback(*plVar6);
      }
      _get_initial_narrow_environment();
      __p___argv();
      puVar7 = (uint *)__p___argc();
      uVar8 = (ulonglong)*puVar7;
      iVar2 = FUN_140002000();
      uVar5 = FUN_1400032e0();
      if ((char)uVar5 != '\0') {
        if (!bVar1) {
          _cexit();
        }
        __scrt_uninitialize_crt(CONCAT71((int7)(uVar8 >> 8),1),'\0');
        return iVar2;
      }
      goto LAB_140002c50;
    }
  }
  FUN_140003190(7);
LAB_140002c50:
                    /* WARNING: Subroutine does not return */
  exit(iVar2);
}

