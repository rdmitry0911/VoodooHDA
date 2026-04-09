/* Decompiled: AppleGFXHDAHALPlugIn */
/* Functions : 152 */

/* FUN_000007c8 @ 0x7c8 */

void FUN_000007c8(void)

{
  longlong unaff_RDI;
  
  if (*(longlong *)(unaff_RDI + 0x20) != 0) {
    FUN_000029c0();
    FUN_00002992();
    *(undefined8 *)(unaff_RDI + 0x20) = 0;
  }
  return;
}



/* FUN_000007f8 @ 0x7f8 */

void FUN_000007f8(void)

{
  longlong *plVar1;
  longlong unaff_RDI;
  
  plVar1 = operator_new();
  FUN_00001e7e();
  *(longlong **)(unaff_RDI + 0x20) = plVar1;
                    /* WARNING: Could not recover jumptable at 0x0000083e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))();
  return;
}



/* FUN_00000858 @ 0x858 */

int * FUN_00000858(pthread_mutex_t *param_1)

{
  pthread_mutex_t *ppVar1;
  int unaff_EDI;
  int *piVar2;
  
  if (DAT_00005148 == (undefined8 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    _pthread_mutex_lock(param_1);
    ppVar1 = (pthread_mutex_t *)*DAT_00005148;
    do {
      if (ppVar1 == (pthread_mutex_t *)DAT_00005148[1]) {
        piVar2 = (int *)0x0;
        break;
      }
      piVar2 = *(int **)ppVar1;
      ppVar1 = (pthread_mutex_t *)(ppVar1->__opaque + 4);
    } while (*piVar2 != unaff_EDI);
    _pthread_mutex_unlock((pthread_mutex_t *)DAT_00005148[1]);
  }
  return piVar2;
}



/* FUN_000008b4 @ 0x8b4 */

undefined4 * FUN_000008b4(pthread_mutex_t *param_1,undefined8 param_2,size_t param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong *plVar11;
  char cVar12;
  int iVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  pthread_mutex_t *ppVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined4 *unaff_RDI;
  longlong lVar20;
  undefined8 *puVar21;
  void *pvVar22;
  undefined4 extraout_XMM0_Da;
  
  puVar14 = (undefined4 *)FUN_00000858();
  if (puVar14 != (undefined4 *)0x0) {
    _syslog_DARWIN_EXTSN(extraout_XMM0_Da,*unaff_RDI);
    return puVar14;
  }
  if (DAT_00005148 == (longlong *)0x0) {
    DAT_00005148 = operator_new();
    *DAT_00005148 = 0;
    DAT_00005148[1] = 0;
    DAT_00005148[2] = 0;
    iVar13 = FUN_000023f4();
    if (iVar13 != 0) goto LAB_000009c5;
  }
  puVar14 = operator_new();
  uVar4 = unaff_RDI[1];
  uVar5 = unaff_RDI[2];
  uVar6 = unaff_RDI[3];
  uVar7 = unaff_RDI[4];
  uVar8 = unaff_RDI[5];
  uVar9 = unaff_RDI[6];
  uVar10 = unaff_RDI[7];
  *puVar14 = *unaff_RDI;
  puVar14[1] = uVar4;
  puVar14[2] = uVar5;
  puVar14[3] = uVar6;
  puVar14[4] = uVar7;
  puVar14[5] = uVar8;
  puVar14[6] = uVar9;
  puVar14[7] = uVar10;
  *(undefined8 *)(puVar14 + 8) = 0;
  cVar12 = FUN_000007f8();
  if (cVar12 != '\0') {
    if (DAT_00005148 == (longlong *)0x0) {
      return puVar14;
    }
    _pthread_mutex_lock(param_1);
    plVar11 = DAT_00005148;
    puVar21 = (undefined8 *)DAT_00005148[1];
    if (puVar21 < (undefined8 *)DAT_00005148[2]) {
      *puVar21 = puVar14;
      puVar21 = puVar21 + 1;
    }
    else {
      ppVar17 = (pthread_mutex_t *)*DAT_00005148;
      lVar20 = (longlong)puVar21 - (longlong)ppVar17 >> 3;
      uVar18 = lVar20 + 1;
      if (uVar18 >> 0x3d != 0) {
        iVar13 = FUN_00000f00();
        operator_delete();
        __Unwind_Resume((_Unwind_Exception *)ppVar17);
        if (DAT_00005148 == (longlong *)0x0) {
          puVar14 = (undefined4 *)0x21646576;
        }
        else {
          _pthread_mutex_lock(ppVar17);
          plVar11 = DAT_00005148;
          puVar14 = (undefined4 *)0x21646576;
          puVar21 = (undefined8 *)*DAT_00005148;
          puVar1 = puVar21;
          for (; puVar21 != (undefined8 *)DAT_00005148[1]; puVar21 = puVar21 + 1) {
            if (*(int *)*puVar21 == iVar13) {
              pvVar22 = (void *)(DAT_00005148[1] - (longlong)(puVar1 + 1));
              if (pvVar22 != (void *)0x0) {
                _memmove(ppVar17,pvVar22,param_3);
              }
              plVar11[1] = (longlong)puVar1 + (longlong)pvVar22;
              FUN_000007c8();
              operator_delete();
              puVar14 = (undefined4 *)0x0;
              break;
            }
            puVar1 = puVar1 + 1;
          }
          _pthread_mutex_unlock(ppVar17);
          ppVar17 = (pthread_mutex_t *)DAT_00005148[1];
          if (ppVar17 == (pthread_mutex_t *)*DAT_00005148) {
            _pthread_mutex_lock(ppVar17);
            if (DAT_00005148 != (longlong *)0x0) {
              if (*DAT_00005148 != 0) {
                DAT_00005148[1] = *DAT_00005148;
                operator_delete(ppVar17);
              }
              operator_delete();
            }
            DAT_00005148 = (longlong *)0x0;
            _pthread_mutex_unlock(ppVar17);
            FUN_0000257e();
          }
        }
        return puVar14;
      }
      uVar15 = DAT_00005148[2] - (longlong)ppVar17;
      uVar19 = (longlong)uVar15 >> 2;
      if (uVar19 <= uVar18) {
        uVar19 = uVar18;
      }
      param_1 = (pthread_mutex_t *)0x7ffffffffffffff8;
      if (0x7ffffffffffffff7 < uVar15) {
        uVar19 = 0x1fffffffffffffff;
      }
      if (uVar19 == 0) {
        lVar16 = 0;
        uVar18 = 0;
      }
      else {
        lVar16 = FUN_00000f7f();
      }
      puVar1 = (undefined8 *)(lVar16 + lVar20 * 8);
      *puVar1 = puVar14;
      puVar21 = (undefined8 *)(lVar16 + lVar20 * 8 + 8);
      lVar20 = *plVar11;
      lVar2 = plVar11[1];
      _memcpy(param_1,(void *)(lVar2 - lVar20),param_3);
      lVar3 = *plVar11;
      *plVar11 = (longlong)puVar1 - (lVar2 - lVar20);
      plVar11[1] = (longlong)puVar21;
      plVar11[2] = lVar16 + uVar18 * 8;
      if (lVar3 != 0) {
        operator_delete(param_1);
      }
    }
    plVar11[1] = (longlong)puVar21;
    _pthread_mutex_unlock(param_1);
    return puVar14;
  }
  FUN_000007c8();
  operator_delete();
LAB_000009c5:
  if (DAT_00005148 != (longlong *)0x0) {
    _pthread_mutex_lock(param_1);
    if (DAT_00005148[1] == *DAT_00005148) {
      if (DAT_00005148[1] != 0) {
        DAT_00005148[1] = *DAT_00005148;
        operator_delete(param_1);
      }
      operator_delete();
      DAT_00005148 = (longlong *)0x0;
    }
    _pthread_mutex_unlock(param_1);
    FUN_0000257e();
  }
  return (undefined4 *)0x0;
}



/* FUN_00000b0a @ 0xb0a */

undefined8 FUN_00000b0a(pthread_mutex_t *param_1,undefined8 param_2,size_t param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  pthread_mutex_t *ppVar4;
  undefined8 uVar5;
  int unaff_EDI;
  void *pvVar6;
  
  if (DAT_00005148 == (longlong *)0x0) {
    uVar5 = 0x21646576;
  }
  else {
    _pthread_mutex_lock(param_1);
    plVar2 = DAT_00005148;
    uVar5 = 0x21646576;
    puVar3 = (undefined8 *)*DAT_00005148;
    puVar1 = puVar3;
    for (; puVar3 != (undefined8 *)DAT_00005148[1]; puVar3 = puVar3 + 1) {
      if (*(int *)*puVar3 == unaff_EDI) {
        pvVar6 = (void *)(DAT_00005148[1] - (longlong)(puVar1 + 1));
        if (pvVar6 != (void *)0x0) {
          _memmove(param_1,pvVar6,param_3);
        }
        plVar2[1] = (longlong)puVar1 + (longlong)pvVar6;
        FUN_000007c8();
        operator_delete();
        uVar5 = 0;
        break;
      }
      puVar1 = puVar1 + 1;
    }
    _pthread_mutex_unlock(param_1);
    ppVar4 = (pthread_mutex_t *)DAT_00005148[1];
    if (ppVar4 == (pthread_mutex_t *)*DAT_00005148) {
      _pthread_mutex_lock(ppVar4);
      if (DAT_00005148 != (longlong *)0x0) {
        if (*DAT_00005148 != 0) {
          DAT_00005148[1] = *DAT_00005148;
          operator_delete(ppVar4);
        }
        operator_delete();
      }
      DAT_00005148 = (longlong *)0x0;
      _pthread_mutex_unlock(ppVar4);
      FUN_0000257e();
    }
  }
  return uVar5;
}



/* _AudioDriverPlugInOpen @ 0xc49 */

undefined8 _AudioDriverPlugInOpen(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_000008b4();
  uVar2 = 0x77686174;
  if (lVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}



/* _AudioDriverPlugInClose @ 0xc61 */

void _AudioDriverPlugInClose(void)

{
  FUN_00000b0a();
  return;
}



/* _AudioDriverPlugInDeviceGetPropertyInfo @ 0xc6b */

undefined8
_AudioDriverPlugInDeviceGetPropertyInfo
          (undefined4 param_1,undefined1 param_2,undefined4 *param_3,undefined1 *param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar4 = FUN_00000858();
  if (lVar4 == 0) {
    uVar5 = 0x21646576;
  }
  else {
    uVar5 = 0x77686f3f;
    if (*(longlong *)(lVar4 + 0x20) != 0) {
      cVar1 = FUN_000025c8(param_1);
      if (cVar1 != '\0') {
        if (param_3 != (undefined4 *)0x0) {
          if (*(longlong *)(lVar4 + 0x20) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_00002648(param_1,param_2);
          }
          *param_3 = uVar3;
        }
        if (param_4 == (undefined1 *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          if (*(longlong *)(lVar4 + 0x20) == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = FUN_000026e6(param_1,param_2);
          }
          *param_4 = uVar2;
        }
      }
    }
  }
  return uVar5;
}



/* _AudioDriverPlugInDeviceGetProperty @ 0xd2b */

undefined8
_AudioDriverPlugInDeviceGetProperty
          (undefined4 param_1,undefined1 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    uVar3 = 0x6e6f7065;
  }
  else {
    lVar2 = FUN_00000858();
    if (lVar2 == 0) {
      uVar3 = 0x21646576;
    }
    else {
      uVar3 = 0x77686f3f;
      if (*(longlong *)(lVar2 + 0x20) != 0) {
        cVar1 = FUN_000025c8(param_1,param_2);
        if (cVar1 != '\0') {
          if (*(longlong *)(lVar2 + 0x20) != 0) {
            uVar3 = FUN_0000277e(param_1,param_2,param_3,param_4);
            return uVar3;
          }
          uVar3 = 0x77686174;
        }
      }
    }
  }
  return uVar3;
}



/* _AudioDriverPlugInDeviceSetProperty @ 0xdda */

undefined8
_AudioDriverPlugInDeviceSetProperty
          (undefined1 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  lVar2 = FUN_00000858();
  if (lVar2 == 0) {
    uVar3 = 0x21646576;
  }
  else {
    uVar3 = 0x77686f3f;
    if (*(longlong *)(lVar2 + 0x20) != 0) {
      cVar1 = FUN_000025c8(param_3,param_1);
      if ((cVar1 != '\0') && (uVar3 = 0x6e6f7065, *(longlong *)(lVar2 + 0x20) != 0)) {
        cVar1 = FUN_000026e6(param_3,param_1);
        if (cVar1 != '\0') {
          if (*(longlong *)(lVar2 + 0x20) != 0) {
            uVar3 = FUN_00002860(param_3,param_1,param_4,local_res8);
            return uVar3;
          }
          uVar3 = 0x77686174;
        }
      }
    }
  }
  return uVar3;
}



/* _AudioDriverPlugInStreamGetPropertyInfo @ 0xea3 */

undefined8 _AudioDriverPlugInStreamGetPropertyInfo(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00000858();
  uVar2 = 0x77686f3f;
  if (lVar1 == 0) {
    uVar2 = 0x21646576;
  }
  return uVar2;
}



/* _AudioDriverPlugInStreamGetProperty @ 0xebe */

undefined8
_AudioDriverPlugInStreamGetProperty(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    lVar1 = FUN_00000858();
    uVar2 = 0x77686f3f;
    if (lVar1 == 0) {
      uVar2 = 0x21646576;
    }
    return uVar2;
  }
  return 0x6e6f7065;
}



/* _AudioDriverPlugInStreamSetProperty @ 0xee4 */

undefined8 _AudioDriverPlugInStreamSetProperty(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00000858();
  uVar2 = 0x77686f3f;
  if (lVar1 == 0) {
    uVar2 = 0x21646576;
  }
  return uVar2;
}



/* FUN_00000f00 @ 0xf00 */

void FUN_00000f00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00000f10();
}



/* FUN_00000f10 @ 0xf10 */

void FUN_00000f10(undefined8 param_1)

{
  ___cxa_allocate_exception();
  FUN_00000f5c();
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(param_1,PTR__length_error_000040c8);
}



/* FUN_00000f5c @ 0xf5c */

void FUN_00000f5c(logic_error *param_1,char *param_2)

{
  undefined8 *unaff_RDI;
  
  std::logic_error::logic_error(param_1,param_2);
  *unaff_RDI = PTR_vtable_000040e0 + 0x10;
  return;
}



/* FUN_00000f7f @ 0xf7f */

void FUN_00000f7f(pthread_mutex_t *param_1,undefined4 param_2,undefined4 param_3)

{
  pthread_mutex_t *ppVar1;
  ulonglong unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar2;
  undefined1 auStack_18 [8];
  
  if (unaff_RSI >> 0x3d == 0) {
    operator_new();
    return;
  }
  FUN_00002a0c();
  *unaff_RDI = &PTR_FUN_00004280;
  *(undefined8 *)((longlong)unaff_RDI + 0x2c) = 0;
  *(int *)((longlong)unaff_RDI + 0x34) = (int)unaff_RSI;
  *(undefined4 *)(unaff_RDI + 7) = param_2;
  *(char *)((longlong)unaff_RDI + 0x3c) = (char)param_1;
  if (DAT_00005160 == (longlong *)0x0) {
    DAT_00005160 = operator_new();
    param_1 = (pthread_mutex_t *)(DAT_00005160 + 1);
    DAT_00005160[1] = 0;
    DAT_00005160[2] = 0;
    *DAT_00005160 = (longlong)param_1;
    *(undefined4 *)(DAT_00005160 + 3) = 0x100;
  }
  _pthread_mutex_lock(param_1);
  iVar2 = (int)DAT_00005160[3];
  ppVar1 = (pthread_mutex_t *)((longlong)&MACH_HEADER.magic + 2);
  if (iVar2 != 0) {
    ppVar1 = (pthread_mutex_t *)(ulonglong)(iVar2 + 1);
  }
  iVar2 = iVar2 + (uint)(iVar2 == 0);
  *(int *)(DAT_00005160 + 3) = (int)ppVar1;
  *(int *)(((ulonglong)auStack_18 & 0xffffffff) - 0x30) = iVar2;
  *(undefined8 **)(((ulonglong)auStack_18 & 0xffffffff) - 0x28) = unaff_RDI;
  FUN_000014d4();
  _pthread_mutex_unlock(ppVar1);
  *(int *)(unaff_RDI + 8) = iVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0x44) = 1;
  *(undefined4 *)(unaff_RDI + 9) = param_3;
  return;
}



/* FUN_00001090 @ 0x1090 */

void FUN_00001090(void)

{
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &PTR_FUN_00004280;
  if (*(int *)(unaff_RDI + 6) != 0) {
    _IOServiceClose();
    *(undefined4 *)(unaff_RDI + 6) = 0;
  }
  if (*(int *)((longlong)unaff_RDI + 0x2c) != 0) {
    _IOObjectRelease();
    *(undefined4 *)((longlong)unaff_RDI + 0x2c) = 0;
  }
  return;
}



/* FUN_000010d0 @ 0x10d0 */

void FUN_000010d0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* FUN_000010d6 @ 0x10d6 */

void FUN_000010d6(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* FUN_000010dc @ 0x10dc */

void FUN_000010dc(pthread_mutex_t *param_1)

{
  longlong unaff_RDI;
  
  if ((unaff_RDI != 0) && (DAT_00005160 != 0)) {
    _pthread_mutex_lock(param_1);
    FUN_00001714();
    _pthread_mutex_unlock(param_1);
  }
  *(undefined4 *)(unaff_RDI + 0x40) = 0;
  return;
}



/* FUN_00001128 @ 0x1128 */

int FUN_00001128(void)

{
  int *piVar1;
  int iVar2;
  longlong *unaff_RDI;
  
  LOCK();
  piVar1 = (int *)((longlong)unaff_RDI + 0x44);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (unaff_RDI != (longlong *)0x0 && iVar2 + -1 == 0) {
    (**(code **)(*unaff_RDI + 8))();
  }
  return iVar2 + -1;
}



/* FUN_00001156 @ 0x1156 */

bool FUN_00001156(pthread_mutex_t *param_1)

{
  int iVar1;
  undefined4 unaff_ESI;
  longlong unaff_RDI;
  bool bVar2;
  
  _pthread_mutex_lock(param_1);
  bVar2 = false;
  if ((*(int *)(unaff_RDI + 0x40) != 0) && (DAT_00005150 != 0)) {
    *(undefined4 *)(unaff_RDI + 0x2c) = unaff_ESI;
    _IOObjectRetain();
    param_1 = (pthread_mutex_t *)(unaff_RDI + 0x30);
    bVar2 = false;
    iVar1 = _IOServiceOpen(param_1,0);
    if (iVar1 == 0) {
      param_1 = (pthread_mutex_t *)(ulonglong)*(uint *)(unaff_RDI + 0x40);
      iVar1 = _IOConnectSetNotificationPort(param_1,*(undefined4 *)(DAT_00005150 + 8));
      bVar2 = iVar1 == 0;
    }
  }
  _pthread_mutex_unlock(param_1);
  return bVar2;
}



/* FUN_000011e6 @ 0x11e6 */

undefined4 FUN_000011e6(pthread_mutex_t *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  _pthread_mutex_lock(param_1);
  uVar3 = 0;
  if (DAT_00005150 == (longlong *)0x0) {
    plVar2 = operator_new();
    FUN_0000327c();
    DAT_00005150 = plVar2;
    cVar1 = (**(code **)(*plVar2 + 0x10))();
    uVar3 = 0xe00002bc;
    if (cVar1 != '\0') {
      uVar3 = 0;
    }
  }
  _pthread_mutex_unlock(param_1);
  return uVar3;
}



/* FUN_00001280 @ 0x1280 */

void FUN_00001280(pthread_mutex_t *param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  char cVar5;
  pthread_mutex_t *ppVar6;
  int *unaff_RSI;
  bool bVar7;
  
  if ((param_2 == 0x28) && (-1 < *unaff_RSI)) {
    uVar2 = unaff_RSI[7];
    cVar5 = FUN_0000212c();
    uVar4 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    if (cVar5 == '\0') {
      uVar4 = uVar2;
    }
    if (DAT_00005160 != 0) {
      _pthread_mutex_lock(param_1);
      ppVar6 = *(pthread_mutex_t **)(DAT_00005160 + 8);
      if (ppVar6 != (pthread_mutex_t *)0x0) {
        param_1 = (pthread_mutex_t *)(DAT_00005160 + 8);
        do {
          bVar7 = *(uint *)(ppVar6->__opaque + 0x1c) < uVar4;
          if (!bVar7) {
            param_1 = ppVar6;
          }
          ppVar6 = *(pthread_mutex_t **)(ppVar6->__opaque + (ulonglong)bVar7 * 8 + -4);
        } while (ppVar6 != (pthread_mutex_t *)0x0);
        if (((param_1 != (pthread_mutex_t *)(DAT_00005160 + 8)) &&
            (*(uint *)(param_1->__opaque + 0x1c) <= uVar4)) &&
           (plVar3 = *(longlong **)(param_1->__opaque + 0x24), plVar3 != (longlong *)0x0)) {
          LOCK();
          *(int *)((longlong)plVar3 + 0x44) = *(int *)((longlong)plVar3 + 0x44) + 1;
          UNLOCK();
          _pthread_mutex_unlock(param_1);
          (**(code **)(*plVar3 + 0x70))();
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0x44);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 != 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x0000132f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 8))();
          return;
        }
      }
      _pthread_mutex_unlock(param_1);
      return;
    }
  }
  return;
}



/* FUN_00001348 @ 0x1348 */

void FUN_00001348(pthread_mutex_t *param_1)

{
  _pthread_mutex_lock(param_1);
  if (DAT_00005150 != 0) {
    FUN_000036ee();
    FUN_000033b4();
    DAT_00005150 = 0;
  }
  _pthread_mutex_unlock(param_1);
  return;
}



/* FUN_0000138e @ 0x138e */

void FUN_0000138e(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  
  uVar1 = *unaff_RSI;
  uVar2 = unaff_RSI[1];
  uVar3 = unaff_RSI[3];
  *(undefined8 *)(unaff_RDI + 0x18) = unaff_RSI[2];
  *(undefined8 *)(unaff_RDI + 0x20) = uVar3;
  *(undefined8 *)(unaff_RDI + 8) = uVar1;
  *(undefined8 *)(unaff_RDI + 0x10) = uVar2;
  *(undefined1 *)(unaff_RDI + 0x28) = 1;
  return;
}



/* FUN_000013a8 @ 0x13a8 */

undefined4 FUN_000013a8(void)

{
  undefined4 uVar1;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  if ((((unaff_RSI == 0) || (*(int *)(unaff_RSI + 0x34) != *(int *)(unaff_RDI + 0x34))) ||
      (*(int *)(unaff_RSI + 0x38) != *(int *)(unaff_RDI + 0x38))) ||
     (*(char *)(unaff_RDI + 0x3c) != *(char *)(unaff_RSI + 0x3c))) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT31((int3)((uint)*(int *)(unaff_RSI + 0x48) >> 8),
                     *(int *)(unaff_RSI + 0x48) == *(int *)(unaff_RDI + 0x48));
  }
  return uVar1;
}



/* FUN_000013d8 @ 0x13d8 */

ulonglong FUN_000013d8(void)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  longlong unaff_RDI;
  
  if (*(int *)(unaff_RDI + 0x2c) == 0) {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  else {
    uVar3 = 0;
    lVar2 = _IORegistryEntryCreateCFProperty(0,*(undefined8 *)PTR__kCFAllocatorDefault_00004050);
    if (lVar2 != 0) {
      cVar1 = _CFBooleanGetValue();
      uVar3 = (ulonglong)(cVar1 != '\0');
      _CFRelease();
    }
  }
  return uVar3 & 0xffffffff;
}



/* FUN_00001428 @ 0x1428 */

undefined8 FUN_00001428(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_00004120;
  cVar2 = (**(code **)(*unaff_RDI + 0x28))(unaff_ESI,*(undefined1 *)((longlong)unaff_RDI + 0x3c));
  if (cVar2 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    iVar3 = _snprintf((char *)(ulonglong)*(uint *)((longlong)unaff_RDI + 0x34),0x396e,
                      (char *)(ulonglong)*(uint *)(unaff_RDI + 7),
                      (ulonglong)*(byte *)((longlong)unaff_RDI + 0x3c));
    if (iVar3 == 0x2c) {
      uVar4 = _CFStringCreateWithCString();
    }
  }
  if (*(longlong *)PTR____stack_chk_guard_00004120 == lVar1) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* FUN_000014d4 @ 0x14d4 */

longlong * FUN_000014d4(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  uint *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar5;
  
  if (*(longlong **)(unaff_RDI + 8) == (longlong *)0x0) {
    plVar5 = (longlong *)(unaff_RDI + 8);
  }
  else {
    plVar4 = *(longlong **)(unaff_RDI + 8);
    do {
      while (plVar5 = plVar4, *unaff_RSI < *(uint *)(plVar5 + 4)) {
        plVar4 = (longlong *)*plVar5;
        if ((longlong *)*plVar5 == (longlong *)0x0) goto LAB_00001522;
      }
      if (*unaff_RSI <= *(uint *)(plVar5 + 4)) {
        return plVar5;
      }
      plVar4 = (longlong *)plVar5[1];
    } while ((longlong *)plVar5[1] != (longlong *)0x0);
    plVar5 = plVar5 + 1;
  }
LAB_00001522:
  plVar4 = operator_new();
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(plVar4 + 4) = *param_2;
  *(undefined4 *)((longlong)plVar4 + 0x24) = uVar1;
  *(undefined4 *)(plVar4 + 5) = uVar2;
  *(undefined4 *)((longlong)plVar4 + 0x2c) = uVar3;
  FUN_0000156e(plVar4,plVar5);
  return plVar4;
}



/* FUN_0000156e @ 0x156e */

void FUN_0000156e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 unaff_RSI;
  longlong *unaff_RDI;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = unaff_RSI;
  *param_2 = param_1;
  if (*(longlong *)*unaff_RDI != 0) {
    *unaff_RDI = *(longlong *)*unaff_RDI;
    param_1 = (undefined8 *)*param_2;
  }
  FUN_000015ac(param_1);
  unaff_RDI[2] = unaff_RDI[2] + 1;
  return;
}



/* FUN_000015ac @ 0x15ac */

void FUN_000015ac(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar8;
  
  bVar8 = unaff_RSI == unaff_RDI;
  *(bool *)(unaff_RSI + 3) = bVar8;
  while( true ) {
    if (bVar8) {
      return;
    }
    plVar6 = (longlong *)unaff_RSI[2];
    if ((char)plVar6[3] != '\0') break;
    plVar4 = (longlong *)plVar6[2];
    lVar7 = *plVar4;
    if ((longlong *)lVar7 == plVar6) {
      lVar1 = plVar4[1];
      if ((lVar1 == 0) || (*(char *)(lVar1 + 0x18) == '\x01')) {
        if ((longlong *)*plVar6 != unaff_RSI) {
          plVar2 = (longlong *)plVar6[1];
          lVar7 = *plVar2;
          plVar6[1] = lVar7;
          plVar5 = plVar6;
          if (lVar7 != 0) {
            *(longlong **)(lVar7 + 0x10) = plVar6;
            plVar4 = (longlong *)plVar6[2];
            plVar5 = (longlong *)*plVar4;
          }
          plVar2[2] = (longlong)plVar4;
          plVar4[plVar5 != plVar6] = (longlong)plVar2;
          *plVar2 = (longlong)plVar6;
          plVar6[2] = (longlong)plVar2;
          plVar4 = (longlong *)plVar2[2];
          lVar7 = *plVar4;
          plVar6 = plVar2;
        }
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(plVar4 + 3) = 0;
        lVar1 = *(longlong *)(lVar7 + 8);
        *plVar4 = lVar1;
        if (lVar1 != 0) {
          *(longlong **)(lVar1 + 0x10) = plVar4;
        }
        puVar3 = (undefined8 *)plVar4[2];
        *(undefined8 **)(lVar7 + 0x10) = puVar3;
        puVar3[(longlong *)*puVar3 != plVar4] = lVar7;
        *(longlong **)(lVar7 + 8) = plVar4;
        plVar4[2] = lVar7;
        return;
      }
    }
    else if ((lVar7 == 0) || (lVar1 = lVar7, *(char *)(lVar7 + 0x18) == '\x01')) {
      plVar2 = (longlong *)*plVar6;
      if (plVar2 == unaff_RSI) {
        lVar7 = plVar2[1];
        *plVar6 = lVar7;
        if (lVar7 != 0) {
          *(longlong **)(lVar7 + 0x10) = plVar6;
          plVar4 = (longlong *)plVar6[2];
        }
        plVar2[2] = (longlong)plVar4;
        plVar4[(longlong *)*plVar4 != plVar6] = (longlong)plVar2;
        plVar2[1] = (longlong)plVar6;
        plVar6[2] = (longlong)plVar2;
        plVar4 = (longlong *)plVar2[2];
        plVar6 = plVar2;
      }
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(plVar4 + 3) = 0;
      plVar6 = (longlong *)plVar4[1];
      lVar7 = *plVar6;
      plVar4[1] = lVar7;
      if (lVar7 != 0) {
        *(longlong **)(lVar7 + 0x10) = plVar4;
      }
      puVar3 = (undefined8 *)plVar4[2];
      plVar6[2] = (longlong)puVar3;
      puVar3[(longlong *)*puVar3 != plVar4] = plVar6;
      *plVar6 = (longlong)plVar4;
      plVar4[2] = (longlong)plVar6;
      return;
    }
    *(undefined1 *)(plVar6 + 3) = 1;
    bVar8 = plVar4 == unaff_RDI;
    *(bool *)(plVar4 + 3) = bVar8;
    *(undefined1 *)(lVar1 + 0x18) = 1;
    unaff_RSI = plVar4;
  }
  return;
}



/* FUN_00001714 @ 0x1714 */

void FUN_00001714(void)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  uint unaff_ESI;
  longlong unaff_RDI;
  bool bVar4;
  
  pvVar1 = *(void **)(unaff_RDI + 8);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)(unaff_RDI + 8);
    pvVar3 = pvVar2;
    do {
      bVar4 = *(uint *)((longlong)pvVar1 + 0x20) < unaff_ESI;
      if (!bVar4) {
        pvVar3 = pvVar1;
      }
      pvVar1 = *(void **)((longlong)pvVar1 + (ulonglong)bVar4 * 8);
    } while (pvVar1 != (void *)0x0);
    if ((pvVar3 != pvVar2) && (*(uint *)((longlong)pvVar3 + 0x20) <= unaff_ESI)) {
      FUN_00001766();
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}



/* FUN_00001766 @ 0x1766 */

longlong * FUN_00001766(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar4;
  
  plVar2 = unaff_RSI;
  plVar1 = (longlong *)unaff_RSI[1];
  if ((longlong *)unaff_RSI[1] == (longlong *)0x0) {
    do {
      plVar3 = (longlong *)plVar2[2];
      bVar4 = (longlong *)*plVar3 != plVar2;
      plVar2 = plVar3;
    } while (bVar4);
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (longlong *)*plVar3;
    } while ((longlong *)*plVar3 != (longlong *)0x0);
  }
  if ((longlong *)*unaff_RDI == unaff_RSI) {
    *unaff_RDI = (longlong)plVar3;
  }
  unaff_RDI[2] = unaff_RDI[2] + -1;
  FUN_000017b0();
  return plVar3;
}



/* FUN_000017b0 @ 0x17b0 */

void FUN_000017b0(void)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  byte bVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 *puVar9;
  
  plVar5 = (longlong *)*unaff_RSI;
  plVar8 = unaff_RSI;
  if (plVar5 == (longlong *)0x0) {
LAB_000017d6:
    plVar5 = (longlong *)plVar8[1];
    if (plVar5 == (longlong *)0x0) {
      puVar9 = (undefined8 *)plVar8[2];
      bVar2 = true;
      plVar5 = (longlong *)0x0;
      goto LAB_000017f5;
    }
  }
  else {
    plVar4 = (longlong *)unaff_RSI[1];
    if ((longlong *)unaff_RSI[1] != (longlong *)0x0) {
      do {
        plVar8 = plVar4;
        plVar4 = (longlong *)*plVar8;
      } while ((longlong *)*plVar8 != (longlong *)0x0);
      goto LAB_000017d6;
    }
  }
  puVar9 = (undefined8 *)plVar8[2];
  plVar5[2] = (longlong)puVar9;
  bVar2 = false;
LAB_000017f5:
  plVar4 = (longlong *)*puVar9;
  if (plVar4 == plVar8) {
    *puVar9 = plVar5;
    if (plVar8 == unaff_RDI) {
      plVar4 = (longlong *)0x0;
      unaff_RDI = plVar5;
    }
    else {
      plVar4 = (longlong *)puVar9[1];
    }
  }
  else {
    puVar9[1] = plVar5;
  }
  lVar3 = plVar8[3];
  if (plVar8 != unaff_RSI) {
    puVar9 = (undefined8 *)unaff_RSI[2];
    plVar8[2] = (longlong)puVar9;
    puVar9[(longlong *)*puVar9 != unaff_RSI] = plVar8;
    lVar1 = *unaff_RSI;
    *plVar8 = lVar1;
    *(longlong **)(lVar1 + 0x10) = plVar8;
    lVar1 = unaff_RSI[1];
    plVar8[1] = lVar1;
    if (lVar1 != 0) {
      *(longlong **)(lVar1 + 0x10) = plVar8;
    }
    *(char *)(plVar8 + 3) = (char)unaff_RSI[3];
    if (unaff_RDI == unaff_RSI) {
      unaff_RDI = plVar8;
    }
  }
  if ((unaff_RDI != (longlong *)0x0) && ((char)lVar3 != '\0')) {
    if (bVar2) {
      while( true ) {
        plVar5 = (longlong *)plVar4[2];
        plVar8 = (longlong *)*plVar5;
        if (plVar8 == plVar4) break;
        if ((char)plVar4[3] == '\0') {
          *(undefined1 *)(plVar4 + 3) = 1;
          *(undefined1 *)(plVar5 + 3) = 0;
          plVar8 = (longlong *)plVar5[1];
          lVar3 = *plVar8;
          plVar5[1] = lVar3;
          if (lVar3 != 0) {
            *(longlong **)(lVar3 + 0x10) = plVar5;
          }
          puVar9 = (undefined8 *)plVar5[2];
          plVar8[2] = (longlong)puVar9;
          puVar9[(longlong *)*puVar9 != plVar5] = plVar8;
          *plVar8 = (longlong)plVar5;
          plVar5[2] = (longlong)plVar8;
          if (unaff_RDI == (longlong *)*plVar4) {
            unaff_RDI = plVar4;
          }
          plVar4 = (longlong *)((longlong *)*plVar4)[1];
        }
        plVar5 = (longlong *)*plVar4;
        if ((plVar5 != (longlong *)0x0) && ((char)plVar5[3] != '\x01')) {
          plVar8 = (longlong *)plVar4[1];
          if (plVar8 != (longlong *)0x0) goto LAB_000019d2;
LAB_000019d8:
          *(undefined1 *)(plVar5 + 3) = 1;
          *(undefined1 *)(plVar4 + 3) = 0;
          lVar3 = plVar5[1];
          *plVar4 = lVar3;
          if (lVar3 != 0) {
            *(longlong **)(lVar3 + 0x10) = plVar4;
          }
          puVar9 = (undefined8 *)plVar4[2];
          plVar5[2] = (longlong)puVar9;
          puVar9[(longlong *)*puVar9 != plVar4] = plVar5;
          plVar5[1] = (longlong)plVar4;
          plVar4[2] = (longlong)plVar5;
          plVar7 = plVar5;
          plVar8 = plVar4;
LAB_00001a15:
          plVar4 = (longlong *)plVar7[2];
          *(char *)(plVar7 + 3) = (char)plVar4[3];
          *(undefined1 *)(plVar4 + 3) = 1;
          *(undefined1 *)(plVar8 + 3) = 1;
          plVar5 = (longlong *)plVar4[1];
          lVar3 = *plVar5;
          plVar4[1] = lVar3;
          if (lVar3 != 0) {
            *(longlong **)(lVar3 + 0x10) = plVar4;
          }
          plVar8 = (longlong *)plVar4[2];
          plVar5[2] = (longlong)plVar8;
          plVar8[(longlong *)*plVar8 != plVar4] = (longlong)plVar5;
          *plVar5 = (longlong)plVar4;
LAB_00001ae7:
          plVar4[2] = (longlong)plVar5;
          return;
        }
        plVar8 = (longlong *)plVar4[1];
        if ((plVar8 != (longlong *)0x0) && ((char)plVar8[3] != '\x01')) {
LAB_000019d2:
          plVar7 = plVar4;
          if ((char)plVar8[3] == '\x01') goto LAB_000019d8;
          goto LAB_00001a15;
        }
        *(undefined1 *)(plVar4 + 3) = 0;
        plVar5 = (longlong *)plVar4[2];
        if ((plVar5 == unaff_RDI) || ((char)plVar5[3] == '\0')) goto LAB_000019c0;
LAB_000019a2:
        plVar4 = (longlong *)((undefined8 *)plVar5[2])[*(longlong **)plVar5[2] == plVar5];
      }
      if ((char)plVar4[3] == '\0') {
        *(undefined1 *)(plVar4 + 3) = 1;
        *(undefined1 *)(plVar5 + 3) = 0;
        lVar3 = plVar8[1];
        *plVar5 = lVar3;
        if (lVar3 != 0) {
          *(longlong **)(lVar3 + 0x10) = plVar5;
        }
        puVar9 = (undefined8 *)plVar5[2];
        plVar8[2] = (longlong)puVar9;
        puVar9[(longlong *)*puVar9 != plVar5] = plVar8;
        plVar8[1] = (longlong)plVar5;
        plVar5[2] = (longlong)plVar8;
        if (unaff_RDI == (longlong *)plVar4[1]) {
          unaff_RDI = plVar4;
        }
        plVar4 = *(longlong **)plVar4[1];
      }
      plVar5 = (longlong *)*plVar4;
      if ((plVar5 == (longlong *)0x0) || (bVar6 = *(byte *)(plVar5 + 3), bVar6 == 1)) {
        plVar8 = (longlong *)plVar4[1];
        if ((plVar8 == (longlong *)0x0) || ((char)plVar8[3] == '\x01')) {
          *(undefined1 *)(plVar4 + 3) = 0;
          plVar5 = (longlong *)plVar4[2];
          if (((char)plVar5[3] == '\x01') && (plVar5 != unaff_RDI)) goto LAB_000019a2;
LAB_000019c0:
          *(undefined1 *)(plVar5 + 3) = 1;
          return;
        }
        if (plVar5 != (longlong *)0x0) {
          bVar6 = *(byte *)(plVar5 + 3);
          goto LAB_00001a62;
        }
LAB_00001a6b:
        *(undefined1 *)(plVar8 + 3) = 1;
        *(undefined1 *)(plVar4 + 3) = 0;
        lVar3 = *plVar8;
        plVar4[1] = lVar3;
        if (lVar3 != 0) {
          *(longlong **)(lVar3 + 0x10) = plVar4;
        }
        puVar9 = (undefined8 *)plVar4[2];
        plVar8[2] = (longlong)puVar9;
        puVar9[(longlong *)*puVar9 != plVar4] = plVar8;
        *plVar8 = (longlong)plVar4;
        plVar4[2] = (longlong)plVar8;
        plVar5 = plVar4;
      }
      else {
LAB_00001a62:
        plVar8 = plVar4;
        if ((bVar6 & 1) != 0) {
          plVar8 = (longlong *)plVar4[1];
          goto LAB_00001a6b;
        }
      }
      plVar4 = (longlong *)plVar8[2];
      *(char *)(plVar8 + 3) = (char)plVar4[3];
      *(undefined1 *)(plVar4 + 3) = 1;
      *(undefined1 *)(plVar5 + 3) = 1;
      plVar5 = (longlong *)*plVar4;
      lVar3 = plVar5[1];
      *plVar4 = lVar3;
      if (lVar3 != 0) {
        *(longlong **)(lVar3 + 0x10) = plVar4;
      }
      puVar9 = (undefined8 *)plVar4[2];
      plVar5[2] = (longlong)puVar9;
      puVar9[(longlong *)*puVar9 != plVar4] = plVar5;
      plVar5[1] = (longlong)plVar4;
      goto LAB_00001ae7;
    }
    *(undefined1 *)(plVar5 + 3) = 1;
  }
  return;
}



/* FUN_00001aee @ 0x1aee */

undefined8 FUN_00001aee(void)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_00004050;
  uVar4 = 0;
  lVar3 = _IORegistryEntryCreateCFProperty(0,uVar1);
  if (lVar3 != 0) {
    _CFNumberGetValue();
    _CFRelease();
    cVar2 = FUN_00001c64();
    if (cVar2 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      lVar3 = _IORegistryEntryCreateCFProperty(0,uVar1);
      if (lVar3 != 0) {
        _CFNumberGetValue();
        _CFRelease();
        uVar4 = 0;
        lVar3 = _IORegistryEntryCreateCFProperty(0,uVar1);
        if (lVar3 != 0) {
          _CFNumberGetValue();
          _CFRelease();
          uVar4 = 0;
          lVar3 = _IORegistryEntryCreateCFProperty(0,uVar1);
          if (lVar3 != 0) {
            _CFNumberGetValue();
            _CFRelease();
            uVar4 = FUN_00001cb0(0,0,0);
          }
        }
      }
    }
  }
  return uVar4;
}



/* FUN_00001c64 @ 0x1c64 */

bool FUN_00001c64(void)

{
  int iVar1;
  int unaff_ESI;
  
  if (unaff_ESI < 0x68737263) {
    if ((unaff_ESI != 0x61696663) && (unaff_ESI != 0x646f6e7a)) {
      return false;
    }
  }
  else if ((unaff_ESI != 0x6a727472) && (unaff_ESI != 0x68737263)) {
    return false;
  }
  iVar1 = _IOObjectConformsTo();
  return iVar1 != 0;
}



/* FUN_00001cb0 @ 0x1cb0 */

longlong * FUN_00001cb0(undefined1 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong *plVar2;
  int unaff_ESI;
  longlong lVar3;
  
  if (unaff_ESI == 0x61696663) {
    plVar2 = operator_new();
    FUN_00002f5c(param_3,param_1);
    lVar3 = *plVar2;
  }
  else {
    if (unaff_ESI != 0x68737263) {
      return (longlong *)0x0;
    }
    plVar2 = operator_new();
    FUN_00002a4e(param_3,param_1);
    lVar3 = *plVar2;
  }
  cVar1 = (**(code **)(lVar3 + 0x10))();
  if (cVar1 == '\0') {
    (**(code **)(*plVar2 + 8))();
    return (longlong *)0x0;
  }
  return plVar2;
}



/* FUN_00001d9e @ 0x1d9e */

void FUN_00001d9e(pthread_mutex_t *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar5;
  
  *unaff_RDI = &PTR_FUN_00004308;
  uVar1 = unaff_RSI[1];
  uVar2 = unaff_RSI[2];
  uVar3 = unaff_RSI[3];
  unaff_RDI[1] = *unaff_RSI;
  unaff_RDI[2] = uVar1;
  unaff_RDI[3] = uVar2;
  unaff_RDI[4] = uVar3;
  *(undefined4 *)(unaff_RDI + 5) = 0;
  _pthread_mutex_lock(param_1);
  if (DAT_00005168 == (longlong *)0x0) {
    DAT_00005168 = operator_new();
    DAT_00005168[1] = 0;
    DAT_00005168[2] = 0;
    *DAT_00005168 = (longlong)(DAT_00005168 + 1);
    *(undefined4 *)(DAT_00005168 + 3) = 0x100;
    iVar5 = 0x100;
    uVar4 = 0x101;
  }
  else {
    iVar5 = (int)DAT_00005168[3];
    param_1 = (pthread_mutex_t *)(ulonglong)(iVar5 + 1U);
    uVar4 = 2;
    if (iVar5 != 0) {
      uVar4 = iVar5 + 1U;
    }
  }
  *(uint *)(DAT_00005168 + 3) = uVar4;
  FUN_000014d4();
  _pthread_mutex_unlock(param_1);
  *(uint *)((longlong)unaff_RDI + 0x2c) = iVar5 + (uint)(iVar5 == 0);
  *(undefined4 *)(unaff_RDI + 6) = 1;
  unaff_RDI[7] = 0;
  return;
}



/* FUN_00001e7e @ 0x1e7e */

void FUN_00001e7e(void)

{
  FUN_00001d9e();
  return;
}



/* FUN_00001e88 @ 0x1e88 */

void FUN_00001e88(pthread_mutex_t *param_1)

{
  longlong *plVar1;
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &PTR_FUN_00004308;
  if (*(char *)(unaff_RDI + 0x10) == '\x01') {
    _pthread_mutex_lock(param_1);
  }
  if (unaff_RDI[7] != 0) {
    FUN_00001f64();
    plVar1 = (longlong *)unaff_RDI[7];
    if (plVar1 != (longlong *)0x0) {
      if (*plVar1 != 0) {
        plVar1[1] = *plVar1;
        operator_delete(param_1);
      }
      operator_delete();
    }
    unaff_RDI[7] = 0;
  }
  if (*(char *)(unaff_RDI + 0x10) == '\x01') {
    _pthread_mutex_unlock(param_1);
    _pthread_mutex_destroy(param_1);
    *(undefined1 *)(unaff_RDI + 0x10) = 0;
  }
  if (*(int *)(unaff_RDI + 5) != 0) {
    _IOServiceClose();
    *(undefined4 *)(unaff_RDI + 5) = 0;
  }
  if (DAT_00005168 != 0) {
    _pthread_mutex_lock(param_1);
    FUN_00001714();
    _pthread_mutex_unlock(param_1);
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = 0;
  return;
}



/* FUN_00001f64 @ 0x1f64 */

void FUN_00001f64(void)

{
  longlong *plVar1;
  longlong unaff_RDI;
  longlong lVar2;
  
  plVar1 = *(longlong **)(unaff_RDI + 0x38);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *plVar1;
    if (lVar2 != plVar1[1]) {
      do {
        FUN_000010dc();
        FUN_00001128();
        lVar2 = lVar2 + 8;
        plVar1 = *(longlong **)(unaff_RDI + 0x38);
      } while (lVar2 != plVar1[1]);
      lVar2 = *plVar1;
    }
    plVar1[1] = lVar2;
  }
  return;
}



/* FUN_00001fb6 @ 0x1fb6 */

void FUN_00001fb6(void)

{
  FUN_00001e88();
  return;
}



/* FUN_00001fc0 @ 0x1fc0 */

void FUN_00001fc0(void)

{
  FUN_00001e88();
  operator_delete();
  return;
}



/* FUN_00002008 @ 0x2008 */

bool FUN_00002008(pthread_mutex_t *param_1,pthread_mutexattr_t *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong unaff_RDI;
  bool bVar3;
  
  if (*(int *)(unaff_RDI + 0x2c) == 0) {
    bVar3 = false;
  }
  else {
    FUN_0000212c();
    *(undefined1 *)(unaff_RDI + 0x80) = 0;
    bVar3 = false;
    iVar1 = _pthread_mutex_init(param_1,param_2);
    if (iVar1 == 0) {
      *(undefined1 *)(unaff_RDI + 0x80) = 1;
      _pthread_mutex_lock(param_1);
      puVar2 = operator_new();
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *(undefined8 **)(unaff_RDI + 0x38) = puVar2;
      _pthread_mutex_unlock(param_1);
      _pthread_mutex_lock(param_1);
      if (DAT_00005158 == 0) {
        bVar3 = false;
      }
      else {
        param_1 = (pthread_mutex_t *)(unaff_RDI + 0x28);
        bVar3 = false;
        iVar1 = _IOServiceOpen(param_1,0);
        if (iVar1 == 0) {
          param_1 = (pthread_mutex_t *)(ulonglong)*(uint *)(unaff_RDI + 0x2c);
          iVar1 = _IOConnectSetNotificationPort(param_1,*(undefined4 *)(DAT_00005158 + 8));
          _pthread_mutex_unlock(param_1);
          if (iVar1 != 0) {
            return false;
          }
          _pthread_mutex_lock(param_1);
          FUN_00001f64();
          iVar1 = FUN_000021b6();
          bVar3 = iVar1 == 0;
        }
      }
      _pthread_mutex_unlock(param_1);
    }
  }
  return bVar3;
}



/* FUN_0000212c @ 0x212c */

undefined8 FUN_0000212c(void)

{
  longlong lVar1;
  ulonglong uVar2;
  int unaff_EDI;
  
  uVar2 = (ulonglong)DAT_00005100;
  if (DAT_00005100 == 0xffffffff) {
    if (unaff_EDI == 0) {
      return 0;
    }
    DAT_00005100 = 0;
    lVar1 = _IORegistryEntryCreateCFProperty(0,0);
    if (lVar1 == 0) {
      uVar2 = (ulonglong)DAT_00005100;
    }
    else {
      _CFNumberGetValue();
      _CFRelease();
      uVar2 = 1;
      DAT_00005100 = 1;
    }
  }
  return CONCAT71((int7)(uVar2 >> 8),(int)uVar2 != 0);
}



/* FUN_000021b6 @ 0x21b6 */

undefined4 FUN_000021b6(undefined8 param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  void *pvVar13;
  pthread_mutex_t *ppVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong unaff_RDI;
  longlong lVar17;
  undefined8 *puVar18;
  int local_34;
  
  local_34 = 0;
  if (*(longlong *)(unaff_RDI + 0x38) == 0) {
    uVar9 = 0xe00002bc;
  }
  else {
    iVar8 = _IORegistryEntryGetChildIterator(param_1,&local_34);
    uVar9 = 0xe00002bc;
    if (iVar8 == 0) {
      iVar8 = _IOIteratorNext();
      while (iVar8 != 0) {
        iVar8 = _IOObjectConformsTo();
        if ((iVar8 != 0) && (plVar10 = (longlong *)FUN_00001aee(), plVar10 != (longlong *)0x0)) {
          if (*(longlong **)(unaff_RDI + 0x38) != (longlong *)0x0) {
            lVar17 = **(longlong **)(unaff_RDI + 0x38);
            bVar5 = false;
            do {
              if (lVar17 == *(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 8)) break;
              bVar6 = (**(code **)(*plVar10 + 0x20))();
              lVar17 = lVar17 + (ulonglong)(bVar6 ^ 1) * 8;
              if (bVar6 != 0) {
                bVar5 = true;
              }
            } while (!bVar5);
            if (bVar5) {
              FUN_000010dc();
              FUN_00001128();
              goto LAB_000023ab;
            }
          }
          (**(code **)(*plVar10 + 0x18))();
          (**(code **)(*plVar10 + 0x50))();
          plVar3 = *(longlong **)(unaff_RDI + 0x38);
          puVar18 = (undefined8 *)plVar3[1];
          if (puVar18 < (undefined8 *)plVar3[2]) {
            *puVar18 = plVar10;
            puVar18 = puVar18 + 1;
          }
          else {
            ppVar14 = (pthread_mutex_t *)*plVar3;
            lVar17 = (longlong)puVar18 - (longlong)ppVar14 >> 3;
            uVar15 = lVar17 + 1;
            if (0x1fffffffffffffff < uVar15) {
              FUN_00002a3e();
              _pthread_mutex_lock(ppVar14);
              if (DAT_00005158 == (longlong *)0x0) {
                plVar10 = operator_new();
                FUN_0000327c();
                DAT_00005158 = plVar10;
                cVar7 = (**(code **)(*plVar10 + 0x10))();
                uVar9 = 0xe00002bc;
                if (cVar7 == '\0') goto LAB_0000245f;
              }
              uVar9 = FUN_000011e6();
LAB_0000245f:
              _pthread_mutex_unlock(ppVar14);
              return uVar9;
            }
            uVar11 = plVar3[2] - (longlong)ppVar14;
            uVar16 = (longlong)uVar11 >> 2;
            if (uVar16 <= uVar15) {
              uVar16 = uVar15;
            }
            if (0x7ffffffffffffff7 < uVar11) {
              uVar16 = 0x1fffffffffffffff;
            }
            if (uVar16 == 0) {
              lVar12 = 0;
              uVar15 = 0;
            }
            else {
              lVar12 = FUN_00000f7f();
            }
            puVar1 = (undefined8 *)(lVar12 + lVar17 * 8);
            pvVar2 = (void *)(lVar12 + uVar15 * 8);
            *puVar1 = plVar10;
            puVar18 = (undefined8 *)(lVar12 + lVar17 * 8 + 8);
            lVar17 = *plVar3;
            lVar12 = plVar3[1];
            pvVar13 = pvVar2;
            _memcpy(pvVar2,(void *)(lVar12 - lVar17),(size_t)plVar3);
            lVar4 = *plVar3;
            *plVar3 = (longlong)puVar1 - (lVar12 - lVar17);
            plVar3[1] = (longlong)puVar18;
            plVar3[2] = (longlong)pvVar2;
            if (lVar4 != 0) {
              operator_delete(pvVar13);
            }
          }
          plVar3[1] = (longlong)puVar18;
        }
LAB_000023ab:
        _IOObjectRelease();
        iVar8 = _IOIteratorNext();
      }
      uVar9 = 0;
    }
    if (local_34 != 0) {
      _IOObjectRelease();
    }
  }
  return uVar9;
}



/* FUN_000023f4 @ 0x23f4 */

undefined4 FUN_000023f4(pthread_mutex_t *param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  _pthread_mutex_lock(param_1);
  if (DAT_00005158 == (longlong *)0x0) {
    plVar3 = operator_new();
    FUN_0000327c();
    DAT_00005158 = plVar3;
    cVar1 = (**(code **)(*plVar3 + 0x10))();
    uVar2 = 0xe00002bc;
    if (cVar1 == '\0') goto LAB_0000245f;
  }
  uVar2 = FUN_000011e6();
LAB_0000245f:
  _pthread_mutex_unlock(param_1);
  return uVar2;
}



/* FUN_0000248e @ 0x248e */

void FUN_0000248e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  pthread_mutex_t *ppVar4;
  pthread_mutex_t *ppVar5;
  uint uVar6;
  int *unaff_RSI;
  bool bVar7;
  
  if ((param_2 == 0x28) && (-1 < *unaff_RSI)) {
    uVar3 = unaff_RSI[6];
    if (DAT_00005100 == -1) {
      if (uVar3 != 2) {
        return;
      }
      uVar3 = 2;
      uVar6 = unaff_RSI[7];
    }
    else {
      if (DAT_00005100 != 0) {
        uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      }
      if (uVar3 != 2) {
        return;
      }
      uVar3 = unaff_RSI[7];
      uVar6 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      if (0xfffffffd < DAT_00005100 - 1U) {
        uVar6 = uVar3;
      }
    }
    ppVar4 = (pthread_mutex_t *)(ulonglong)uVar3;
    if (DAT_00005168 != 0) {
      _pthread_mutex_lock(ppVar4);
      ppVar5 = *(pthread_mutex_t **)(DAT_00005168 + 8);
      if (ppVar5 != (pthread_mutex_t *)0x0) {
        ppVar4 = (pthread_mutex_t *)(DAT_00005168 + 8);
        do {
          bVar7 = *(uint *)(ppVar5->__opaque + 0x1c) < uVar6;
          if (!bVar7) {
            ppVar4 = ppVar5;
          }
          ppVar5 = *(pthread_mutex_t **)(ppVar5->__opaque + (ulonglong)bVar7 * 8 + -4);
        } while (ppVar5 != (pthread_mutex_t *)0x0);
        if (((ppVar4 != (pthread_mutex_t *)(DAT_00005168 + 8)) &&
            (*(uint *)(ppVar4->__opaque + 0x1c) <= uVar6)) &&
           (plVar2 = *(longlong **)(ppVar4->__opaque + 0x24), plVar2 != (longlong *)0x0)) {
          LOCK();
          *(int *)(plVar2 + 6) = (int)plVar2[6] + 1;
          UNLOCK();
          _pthread_mutex_unlock(ppVar4);
          FUN_00002956();
          LOCK();
          plVar1 = plVar2 + 6;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 != 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x00002561. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 8))();
          return;
        }
      }
      _pthread_mutex_unlock(ppVar4);
      return;
    }
  }
  return;
}



/* FUN_0000257e @ 0x257e */

void FUN_0000257e(pthread_mutex_t *param_1)

{
  _pthread_mutex_lock(param_1);
  FUN_00001348();
  if (DAT_00005158 != 0) {
    FUN_000036ee();
    FUN_000033b4();
    DAT_00005158 = 0;
  }
  _pthread_mutex_unlock(param_1);
  return;
}



/* FUN_000025c8 @ 0x25c8 */

ulonglong FUN_000025c8(pthread_mutex_t *param_1,char param_2)

{
  char cVar1;
  pthread_mutex_t *ppVar2;
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  undefined8 *puVar3;
  bool bVar4;
  
  ppVar2 = param_1;
  _pthread_mutex_lock(param_1);
  if (*(undefined8 **)(unaff_RDI + 0x38) == (undefined8 *)0x0) {
    unaff_RBX = 0;
  }
  else {
    puVar3 = (undefined8 *)**(undefined8 **)(unaff_RDI + 0x38);
    do {
      bVar4 = puVar3 == *(undefined8 **)(*(longlong *)(unaff_RDI + 0x38) + 8);
      unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),!bVar4);
      if (bVar4) break;
      ppVar2 = (pthread_mutex_t *)((ulonglong)param_1 & 0xffffffff);
      cVar1 = (**(code **)(*(longlong *)*puVar3 + 0x28))(ppVar2,param_2 != '\0');
      puVar3 = puVar3 + 1;
    } while (cVar1 == '\0');
  }
  _pthread_mutex_unlock(ppVar2);
  return unaff_RBX & 0xffffffff;
}



/* FUN_00002648 @ 0x2648 */

undefined4 FUN_00002648(pthread_mutex_t *param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  pthread_mutex_t *ppVar4;
  longlong unaff_RDI;
  undefined8 *puVar5;
  
  ppVar4 = param_1;
  _pthread_mutex_lock(param_1);
  uVar3 = 0;
  if (*(undefined8 **)(unaff_RDI + 0x38) != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)**(undefined8 **)(unaff_RDI + 0x38);
    do {
      if (puVar5 == *(undefined8 **)(*(longlong *)(unaff_RDI + 0x38) + 8)) {
        uVar3 = 0;
        goto LAB_000026cc;
      }
      plVar1 = (longlong *)*puVar5;
      ppVar4 = (pthread_mutex_t *)((ulonglong)param_1 & 0xffffffff);
      cVar2 = (**(code **)(*plVar1 + 0x28))(ppVar4,param_2 != '\0');
      puVar5 = puVar5 + 1;
    } while (cVar2 == '\0');
    uVar3 = (**(code **)(*plVar1 + 0x30))();
  }
LAB_000026cc:
  _pthread_mutex_unlock(ppVar4);
  return uVar3;
}



/* FUN_000026e6 @ 0x26e6 */

undefined4 FUN_000026e6(pthread_mutex_t *param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  pthread_mutex_t *ppVar4;
  longlong unaff_RDI;
  undefined8 *puVar5;
  
  ppVar4 = param_1;
  _pthread_mutex_lock(param_1);
  if (*(undefined8 **)(unaff_RDI + 0x38) == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = (undefined8 *)**(undefined8 **)(unaff_RDI + 0x38);
    do {
      if (puVar5 == *(undefined8 **)(*(longlong *)(unaff_RDI + 0x38) + 8)) {
        uVar3 = 0;
        goto LAB_00002765;
      }
      plVar1 = (longlong *)*puVar5;
      ppVar4 = (pthread_mutex_t *)((ulonglong)param_1 & 0xffffffff);
      cVar2 = (**(code **)(*plVar1 + 0x28))(ppVar4,param_2 != '\0');
      puVar5 = puVar5 + 1;
    } while (cVar2 == '\0');
    uVar3 = (**(code **)(*plVar1 + 0x38))();
  }
LAB_00002765:
  _pthread_mutex_unlock(ppVar4);
  return uVar3;
}



/* FUN_0000277e @ 0x277e */

undefined4 FUN_0000277e(pthread_mutex_t *param_1,char param_2,int *param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  pthread_mutex_t *ppVar6;
  longlong unaff_RDI;
  undefined8 *puVar7;
  
  ppVar6 = param_1;
  _pthread_mutex_lock(param_1);
  if (*(undefined8 **)(unaff_RDI + 0x38) == (undefined8 *)0x0) {
LAB_0000283f:
    uVar5 = 0x77686f3f;
  }
  else {
    puVar7 = (undefined8 *)**(undefined8 **)(unaff_RDI + 0x38);
    do {
      if (puVar7 == *(undefined8 **)(*(longlong *)(unaff_RDI + 0x38) + 8)) goto LAB_0000283f;
      plVar2 = (longlong *)*puVar7;
      ppVar6 = (pthread_mutex_t *)((ulonglong)param_1 & 0xffffffff);
      cVar3 = (**(code **)(*plVar2 + 0x28))(ppVar6,param_2 != '\0');
      puVar7 = puVar7 + 1;
    } while (cVar3 == '\0');
    iVar1 = *param_3;
    iVar4 = (**(code **)(*plVar2 + 0x30))();
    uVar5 = 0x2173697a;
    if ((iVar1 == iVar4) && ((param_4 != 0 || (uVar5 = 0x6e6f7065, *param_3 == 0)))) {
      uVar5 = (**(code **)(*plVar2 + 0x40))();
    }
  }
  _pthread_mutex_unlock(ppVar6);
  return uVar5;
}



/* FUN_00002860 @ 0x2860 */

undefined4 FUN_00002860(pthread_mutex_t *param_1,char param_2,uint param_3,longlong param_4)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  pthread_mutex_t *ppVar5;
  longlong unaff_RDI;
  undefined8 *puVar6;
  
  ppVar5 = param_1;
  _pthread_mutex_lock(param_1);
  if (*(undefined8 **)(unaff_RDI + 0x38) == (undefined8 *)0x0) {
LAB_00002936:
    uVar4 = 0x77686f3f;
  }
  else {
    puVar6 = (undefined8 *)**(undefined8 **)(unaff_RDI + 0x38);
    do {
      if (puVar6 == *(undefined8 **)(*(longlong *)(unaff_RDI + 0x38) + 8)) goto LAB_00002936;
      plVar1 = (longlong *)*puVar6;
      ppVar5 = (pthread_mutex_t *)((ulonglong)param_1 & 0xffffffff);
      cVar2 = (**(code **)(*plVar1 + 0x28))(ppVar5,param_2 != '\0');
      puVar6 = puVar6 + 1;
    } while (cVar2 == '\0');
    uVar3 = (**(code **)(*plVar1 + 0x30))();
    uVar4 = 0x2173697a;
    ppVar5 = (pthread_mutex_t *)(ulonglong)param_3;
    if (uVar3 == param_3) {
      ppVar5 = (pthread_mutex_t *)(ulonglong)CONCAT31((int3)(param_3 >> 8),param_4 == 0);
      uVar4 = 0x6e6f7065;
      if ((param_3 == 0 || param_4 != 0) && (cVar2 = (**(code **)(*plVar1 + 0x38))(), cVar2 != '\0')
         ) {
        ppVar5 = (pthread_mutex_t *)((longlong)&MACH_HEADER.magic + 1);
        uVar4 = (**(code **)(*plVar1 + 0x48))(1,param_4);
      }
    }
  }
  _pthread_mutex_unlock(ppVar5);
  return uVar4;
}



/* FUN_00002956 @ 0x2956 */

undefined4 FUN_00002956(pthread_mutex_t *param_1)

{
  undefined4 uVar1;
  
  _pthread_mutex_lock(param_1);
  FUN_00001f64();
  uVar1 = FUN_000021b6();
  _pthread_mutex_unlock(param_1);
  return uVar1;
}



/* FUN_00002992 @ 0x2992 */

int FUN_00002992(void)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *unaff_RDI;
  
  LOCK();
  plVar1 = unaff_RDI + 6;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  iVar3 = (int)lVar2 + -1;
  if (unaff_RDI != (longlong *)0x0 && iVar3 == 0) {
    (**(code **)(*unaff_RDI + 8))();
  }
  return iVar3;
}



/* FUN_000029c0 @ 0x29c0 */

void FUN_000029c0(pthread_mutex_t *param_1)

{
  longlong unaff_RDI;
  
  if ((unaff_RDI != 0) && (DAT_00005168 != 0)) {
    _pthread_mutex_lock(param_1);
    FUN_00001714();
    _pthread_mutex_unlock(param_1);
  }
  *(undefined4 *)(unaff_RDI + 0x2c) = 0;
  return;
}



/* FUN_00002a0c @ 0x2a0c */

void FUN_00002a0c(bad_array_new_length *param_1)

{
  ___cxa_allocate_exception();
  std::bad_array_new_length::bad_array_new_length(param_1);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw();
}



/* FUN_00002a3e @ 0x2a3e */

void FUN_00002a3e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00000f10();
}



/* FUN_00002a4e @ 0x2a4e */

void FUN_00002a4e(undefined4 param_1,undefined4 param_2)

{
  undefined4 unaff_ESI;
  undefined8 *unaff_RDI;
  
  func_0x00000fb8(param_2,unaff_ESI,param_1);
  *unaff_RDI = &PTR_FUN_00004330;
  *(undefined8 *)((longlong)unaff_RDI + 0x4c) = 0x737263656175746f;
  *(undefined4 *)((longlong)unaff_RDI + 0x54) = 0x73726364;
  return;
}



/* FUN_00002a8e @ 0x2a8e */

bool FUN_00002a8e(int param_1,char param_2)

{
  int unaff_ESI;
  longlong unaff_RDI;
  bool bVar1;
  
  if (((param_1 == 0x73726373) || (param_1 == 0x68777373)) &&
     (*(int *)(unaff_RDI + 0x38) == unaff_ESI)) {
    bVar1 = *(char *)(unaff_RDI + 0x3c) == param_2;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* FUN_00002ab4 @ 0x2ab4 */

undefined4 FUN_00002ab4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_ESI;
  
  uVar2 = 0xc;
  if (unaff_ESI != 0x73726373) {
    uVar2 = 0;
  }
  uVar1 = 4;
  if (unaff_ESI != 0x68777373) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* FUN_00002ad8 @ 0x2ad8 */

undefined8 FUN_00002ad8(void)

{
  undefined8 uVar1;
  int unaff_ESI;
  longlong *unaff_RDI;
  
  if (unaff_ESI == 0x68777373) {
                    /* WARNING: Could not recover jumptable at 0x00002af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*unaff_RDI + 0x28))(0x68777373,*(undefined1 *)((longlong)unaff_RDI + 0x3c))
    ;
    return uVar1;
  }
  return 0;
}



/* FUN_00002afe @ 0x2afe */

undefined8 FUN_00002afe(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  int unaff_ESI;
  longlong unaff_RDI;
  undefined8 uVar2;
  undefined4 local_2c;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0x6e6f7065;
  }
  else if (unaff_ESI == 0x68777373) {
    uVar2 = 0;
    lVar1 = _IORegistryEntryCreateCFProperty(0,*(undefined8 *)PTR__kCFAllocatorDefault_00004050);
    if (lVar1 == 0) {
      uVar2 = 0x77686174;
    }
    else {
      _CFNumberGetValue();
      _CFRelease();
      *param_2 = local_2c;
    }
  }
  else {
    uVar2 = 0x77686f3f;
    if (unaff_ESI == 0x73726373) {
      uVar2 = 0;
      lVar1 = 0;
      do {
        param_2[lVar1] = *(undefined4 *)(unaff_RDI + 0x4c + lVar1 * 4);
        lVar1 = lVar1 + 1;
      } while (lVar1 != 3);
    }
  }
  return uVar2;
}



/* FUN_00002baa @ 0x2baa */

undefined8 FUN_00002baa(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  int unaff_ESI;
  longlong *unaff_RDI;
  undefined8 uVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0x6e6f7065;
  }
  else if (unaff_ESI == 0x73726373) {
    uVar3 = 0x756e6f70;
  }
  else if (unaff_ESI == 0x68777373) {
    *(undefined4 *)(unaff_RDI + 0xb) = *param_2;
    lVar2 = _CFNumberCreate(param_1,unaff_RDI + 0xb);
    if (lVar2 == 0) {
      uVar3 = 0x77686174;
    }
    else {
      iVar1 = _IORegistryEntrySetCFProperty();
      uVar3 = 0x77686174;
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      if ((iVar1 == 0 & (byte)param_1) == 1) {
        lVar2 = (**(code **)(*unaff_RDI + 0x68))();
        if (lVar2 == 0) {
          uVar3 = 0;
          _syslog_DARWIN_EXTSN();
        }
        else {
          FUN_0000320c();
          _CFRelease();
          uVar3 = 0;
        }
      }
      _CFRelease();
    }
  }
  else {
    uVar3 = 0x77686f3f;
  }
  return uVar3;
}



/* FUN_00002ca0 @ 0x2ca0 */

void FUN_00002ca0(void)

{
  uint in_EAX;
  int iVar1;
  longlong lVar2;
  longlong *unaff_RDI;
  undefined8 local_28;
  
  local_28._0_4_ = in_EAX;
  lVar2 = (**(code **)(*unaff_RDI + 0x68))();
  if (lVar2 == 0) {
    return;
  }
  lVar2 = FUN_00003194();
  if (lVar2 == 0) {
    _syslog_DARWIN_EXTSN();
    _CFRelease();
    return;
  }
  local_28 = (ulonglong)(uint)local_28;
  _CFNumberGetValue();
  iVar1 = (**(code **)(*unaff_RDI + 0x40))();
  if (iVar1 != 0) goto LAB_00002d6a;
  if ((uint)local_28 != local_28._4_4_) {
    iVar1 = (**(code **)(*unaff_RDI + 0x48))(0,(longlong)&local_28 + 4);
    if (iVar1 != 0) goto LAB_00002d6a;
    if ((uint)local_28 != local_28._4_4_) goto LAB_00002d6a;
  }
  _syslog_DARWIN_EXTSN();
LAB_00002d6a:
  _CFRelease();
  _CFRelease();
  return;
}



/* FUN_00002d86 @ 0x2d86 */

void FUN_00002d86(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *unaff_RDI;
  undefined1 local_1c [4];
  
  iVar1 = (**(code **)(*unaff_RDI + 0x40))(param_1,local_1c);
  if (iVar1 == 0) {
    lVar2 = _CFNumberCreate(param_1,local_1c);
    if (lVar2 != 0) {
      lVar2 = (**(code **)(*unaff_RDI + 0x68))();
      if (lVar2 != 0) {
        FUN_0000320c(param_1,1);
        _CFRelease();
      }
      _CFRelease();
    }
  }
  return;
}



/* FUN_00002dfe @ 0x2dfe */

undefined8 FUN_00002dfe(void)

{
  longlong unaff_RDI;
  
  if (*(char *)(unaff_RDI + 0x28) != '\0') {
    (**(code **)(unaff_RDI + 0x18))(0x68777373,*(undefined1 *)(unaff_RDI + 0x3c));
    return 0;
  }
  return 0xe00002bc;
}



/* FUN_00002e28 @ 0x2e28 */

void FUN_00002e28(void)

{
  FUN_00001090();
  return;
}



/* FUN_00002e32 @ 0x2e32 */

void FUN_00002e32(void)

{
  FUN_00001090();
  operator_delete();
  return;
}



/* FUN_00002e7a @ 0x2e7a */

void FUN_00002e7a(undefined4 param_1,undefined4 param_2)

{
  undefined4 unaff_ESI;
  undefined8 *unaff_RDI;
  
  func_0x00000fb8(param_2,unaff_ESI,param_1);
  *unaff_RDI = &PTR_FUN_000043b8;
  *(undefined8 *)((longlong)unaff_RDI + 0x4c) = 0x686330306861746f;
  *(undefined8 *)((longlong)unaff_RDI + 0x54) = 0x6863303268633031;
  *(undefined8 *)((longlong)unaff_RDI + 0x5c) = 0x6863303468633033;
  *(undefined8 *)((longlong)unaff_RDI + 100) = 0x6863303668633035;
  *(undefined8 *)((longlong)unaff_RDI + 0x6c) = 0x6863303868633037;
  *(undefined8 *)((longlong)unaff_RDI + 0x74) = 0x6863304168633039;
  *(undefined8 *)((longlong)unaff_RDI + 0x7c) = 0x6863304368633042;
  *(undefined8 *)((longlong)unaff_RDI + 0x84) = 0x6863304568633044;
  *(undefined8 *)((longlong)unaff_RDI + 0x8c) = 0x6863313068633046;
  *(undefined8 *)((longlong)unaff_RDI + 0x94) = 0x6863313268633131;
  *(undefined8 *)((longlong)unaff_RDI + 0x9c) = 0x6863313468633133;
  *(undefined8 *)((longlong)unaff_RDI + 0xa4) = 0x6863313668633135;
  *(undefined8 *)((longlong)unaff_RDI + 0xac) = 0x6863313868633137;
  *(undefined8 *)((longlong)unaff_RDI + 0xb4) = 0x6863314168633139;
  *(undefined8 *)((longlong)unaff_RDI + 0xbc) = 0x6863314368633142;
  *(undefined8 *)((longlong)unaff_RDI + 0xc4) = 0x6863314568633144;
  *(undefined8 *)((longlong)unaff_RDI + 0xcc) = 0x6863323068633146;
  *(undefined8 *)((longlong)unaff_RDI + 0xd4) = 0x6863323268633231;
  *(undefined8 *)((longlong)unaff_RDI + 0xdc) = 0x6863323468633233;
  *(undefined8 *)((longlong)unaff_RDI + 0xe4) = 0x6863323668633235;
  *(undefined8 *)((longlong)unaff_RDI + 0xec) = 0x6863323868633237;
  *(undefined8 *)((longlong)unaff_RDI + 0xf4) = 0x6863324168633239;
  *(undefined8 *)((longlong)unaff_RDI + 0xfc) = 0x6863324368633242;
  *(undefined8 *)((longlong)unaff_RDI + 0x104) = 0x6863324568633244;
  *(undefined8 *)((longlong)unaff_RDI + 0x10c) = 0x6863333068633246;
  *(undefined4 *)((longlong)unaff_RDI + 0x114) = 0x68633331;
  return;
}



/* FUN_00002f5c @ 0x2f5c */

void FUN_00002f5c(void)

{
  FUN_00002e7a();
  return;
}



/* FUN_00002f66 @ 0x2f66 */

bool FUN_00002f66(int param_1,char param_2)

{
  int unaff_ESI;
  longlong unaff_RDI;
  bool bVar1;
  
  if (((param_1 == 0x6169666c) || (param_1 == 0x61696663)) &&
     (*(int *)(unaff_RDI + 0x38) == unaff_ESI)) {
    bVar1 = *(char *)(unaff_RDI + 0x3c) == param_2;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* FUN_00002f8c @ 0x2f8c */

undefined4 FUN_00002f8c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_ESI;
  
  uVar2 = 0xcc;
  if (unaff_ESI != 0x61696663) {
    uVar2 = 0;
  }
  uVar1 = 4;
  if (unaff_ESI != 0x6169666c) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* FUN_00002fb0 @ 0x2fb0 */

undefined8 FUN_00002fb0(void)

{
  undefined8 uVar1;
  int unaff_ESI;
  longlong *unaff_RDI;
  
  if (unaff_ESI == 0x6169666c) {
                    /* WARNING: Could not recover jumptable at 0x00002fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*unaff_RDI + 0x28))(0x6169666c,*(undefined1 *)((longlong)unaff_RDI + 0x3c))
    ;
    return uVar1;
  }
  return 0;
}



/* FUN_00002fd6 @ 0x2fd6 */

undefined8 FUN_00002fd6(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  int unaff_ESI;
  longlong unaff_RDI;
  undefined8 uVar2;
  undefined4 local_2c;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0x6e6f7065;
  }
  else if (unaff_ESI == 0x6169666c) {
    uVar2 = 0;
    lVar1 = _IORegistryEntryCreateCFProperty(0,*(undefined8 *)PTR__kCFAllocatorDefault_00004050);
    if (lVar1 == 0) {
      uVar2 = 0x77686174;
    }
    else {
      _CFNumberGetValue();
      _CFRelease();
      *param_2 = local_2c;
    }
  }
  else {
    uVar2 = 0x77686f3f;
    if (unaff_ESI == 0x61696663) {
      uVar2 = 0;
      lVar1 = 0;
      do {
        param_2[lVar1] = *(undefined4 *)(unaff_RDI + 0x4c + lVar1 * 4);
        lVar1 = lVar1 + 1;
      } while (lVar1 != 0x33);
    }
  }
  return uVar2;
}



/* FUN_00003082 @ 0x3082 */

undefined8 FUN_00003082(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int unaff_ESI;
  longlong unaff_RDI;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0x6e6f7065;
  }
  else if (unaff_ESI == 0x61696663) {
    uVar3 = 0x756e6f70;
  }
  else if (unaff_ESI == 0x6169666c) {
    *(undefined4 *)(unaff_RDI + 0x118) = *param_2;
    lVar2 = _CFNumberCreate(param_1,unaff_RDI + 0x118);
    if (lVar2 == 0) {
      uVar3 = 0x77686174;
    }
    else {
      iVar1 = _IORegistryEntrySetCFProperty(param_1,lVar2);
      uVar3 = 0x77686174;
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      _CFRelease();
    }
  }
  else {
    uVar3 = 0x77686f3f;
  }
  return uVar3;
}



/* FUN_0000310c @ 0x310c */

void FUN_0000310c(void)

{
  return;
}



/* FUN_00003112 @ 0x3112 */

void FUN_00003112(void)

{
  return;
}



/* FUN_00003118 @ 0x3118 */

undefined8 FUN_00003118(void)

{
  longlong unaff_RDI;
  
  if (*(char *)(unaff_RDI + 0x28) != '\0') {
    (**(code **)(unaff_RDI + 0x18))(0x6169666c,*(undefined1 *)(unaff_RDI + 0x3c));
    return 0;
  }
  return 0xe00002bc;
}



/* FUN_00003142 @ 0x3142 */

void FUN_00003142(void)

{
  FUN_00001090();
  return;
}



/* FUN_0000314c @ 0x314c */

void FUN_0000314c(void)

{
  FUN_00001090();
  operator_delete();
  return;
}



/* FUN_00003194 @ 0x3194 */

undefined8 FUN_00003194(undefined8 param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  char unaff_SIL;
  longlong unaff_RDI;
  
  if (unaff_RDI != 0) {
    uVar3 = *(undefined8 *)PTR__kCFPreferencesCurrentUser_00004068;
    uVar1 = *(undefined8 *)PTR__kCFPreferencesAnyHost_00004060;
    if (unaff_SIL != '\0') {
      cVar2 = _CFPreferencesSynchronize(param_1,uVar1);
      if (cVar2 == '\0') {
        _syslog_DARWIN_EXTSN();
      }
    }
    uVar3 = _CFPreferencesCopyValue(uVar1,uVar3);
    return uVar3;
  }
  return 0;
}



/* FUN_0000320c @ 0x320c */

void FUN_0000320c(undefined8 param_1,char param_2)

{
  char cVar1;
  longlong unaff_RDI;
  
  if (((unaff_RDI != 0) &&
      (_CFPreferencesSetValue
                 (*(undefined8 *)PTR__kCFPreferencesCurrentUser_00004068,
                  *(undefined8 *)PTR__kCFPreferencesAnyApplication_00004058,
                  *(undefined8 *)PTR__kCFPreferencesAnyHost_00004060), param_2 != '\0')) &&
     (cVar1 = _CFPreferencesSynchronize(), cVar1 == '\0')) {
    _syslog_DARWIN_EXTSN();
  }
  return;
}



/* FUN_0000327c @ 0x327c */

void FUN_0000327c(void)

{
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &PTR_FUN_00004440;
  *(undefined4 *)(unaff_RDI + 1) = 0;
  unaff_RDI[2] = 0;
  unaff_RDI[3] = 0;
  unaff_RDI[4] = 0;
  unaff_RDI[5] = 0;
  unaff_RDI[6] = 0;
  unaff_RDI[7] = 0;
  *(undefined4 *)(unaff_RDI + 8) = 1;
  return;
}



/* FUN_000032aa @ 0x32aa */

void FUN_000032aa(dispatch_object_t param_1,undefined8 param_2,mach_port_right_t param_3,
                 mach_port_delta_t param_4)

{
  kern_return_t kVar1;
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &PTR_FUN_00004440;
  if (unaff_RDI[6] != 0) {
    _dispatch_release(param_1);
    unaff_RDI[6] = 0;
  }
  if (unaff_RDI[5] != 0) {
    _dispatch_release(param_1);
    unaff_RDI[5] = 0;
  }
  if (unaff_RDI[7] != 0) {
    _dispatch_release(param_1);
    unaff_RDI[7] = 0;
  }
  if (unaff_RDI[2] != 0) {
    _CFMachPortInvalidate();
    _CFRelease();
    unaff_RDI[2] = 0;
  }
  if (*(int *)(unaff_RDI + 1) != 0) {
    kVar1 = _mach_port_mod_refs(0xffffffff,1,param_3,param_4);
    if (kVar1 != 0) {
      _syslog_DARWIN_EXTSN();
    }
    *(undefined4 *)(unaff_RDI + 1) = 0;
  }
  return;
}



/* FUN_00003362 @ 0x3362 */

void FUN_00003362(void)

{
  FUN_000032aa();
  return;
}



/* FUN_0000336c @ 0x336c */

void FUN_0000336c(void)

{
  FUN_000032aa();
  operator_delete();
  return;
}



/* FUN_000033b4 @ 0x33b4 */

int FUN_000033b4(void)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *unaff_RDI;
  
  LOCK();
  plVar1 = unaff_RDI + 8;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  iVar3 = (int)lVar2 + -1;
  if (unaff_RDI != (longlong *)0x0 && iVar3 == 0) {
    (**(code **)(*unaff_RDI + 8))();
  }
  return iVar3;
}



/* FUN_000033e2 @ 0x33e2 */

undefined8
FUN_000033e2(dispatch_object_t param_1,undefined8 param_2,mach_port_name_t *param_3,
            mach_port_delta_t param_4)

{
  int *piVar1;
  kern_return_t kVar2;
  longlong lVar3;
  dispatch_semaphore_t pdVar4;
  dispatch_queue_t pdVar5;
  ulonglong uVar6;
  dispatch_queue_attr_t attr;
  dispatch_queue_attr_t unaff_RSI;
  longlong unaff_RDI;
  mach_port_right_t right;
  
  piVar1 = (int *)(unaff_RDI + 8);
  *(undefined4 *)(unaff_RDI + 8) = 0;
  kVar2 = _mach_port_allocate(param_1._0_4_,(mach_port_right_t)piVar1,param_3);
  right = (mach_port_right_t)param_3;
  if ((kVar2 == 0) && (*piVar1 != 0)) {
    param_1._os_obj = (_os_object_s *)0x0;
    right = 0;
    attr = unaff_RSI;
    lVar3 = _CFMachPortCreateWithPort();
    *(longlong *)(unaff_RDI + 0x10) = lVar3;
    if (lVar3 != 0) {
      pdVar4 = _dispatch_semaphore_create(param_1._0_4_);
      *(dispatch_semaphore_t *)(unaff_RDI + 0x38) = pdVar4;
      if (pdVar4 != (dispatch_semaphore_t)0x0) {
        pdVar5 = _dispatch_queue_create((char *)param_1._os_obj,attr);
        *(dispatch_queue_t *)(unaff_RDI + 0x28) = pdVar5;
        if (pdVar5 != (dispatch_queue_t)0x0) {
          _dispatch_set_context(param_1,attr);
          *(dispatch_queue_attr_t *)(unaff_RDI + 0x18) = unaff_RSI;
          *(undefined8 *)(unaff_RDI + 0x20) = param_2;
          uVar6 = FUN_0000353a();
          param_1._os_obj = (_os_object_s *)(uVar6 & 0xffffffff);
          if (param_1._0_1_ != '\0') {
            return 1;
          }
        }
      }
    }
  }
  if (*(longlong *)(unaff_RDI + 0x28) != 0) {
    _dispatch_release(param_1);
    *(undefined8 *)(unaff_RDI + 0x28) = 0;
  }
  if (*(longlong *)(unaff_RDI + 0x38) != 0) {
    _dispatch_release(param_1);
    *(undefined8 *)(unaff_RDI + 0x38) = 0;
  }
  if (*(longlong *)(unaff_RDI + 0x10) != 0) {
    _CFMachPortInvalidate();
    _CFRelease();
    *(undefined8 *)(unaff_RDI + 0x10) = 0;
  }
  if (*piVar1 != 0) {
    kVar2 = _mach_port_mod_refs(0xffffffff,1,right,param_4);
    if (kVar2 != 0) {
      _syslog_DARWIN_EXTSN();
    }
    *piVar1 = 0;
  }
  return 0;
}



/* FUN_0000353a @ 0x353a */

bool FUN_0000353a(undefined8 param_1,undefined8 param_2,ulong param_3,dispatch_queue_t param_4)

{
  dispatch_source_t pdVar1;
  dispatch_object_t object;
  longlong unaff_RDI;
  
  object = *(dispatch_object_t *)(unaff_RDI + 0x28);
  pdVar1 = _dispatch_source_create((dispatch_source_type_t)object._os_obj,0,param_3,param_4);
  *(dispatch_source_t *)(unaff_RDI + 0x30) = pdVar1;
  if (pdVar1 != (dispatch_source_t)0x0) {
    _dispatch_source_set_event_handler();
    _dispatch_source_set_cancel_handler();
    _dispatch_resume(object);
  }
  return pdVar1 != (dispatch_source_t)0x0;
}



/* FUN_000035ea @ 0x35ea */

void FUN_000035ea(void)

{
  FUN_000035f8();
  return;
}



/* FUN_000035f8 @ 0x35f8 */

void FUN_000035f8(void)

{
  mach_msg_return_t mVar1;
  longlong unaff_RDI;
  mach_port_name_t in_stack_ffffffffffffffd8;
  mach_msg_timeout_t in_stack_ffffffffffffffe0;
  mach_port_name_t in_stack_ffffffffffffffe8;
  
  mVar1 = _mach_msg((mach_msg_header_t *)(segment_command_00000020.segname + 8),0,
                    *(mach_msg_size_t *)(unaff_RDI + 8),0,in_stack_ffffffffffffffd8,
                    in_stack_ffffffffffffffe0,in_stack_ffffffffffffffe8);
  if ((mVar1 == 0) && (*(code **)(unaff_RDI + 0x18) != (code *)0x0)) {
    (**(code **)(unaff_RDI + 0x18))(*(undefined8 *)(unaff_RDI + 0x20),0x28);
  }
  return;
}



/* FUN_0000365a @ 0x365a */

void FUN_0000365a(void)

{
  FUN_00003668();
  return;
}



/* FUN_00003668 @ 0x3668 */

void FUN_00003668(dispatch_object_t param_1,undefined8 param_2,mach_port_right_t param_3,
                 mach_port_delta_t param_4)

{
  kern_return_t kVar1;
  longlong unaff_RDI;
  
  if (*(longlong *)(unaff_RDI + 0x10) != 0) {
    _CFMachPortInvalidate();
    _CFRelease();
    *(undefined8 *)(unaff_RDI + 0x10) = 0;
  }
  if (*(int *)(unaff_RDI + 8) != 0) {
    param_1 = (dispatch_object_t)0xffffffff;
    kVar1 = _mach_port_mod_refs(0xffffffff,1,param_3,param_4);
    if (kVar1 != 0) {
      _syslog_DARWIN_EXTSN();
    }
    *(undefined4 *)(unaff_RDI + 8) = 0;
  }
  _dispatch_release(param_1);
  *(undefined8 *)(unaff_RDI + 0x30) = 0;
  _dispatch_semaphore_signal((dispatch_semaphore_t)param_1._os_obj);
  return;
}



/* FUN_000036ee @ 0x36ee */

void FUN_000036ee(dispatch_semaphore_t param_1,dispatch_time_t param_2)

{
  longlong unaff_RDI;
  
  if (*(longlong *)(unaff_RDI + 0x30) != 0) {
    _dispatch_source_cancel((dispatch_source_t)param_1);
    _dispatch_semaphore_wait(param_1,param_2);
    return;
  }
  return;
}



/* _CFBooleanGetValue @ 0x3722 */

void _CFBooleanGetValue(void)

{
                    /* WARNING: Could not recover jumptable at 0x00003722. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFBooleanGetValue_00004000)();
  return;
}



/* _CFMachPortCreateWithPort @ 0x3728 */

void _CFMachPortCreateWithPort(void)

{
                    /* WARNING: Could not recover jumptable at 0x00003728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFMachPortCreateWithPort_00004008)();
  return;
}



/* _CFMachPortInvalidate @ 0x372e */

void _CFMachPortInvalidate(void)

{
                    /* WARNING: Could not recover jumptable at 0x0000372e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFMachPortInvalidate_00004010)();
  return;
}



/* _CFNumberCreate @ 0x3734 */

void _CFNumberCreate(void)

{
                    /* WARNING: Could not recover jumptable at 0x00003734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFNumberCreate_00004018)();
  return;
}



/* _CFNumberGetValue @ 0x373a */

void _CFNumberGetValue(void)

{
                    /* WARNING: Could not recover jumptable at 0x0000373a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFNumberGetValue_00004020)();
  return;
}



/* _CFPreferencesCopyValue @ 0x3740 */

void _CFPreferencesCopyValue(void)

{
                    /* WARNING: Could not recover jumptable at 0x00003740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFPreferencesCopyValue_00004028)();
  return;
}



/* _CFPreferencesSetValue @ 0x3746 */

void _CFPreferencesSetValue(void)

{
                    /* WARNING: Could not recover jumptable at 0x00003746. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFPreferencesSetValue_00004030)();
  return;
}



/* _CFPreferencesSynchronize @ 0x374c */

void _CFPreferencesSynchronize(void)

{
                    /* WARNING: Could not recover jumptable at 0x0000374c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFPreferencesSynchronize_00004038)();
  return;
}



/* _CFRelease @ 0x3752 */

void _CFRelease(void)

{
                    /* WARNING: Could not recover jumptable at 0x00003752. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFRelease_00004040)();
  return;
}



/* _CFStringCreateWithCString @ 0x3758 */

void _CFStringCreateWithCString(void)

{
                    /* WARNING: Could not recover jumptable at 0x00003758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFStringCreateWithCString_00004048)();
  return;
}



/* _IOConnectSetNotificationPort @ 0x375e */

void _IOConnectSetNotificationPort(void)

{
                    /* WARNING: Could not recover jumptable at 0x0000375e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__IOConnectSetNotificationPort_00004070)();
  return;
}



/* _IOIteratorNext @ 0x3764 */

void _IOIteratorNext(void)

{
                    /* WARNING: Could not recover jumptable at 0x00003764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__IOIteratorNext_00004078)();
  return;
}



/* _IOObjectConformsTo @ 0x376a */

void _IOObjectConformsTo(void)

{
                    /* WARNING: Could not recover jumptable at 0x0000376a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__IOObjectConformsTo_00004080)();
  return;
}



/* _IOObjectRelease @ 0x3770 */

void _IOObjectRelease(void)

{
                    /* WARNING: Could not recover jumptable at 0x00003770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__IOObjectRelease_00004088)();
  return;
}



/* _IOObjectRetain @ 0x3776 */

void _IOObjectRetain(void)

{
                    /* WARNING: Could not recover jumptable at 0x00003776. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__IOObjectRetain_00004090)();
  return;
}



/* _IORegistryEntryCreateCFProperty @ 0x377c */

void _IORegistryEntryCreateCFProperty(void)

{
                    /* WARNING: Could not recover jumptable at 0x0000377c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__IORegistryEntryCreateCFProperty_00004098)();
  return;
}



/* _IORegistryEntryGetChildIterator @ 0x3782 */

void _IORegistryEntryGetChildIterator(void)

{
                    /* WARNING: Could not recover jumptable at 0x00003782. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__IORegistryEntryGetChildIterator_000040a0)();
  return;
}



/* _IORegistryEntrySetCFProperty @ 0x3788 */

void _IORegistryEntrySetCFProperty(void)

{
                    /* WARNING: Could not recover jumptable at 0x00003788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__IORegistryEntrySetCFProperty_000040a8)();
  return;
}



/* _IOServiceClose @ 0x378e */

void _IOServiceClose(void)

{
                    /* WARNING: Could not recover jumptable at 0x0000378e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__IOServiceClose_000040b0)();
  return;
}



/* _IOServiceOpen @ 0x3794 */

void _IOServiceOpen(void)

{
                    /* WARNING: Could not recover jumptable at 0x00003794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__IOServiceOpen_000040b8)();
  return;
}



/* __Unwind_Resume @ 0x379a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __Unwind_Resume(_Unwind_Exception *exception_object)

{
                    /* WARNING: Could not recover jumptable at 0x0000379a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_00004110)();
  return;
}



/* /usr/lib/libc++.1.dylib::std::logic_error::logic_error @ 0x37a0 */

/* std::logic_error::logic_error(char const*) */

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000037a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_logic_error_000040c0)();
  return;
}



/* /usr/lib/libc++.1.dylib::std::bad_array_new_length::bad_array_new_length @ 0x37a6 */

/* std::bad_array_new_length::bad_array_new_length() */

void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
                    /* WARNING: Could not recover jumptable at 0x000037a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_bad_array_new_length_000040d0)();
  return;
}



/* <EXTERNAL>::operator.delete @ 0x37ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* operator delete(void*) */

void operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000037ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_operator_delete_000041e8)();
  return;
}



/* <EXTERNAL>::operator.delete @ 0x37b2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* operator delete(void*, std::__type_descriptor_t) */

void operator_delete(void)

{
                    /* WARNING: Could not recover jumptable at 0x000037b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_operator_delete_000041f0)();
  return;
}



/* <EXTERNAL>::operator.new @ 0x37b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* operator new(unsigned long, std::__type_descriptor_t) */

void * operator_new(void)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000037b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(*(code *)PTR_operator_new_000041f8)();
  return pvVar1;
}



/* ___cxa_allocate_exception @ 0x37be */

void ___cxa_allocate_exception(void)

{
                    /* WARNING: Could not recover jumptable at 0x000037be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_allocate_exception_000040e8)();
  return;
}



/* ___cxa_free_exception @ 0x37c4 */

void ___cxa_free_exception(void)

{
                    /* WARNING: Could not recover jumptable at 0x000037c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_free_exception_000040f0)();
  return;
}



/* ___cxa_throw @ 0x37ca */

void ___cxa_throw(void)

{
                    /* WARNING: Could not recover jumptable at 0x000037ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_throw_000040f8)();
  return;
}



/* ___stack_chk_fail @ 0x37d0 */

void ___stack_chk_fail(void)

{
                    /* WARNING: Could not recover jumptable at 0x000037d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____stack_chk_fail_00004118)();
  return;
}



/* _dispatch_queue_create @ 0x37d6 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dispatch_queue_t _dispatch_queue_create(char *label,dispatch_queue_attr_t attr)

{
  dispatch_queue_t pdVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000037d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pdVar1 = (dispatch_queue_t)(*(code *)PTR__dispatch_queue_create_00004130)();
  return pdVar1;
}



/* _dispatch_release @ 0x37dc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _dispatch_release(dispatch_object_t object)

{
                    /* WARNING: Could not recover jumptable at 0x000037dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_release_00004138)();
  return;
}



/* _dispatch_resume @ 0x37e2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _dispatch_resume(dispatch_object_t object)

{
                    /* WARNING: Could not recover jumptable at 0x000037e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_resume_00004140)();
  return;
}



/* _dispatch_semaphore_create @ 0x37e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dispatch_semaphore_t _dispatch_semaphore_create(long value)

{
  dispatch_semaphore_t pdVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000037e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pdVar1 = (dispatch_semaphore_t)(*(code *)PTR__dispatch_semaphore_create_00004148)();
  return pdVar1;
}



/* _dispatch_semaphore_signal @ 0x37ee */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long _dispatch_semaphore_signal(dispatch_semaphore_t dsema)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000037ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR__dispatch_semaphore_signal_00004150)();
  return lVar1;
}



/* _dispatch_semaphore_wait @ 0x37f4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long _dispatch_semaphore_wait(dispatch_semaphore_t dsema,dispatch_time_t timeout)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000037f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR__dispatch_semaphore_wait_00004158)();
  return lVar1;
}



/* _dispatch_set_context @ 0x37fa */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _dispatch_set_context(dispatch_object_t object,void *context)

{
                    /* WARNING: Could not recover jumptable at 0x000037fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_set_context_00004160)();
  return;
}



/* _dispatch_source_cancel @ 0x3800 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _dispatch_source_cancel(dispatch_source_t source)

{
                    /* WARNING: Could not recover jumptable at 0x00003800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_source_cancel_00004168)();
  return;
}



/* _dispatch_source_create @ 0x3806 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dispatch_source_t
_dispatch_source_create
          (dispatch_source_type_t type,uintptr_t handle,ulong mask,dispatch_queue_t queue)

{
  dispatch_source_t pdVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00003806. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pdVar1 = (dispatch_source_t)(*(code *)PTR__dispatch_source_create_00004170)();
  return pdVar1;
}



/* _dispatch_source_set_cancel_handler @ 0x380c */

void _dispatch_source_set_cancel_handler(void)

{
                    /* WARNING: Could not recover jumptable at 0x0000380c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_source_set_cancel_handler_00004178)();
  return;
}



/* _dispatch_source_set_event_handler @ 0x3812 */

void _dispatch_source_set_event_handler(void)

{
                    /* WARNING: Could not recover jumptable at 0x00003812. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_source_set_event_handler_00004180)();
  return;
}



/* _mach_msg @ 0x3818 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

mach_msg_return_t
_mach_msg(mach_msg_header_t *msg,mach_msg_option_t option,mach_msg_size_t send_size,
         mach_msg_size_t rcv_size,mach_port_name_t rcv_name,mach_msg_timeout_t timeout,
         mach_port_name_t notify)

{
  mach_msg_return_t mVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00003818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  mVar1 = (*(code *)PTR__mach_msg_00004188)();
  return mVar1;
}



/* _mach_port_allocate @ 0x381e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t _mach_port_allocate(ipc_space_t task,mach_port_right_t right,mach_port_name_t *name)

{
  kern_return_t kVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0000381e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  kVar1 = (*(code *)PTR__mach_port_allocate_00004190)();
  return kVar1;
}



/* _mach_port_mod_refs @ 0x3824 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_mach_port_mod_refs(ipc_space_t task,mach_port_name_t name,mach_port_right_t right,
                   mach_port_delta_t delta)

{
  kern_return_t kVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00003824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  kVar1 = (*(code *)PTR__mach_port_mod_refs_00004198)();
  return kVar1;
}



/* _memcpy @ 0x382a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0000382a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(*(code *)PTR__memcpy_000041a8)();
  return pvVar1;
}



/* _memmove @ 0x3830 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _memmove(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00003830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(*(code *)PTR__memmove_000041b0)();
  return pvVar1;
}



/* _pthread_mutex_destroy @ 0x3836 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_mutex_destroy(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00003836. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__pthread_mutex_destroy_000041b8)();
  return iVar1;
}



/* _pthread_mutex_init @ 0x383c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_mutex_init(pthread_mutex_t *param_1,pthread_mutexattr_t *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0000383c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__pthread_mutex_init_000041c0)();
  return iVar1;
}



/* _pthread_mutex_lock @ 0x3842 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_mutex_lock(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00003842. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__pthread_mutex_lock_000041c8)();
  return iVar1;
}



/* _pthread_mutex_unlock @ 0x3848 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_mutex_unlock(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00003848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__pthread_mutex_unlock_000041d0)();
  return iVar1;
}



/* _snprintf @ 0x384e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _snprintf(char *param_1,size_t param_2,char *param_3,...)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0000384e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__snprintf_000041d8)();
  return iVar1;
}



/* _syslog$DARWIN_EXTSN @ 0x3854 */

void _syslog_DARWIN_EXTSN(void)

{
                    /* WARNING: Could not recover jumptable at 0x00003854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__syslog_DARWIN_EXTSN_000041e0)();
  return;
}



/* /usr/lib/libc++.1.dylib::std::length_error::~length_error @ 0xe100 */

/* WARNING: Control flow encountered bad instruction data */
/* std::length_error::~length_error() */

void __thiscall std::length_error::~length_error(length_error *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* /usr/lib/libc++.1.dylib::std::bad_array_new_length::~bad_array_new_length @ 0xe200 */

/* WARNING: Control flow encountered bad instruction data */
/* std::bad_array_new_length::~bad_array_new_length() */

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



