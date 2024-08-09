
void FUN_1400017a0(undefined **param_1)

{
  uint uVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  longlong lVar6;
  undefined auVar7 [16];
  bool bVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint *local_e0;
  ulonglong *local_d8;
  int local_d0;
  uint *local_c8;
  ulonglong *local_c0;
  code **local_b8;
  uint *local_b0;
  uint uStack_9c;
  
  if (param_1 == (undefined **)0x0) {
    uRam0000000000000020 = 0x404040;
  }
  else {
    puVar2 = param_1[3];
    lVar10 = (longlong)*(int *)(puVar2 + 0x3c);
    pcVar3 = (code *)*param_1;
    pcVar4 = (code *)param_1[1];
    pcVar5 = (code *)param_1[2];
    uVar1 = *(uint *)(puVar2 + lVar10 + 0x28);
    lVar6 = *(longlong *)(puVar2 + lVar10 + 0x30);
    if (((longlong)puVar2 - lVar6 != 0) && (*(int *)(puVar2 + lVar10 + 0xb4) != 0)) {
      local_e0 = (uint *)(puVar2 + *(uint *)(puVar2 + lVar10 + 0xb0));
      puVar13 = (uint *)((longlong)local_e0 + (ulonglong)*(uint *)(puVar2 + lVar10 + 0xb4));
      for (; (local_e0 < puVar13 && (local_e0[1] != 0));
          local_e0 = (uint *)((longlong)local_e0 + (ulonglong)local_e0[1])) {
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (ulonglong)local_e0[1] - 8;
        local_b0 = local_e0 + 2;
        for (local_d0 = 0; local_d0 != SUB164(auVar7 / ZEXT816(2),0); local_d0 = local_d0 + 1) {
          if ((int)(uint)*(ushort *)local_b0 >> 0xc == 10) {
            *(longlong *)
             (puVar2 + (longlong)(int)(*(ushort *)local_b0 & 0xfff) + (ulonglong)*local_e0) =
                 *(longlong *)
                  (puVar2 + (longlong)(int)(*(ushort *)local_b0 & 0xfff) + (ulonglong)*local_e0) +
                 ((longlong)puVar2 - lVar6);
          }
          local_b0 = (uint *)((longlong)local_b0 + 2);
        }
      }
    }
    if (*(int *)(puVar2 + lVar10 + 0x94) != 0) {
      for (local_c8 = (uint *)(puVar2 + *(uint *)(puVar2 + lVar10 + 0x90)); local_c8[3] != 0;
          local_c8 = local_c8 + 5) {
        uVar11 = (*pcVar3)(puVar2 + local_c8[3]);
        local_c0 = (ulonglong *)(puVar2 + local_c8[4]);
        local_d8 = (ulonglong *)(puVar2 + *local_c8);
        if ((ulonglong *)(puVar2 + *local_c8) == (ulonglong *)0x0) {
          local_d8 = local_c0;
        }
        for (; *local_d8 != 0; local_d8 = local_d8 + 1) {
          if ((*local_d8 & 0x8000000000000000) == 0) {
            uVar12 = (*pcVar4)(uVar11);
            *local_c0 = uVar12;
          }
          else {
            uVar12 = (*pcVar4)(uVar11);
            *local_c0 = uVar12;
          }
          local_c0 = local_c0 + 1;
        }
      }
    }
    if (*(int *)(puVar2 + lVar10 + 0xd4) != 0) {
      for (local_b8 = *(code ***)(puVar2 + (ulonglong)*(uint *)(puVar2 + lVar10 + 0xd0) + 0x18);
          (local_b8 != (code **)0x0 && (*local_b8 != (code *)0x0)); local_b8 = local_b8 + 1) {
        (**local_b8)(puVar2,1,0);
      }
    }
    bVar8 = false;
    if (*(int *)(param_1 + 7) != 0) {
      uStack_9c = (uint)(*(ulonglong *)(puVar2 + lVar10 + 0xa0) >> 0x20);
      if ((uStack_9c != 0) &&
         (iVar9 = (*pcVar5)(puVar2 + (*(ulonglong *)(puVar2 + lVar10 + 0xa0) & 0xffffffff),
                            SUB164(ZEXT416(uStack_9c) / ZEXT816(0xc),0),puVar2), iVar9 == 0)) {
        bVar8 = true;
      }
    }
    (*(code *)(puVar2 + uVar1))(puVar2,*(undefined4 *)(param_1 + 5),param_1[6]);
    if (bVar8) {
      param_1[4] = (undefined *)0x505050;
    }
    else {
      param_1[4] = puVar2;
    }
  }
  return;
}

