
void ** FUN_1400027c0(void **param_1,ulonglong param_2,undefined8 param_3,void *param_4,
                     size_t param_5)

{
  ulonglong uVar1;
  void *pvVar2;
  code *pcVar3;
  void **ppvVar4;
  ulonglong uVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  
  pvVar8 = param_1[2];
  pvVar7 = (void *)0x7fffffffffffffff;
  if (0x7fffffffffffffffU - (longlong)pvVar8 < param_2) {
    FUN_140001e90();
    pcVar3 = (code *)swi(3);
    ppvVar4 = (void **)(*pcVar3)();
    return ppvVar4;
  }
  pvVar2 = param_1[3];
  pvVar6 = (void *)((ulonglong)(void *)(param_2 + (longlong)pvVar8) | 0xf);
  if ((pvVar6 < (void *)0x8000000000000000) &&
     (pvVar2 <= (void *)(0x7fffffffffffffff - ((ulonglong)pvVar2 >> 1)))) {
    pvVar9 = (void *)(((ulonglong)pvVar2 >> 1) + (longlong)pvVar2);
    pvVar7 = pvVar6;
    if (pvVar6 < pvVar9) {
      pvVar7 = pvVar9;
    }
    uVar1 = (longlong)pvVar7 + 1;
    if (0xfff < uVar1) {
      uVar5 = (longlong)pvVar7 + 0x28;
      if (uVar5 <= uVar1) {
        FUN_140001df0();
        pcVar3 = (code *)swi(3);
        ppvVar4 = (void **)(*pcVar3)();
        return ppvVar4;
      }
      goto LAB_140002863;
    }
    if (uVar1 == 0) {
      pvVar9 = (void *)0x0;
    }
    else {
      pvVar9 = operator_new(uVar1);
    }
  }
  else {
    uVar5 = 0x8000000000000027;
LAB_140002863:
    pvVar6 = operator_new(uVar5);
    if (pvVar6 == (void *)0x0) goto LAB_1400028f8;
    pvVar9 = (void *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)pvVar9 - 8) = pvVar6;
  }
  param_1[2] = (void *)(param_2 + (longlong)pvVar8);
  pvVar6 = (void *)((longlong)pvVar8 + (longlong)pvVar9);
  param_1[3] = pvVar7;
  if (pvVar2 < (void *)0x10) {
                    /* [BAD 1] memcpy */
    memcpy(pvVar9,param_1,(size_t)pvVar8);
                    /* [BAD 1] memcpy */
    memcpy(pvVar6,param_4,param_5);
    *(undefined *)((longlong)pvVar6 + param_5) = 0;
  }
  else {
    pvVar7 = *param_1;
                    /* [BAD 1] memcpy */
    memcpy(pvVar9,pvVar7,(size_t)pvVar8);
                    /* [BAD 1] memcpy */
    memcpy(pvVar6,param_4,param_5);
    *(undefined *)((longlong)pvVar6 + param_5) = 0;
    pvVar8 = pvVar7;
    if ((0xfff < (longlong)pvVar2 + 1U) &&
       (pvVar8 = *(void **)((longlong)pvVar7 + -8),
       0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)pvVar8)))) {
LAB_1400028f8:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
                    /* [BAD 2] free */
    free(pvVar8);
  }
  *param_1 = pvVar9;
  return param_1;
}

