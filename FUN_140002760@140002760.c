
void FUN_140002760(void **param_1)

{
  void *pvVar1;
  void *_Memory;
  
  if ((void *)0xf < param_1[3]) {
    pvVar1 = *param_1;
    _Memory = pvVar1;
    if ((0xfff < (longlong)param_1[3] + 1U) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
                    /* [BAD 2] free */
    free(_Memory);
  }
  param_1[2] = (void *)0x0;
  param_1[3] = (void *)0xf;
  *(undefined *)param_1 = 0;
  return;
}

