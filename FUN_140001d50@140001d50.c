
undefined8 * FUN_140001d50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
                    /* [BAD 2] free */
    free(param_1);
  }
  return param_1;
}

