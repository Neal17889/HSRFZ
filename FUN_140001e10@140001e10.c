
undefined8 * FUN_140001e10(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined (*) [16])(param_1 + 1) = ZEXT816(0);
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}

