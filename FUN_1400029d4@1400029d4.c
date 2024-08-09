
undefined8 * FUN_1400029d4(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
                    /* [BAD 2] free */
    free(param_1);
  }
  return param_1;
}

