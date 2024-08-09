
void FUN_140002a00(void)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined7 extraout_var;
  
  _set_app_type(1);
  uVar5 = FUN_140003128();
  _set_fmode((int)uVar5);
  uVar5 = FUN_14000311c();
  puVar6 = (undefined4 *)__p__commode();
  *puVar6 = (int)uVar5;
  uVar5 = __scrt_initialize_onexit_tables(1);
  if ((char)uVar5 != '\0') {
    FUN_1400033a0();
    atexit((_func_5014 *)&LAB_1400033dc);
    uVar7 = FUN_140003120();
    iVar4 = _configure_narrow_argv(uVar7 & 0xffffffff);
    if (iVar4 == 0) {
      FUN_140003130();
      bVar2 = FUN_14000316c();
      if ((int)CONCAT71(extraout_var,bVar2) != 0) {
        __setusermatherr(FUN_14000311c);
      }
      _guard_check_icall();
      _guard_check_icall();
      uVar5 = FUN_14000311c();
      _configthreadlocale((int)uVar5);
      cVar3 = FUN_140003140();
      if (cVar3 != '\0') {
        _initialize_narrow_environment();
      }
      FUN_14000311c();
      uVar5 = thunk_FUN_14000311c();
      if ((int)uVar5 == 0) {
        return;
      }
    }
  }
  FUN_140003190(7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

