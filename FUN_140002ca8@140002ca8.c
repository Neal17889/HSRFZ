
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140002ca8(void)

{
  code *pcVar1;
  BOOL BVar2;
  undefined *puVar3;
  undefined auStack_38 [8];
  undefined auStack_30 [48];
  
  puVar3 = auStack_38;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(undefined8 *)(puVar3 + -8) = 0x140002cd3;
  capture_previous_context((PCONTEXT)&DAT_1400061c0);
  _DAT_140006130 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_140006258 = puVar3 + 0x40;
  _DAT_140006240 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_140006120 = 0xc0000409;
  _DAT_140006124 = 1;
  _DAT_140006138 = 1;
  DAT_140006140 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_140006000;
  *(undefined8 *)(puVar3 + 0x28) = DAT_140006040;
  *(undefined8 *)(puVar3 + -8) = 0x140002d75;
  DAT_1400062b8 = _DAT_140006130;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_1400043a0);
  return;
}

