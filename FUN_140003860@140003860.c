
void FUN_140003860(undefined8 param_1,longlong param_2)

{
  if ((longlong)*(HANDLE *)(param_2 + 0x50) - 1U < 0xfffffffffffffffe) {
    CloseHandle(*(HANDLE *)(param_2 + 0x50));
  }
  if (*(void **)(param_2 + 0x48) != (void *)0x0) {
                    /* [BAD 2] free */
    free(*(void **)(param_2 + 0x48));
    *(undefined8 *)(param_2 + 0x48) = 0x8123;
  }
  return;
}

