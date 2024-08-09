
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1400033a0(void)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_140005028; ppcVar1 < &DAT_140005028; ppcVar1 = ppcVar1 + 1) {
    if (*ppcVar1 != (code *)0x0) {
      (**ppcVar1)();
    }
  }
  return;
}

