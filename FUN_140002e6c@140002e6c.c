
ulonglong FUN_140002e6c(int param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    DAT_1400066a0 = 1;
  }
  FUN_140003418();
  uVar1 = FUN_140003140();
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_140003140();
    if ((char)uVar2 != '\0') {
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
    uVar1 = FUN_140003140();
  }
  return uVar1 & 0xffffffffffffff00;
}

