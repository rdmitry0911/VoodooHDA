/* Decompiled: IOAudioFamily */
/* Functions : 1347 */

/* IOAF_Int8ToFloat32 @ 0x600 */

/* IOAF_Int8ToFloat32(signed char const*, float*, unsigned int) */

void IOAF_Int8ToFloat32(signed *param_1,float *param_2,uint param_3)

{
  _Int8ToFloat32();
  return;
}



/* IOAF_Float32ToInt8 @ 0x60a */

/* IOAF_Float32ToInt8(float const*, signed char*, unsigned int) */

void IOAF_Float32ToInt8(float *param_1,signed *param_2,uint param_3)

{
  _Float32ToInt8();
  return;
}



/* IOAF_NativeInt16ToFloat32 @ 0x614 */

/* IOAF_NativeInt16ToFloat32(short const*, float*, unsigned int) */

void IOAF_NativeInt16ToFloat32(short *param_1,float *param_2,uint param_3)

{
  _NativeInt16ToFloat32();
  return;
}



/* IOAF_SwapInt16ToFloat32 @ 0x61e */

/* IOAF_SwapInt16ToFloat32(short const*, float*, unsigned int) */

void IOAF_SwapInt16ToFloat32(short *param_1,float *param_2,uint param_3)

{
  _SwapInt16ToFloat32();
  return;
}



/* IOAF_NativeInt24ToFloat32 @ 0x628 */

/* IOAF_NativeInt24ToFloat32(unsigned char const*, float*, unsigned int) */

void IOAF_NativeInt24ToFloat32(uchar *param_1,float *param_2,uint param_3)

{
  _NativeInt24ToFloat32();
  return;
}



/* IOAF_SwapInt24ToFloat32 @ 0x632 */

/* IOAF_SwapInt24ToFloat32(unsigned char const*, float*, unsigned int) */

void IOAF_SwapInt24ToFloat32(uchar *param_1,float *param_2,uint param_3)

{
  _SwapInt24ToFloat32();
  return;
}



/* IOAF_NativeInt32ToFloat32 @ 0x63c */

/* IOAF_NativeInt32ToFloat32(int const*, float*, unsigned int) */

void IOAF_NativeInt32ToFloat32(int *param_1,float *param_2,uint param_3)

{
  _NativeInt32ToFloat32();
  return;
}



/* IOAF_SwapInt32ToFloat32 @ 0x646 */

/* IOAF_SwapInt32ToFloat32(int const*, float*, unsigned int) */

void IOAF_SwapInt32ToFloat32(int *param_1,float *param_2,uint param_3)

{
  _SwapInt32ToFloat32();
  return;
}



/* IOAF_Float32ToNativeInt16 @ 0x650 */

/* IOAF_Float32ToNativeInt16(float const*, short*, unsigned int) */

void IOAF_Float32ToNativeInt16(float *param_1,short *param_2,uint param_3)

{
  _Float32ToNativeInt16();
  return;
}



/* IOAF_Float32ToSwapInt16 @ 0x65a */

/* IOAF_Float32ToSwapInt16(float const*, short*, unsigned int) */

void IOAF_Float32ToSwapInt16(float *param_1,short *param_2,uint param_3)

{
  _Float32ToSwapInt16();
  return;
}



/* IOAF_Float32ToNativeInt24 @ 0x664 */

/* IOAF_Float32ToNativeInt24(float const*, unsigned char*, unsigned int) */

void IOAF_Float32ToNativeInt24(float *param_1,uchar *param_2,uint param_3)

{
  _Float32ToNativeInt24();
  return;
}



/* IOAF_Float32ToSwapInt24 @ 0x66e */

/* IOAF_Float32ToSwapInt24(float const*, unsigned char*, unsigned int) */

void IOAF_Float32ToSwapInt24(float *param_1,uchar *param_2,uint param_3)

{
  _Float32ToSwapInt24();
  return;
}



/* IOAF_Float32ToNativeInt32 @ 0x678 */

/* IOAF_Float32ToNativeInt32(float const*, int*, unsigned int) */

void IOAF_Float32ToNativeInt32(float *param_1,int *param_2,uint param_3)

{
  _Float32ToNativeInt32();
  return;
}



/* IOAF_Float32ToSwapInt32 @ 0x682 */

/* IOAF_Float32ToSwapInt32(float const*, int*, unsigned int) */

void IOAF_Float32ToSwapInt32(float *param_1,int *param_2,uint param_3)

{
  _Float32ToSwapInt32();
  return;
}



/* IOAF_bcopy_WriteCombine @ 0x68c */

/* IOAF_bcopy_WriteCombine(void const*, void*, unsigned int) */

void IOAF_bcopy_WriteCombine(void *param_1,void *param_2,uint param_3)

{
  _memcpy_16B(param_1,(ulonglong)param_2 & 0xffffffff);
  return;
}



/* IOAudioControl::MetaClass::MetaClass @ 0x6a2 */

/* IOAudioControl::MetaClass::MetaClass() */

void __thiscall IOAudioControl::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)&section_000000b8.size,PTR_gMetaClass_0001e038,in_R8,in_R9D);
  *unaff_RDI = &PTR__MetaClass_0001ebb8;
  return;
}



/* IOAudioControl::MetaClass::~MetaClass @ 0x6d4 */

/* IOAudioControl::MetaClass::~MetaClass() */

void __thiscall IOAudioControl::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* IOAudioControl::IOAudioControl @ 0x6de */

/* IOAudioControl::IOAudioControl(OSMetaClass const*) */

void __thiscall IOAudioControl::IOAudioControl(IOAudioControl *this,OSMetaClass *param_1)

{
  undefined8 *unaff_RDI;
  
  IOService::IOService((IOService *)this,param_1);
  *unaff_RDI = &PTR__IOAudioControl_0001e150;
  return;
}



/* IOAudioControl::IOAudioControl @ 0x6fe */

/* IOAudioControl::IOAudioControl(OSMetaClass const*) */

void __thiscall IOAudioControl::IOAudioControl(IOAudioControl *this,OSMetaClass *param_1)

{
  undefined8 *unaff_RDI;
  
  IOService::IOService((IOService *)this,param_1);
  *unaff_RDI = &PTR__IOAudioControl_0001e150;
  return;
}



/* IOAudioControl::~IOAudioControl @ 0x71e */

/* IOAudioControl::~IOAudioControl() */

void __thiscall IOAudioControl::~IOAudioControl(IOAudioControl *this)

{
  IOService::~IOService((IOService *)this);
  return;
}



/* IOAudioControl::~IOAudioControl @ 0x728 */

/* IOAudioControl::~IOAudioControl() */

void __thiscall IOAudioControl::~IOAudioControl(IOAudioControl *this)

{
  IOService::~IOService((IOService *)this);
  return;
}



/* IOAudioControl::~IOAudioControl @ 0x732 */

/* IOAudioControl::~IOAudioControl() */

void __thiscall IOAudioControl::~IOAudioControl(IOAudioControl *this)

{
  IOService::~IOService((IOService *)this);
  _OSObject_typed_operator_delete();
  return;
}



/* IOAudioControl::operator.delete @ 0x75a */

/* IOAudioControl::operator delete(void*, unsigned long) */

void IOAudioControl::operator_delete(void *param_1,ulong param_2)

{
  _OSObject_typed_operator_delete();
  return;
}



/* IOAudioControl::getMetaClass @ 0x772 */

/* IOAudioControl::getMetaClass() const */

undefined ** IOAudioControl::getMetaClass(void)

{
  return &gMetaClass;
}



/* IOAudioControl::MetaClass::MetaClass @ 0x780 */

/* IOAudioControl::MetaClass::MetaClass() */

void __thiscall IOAudioControl::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)&section_000000b8.size,PTR_gMetaClass_0001e038,in_R8,in_R9D);
  *unaff_RDI = &PTR__MetaClass_0001ebb8;
  return;
}



/* IOAudioControl::MetaClass::alloc @ 0x7b2 */

/* IOAudioControl::MetaClass::alloc() const */

undefined8 * IOAudioControl::MetaClass::alloc(void)

{
  undefined8 *puVar1;
  IOService *in_RCX;
  OSMetaClass *in_RDX;
  
  puVar1 = (undefined8 *)_OSObject_typed_operator_new();
  IOService::IOService(in_RCX,in_RDX);
  *puVar1 = &PTR__IOAudioControl_0001e150;
  OSMetaClass::instanceConstructed();
  return puVar1;
}



/* IOAudioControl::operator.new @ 0x7fa */

/* IOAudioControl::operator new(unsigned long) */

void * __thiscall IOAudioControl::operator_new(IOAudioControl *this,ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)_OSObject_typed_operator_new();
  return pvVar1;
}



/* IOAudioControl::IOAudioControl @ 0x80e */

/* IOAudioControl::IOAudioControl() */

void __thiscall IOAudioControl::IOAudioControl(IOAudioControl *this)

{
  OSMetaClass *in_RDX;
  undefined8 *unaff_RDI;
  
  IOService::IOService((IOService *)this,in_RDX);
  *unaff_RDI = &PTR__IOAudioControl_0001e150;
  OSMetaClass::instanceConstructed();
  return;
}



/* IOAudioControl::IOAudioControl @ 0x83e */

/* IOAudioControl::IOAudioControl() */

void __thiscall IOAudioControl::IOAudioControl(IOAudioControl *this)

{
  OSMetaClass *in_RDX;
  undefined8 *unaff_RDI;
  
  IOService::IOService((IOService *)this,in_RDX);
  *unaff_RDI = &PTR__IOAudioControl_0001e150;
  OSMetaClass::instanceConstructed();
  return;
}



/* IOAudioControl::_RESERVEDIOAudioControl4 @ 0x86e */

/* IOAudioControl::_RESERVEDIOAudioControl4() */

void __thiscall IOAudioControl::_RESERVEDIOAudioControl4(IOAudioControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControl::_RESERVEDIOAudioControl5 @ 0x884 */

/* IOAudioControl::_RESERVEDIOAudioControl5() */

void __thiscall IOAudioControl::_RESERVEDIOAudioControl5(IOAudioControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControl::_RESERVEDIOAudioControl6 @ 0x89a */

/* IOAudioControl::_RESERVEDIOAudioControl6() */

void __thiscall IOAudioControl::_RESERVEDIOAudioControl6(IOAudioControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControl::_RESERVEDIOAudioControl7 @ 0x8b0 */

/* IOAudioControl::_RESERVEDIOAudioControl7() */

void __thiscall IOAudioControl::_RESERVEDIOAudioControl7(IOAudioControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControl::_RESERVEDIOAudioControl8 @ 0x8c6 */

/* IOAudioControl::_RESERVEDIOAudioControl8() */

void __thiscall IOAudioControl::_RESERVEDIOAudioControl8(IOAudioControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControl::_RESERVEDIOAudioControl9 @ 0x8dc */

/* IOAudioControl::_RESERVEDIOAudioControl9() */

void __thiscall IOAudioControl::_RESERVEDIOAudioControl9(IOAudioControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControl::_RESERVEDIOAudioControl10 @ 0x8f2 */

/* IOAudioControl::_RESERVEDIOAudioControl10() */

void __thiscall IOAudioControl::_RESERVEDIOAudioControl10(IOAudioControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControl::_RESERVEDIOAudioControl11 @ 0x908 */

/* IOAudioControl::_RESERVEDIOAudioControl11() */

void __thiscall IOAudioControl::_RESERVEDIOAudioControl11(IOAudioControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControl::_RESERVEDIOAudioControl12 @ 0x91e */

/* IOAudioControl::_RESERVEDIOAudioControl12() */

void __thiscall IOAudioControl::_RESERVEDIOAudioControl12(IOAudioControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControl::_RESERVEDIOAudioControl13 @ 0x934 */

/* IOAudioControl::_RESERVEDIOAudioControl13() */

void __thiscall IOAudioControl::_RESERVEDIOAudioControl13(IOAudioControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControl::_RESERVEDIOAudioControl14 @ 0x94a */

/* IOAudioControl::_RESERVEDIOAudioControl14() */

void __thiscall IOAudioControl::_RESERVEDIOAudioControl14(IOAudioControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControl::_RESERVEDIOAudioControl15 @ 0x960 */

/* IOAudioControl::_RESERVEDIOAudioControl15() */

void __thiscall IOAudioControl::_RESERVEDIOAudioControl15(IOAudioControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControl::_RESERVEDIOAudioControl16 @ 0x976 */

/* IOAudioControl::_RESERVEDIOAudioControl16() */

void __thiscall IOAudioControl::_RESERVEDIOAudioControl16(IOAudioControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControl::_RESERVEDIOAudioControl17 @ 0x98c */

/* IOAudioControl::_RESERVEDIOAudioControl17() */

void __thiscall IOAudioControl::_RESERVEDIOAudioControl17(IOAudioControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControl::_RESERVEDIOAudioControl18 @ 0x9a2 */

/* IOAudioControl::_RESERVEDIOAudioControl18() */

void __thiscall IOAudioControl::_RESERVEDIOAudioControl18(IOAudioControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControl::_RESERVEDIOAudioControl19 @ 0x9b8 */

/* IOAudioControl::_RESERVEDIOAudioControl19() */

void __thiscall IOAudioControl::_RESERVEDIOAudioControl19(IOAudioControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControl::_RESERVEDIOAudioControl20 @ 0x9ce */

/* IOAudioControl::_RESERVEDIOAudioControl20() */

void __thiscall IOAudioControl::_RESERVEDIOAudioControl20(IOAudioControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControl::_RESERVEDIOAudioControl21 @ 0x9e4 */

/* IOAudioControl::_RESERVEDIOAudioControl21() */

void __thiscall IOAudioControl::_RESERVEDIOAudioControl21(IOAudioControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControl::_RESERVEDIOAudioControl22 @ 0x9fa */

/* IOAudioControl::_RESERVEDIOAudioControl22() */

void __thiscall IOAudioControl::_RESERVEDIOAudioControl22(IOAudioControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControl::_RESERVEDIOAudioControl23 @ 0xa10 */

/* IOAudioControl::_RESERVEDIOAudioControl23() */

void __thiscall IOAudioControl::_RESERVEDIOAudioControl23(IOAudioControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControl::createUserClient @ 0xa26 */

/* IOAudioControl::createUserClient(task*, void*, unsigned int, IOAudioControlUserClient**,
   OSDictionary*) */

undefined8
IOAudioControl::createUserClient
          (task *param_1,void *param_2,uint param_3,IOAudioControlUserClient **param_4,
          OSDictionary *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 in_register_00000084;
  OSDictionary *in_stack_00000008;
  
  lVar1 = IOAudioControlUserClient::withAudioControl
                    ((IOAudioControl *)param_1,param_2,param_4,(uint)param_4,in_stack_00000008);
  if (lVar1 == 0) {
    uVar2 = 0xe00002bd;
  }
  else {
    *(longlong *)CONCAT44(in_register_00000084,param_3) = lVar1;
    uVar2 = 0;
  }
  return uVar2;
}



/* IOAudioControl::sendChangeNotification @ 0xa50 */

/* IOAudioControl::sendChangeNotification(unsigned int) */

void __thiscall IOAudioControl::sendChangeNotification(IOAudioControl *this,uint param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  OSCollection *pOVar6;
  longlong unaff_RDI;
  int iVar7;
  
  if ((*(longlong *)(unaff_RDI + 0xd0) != 0) && ((*(byte *)(unaff_RDI + 0x98) & 1) != 0)) {
    pOVar6 = (OSCollection *)**(undefined8 **)(unaff_RDI + 0xd8);
    if (((byte)pOVar6[0xa5] & 1) == 0) {
      plVar4 = (longlong *)OSCollectionIterator::withCollection(pOVar6);
      if (plVar4 != (longlong *)0x0) {
        while (plVar5 = (longlong *)(**(code **)(*plVar4 + 0x128))(), plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x960))();
        }
        goto LAB_00000b3b;
      }
    }
    else {
      if ((*(undefined8 **)(unaff_RDI + 0xd8))[1] == 0) {
        lVar3 = OSArray::withCapacity((uint)pOVar6);
        pOVar6 = *(OSCollection **)(unaff_RDI + 0xd8);
        *(longlong *)(pOVar6 + 8) = lVar3;
        if (lVar3 == 0) {
          return;
        }
      }
      plVar4 = (longlong *)OSNumber::withNumber((ulonglong)pOVar6,param_1);
      if (plVar4 != (longlong *)0x0) {
        iVar2 = (**(code **)(**(longlong **)(*(longlong *)(unaff_RDI + 0xd8) + 8) + 0x130))();
        if (iVar2 != 0) {
          iVar7 = 0;
          do {
            (**(code **)(**(longlong **)(*(longlong *)(unaff_RDI + 0xd8) + 8) + 0x1e8))();
            cVar1 = (**(code **)(*plVar4 + 0x168))();
            if (cVar1 != '\0') goto LAB_00000b3b;
            iVar7 = iVar7 + 1;
          } while (iVar2 != iVar7);
        }
        (**(code **)(**(longlong **)(*(longlong *)(unaff_RDI + 0xd8) + 8) + 0x1b8))();
LAB_00000b3b:
                    /* WARNING: Could not recover jumptable at 0x00000b49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x28))();
        return;
      }
    }
  }
  return;
}



/* IOAudioControl::sendQueuedNotifications @ 0xb84 */

/* IOAudioControl::sendQueuedNotifications() */

void IOAudioControl::sendQueuedNotifications(void)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *unaff_RDI;
  int iVar4;
  
  if ((unaff_RDI[0x1b] != 0) &&
     (plVar3 = *(longlong **)(unaff_RDI[0x1b] + 8), plVar3 != (longlong *)0x0)) {
    iVar2 = (**(code **)(*plVar3 + 0x130))();
    if (iVar2 != 0) {
      iVar4 = 0;
      do {
        cVar1 = IOService::isInactive();
        if (cVar1 == '\0') {
          plVar3 = (longlong *)(**(code **)(**(longlong **)(unaff_RDI[0x1b] + 8) + 0x1e8))();
          (**(code **)(*plVar3 + 0x148))();
          (**(code **)(*unaff_RDI + 0x850))();
        }
        iVar4 = iVar4 + 1;
      } while (iVar2 != iVar4);
    }
    (**(code **)(**(longlong **)(unaff_RDI[0x1b] + 8) + 0x28))();
    *(undefined8 *)(unaff_RDI[0x1b] + 8) = 0;
  }
  return;
}



/* IOAudioControl::withAttributes @ 0xc2e */

/* IOAudioControl::withAttributes(unsigned int, OSObject*, unsigned int, char const*, unsigned int,
   unsigned int, unsigned int) */

longlong *
IOAudioControl::withAttributes
          (uint param_1,OSObject *param_2,uint param_3,char *param_4,uint param_5,uint param_6,
          uint param_7)

{
  char cVar1;
  longlong *plVar2;
  undefined4 in_register_0000000c;
  IOService *this;
  ulonglong uVar3;
  
  this = (IOService *)CONCAT44(in_register_0000000c,param_1);
  uVar3 = (ulonglong)param_2 & 0xffffffff;
  plVar2 = (longlong *)_OSObject_typed_operator_new();
  IOService::IOService(this,(OSMetaClass *)param_2);
  *plVar2 = (longlong)&PTR__IOAudioControl_0001e150;
  OSMetaClass::instanceConstructed();
  cVar1 = (**(code **)(*plVar2 + 0x910))(uVar3);
  if (cVar1 == '\0') {
    (**(code **)(*plVar2 + 0x28))();
    plVar2 = (longlong *)0x0;
  }
  return plVar2;
}



/* IOAudioControl::init @ 0xcde */

/* IOAudioControl::init(unsigned int, OSObject*, unsigned int, char const*, unsigned int, unsigned
   int, unsigned int, OSDictionary*) */

undefined8
IOAudioControl::init
          (uint param_1,OSObject *param_2,uint param_3,char *param_4,uint param_5,uint param_6,
          uint param_7,OSDictionary *param_8)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 in_register_0000000c;
  int unaff_ESI;
  longlong *unaff_RDI;
  undefined4 in_register_00000084;
  int local_res10;
  
  uVar1 = (**(code **)(PTR_vtable_0001e050 + 600))
                    (CONCAT44(in_register_0000000c,param_1),param_2,param_3,(int)param_4);
  if (((unaff_ESI != 0) && (param_2 != (OSObject *)0x0)) && ((char)uVar1 != '\0')) {
    (**(code **)(*unaff_RDI + 0x9f8))();
    (**(code **)(*unaff_RDI + 0x9e8))();
    (**(code **)(*unaff_RDI + 0xa10))();
    (**(code **)(*unaff_RDI + 0xa00))();
    if (CONCAT44(in_register_00000084,param_3) != 0) {
      (**(code **)(*unaff_RDI + 0x9e0))();
    }
    if (local_res10 != 0) {
      (**(code **)(*unaff_RDI + 0xa08))();
    }
    (**(code **)(*unaff_RDI + 0xa28))();
    lVar2 = OSSet::withCapacity(uVar1);
    unaff_RDI[0x1a] = lVar2;
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)_IOMallocTypeImpl();
      unaff_RDI[0x1b] = (longlong)puVar3;
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        *(undefined1 *)(unaff_RDI + 0x13) = 0;
        return 1;
      }
    }
  }
  return 0;
}



/* IOAudioControl::setType @ 0xdf8 */

/* IOAudioControl::setType(unsigned int) */

void IOAudioControl::setType(uint param_1)

{
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  
  *(undefined4 *)((longlong)unaff_RDI + 0xa4) = unaff_ESI;
                    /* WARNING: Could not recover jumptable at 0x00000e1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x280))(0x20,unaff_ESI);
  return;
}



/* IOAudioControl::setSubType @ 0xe1e */

/* IOAudioControl::setSubType(unsigned int) */

void IOAudioControl::setSubType(uint param_1)

{
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  
  *(undefined4 *)(unaff_RDI + 0x15) = unaff_ESI;
                    /* WARNING: Could not recover jumptable at 0x00000e41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x280))(0x20,unaff_ESI);
  return;
}



/* IOAudioControl::setChannelName @ 0xe44 */

/* IOAudioControl::setChannelName(char const*) */

void IOAudioControl::setChannelName(char *param_1)

{
  longlong *unaff_RDI;
  
                    /* WARNING: Could not recover jumptable at 0x00000e5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x270))();
  return;
}



/* IOAudioControl::setUsage @ 0xe60 */

/* IOAudioControl::setUsage(unsigned int) */

void IOAudioControl::setUsage(uint param_1)

{
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  
  *(undefined4 *)((longlong)unaff_RDI + 0xac) = unaff_ESI;
                    /* WARNING: Could not recover jumptable at 0x00000e83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x280))(0x20,unaff_ESI);
  return;
}



/* IOAudioControl::setCoreAudioPropertyID @ 0xe86 */

/* IOAudioControl::setCoreAudioPropertyID(unsigned int) */

void IOAudioControl::setCoreAudioPropertyID(uint param_1)

{
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x280))(0x20,unaff_ESI);
                    /* WARNING: Could not recover jumptable at 0x00000ebe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0xa08))();
  return;
}



/* IOAudioControl::setReadOnlyFlag @ 0xec0 */

/* IOAudioControl::setReadOnlyFlag() */

void __thiscall IOAudioControl::setReadOnlyFlag(IOAudioControl *this)

{
  longlong *unaff_RDI;
  
                    /* WARNING: Could not recover jumptable at 0x00000edb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x278))(this,1);
  return;
}



/* IOAudioControl::getType @ 0xede */

/* IOAudioControl::getType() */

undefined4 IOAudioControl::getType(void)

{
  longlong unaff_RDI;
  
  return *(undefined4 *)(unaff_RDI + 0xa4);
}



/* IOAudioControl::getSubType @ 0xeea */

/* IOAudioControl::getSubType() */

undefined4 IOAudioControl::getSubType(void)

{
  longlong unaff_RDI;
  
  return *(undefined4 *)(unaff_RDI + 0xa8);
}



/* IOAudioControl::getUsage @ 0xef6 */

/* IOAudioControl::getUsage() */

undefined4 IOAudioControl::getUsage(void)

{
  longlong unaff_RDI;
  
  return *(undefined4 *)(unaff_RDI + 0xac);
}



/* IOAudioControl::free @ 0xf02 */

/* IOAudioControl::free() */

void IOAudioControl::free(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong unaff_RDI;
  
  if (*(longlong **)(unaff_RDI + 0xd0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0xd0) + 0x28))();
    *(undefined8 *)(unaff_RDI + 0xd0) = 0;
  }
  if (*(longlong **)(unaff_RDI + 200) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 200) + 0x28))();
  }
  *(undefined8 *)(unaff_RDI + 200) = 0;
  plVar2 = *(longlong **)(unaff_RDI + 0x90);
  if (plVar2 != (longlong *)0x0) {
    if (*(longlong **)(unaff_RDI + 0x88) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x148))();
      plVar2 = *(longlong **)(unaff_RDI + 0x90);
    }
    (**(code **)(*plVar2 + 0x28))();
    *(undefined8 *)(unaff_RDI + 0x90) = 0;
  }
  if (*(longlong **)(unaff_RDI + 0x88) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x28))();
    *(undefined8 *)(unaff_RDI + 0x88) = 0;
  }
  lVar1 = *(longlong *)(unaff_RDI + 0xd8);
  if (lVar1 != 0) {
    if (*(longlong **)(lVar1 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 8) + 0x28))();
      lVar1 = *(longlong *)(unaff_RDI + 0xd8);
    }
    *(undefined8 *)(lVar1 + 8) = 0;
    *(undefined8 *)(unaff_RDI + 0xd8) = 0;
    _IOFreeTypeImpl();
    *(undefined8 *)(unaff_RDI + 0xd8) = 0;
  }
  if (*(longlong **)(unaff_RDI + 0xb0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0xb0) + 0x28))();
  }
  *(undefined8 *)(unaff_RDI + 0xb0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00001014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_vtable_0001e050 + 0xa0))();
  return;
}



/* IOAudioControl::start @ 0x101a */

/* IOAudioControl::start(IOService*) */

undefined4 __thiscall IOAudioControl::start(IOAudioControl *this,IOService *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uintptr_t arg1;
  uintptr_t unaff_EBP;
  IOService *unaff_RSI;
  longlong unaff_RDI;
  uintptr_t unaff_retaddr;
  
  puVar1 = PTR__kdebug_enable_0001e070;
  arg1 = (uintptr_t)unaff_RSI;
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    this = (IOAudioControl *)0x0;
    _kernel_debug(0,arg1,0,0,unaff_EBP,unaff_retaddr);
    param_1 = unaff_RSI;
  }
  uVar2 = (**(code **)(PTR_vtable_0001e050 + 0x5d0))();
  if ((char)uVar2 != '\0') {
    *(undefined1 *)(unaff_RDI + 0x98) = 1;
    uVar3 = OSMetaClassBase::safeMetaCast((OSMetaClassBase *)this,(OSMetaClass *)param_1);
    **(undefined8 **)(unaff_RDI + 0xd8) = uVar3;
    if ((*(uint *)puVar1 & 0xfffffff7) != 0) {
      _kernel_debug(1,arg1,0,0,unaff_EBP,unaff_retaddr);
    }
  }
  return uVar2;
}



/* IOAudioControl::attachAndStart @ 0x10c4 */

/* IOAudioControl::attachAndStart(IOService*) */

ulonglong IOAudioControl::attachAndStart(IOService *param_1)

{
  char cVar1;
  longlong *unaff_RDI;
  undefined8 unaff_R15;
  ulonglong uVar2;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x670))();
  if (cVar1 != '\0') {
    uVar2 = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),1);
    if ((*(byte *)(unaff_RDI + 0x13) & 1) != 0) goto LAB_00001113;
    cVar1 = (**(code **)(*unaff_RDI + 0x5c0))();
    if (cVar1 != '\0') goto LAB_00001113;
    (**(code **)(*unaff_RDI + 0x678))();
  }
  uVar2 = 0;
LAB_00001113:
  return uVar2 & 0xffffffff;
}



/* IOAudioControl::stop @ 0x1122 */

/* IOAudioControl::stop(IOService*) */

void IOAudioControl::stop(IOService *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *unaff_RDI;
  
  if ((longlong *)unaff_RDI[0x1a] != (longlong *)0x0) {
    iVar2 = (**(code **)(*(longlong *)unaff_RDI[0x1a] + 0x130))();
    if (iVar2 != 0) {
      plVar3 = (longlong *)(**(code **)(*unaff_RDI + 0x930))();
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x1c8))(0,0,0,0);
      }
    }
  }
  if ((longlong *)unaff_RDI[0x19] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x19] + 0x28))();
    unaff_RDI[0x19] = 0;
    unaff_RDI[0x18] = 0;
  }
  lVar1 = unaff_RDI[0x1b];
  if (*(int *)(lVar1 + 0x14) == 0) {
    *(undefined4 *)(lVar1 + 0x10) = 2;
    plVar3 = (longlong *)unaff_RDI[0x12];
    if (plVar3 != (longlong *)0x0) {
      if ((longlong *)unaff_RDI[0x11] != (longlong *)0x0) {
        (**(code **)(*(longlong *)unaff_RDI[0x11] + 0x148))();
        plVar3 = (longlong *)unaff_RDI[0x12];
      }
      (**(code **)(*plVar3 + 0x28))();
      unaff_RDI[0x12] = 0;
    }
  }
  else {
    *(undefined4 *)(lVar1 + 0x10) = 1;
  }
  (**(code **)(PTR_vtable_0001e050 + 0x5d8))();
  *(undefined1 *)(unaff_RDI + 0x13) = 0;
  return;
}



/* IOAudioControl::detachUserClientsAction @ 0x1212 */

/* IOAudioControl::detachUserClientsAction(OSObject*, void*, void*, void*, void*) */

undefined8
IOAudioControl::detachUserClientsAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  
  if (unaff_RDI != 0) {
    plVar1 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,param_2);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00001233. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0xa48))();
      return uVar2;
    }
  }
  return 0xe00002c2;
}



/* IOAudioControl::getIsStarted @ 0x1240 */

/* IOAudioControl::getIsStarted() */

byte IOAudioControl::getIsStarted(void)

{
  longlong unaff_RDI;
  
  return *(byte *)(unaff_RDI + 0x98) & 1;
}



/* IOAudioControl::getWorkLoop @ 0x124e */

/* IOAudioControl::getWorkLoop() */

undefined8 IOAudioControl::getWorkLoop(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(unaff_RDI + 0x88);
}



/* IOAudioControl::setWorkLoop @ 0x125c */

/* IOAudioControl::setWorkLoop(IOWorkLoop*) */

void __thiscall IOAudioControl::setWorkLoop(IOAudioControl *this,IOWorkLoop *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  if ((*(longlong *)(unaff_RDI + 0x88) == 0) &&
     (*(longlong **)(unaff_RDI + 0x88) = unaff_RSI, unaff_RSI != (longlong *)0x0)) {
    (**(code **)(*unaff_RSI + 0x20))();
    lVar1 = IOCommandGate::commandGate
                      ((OSObject *)this,
                       (_func_int_OSObject_ptr_void_ptr_void_ptr_void_ptr_void_ptr *)param_1);
    *(longlong *)(unaff_RDI + 0x90) = lVar1;
    if (lVar1 != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x140);
                    /* WARNING: Could not recover jumptable at 0x000012bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  return;
}



/* IOAudioControl::getCommandGate @ 0x12be */

/* IOAudioControl::getCommandGate() */

undefined8 IOAudioControl::getCommandGate(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(unaff_RDI + 0x90);
}



/* IOAudioControl::_setValueAction @ 0x12cc */

/* IOAudioControl::_setValueAction(OSObject*, void*, void*, void*, void*) */

undefined4
IOAudioControl::_setValueAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 unaff_SIL;
  longlong unaff_RDI;
  
  uVar2 = 0xe00002c2;
  if (unaff_RDI != 0) {
    plVar3 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,param_2);
    if (plVar3 != (longlong *)0x0) {
      plVar4 = (longlong *)(**(code **)(*plVar3 + 0x930))();
      if (plVar4 == (longlong *)0x0) {
        uVar2 = 0xe00002bc;
      }
      else {
        lVar1 = plVar3[0x1b];
        if ((lVar1 != 0) && (*(uint *)(lVar1 + 0x10) < 2)) {
          *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
        }
        uVar2 = (**(code **)(*plVar4 + 0x1c8))();
        setCommandGateUsage(param_2,(bool)unaff_SIL);
      }
    }
  }
  return uVar2;
}



/* IOAudioControl::setCommandGateUsage @ 0x1370 */

/* IOAudioControl::setCommandGateUsage(IOAudioControl*, bool) */

void IOAudioControl::setCommandGateUsage(IOAudioControl *param_1,bool param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  char unaff_SIL;
  longlong *plVar4;
  longlong unaff_RDI;
  
  lVar2 = *(longlong *)(unaff_RDI + 0xd8);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x10);
    if (unaff_SIL == '\0') {
      if (uVar1 == 1) {
        if ((0 < *(int *)(lVar2 + 0x14)) &&
           (iVar3 = *(int *)(lVar2 + 0x14) + -1, *(int *)(lVar2 + 0x14) = iVar3, iVar3 == 0)) {
          *(undefined4 *)(lVar2 + 0x10) = 2;
          plVar4 = *(longlong **)(unaff_RDI + 0x90);
          if (plVar4 != (longlong *)0x0) {
            if (*(longlong **)(unaff_RDI + 0x88) != (longlong *)0x0) {
              (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x148))();
              plVar4 = *(longlong **)(unaff_RDI + 0x90);
            }
            (**(code **)(*plVar4 + 0x28))();
            *(undefined8 *)(unaff_RDI + 0x90) = 0;
          }
        }
      }
      else if ((uVar1 == 0) && (0 < *(int *)(lVar2 + 0x14))) {
        *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + -1;
      }
    }
    else if (uVar1 < 2) {
      *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
    }
  }
  return;
}



/* IOAudioControl::setValueAction @ 0x140a */

/* IOAudioControl::setValueAction(OSObject*, void*, void*, void*, void*) */

undefined8
IOAudioControl::setValueAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  
  if (unaff_RDI != 0) {
    plVar1 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,param_2);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0000143f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x970))(*(code **)(*plVar1 + 0x970));
      return uVar2;
    }
  }
  return 0xe00002c2;
}



/* IOAudioControl::setValue @ 0x144e */

/* IOAudioControl::setValue(OSObject*) */

uintptr_t __thiscall IOAudioControl::setValue(IOAudioControl *this,OSObject *param_1)

{
  char cVar1;
  uint debugid;
  uintptr_t arg2;
  uint32_t debugid_00;
  longlong lVar2;
  char *pcVar3;
  uintptr_t arg1;
  OSMetaClass *pOVar4;
  OSMetaClass *unaff_RSI;
  longlong *unaff_RDI;
  uintptr_t unaff_R14D;
  uintptr_t unaff_R15D;
  
  lVar2 = OSMetaClassBase::safeMetaCast((OSMetaClassBase *)this,(OSMetaClass *)param_1);
  arg1 = (uintptr_t)unaff_RSI;
  if (lVar2 == 0) {
    pcVar3 = "+ IOAudioControl[%p]::setValue(%p)\n";
    pOVar4 = (OSMetaClass *)0x0;
    __os_log_internal();
    if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
      pcVar3 = (char *)0x0;
      pOVar4 = unaff_RSI;
      _kernel_debug(0,arg1,0,0,unaff_R14D,unaff_R15D);
    }
    if (unaff_RSI == (OSMetaClass *)0x0) {
      arg2 = 0xe00002c2;
      goto LAB_00001600;
    }
  }
  else {
    (**(code **)(*(longlong *)unaff_RSI + 0x148))();
    pOVar4 = (OSMetaClass *)0x0;
    __os_log_internal("+ IOAudioControl[%p]::setValue(int = %d)\n");
    debugid = (**(code **)(*(longlong *)unaff_RSI + 0x148))();
    pcVar3 = PTR__kdebug_enable_0001e070;
    if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
      pcVar3 = (char *)(ulonglong)debugid;
      pOVar4 = unaff_RSI;
      _kernel_debug(debugid,arg1,0,0,unaff_R14D,unaff_R15D);
    }
  }
  if ((longlong *)unaff_RDI[0x16] != (longlong *)0x0) {
    cVar1 = (**(code **)(*(longlong *)unaff_RDI[0x16] + 0x40))();
    arg2 = 0;
    if (cVar1 != '\0') goto LAB_00001600;
  }
  arg2 = (**(code **)(*unaff_RDI + 0xa18))();
  if (arg2 == 0) {
    arg2 = (**(code **)(*unaff_RDI + 0xa30))();
    if (arg2 == 0) {
      arg2 = (**(code **)(*unaff_RDI + 0xa20))();
      goto LAB_00001600;
    }
    pcVar3 = "  Error 0x%x received from driver - value not set!\n";
    pOVar4 = (OSMetaClass *)&MACH_HEADER.ncmds;
    __os_log_internal("  Error 0x%x received from driver - value not set!\n",0x10,arg2);
  }
  else {
    pcVar3 = "  Error 0x%x - invalid value.\n";
    pOVar4 = (OSMetaClass *)&MACH_HEADER.ncmds;
    __os_log_internal("  Error 0x%x - invalid value.\n",0x10,arg2);
  }
  _IOLog();
LAB_00001600:
  lVar2 = OSMetaClassBase::safeMetaCast((OSMetaClassBase *)pcVar3,pOVar4);
  if (lVar2 == 0) {
    __os_log_internal("- IOAudioControl[%p]::setValue(%p) returns 0x%lX\n",0);
    if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) == 0) {
      return arg2;
    }
    debugid_00 = 0;
  }
  else {
    (**(code **)(*(longlong *)unaff_RSI + 0x148))();
    __os_log_internal("- IOAudioControl[%p]::setValue(int = %d) returns 0x%lX\n",0);
    debugid_00 = (**(code **)(*(longlong *)unaff_RSI + 0x148))();
    if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) == 0) {
      return arg2;
    }
  }
  _kernel_debug(debugid_00,arg1,arg2,0,unaff_R14D,unaff_R15D);
  return arg2;
}



/* IOAudioControl::setValue @ 0x16d4 */

/* IOAudioControl::setValue(int) */

uintptr_t IOAudioControl::setValue(int param_1)

{
  uintptr_t arg2;
  longlong *plVar1;
  char *pcVar2;
  uint uVar3;
  uint32_t unaff_ESI;
  longlong *unaff_RDI;
  uintptr_t unaff_R14D;
  uintptr_t unaff_R15D;
  char *pcVar4;
  
  pcVar2 = "+ IOAudioControl[%p]::setValue(SInt = %d)\n";
  uVar3 = 0;
  __os_log_internal();
  pcVar4 = (char *)(longlong)(int)unaff_ESI;
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    uVar3 = 0;
    _kernel_debug(unaff_ESI,0,0,0,unaff_R14D,unaff_R15D);
    pcVar2 = pcVar4;
  }
  plVar1 = (longlong *)OSNumber::withNumber((ulonglong)pcVar2,uVar3);
  if (plVar1 == (longlong *)0x0) {
    arg2 = 0xe00002bc;
  }
  else {
    arg2 = (**(code **)(*unaff_RDI + 0x970))();
    (**(code **)(*plVar1 + 0x28))();
  }
  __os_log_internal("- IOAudioControl[%p]::setValue(SInt = %d) returns 0x%lX\n");
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug(unaff_ESI,0,arg2,0,unaff_R14D,unaff_R15D);
  }
  return arg2;
}



/* IOAudioControl::validateValue @ 0x17d4 */

/* IOAudioControl::validateValue(OSObject*) */

undefined8 IOAudioControl::validateValue(OSObject *param_1)

{
  return 0;
}



/* IOAudioControl::updateValue @ 0x17dc */

/* IOAudioControl::updateValue(OSObject*) */

int IOAudioControl::updateValue(OSObject *param_1)

{
  int iVar1;
  longlong *unaff_RDI;
  
  iVar1 = (**(code **)(*unaff_RDI + 0xa28))();
  if (iVar1 == 0) {
    (**(code **)(*unaff_RDI + 0x9d8))();
  }
  return iVar1;
}



/* IOAudioControl::_setValue @ 0x180a */

/* IOAudioControl::_setValue(OSObject*) */

undefined8 IOAudioControl::_setValue(OSObject *param_1)

{
  longlong *plVar1;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  
  plVar1 = (longlong *)unaff_RDI[0x16];
  if (plVar1 != unaff_RSI) {
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
    unaff_RDI[0x16] = (longlong)unaff_RSI;
    (**(code **)(*unaff_RSI + 0x20))();
    (**(code **)(*unaff_RDI + 0x268))();
  }
  return 0;
}



/* IOAudioControl::hardwareValueChanged @ 0x1860 */

/* IOAudioControl::hardwareValueChanged(OSObject*) */

ulonglong IOAudioControl::hardwareValueChanged(OSObject *param_1)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  if (unaff_RSI == 0) {
    uVar3 = 0xe00002c2;
  }
  else {
    if (((longlong *)unaff_RDI[0x16] != (longlong *)0x0) &&
       (cVar1 = (**(code **)(*(longlong *)unaff_RDI[0x16] + 0x40))(), cVar1 != '\0')) {
      return 0;
    }
    uVar2 = (**(code **)(*unaff_RDI + 0xa18))();
    if (uVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00001907. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*unaff_RDI + 0xa20))();
      return uVar3;
    }
    uVar3 = (ulonglong)uVar2;
    __os_log_internal("IOAudioControl::hardwareValueChanged - Error 0x%x - invalid value.\n",0x10,
                      uVar2);
    _IOLog();
  }
  return uVar3;
}



/* IOAudioControl::setValueChangeHandler @ 0x190a */

/* IOAudioControl::setValueChangeHandler(int (*)(OSObject*, IOAudioControl*, int, int), OSObject*)
    */

void IOAudioControl::setValueChangeHandler
               (_func_int_OSObject_ptr_IOAudioControl_ptr_int_int *param_1,OSObject *param_2)

{
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  *(undefined4 *)(unaff_RDI + 0x17) = 0;
  unaff_RDI[0x18] = unaff_RSI;
                    /* WARNING: Could not recover jumptable at 0x0000192d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x960))();
  return;
}



/* IOAudioControl::setValueChangeHandler @ 0x1930 */

/* IOAudioControl::setValueChangeHandler(int (*)(OSObject*, IOAudioControl*, void const*, unsigned
   int, void const*, unsigned int), OSObject*) */

void IOAudioControl::setValueChangeHandler
               (_func_int_OSObject_ptr_IOAudioControl_ptr_void_ptr_uint_void_ptr_uint *param_1,
               OSObject *param_2)

{
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  *(undefined4 *)(unaff_RDI + 0x17) = 1;
  unaff_RDI[0x18] = unaff_RSI;
                    /* WARNING: Could not recover jumptable at 0x00001953. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x960))();
  return;
}



/* IOAudioControl::setValueChangeHandler @ 0x1956 */

/* IOAudioControl::setValueChangeHandler(int (*)(OSObject*, IOAudioControl*, OSObject*, OSObject*),
   OSObject*) */

void IOAudioControl::setValueChangeHandler
               (_func_int_OSObject_ptr_IOAudioControl_ptr_OSObject_ptr_OSObject_ptr *param_1,
               OSObject *param_2)

{
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  *(undefined4 *)(unaff_RDI + 0x17) = 2;
  unaff_RDI[0x18] = unaff_RSI;
                    /* WARNING: Could not recover jumptable at 0x00001979. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x960))();
  return;
}



/* IOAudioControl::setValueChangeTarget @ 0x197c */

/* IOAudioControl::setValueChangeTarget(OSObject*) */

void IOAudioControl::setValueChangeTarget(OSObject *param_1)

{
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  if (unaff_RSI != (longlong *)0x0) {
    (**(code **)(*unaff_RSI + 0x20))();
  }
  if (*(longlong **)(unaff_RDI + 200) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 200) + 0x28))();
  }
  *(longlong **)(unaff_RDI + 200) = unaff_RSI;
  return;
}



/* IOAudioControl::performValueChange @ 0x19b6 */

/* IOAudioControl::performValueChange(OSObject*) */

undefined8 __thiscall IOAudioControl::performValueChange(IOAudioControl *this,OSObject *param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  OSMetaClassBase *UNRECOVERED_JUMPTABLE;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  UNRECOVERED_JUMPTABLE = (OSMetaClassBase *)unaff_RDI[0x18];
  if (UNRECOVERED_JUMPTABLE == (OSMetaClassBase *)0x0) {
    return 0xe00002bc;
  }
  iVar1 = (int)unaff_RDI[0x17];
  if (iVar1 == 2) {
    (**(code **)(*unaff_RDI + 0x988))();
                    /* WARNING: Could not recover jumptable at 0x00001b1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*(code *)UNRECOVERED_JUMPTABLE)();
    return uVar6;
  }
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0xe00002bc;
    }
    (**(code **)(*unaff_RDI + 0x988))();
    UNRECOVERED_JUMPTABLE = (OSMetaClassBase *)PTR_metaClass_0001e020;
    plVar4 = (longlong *)
             OSMetaClassBase::safeMetaCast
                       ((OSMetaClassBase *)PTR_metaClass_0001e020,(OSMetaClass *)param_1);
    if (plVar4 == (longlong *)0x0) {
      __os_log_internal("IOAudioControl::performValueChange - Error: can\'t call handler - int handler set and old value is not an OSNumber.\n"
                        ,0x10);
    }
    else {
      plVar5 = (longlong *)
               OSMetaClassBase::safeMetaCast(UNRECOVERED_JUMPTABLE,(OSMetaClass *)param_1);
      if (plVar5 != (longlong *)0x0) {
        UNRECOVERED_JUMPTABLE_00 = (code *)unaff_RDI[0x18];
        uVar2 = (**(code **)(*plVar4 + 0x148))();
        uVar3 = (**(code **)(*plVar5 + 0x148))();
                    /* WARNING: Could not recover jumptable at 0x00001a83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*UNRECOVERED_JUMPTABLE_00)(uVar3,uVar2);
        return uVar6;
      }
      __os_log_internal("IOAudioControl::performValueChange - Error: can\'t call handler - int handler set and new value is not an OSNumber.\n"
                        ,0x10);
    }
LAB_00001c3f:
    _IOLog();
    return 0xe00002bc;
  }
  lVar7 = (**(code **)(*unaff_RDI + 0x988))();
  uVar2 = 0;
  if (lVar7 == 0) {
    uVar6 = 0;
    uVar3 = 0;
  }
  else {
    (**(code **)(*unaff_RDI + 0x988))();
    UNRECOVERED_JUMPTABLE = (OSMetaClassBase *)PTR_metaClass_0001e010;
    plVar4 = (longlong *)
             OSMetaClassBase::safeMetaCast
                       ((OSMetaClassBase *)PTR_metaClass_0001e010,(OSMetaClass *)param_1);
    if (plVar4 == (longlong *)0x0) {
      __os_log_internal("IOAudioControl::performValueChange - Error: can\'t call handler - data handler set and old value is not an OSData.\n"
                        ,0x10);
      goto LAB_00001c3f;
    }
    uVar6 = (**(code **)(*plVar4 + 0x178))();
    uVar3 = (**(code **)(*plVar4 + 0x140))();
  }
  if (unaff_RSI == 0) {
    uVar8 = 0;
  }
  else {
    plVar4 = (longlong *)OSMetaClassBase::safeMetaCast(UNRECOVERED_JUMPTABLE,(OSMetaClass *)param_1)
    ;
    if (plVar4 == (longlong *)0x0) {
      __os_log_internal("IOAudioControl::performValueChange - Error: can\'t call handler - data handler set and new value is not an OSData.\n"
                        ,0x10);
      goto LAB_00001c3f;
    }
    uVar8 = (**(code **)(*plVar4 + 0x178))();
    uVar2 = (**(code **)(*plVar4 + 0x140))();
  }
                    /* WARNING: Could not recover jumptable at 0x00001bc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*(code *)unaff_RDI[0x18])(uVar3,uVar6,uVar8,uVar2);
  return uVar6;
}



/* IOAudioControl::flushValue @ 0x1c5a */

/* IOAudioControl::flushValue() */

void IOAudioControl::flushValue(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x988))();
                    /* WARNING: Could not recover jumptable at 0x00001c82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0xa30))(*(code **)(*unaff_RDI + 0xa30));
  return;
}



/* IOAudioControl::getValue @ 0x1c84 */

/* IOAudioControl::getValue() */

undefined8 IOAudioControl::getValue(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(unaff_RDI + 0xb0);
}



/* IOAudioControl::getIntValue @ 0x1c92 */

/* IOAudioControl::getIntValue() */

undefined8 IOAudioControl::getIntValue(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  OSMetaClass *in_RDX;
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x988))();
  plVar1 = (longlong *)
           OSMetaClassBase::safeMetaCast((OSMetaClassBase *)PTR_metaClass_0001e020,in_RDX);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00001cbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x148))();
    return uVar2;
  }
  return 0;
}



/* IOAudioControl::getDataBytes @ 0x1cc8 */

/* IOAudioControl::getDataBytes() */

undefined8 IOAudioControl::getDataBytes(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  OSMetaClass *in_RDX;
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x988))();
  plVar1 = (longlong *)
           OSMetaClassBase::safeMetaCast((OSMetaClassBase *)PTR_metaClass_0001e010,in_RDX);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00001cf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x178))();
    return uVar2;
  }
  return 0;
}



/* IOAudioControl::getDataLength @ 0x1cfe */

/* IOAudioControl::getDataLength() */

undefined8 IOAudioControl::getDataLength(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  OSMetaClass *in_RDX;
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x988))();
  plVar1 = (longlong *)
           OSMetaClassBase::safeMetaCast((OSMetaClassBase *)PTR_metaClass_0001e010,in_RDX);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00001d29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x140))();
    return uVar2;
  }
  return 0;
}



/* IOAudioControl::sendValueChangeNotification @ 0x1d34 */

/* IOAudioControl::sendValueChangeNotification() */

void __thiscall IOAudioControl::sendValueChangeNotification(IOAudioControl *this)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong unaff_RDI;
  
  if ((*(longlong *)(unaff_RDI + 0xd0) != 0) &&
     (plVar1 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)this),
     plVar1 != (longlong *)0x0)) {
    while (plVar2 = (longlong *)(**(code **)(*plVar1 + 0x128))(), plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x9e8))();
    }
                    /* WARNING: Could not recover jumptable at 0x00001d85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))();
    return;
  }
  return;
}



/* IOAudioControl::setControlID @ 0x1d88 */

/* IOAudioControl::setControlID(unsigned int) */

void IOAudioControl::setControlID(uint param_1)

{
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  
  *(undefined4 *)((longlong)unaff_RDI + 0x9c) = unaff_ESI;
                    /* WARNING: Could not recover jumptable at 0x00001dab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x280))(0x20,unaff_ESI);
  return;
}



/* IOAudioControl::getControlID @ 0x1dae */

/* IOAudioControl::getControlID() */

undefined4 IOAudioControl::getControlID(void)

{
  longlong unaff_RDI;
  
  return *(undefined4 *)(unaff_RDI + 0x9c);
}



/* IOAudioControl::setChannelID @ 0x1dba */

/* IOAudioControl::setChannelID(unsigned int) */

void IOAudioControl::setChannelID(uint param_1)

{
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  
  *(undefined4 *)(unaff_RDI + 0x14) = unaff_ESI;
                    /* WARNING: Could not recover jumptable at 0x00001ddd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x280))(0x20,unaff_ESI);
  return;
}



/* IOAudioControl::getChannelID @ 0x1de0 */

/* IOAudioControl::getChannelID() */

undefined4 IOAudioControl::getChannelID(void)

{
  longlong unaff_RDI;
  
  return *(undefined4 *)(unaff_RDI + 0xa0);
}



/* IOAudioControl::setChannelNumber @ 0x1dec */

/* IOAudioControl::setChannelNumber(int) */

void IOAudioControl::setChannelNumber(int param_1)

{
  int unaff_ESI;
  longlong *unaff_RDI;
  
                    /* WARNING: Could not recover jumptable at 0x00001e0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x280))(0x20,(longlong)unaff_ESI);
  return;
}



/* IOAudioControl::createUserClient @ 0x1e0c */

/* IOAudioControl::createUserClient(task*, void*, unsigned int, IOAudioControlUserClient**) */

undefined8
IOAudioControl::createUserClient
          (task *param_1,void *param_2,uint param_3,IOAudioControlUserClient **param_4)

{
  longlong extraout_RAX;
  undefined8 uVar1;
  undefined4 in_register_00000084;
  
  IOAudioControlUserClient::withAudioControl
            ((IOAudioControl *)param_1,param_2,(void *)CONCAT44(in_register_00000084,param_3),
             (uint)param_4);
  if (extraout_RAX == 0) {
    uVar1 = 0xe00002bd;
  }
  else {
    *(longlong *)CONCAT44(in_register_00000084,param_3) = extraout_RAX;
    uVar1 = 0;
  }
  return uVar1;
}



/* IOAudioControl::newUserClient @ 0x1e32 */

/* IOAudioControl::newUserClient(task*, void*, unsigned int, IOUserClient**) */

undefined8
IOAudioControl::newUserClient(task *param_1,void *param_2,uint param_3,IOUserClient **param_4)

{
  return 0xe00002c7;
}



/* IOAudioControl::newUserClient @ 0x1e3e */

/* IOAudioControl::newUserClient(task*, void*, unsigned int, OSDictionary*, IOUserClient**) */

int IOAudioControl::newUserClient
              (task *param_1,void *param_2,uint param_3,OSDictionary *param_4,IOUserClient **param_5
              )

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *unaff_RDI;
  undefined4 in_register_00000084;
  longlong *local_40;
  undefined4 local_34;
  
  local_34 = SUB84(param_1,0);
  local_40 = (longlong *)0x0;
  *(undefined8 *)param_4 = 0;
  cVar1 = IOService::isInactive();
  iVar3 = -0x1ffffd40;
  if (cVar1 == '\0') {
    iVar2 = (**(code **)(*unaff_RDI + 0x778))(local_34,param_2,param_4);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = (**(code **)(*unaff_RDI + 0x868))
                        (local_34,param_2,&local_40,CONCAT44(in_register_00000084,param_3));
      if (local_40 != (longlong *)0x0 && iVar3 == 0) {
        if ((longlong *)unaff_RDI[0x11] == (longlong *)0x0) {
          (**(code **)(*local_40 + 0x28))();
          iVar3 = -0x1ffffd44;
        }
        else {
          iVar3 = 0;
          iVar2 = (**(code **)(*(longlong *)unaff_RDI[0x11] + 0x1a0))();
          if (iVar2 == 0) {
            *(longlong **)param_4 = local_40;
          }
          else {
            (**(code **)(*local_40 + 0x28))();
            iVar3 = iVar2;
          }
        }
      }
    }
  }
  return iVar3;
}



/* IOAudioControl::_addUserClientAction @ 0x1f48 */

/* IOAudioControl::_addUserClientAction(OSObject*, void*, void*, void*, void*) */

undefined4
IOAudioControl::_addUserClientAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 unaff_SIL;
  longlong unaff_RDI;
  
  uVar2 = 0xe00002c2;
  if (unaff_RDI != 0) {
    plVar3 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,param_2);
    if (plVar3 != (longlong *)0x0) {
      plVar4 = (longlong *)(**(code **)(*plVar3 + 0x930))();
      if (plVar4 == (longlong *)0x0) {
        uVar2 = 0xe00002bc;
      }
      else {
        lVar1 = plVar3[0x1b];
        if ((lVar1 != 0) && (*(uint *)(lVar1 + 0x10) < 2)) {
          *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
        }
        uVar2 = (**(code **)(*plVar4 + 0x1c8))();
        setCommandGateUsage(param_2,(bool)unaff_SIL);
      }
    }
  }
  return uVar2;
}



/* IOAudioControl::clientClosed @ 0x1fec */

/* IOAudioControl::clientClosed(IOAudioControlUserClient*) */

void IOAudioControl::clientClosed(IOAudioControlUserClient *param_1)

{
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  if ((unaff_RSI != 0) && (*(longlong **)(unaff_RDI + 0x88) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x1a0))();
  }
  return;
}



/* IOAudioControl::_removeUserClientAction @ 0x2030 */

/* IOAudioControl::_removeUserClientAction(OSObject*, void*, void*, void*, void*) */

undefined4
IOAudioControl::_removeUserClientAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 unaff_SIL;
  longlong unaff_RDI;
  
  uVar2 = 0xe00002c2;
  if (unaff_RDI != 0) {
    plVar3 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,param_2);
    if (plVar3 != (longlong *)0x0) {
      plVar4 = (longlong *)(**(code **)(*plVar3 + 0x930))();
      if (plVar4 == (longlong *)0x0) {
        uVar2 = 0xe00002bc;
      }
      else {
        lVar1 = plVar3[0x1b];
        if ((lVar1 != 0) && (*(uint *)(lVar1 + 0x10) < 2)) {
          *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
        }
        uVar2 = (**(code **)(*plVar4 + 0x1c8))();
        setCommandGateUsage(param_2,(bool)unaff_SIL);
      }
    }
  }
  return uVar2;
}



/* IOAudioControl::addUserClientAction @ 0x20d4 */

/* IOAudioControl::addUserClientAction(OSObject*, void*, void*, void*, void*) */

undefined8
IOAudioControl::addUserClientAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  
  if (unaff_RDI != 0) {
    plVar1 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,param_2);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00002109. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0xa38))(*(code **)(*plVar1 + 0xa38));
      return uVar2;
    }
  }
  return 0xe00002c2;
}



/* IOAudioControl::removeUserClientAction @ 0x2118 */

/* IOAudioControl::removeUserClientAction(OSObject*, void*, void*, void*, void*) */

undefined8
IOAudioControl::removeUserClientAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  
  if (unaff_RDI != 0) {
    plVar1 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,param_2);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0000214d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0xa40))(*(code **)(*plVar1 + 0xa40));
      return uVar2;
    }
  }
  return 0xe00002c2;
}



/* IOAudioControl::addUserClient @ 0x215c */

/* IOAudioControl::addUserClient(IOAudioControlUserClient*) */

undefined8 IOAudioControl::addUserClient(IOAudioControlUserClient *param_1)

{
  char cVar1;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 uVar2;
  
  cVar1 = IOService::isInactive();
  uVar2 = 0xe00002c0;
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*unaff_RSI + 0x670))();
    uVar2 = 0xe00002bc;
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*unaff_RSI + 0x5c0))();
      if ((cVar1 == '\0') || (*(longlong **)(unaff_RDI + 0xd0) == (longlong *)0x0)) {
        (**(code **)(*unaff_RSI + 0x678))();
      }
      else {
        (**(code **)(**(longlong **)(unaff_RDI + 0xd0) + 0x1c0))();
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



/* IOAudioControl::removeUserClient @ 0x21e2 */

/* IOAudioControl::removeUserClient(IOAudioControlUserClient*) */

undefined8 IOAudioControl::removeUserClient(IOAudioControlUserClient *param_1)

{
  char cVar1;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  (**(code **)(*unaff_RSI + 0x20))();
  (**(code **)(**(longlong **)(unaff_RDI + 0xd0) + 0x1d8))();
  cVar1 = IOService::isInactive();
  if (cVar1 == '\0') {
    (**(code **)(*unaff_RSI + 0x600))();
  }
  (**(code **)(*unaff_RSI + 0x28))();
  return 0;
}



/* IOAudioControl::detachUserClients @ 0x2236 */

/* IOAudioControl::detachUserClients() */

undefined8 __thiscall IOAudioControl::detachUserClients(IOAudioControl *this)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong unaff_RDI;
  
  cVar1 = IOService::isInactive();
  if ((cVar1 == '\0') &&
     (plVar2 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)this),
     plVar2 != (longlong *)0x0)) {
    while (plVar3 = (longlong *)(**(code **)(*plVar2 + 0x128))(), plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x600))();
    }
    (**(code **)(*plVar2 + 0x28))();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0xd0) + 0x158))();
  return 0;
}



/* IOAudioControl::setProperties @ 0x229e */

/* IOAudioControl::setProperties(OSObject*) */

undefined8 __thiscall IOAudioControl::setProperties(IOAudioControl *this,OSObject *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined8 uVar3;
  
  uVar3 = 0xe00002c2;
  if ((unaff_RSI != 0) &&
     (plVar1 = (longlong *)
               OSMetaClassBase::safeMetaCast((OSMetaClassBase *)this,(OSMetaClass *)param_1),
     plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x208))();
    lVar2 = OSMetaClassBase::safeMetaCast
                      ((OSMetaClassBase *)PTR_metaClass_0001e020,(OSMetaClass *)param_1);
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else if (*(longlong **)(unaff_RDI + 0x88) == (longlong *)0x0) {
      uVar3 = 0xe00002bc;
    }
    else {
      uVar3 = (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x1a0))(lVar2);
    }
  }
  return uVar3;
}



/* IOAudioControl::MetaClass::~MetaClass @ 0x234a */

/* IOAudioControl::MetaClass::~MetaClass() */

void __thiscall IOAudioControl::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* IOAudioControlUserClient::MetaClass::MetaClass @ 0x2398 */

/* IOAudioControlUserClient::MetaClass::MetaClass() */

void __thiscall IOAudioControlUserClient::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)&section_000000b8.flags,PTR_gMetaClass_0001e000,in_R8,in_R9D);
  *unaff_RDI = &PTR__MetaClass_0001f6b8;
  return;
}



/* IOAudioControlUserClient::MetaClass::~MetaClass @ 0x23ca */

/* IOAudioControlUserClient::MetaClass::~MetaClass() */

void __thiscall IOAudioControlUserClient::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* IOAudioControlUserClient::IOAudioControlUserClient @ 0x23d4 */

/* IOAudioControlUserClient::IOAudioControlUserClient(OSMetaClass const*) */

void __thiscall
IOAudioControlUserClient::IOAudioControlUserClient
          (IOAudioControlUserClient *this,OSMetaClass *param_1)

{
  undefined8 *unaff_RDI;
  
  IOUserClient::IOUserClient((IOUserClient *)this,param_1);
  *unaff_RDI = &PTR__IOAudioControlUserClient_0001ecb0;
  return;
}



/* IOAudioControlUserClient::IOAudioControlUserClient @ 0x23f4 */

/* IOAudioControlUserClient::IOAudioControlUserClient(OSMetaClass const*) */

void __thiscall
IOAudioControlUserClient::IOAudioControlUserClient
          (IOAudioControlUserClient *this,OSMetaClass *param_1)

{
  undefined8 *unaff_RDI;
  
  IOUserClient::IOUserClient((IOUserClient *)this,param_1);
  *unaff_RDI = &PTR__IOAudioControlUserClient_0001ecb0;
  return;
}



/* IOAudioControlUserClient::~IOAudioControlUserClient @ 0x2414 */

/* IOAudioControlUserClient::~IOAudioControlUserClient() */

void __thiscall IOAudioControlUserClient::~IOAudioControlUserClient(IOAudioControlUserClient *this)

{
  IOUserClient::~IOUserClient((IOUserClient *)this);
  return;
}



/* IOAudioControlUserClient::~IOAudioControlUserClient @ 0x241e */

/* IOAudioControlUserClient::~IOAudioControlUserClient() */

void __thiscall IOAudioControlUserClient::~IOAudioControlUserClient(IOAudioControlUserClient *this)

{
  IOUserClient::~IOUserClient((IOUserClient *)this);
  return;
}



/* IOAudioControlUserClient::~IOAudioControlUserClient @ 0x2428 */

/* IOAudioControlUserClient::~IOAudioControlUserClient() */

void __thiscall IOAudioControlUserClient::~IOAudioControlUserClient(IOAudioControlUserClient *this)

{
  IOUserClient::~IOUserClient((IOUserClient *)this);
  _OSObject_typed_operator_delete();
  return;
}



/* IOAudioControlUserClient::operator.delete @ 0x2450 */

/* IOAudioControlUserClient::operator delete(void*, unsigned long) */

void IOAudioControlUserClient::operator_delete(void *param_1,ulong param_2)

{
  _OSObject_typed_operator_delete();
  return;
}



/* IOAudioControlUserClient::getMetaClass @ 0x2468 */

/* IOAudioControlUserClient::getMetaClass() const */

undefined ** IOAudioControlUserClient::getMetaClass(void)

{
  return &gMetaClass;
}



/* IOAudioControlUserClient::MetaClass::MetaClass @ 0x2476 */

/* IOAudioControlUserClient::MetaClass::MetaClass() */

void __thiscall IOAudioControlUserClient::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)&section_000000b8.flags,PTR_gMetaClass_0001e000,in_R8,in_R9D);
  *unaff_RDI = &PTR__MetaClass_0001f6b8;
  return;
}



/* IOAudioControlUserClient::MetaClass::alloc @ 0x24a8 */

/* IOAudioControlUserClient::MetaClass::alloc() const */

undefined8 * IOAudioControlUserClient::MetaClass::alloc(void)

{
  undefined8 *puVar1;
  IOUserClient *in_RCX;
  OSMetaClass *in_RDX;
  
  puVar1 = (undefined8 *)_OSObject_typed_operator_new();
  IOUserClient::IOUserClient(in_RCX,in_RDX);
  *puVar1 = &PTR__IOAudioControlUserClient_0001ecb0;
  OSMetaClass::instanceConstructed();
  return puVar1;
}



/* IOAudioControlUserClient::operator.new @ 0x24f0 */

/* IOAudioControlUserClient::operator new(unsigned long) */

void * __thiscall
IOAudioControlUserClient::operator_new(IOAudioControlUserClient *this,ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)_OSObject_typed_operator_new();
  return pvVar1;
}



/* IOAudioControlUserClient::IOAudioControlUserClient @ 0x2504 */

/* IOAudioControlUserClient::IOAudioControlUserClient() */

void __thiscall IOAudioControlUserClient::IOAudioControlUserClient(IOAudioControlUserClient *this)

{
  OSMetaClass *in_RDX;
  undefined8 *unaff_RDI;
  
  IOUserClient::IOUserClient((IOUserClient *)this,in_RDX);
  *unaff_RDI = &PTR__IOAudioControlUserClient_0001ecb0;
  OSMetaClass::instanceConstructed();
  return;
}



/* IOAudioControlUserClient::IOAudioControlUserClient @ 0x2534 */

/* IOAudioControlUserClient::IOAudioControlUserClient() */

void __thiscall IOAudioControlUserClient::IOAudioControlUserClient(IOAudioControlUserClient *this)

{
  OSMetaClass *in_RDX;
  undefined8 *unaff_RDI;
  
  IOUserClient::IOUserClient((IOUserClient *)this,in_RDX);
  *unaff_RDI = &PTR__IOAudioControlUserClient_0001ecb0;
  OSMetaClass::instanceConstructed();
  return;
}



/* IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient2 @ 0x2564 */

/* IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient2() */

void __thiscall
IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient2(IOAudioControlUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient3 @ 0x257a */

/* IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient3() */

void __thiscall
IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient3(IOAudioControlUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient4 @ 0x2590 */

/* IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient4() */

void __thiscall
IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient4(IOAudioControlUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient5 @ 0x25a6 */

/* IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient5() */

void __thiscall
IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient5(IOAudioControlUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient6 @ 0x25bc */

/* IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient6() */

void __thiscall
IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient6(IOAudioControlUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient7 @ 0x25d2 */

/* IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient7() */

void __thiscall
IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient7(IOAudioControlUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient8 @ 0x25e8 */

/* IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient8() */

void __thiscall
IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient8(IOAudioControlUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient9 @ 0x25fe */

/* IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient9() */

void __thiscall
IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient9(IOAudioControlUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient10 @ 0x2614 */

/* IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient10() */

void __thiscall
IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient10(IOAudioControlUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient11 @ 0x262a */

/* IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient11() */

void __thiscall
IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient11(IOAudioControlUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient12 @ 0x2640 */

/* IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient12() */

void __thiscall
IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient12(IOAudioControlUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient13 @ 0x2656 */

/* IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient13() */

void __thiscall
IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient13(IOAudioControlUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient14 @ 0x266c */

/* IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient14() */

void __thiscall
IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient14(IOAudioControlUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient15 @ 0x2682 */

/* IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient15() */

void __thiscall
IOAudioControlUserClient::_RESERVEDIOAudioControlUserClient15(IOAudioControlUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioControlUserClient::initWithAudioControl @ 0x2698 */

/* IOAudioControlUserClient::initWithAudioControl(IOAudioControl*, task*, void*, unsigned int,
   OSDictionary*) */

ulonglong IOAudioControlUserClient::initWithAudioControl
                    (IOAudioControl *param_1,task *param_2,void *param_3,uint param_4,
                    OSDictionary *param_5)

{
  byte bVar1;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 in_register_0000008c;
  
  if (CONCAT44(in_register_0000008c,param_4) != 0) {
    (**(code **)(*(longlong *)CONCAT44(in_register_0000008c,param_4) + 0x1d0))
              (param_1,**(undefined8 **)PTR__kOSBooleanTrue_0001e068);
  }
  bVar1 = (**(code **)(*unaff_RDI + 0x8e0))
                    ((ulonglong)param_3 & 0xffffffff,param_1,
                     (longlong *)CONCAT44(in_register_0000008c,param_4));
  bVar1 = unaff_RSI != (longlong *)0x0 & bVar1;
  if (bVar1 == 1) {
    unaff_RDI[0x1c] = (longlong)unaff_RSI;
    (**(code **)(*unaff_RSI + 0x20))();
    unaff_RDI[0x1b] = (longlong)param_2;
    unaff_RDI[0x1d] = 0;
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),bVar1) & 0xffffffff;
}



/* IOAudioControlUserClient::sendChangeNotification @ 0x2740 */

/* IOAudioControlUserClient::sendChangeNotification(unsigned int) */

void IOAudioControlUserClient::sendChangeNotification(uint param_1)

{
  int iVar1;
  undefined4 in_register_0000000c;
  undefined4 unaff_ESI;
  longlong unaff_RDI;
  
  if (*(longlong *)(unaff_RDI + 0xe8) != 0) {
    *(undefined4 *)(*(longlong *)(unaff_RDI + 0xe8) + 0x20) = unaff_ESI;
    iVar1 = _mach_msg_send_from_kernel_proper(CONCAT44(in_register_0000000c,param_1));
    if ((iVar1 != 0) && (iVar1 != 0x10000004)) {
      __os_log_internal("IOAudioControlUserClient: sendRangeChangeNotification() failed - msg_send returned: %d\n"
                        ,0x10,iVar1);
      _IOLog();
      return;
    }
  }
  return;
}



/* IOAudioControlUserClient::withAudioControl @ 0x27ac */

/* IOAudioControlUserClient::withAudioControl(IOAudioControl*, task*, void*, unsigned int,
   OSDictionary*) */

longlong *
IOAudioControlUserClient::withAudioControl
          (IOAudioControl *param_1,task *param_2,void *param_3,uint param_4,OSDictionary *param_5)

{
  char cVar1;
  longlong *plVar2;
  task *ptVar3;
  
  ptVar3 = param_2;
  plVar2 = (longlong *)_OSObject_typed_operator_new();
  IOUserClient::IOUserClient((IOUserClient *)param_1,(OSMetaClass *)ptVar3);
  *plVar2 = (longlong)&PTR__IOAudioControlUserClient_0001ecb0;
  OSMetaClass::instanceConstructed();
  cVar1 = (**(code **)(*plVar2 + 0x968))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(*plVar2 + 0x28))();
    plVar2 = (longlong *)0x0;
  }
  return plVar2;
}



/* IOAudioControlUserClient::withAudioControl @ 0x2844 */

/* IOAudioControlUserClient::withAudioControl(IOAudioControl*, task*, void*, unsigned int) */

longlong *
IOAudioControlUserClient::withAudioControl
          (IOAudioControl *param_1,task *param_2,void *param_3,uint param_4)

{
  char cVar1;
  longlong *plVar2;
  task *ptVar3;
  
  ptVar3 = param_2;
  plVar2 = (longlong *)_OSObject_typed_operator_new();
  IOUserClient::IOUserClient((IOUserClient *)param_1,(OSMetaClass *)ptVar3);
  *plVar2 = (longlong)&PTR__IOAudioControlUserClient_0001ecb0;
  OSMetaClass::instanceConstructed();
  cVar1 = (**(code **)(*plVar2 + 0x9e0))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(*plVar2 + 0x28))();
    plVar2 = (longlong *)0x0;
  }
  return plVar2;
}



/* IOAudioControlUserClient::initWithAudioControl @ 0x28d0 */

/* IOAudioControlUserClient::initWithAudioControl(IOAudioControl*, task*, void*, unsigned int) */

ulonglong IOAudioControlUserClient::initWithAudioControl
                    (IOAudioControl *param_1,task *param_2,void *param_3,uint param_4)

{
  byte bVar1;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 unaff_R12;
  
  bVar1 = (**(code **)(*unaff_RDI + 0x8e8))((ulonglong)param_3 & 0xffffffff,param_1);
  bVar1 = unaff_RSI != (longlong *)0x0 & bVar1;
  if (bVar1 == 1) {
    unaff_RDI[0x1c] = (longlong)unaff_RSI;
    (**(code **)(*unaff_RSI + 0x20))();
    unaff_RDI[0x1b] = (longlong)param_2;
    unaff_RDI[0x1d] = 0;
  }
  return CONCAT71((int7)((ulonglong)unaff_R12 >> 8),bVar1) & 0xffffffff;
}



/* IOAudioControlUserClient::free @ 0x2934 */

/* IOAudioControlUserClient::free() */

void IOAudioControlUserClient::free(void)

{
  longlong unaff_RDI;
  
  if (*(longlong *)(unaff_RDI + 0xe8) != 0) {
    *(undefined8 *)(unaff_RDI + 0xe8) = 0;
    _IOFreeTypeImpl();
    *(undefined8 *)(unaff_RDI + 0xe8) = 0;
  }
  if (*(longlong **)(unaff_RDI + 0xe0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x28))();
    *(undefined8 *)(unaff_RDI + 0xe0) = 0;
  }
  if (*(longlong *)(unaff_RDI + 0xf0) != 0) {
    *(undefined8 *)(unaff_RDI + 0xf0) = 0;
    _IOFreeTypeImpl();
  }
                    /* WARNING: Could not recover jumptable at 0x000029b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_vtable_0001e040 + 0xa0))();
  return;
}



/* IOAudioControlUserClient::clientClose @ 0x29bc */

/* IOAudioControlUserClient::clientClose() */

undefined8 IOAudioControlUserClient::clientClose(void)

{
  char cVar1;
  longlong unaff_RDI;
  
  if (*(longlong *)(unaff_RDI + 0xe0) != 0) {
    cVar1 = IOService::isInactive();
    if (cVar1 == '\0') {
      cVar1 = IOService::isInactive();
      if (cVar1 == '\0') {
        (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x940))();
      }
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x28))();
    *(undefined8 *)(unaff_RDI + 0xe0) = 0;
  }
  return 0;
}



/* IOAudioControlUserClient::clientDied @ 0x2a1a */

/* IOAudioControlUserClient::clientDied() */

void IOAudioControlUserClient::clientDied(void)

{
  longlong *unaff_RDI;
  
                    /* WARNING: Could not recover jumptable at 0x00002a22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x8f0))();
  return;
}



/* IOAudioControlUserClient::registerNotificationPort @ 0x2a28 */

/* IOAudioControlUserClient::registerNotificationPort(ipc_port*, unsigned int, unsigned int) */

undefined8
IOAudioControlUserClient::registerNotificationPort(ipc_port *param_1,uint param_2,uint param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  
  cVar1 = IOService::isInactive();
  uVar2 = 0xe00002c0;
  if (cVar1 == '\0') {
    if (*(longlong *)(unaff_RDI + 0xe8) == 0) {
      puVar3 = (undefined8 *)_IOMallocTypeImpl();
      if (puVar3 == (undefined8 *)0x0) {
        uVar2 = 0xe00002bd;
      }
      else {
        *puVar3 = 0x3000000013;
        uVar2 = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        *(int *)((longlong)puVar3 + 0x24) = (int)param_1;
        puVar3[1] = unaff_RSI;
        *(undefined8 **)(unaff_RDI + 0xe8) = puVar3;
      }
    }
    else {
      *(int *)(*(longlong *)(unaff_RDI + 0xe8) + 0x24) = (int)param_1;
      *(undefined8 *)(*(longlong *)(unaff_RDI + 0xe8) + 8) = unaff_RSI;
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* IOAudioControlUserClient::sendValueChangeNotification @ 0x2aba */

/* IOAudioControlUserClient::sendValueChangeNotification() */

void IOAudioControlUserClient::sendValueChangeNotification(void)

{
  longlong *unaff_RDI;
  
                    /* WARNING: Could not recover jumptable at 0x00002acb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x960))();
  return;
}



/* IOAudioControlUserClient::MetaClass::~MetaClass @ 0x2ace */

/* IOAudioControlUserClient::MetaClass::~MetaClass() */

void __thiscall IOAudioControlUserClient::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* IOAudioTimerEvent::MetaClass::MetaClass @ 0x2b1c */

/* IOAudioTimerEvent::MetaClass::MetaClass() */

void __thiscall IOAudioTimerEvent::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)segment_command_00000020.segname,PTR_gMetaClass_0001e028,in_R8,in_R9D);
  *unaff_RDI = &PTR__MetaClass_0001f8e0;
  return;
}



/* IOAudioTimerEvent::MetaClass::~MetaClass @ 0x2b4e */

/* IOAudioTimerEvent::MetaClass::~MetaClass() */

void __thiscall IOAudioTimerEvent::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* IOAudioTimerEvent::IOAudioTimerEvent @ 0x2b58 */

/* IOAudioTimerEvent::IOAudioTimerEvent(OSMetaClass const*) */

void __thiscall IOAudioTimerEvent::IOAudioTimerEvent(IOAudioTimerEvent *this,OSMetaClass *param_1)

{
  undefined8 *unaff_RDI;
  
  OSObject::OSObject((OSObject *)this,param_1);
  *unaff_RDI = &PTR__IOAudioTimerEvent_0001f7b0;
  return;
}



/* IOAudioTimerEvent::IOAudioTimerEvent @ 0x2b78 */

/* IOAudioTimerEvent::IOAudioTimerEvent(OSMetaClass const*) */

void __thiscall IOAudioTimerEvent::IOAudioTimerEvent(IOAudioTimerEvent *this,OSMetaClass *param_1)

{
  undefined8 *unaff_RDI;
  
  OSObject::OSObject((OSObject *)this,param_1);
  *unaff_RDI = &PTR__IOAudioTimerEvent_0001f7b0;
  return;
}



/* IOAudioTimerEvent::~IOAudioTimerEvent @ 0x2b98 */

/* IOAudioTimerEvent::~IOAudioTimerEvent() */

void __thiscall IOAudioTimerEvent::~IOAudioTimerEvent(IOAudioTimerEvent *this)

{
  OSObject::~OSObject((OSObject *)this);
  return;
}



/* IOAudioTimerEvent::~IOAudioTimerEvent @ 0x2ba2 */

/* IOAudioTimerEvent::~IOAudioTimerEvent() */

void __thiscall IOAudioTimerEvent::~IOAudioTimerEvent(IOAudioTimerEvent *this)

{
  OSObject::~OSObject((OSObject *)this);
  return;
}



/* IOAudioTimerEvent::~IOAudioTimerEvent @ 0x2bac */

/* IOAudioTimerEvent::~IOAudioTimerEvent() */

void __thiscall IOAudioTimerEvent::~IOAudioTimerEvent(IOAudioTimerEvent *this)

{
  OSObject::~OSObject((OSObject *)this);
  _OSObject_typed_operator_delete();
  return;
}



/* IOAudioTimerEvent::operator.delete @ 0x2bd4 */

/* IOAudioTimerEvent::operator delete(void*, unsigned long) */

void IOAudioTimerEvent::operator_delete(void *param_1,ulong param_2)

{
  _OSObject_typed_operator_delete();
  return;
}



/* IOAudioTimerEvent::getMetaClass @ 0x2bec */

/* IOAudioTimerEvent::getMetaClass() const */

undefined ** IOAudioTimerEvent::getMetaClass(void)

{
  return &gMetaClass;
}



/* IOAudioTimerEvent::MetaClass::MetaClass @ 0x2bfa */

/* IOAudioTimerEvent::MetaClass::MetaClass() */

void __thiscall IOAudioTimerEvent::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)segment_command_00000020.segname,PTR_gMetaClass_0001e028,in_R8,in_R9D);
  *unaff_RDI = &PTR__MetaClass_0001f8e0;
  return;
}



/* IOAudioTimerEvent::MetaClass::alloc @ 0x2c2c */

/* IOAudioTimerEvent::MetaClass::alloc() const */

undefined8 * IOAudioTimerEvent::MetaClass::alloc(void)

{
  undefined8 *puVar1;
  OSObject *in_RCX;
  OSMetaClass *in_RDX;
  
  puVar1 = (undefined8 *)_OSObject_typed_operator_new();
  OSObject::OSObject(in_RCX,in_RDX);
  *puVar1 = &PTR__IOAudioTimerEvent_0001f7b0;
  OSMetaClass::instanceConstructed();
  return puVar1;
}



/* IOAudioTimerEvent::operator.new @ 0x2c74 */

/* IOAudioTimerEvent::operator new(unsigned long) */

void * __thiscall IOAudioTimerEvent::operator_new(IOAudioTimerEvent *this,ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)_OSObject_typed_operator_new();
  return pvVar1;
}



/* IOAudioTimerEvent::IOAudioTimerEvent @ 0x2c88 */

/* IOAudioTimerEvent::IOAudioTimerEvent() */

void __thiscall IOAudioTimerEvent::IOAudioTimerEvent(IOAudioTimerEvent *this)

{
  OSMetaClass *in_RDX;
  undefined8 *unaff_RDI;
  
  OSObject::OSObject((OSObject *)this,in_RDX);
  *unaff_RDI = &PTR__IOAudioTimerEvent_0001f7b0;
  OSMetaClass::instanceConstructed();
  return;
}



/* IOAudioTimerEvent::IOAudioTimerEvent @ 0x2cb8 */

/* IOAudioTimerEvent::IOAudioTimerEvent() */

void __thiscall IOAudioTimerEvent::IOAudioTimerEvent(IOAudioTimerEvent *this)

{
  OSMetaClass *in_RDX;
  undefined8 *unaff_RDI;
  
  OSObject::OSObject((OSObject *)this,in_RDX);
  *unaff_RDI = &PTR__IOAudioTimerEvent_0001f7b0;
  OSMetaClass::instanceConstructed();
  return;
}



/* IOAudioEngineEntry::MetaClass::MetaClass @ 0x2ce8 */

/* IOAudioEngineEntry::MetaClass::MetaClass() */

void __thiscall IOAudioEngineEntry::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)&segment_command_00000020,PTR_gMetaClass_0001e028,in_R8,in_R9D);
  *unaff_RDI = &PTR__MetaClass_0001fb08;
  return;
}



/* IOAudioEngineEntry::MetaClass::~MetaClass @ 0x2d1a */

/* IOAudioEngineEntry::MetaClass::~MetaClass() */

void __thiscall IOAudioEngineEntry::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* IOAudioEngineEntry::IOAudioEngineEntry @ 0x2d24 */

/* IOAudioEngineEntry::IOAudioEngineEntry(OSMetaClass const*) */

void __thiscall
IOAudioEngineEntry::IOAudioEngineEntry(IOAudioEngineEntry *this,OSMetaClass *param_1)

{
  undefined8 *unaff_RDI;
  
  OSObject::OSObject((OSObject *)this,param_1);
  *unaff_RDI = &PTR__IOAudioEngineEntry_0001f9d8;
  return;
}



/* IOAudioEngineEntry::IOAudioEngineEntry @ 0x2d44 */

/* IOAudioEngineEntry::IOAudioEngineEntry(OSMetaClass const*) */

void __thiscall
IOAudioEngineEntry::IOAudioEngineEntry(IOAudioEngineEntry *this,OSMetaClass *param_1)

{
  undefined8 *unaff_RDI;
  
  OSObject::OSObject((OSObject *)this,param_1);
  *unaff_RDI = &PTR__IOAudioEngineEntry_0001f9d8;
  return;
}



/* IOAudioEngineEntry::~IOAudioEngineEntry @ 0x2d64 */

/* IOAudioEngineEntry::~IOAudioEngineEntry() */

void __thiscall IOAudioEngineEntry::~IOAudioEngineEntry(IOAudioEngineEntry *this)

{
  OSObject::~OSObject((OSObject *)this);
  return;
}



/* IOAudioEngineEntry::~IOAudioEngineEntry @ 0x2d6e */

/* IOAudioEngineEntry::~IOAudioEngineEntry() */

void __thiscall IOAudioEngineEntry::~IOAudioEngineEntry(IOAudioEngineEntry *this)

{
  OSObject::~OSObject((OSObject *)this);
  return;
}



/* IOAudioEngineEntry::~IOAudioEngineEntry @ 0x2d78 */

/* IOAudioEngineEntry::~IOAudioEngineEntry() */

void __thiscall IOAudioEngineEntry::~IOAudioEngineEntry(IOAudioEngineEntry *this)

{
  OSObject::~OSObject((OSObject *)this);
  _OSObject_typed_operator_delete();
  return;
}



/* IOAudioEngineEntry::operator.delete @ 0x2da0 */

/* IOAudioEngineEntry::operator delete(void*, unsigned long) */

void IOAudioEngineEntry::operator_delete(void *param_1,ulong param_2)

{
  _OSObject_typed_operator_delete();
  return;
}



/* IOAudioEngineEntry::getMetaClass @ 0x2db8 */

/* IOAudioEngineEntry::getMetaClass() const */

undefined ** IOAudioEngineEntry::getMetaClass(void)

{
  return &gMetaClass;
}



/* IOAudioEngineEntry::MetaClass::MetaClass @ 0x2dc6 */

/* IOAudioEngineEntry::MetaClass::MetaClass() */

void __thiscall IOAudioEngineEntry::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)&segment_command_00000020,PTR_gMetaClass_0001e028,in_R8,in_R9D);
  *unaff_RDI = &PTR__MetaClass_0001fb08;
  return;
}



/* IOAudioEngineEntry::MetaClass::alloc @ 0x2df8 */

/* IOAudioEngineEntry::MetaClass::alloc() const */

undefined8 * IOAudioEngineEntry::MetaClass::alloc(void)

{
  undefined8 *puVar1;
  OSObject *in_RCX;
  OSMetaClass *in_RDX;
  
  puVar1 = (undefined8 *)_OSObject_typed_operator_new();
  OSObject::OSObject(in_RCX,in_RDX);
  *puVar1 = &PTR__IOAudioEngineEntry_0001f9d8;
  OSMetaClass::instanceConstructed();
  return puVar1;
}



/* IOAudioEngineEntry::operator.new @ 0x2e40 */

/* IOAudioEngineEntry::operator new(unsigned long) */

void * __thiscall IOAudioEngineEntry::operator_new(IOAudioEngineEntry *this,ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)_OSObject_typed_operator_new();
  return pvVar1;
}



/* IOAudioEngineEntry::IOAudioEngineEntry @ 0x2e54 */

/* IOAudioEngineEntry::IOAudioEngineEntry() */

void __thiscall IOAudioEngineEntry::IOAudioEngineEntry(IOAudioEngineEntry *this)

{
  OSMetaClass *in_RDX;
  undefined8 *unaff_RDI;
  
  OSObject::OSObject((OSObject *)this,in_RDX);
  *unaff_RDI = &PTR__IOAudioEngineEntry_0001f9d8;
  OSMetaClass::instanceConstructed();
  return;
}



/* IOAudioEngineEntry::IOAudioEngineEntry @ 0x2e84 */

/* IOAudioEngineEntry::IOAudioEngineEntry() */

void __thiscall IOAudioEngineEntry::IOAudioEngineEntry(IOAudioEngineEntry *this)

{
  OSMetaClass *in_RDX;
  undefined8 *unaff_RDI;
  
  OSObject::OSObject((OSObject *)this,in_RDX);
  *unaff_RDI = &PTR__IOAudioEngineEntry_0001f9d8;
  OSMetaClass::instanceConstructed();
  return;
}



/* IOAudioDevice::MetaClass::MetaClass @ 0x2eb4 */

/* IOAudioDevice::MetaClass::MetaClass() */

void __thiscall IOAudioDevice::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)&section_000000b8.size,PTR_gMetaClass_0001e038,in_R8,in_R9D);
  *unaff_RDI = &PTR__MetaClass_00020638;
  return;
}



/* IOAudioDevice::MetaClass::~MetaClass @ 0x2ee6 */

/* IOAudioDevice::MetaClass::~MetaClass() */

void __thiscall IOAudioDevice::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* IOAudioDevice::IOAudioDevice @ 0x2ef0 */

/* IOAudioDevice::IOAudioDevice(OSMetaClass const*) */

void __thiscall IOAudioDevice::IOAudioDevice(IOAudioDevice *this,OSMetaClass *param_1)

{
  undefined8 *unaff_RDI;
  
  IOService::IOService((IOService *)this,param_1);
  *unaff_RDI = 0x1fc00;
  return;
}



/* IOAudioDevice::IOAudioDevice @ 0x2f10 */

/* IOAudioDevice::IOAudioDevice(OSMetaClass const*) */

void __thiscall IOAudioDevice::IOAudioDevice(IOAudioDevice *this,OSMetaClass *param_1)

{
  undefined8 *unaff_RDI;
  
  IOService::IOService((IOService *)this,param_1);
  *unaff_RDI = 0x1fc00;
  return;
}



/* IOAudioDevice::~IOAudioDevice @ 0x2f30 */

/* IOAudioDevice::~IOAudioDevice() */

void __thiscall IOAudioDevice::~IOAudioDevice(IOAudioDevice *this)

{
  IOService::~IOService((IOService *)this);
  return;
}



/* IOAudioDevice::~IOAudioDevice @ 0x2f3a */

/* IOAudioDevice::~IOAudioDevice() */

void __thiscall IOAudioDevice::~IOAudioDevice(IOAudioDevice *this)

{
  IOService::~IOService((IOService *)this);
  return;
}



/* IOAudioDevice::~IOAudioDevice @ 0x2f44 */

/* IOAudioDevice::~IOAudioDevice() */

void __thiscall IOAudioDevice::~IOAudioDevice(IOAudioDevice *this)

{
  IOService::~IOService((IOService *)this);
  _OSObject_typed_operator_delete();
  return;
}



/* IOAudioDevice::operator.delete @ 0x2f6c */

/* IOAudioDevice::operator delete(void*, unsigned long) */

void IOAudioDevice::operator_delete(void *param_1,ulong param_2)

{
  _OSObject_typed_operator_delete();
  return;
}



/* IOAudioDevice::getMetaClass @ 0x2f84 */

/* IOAudioDevice::getMetaClass() const */

undefined ** IOAudioDevice::getMetaClass(void)

{
  return &gMetaClass;
}



/* IOAudioDevice::MetaClass::MetaClass @ 0x2f92 */

/* IOAudioDevice::MetaClass::MetaClass() */

void __thiscall IOAudioDevice::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)&section_000000b8.size,PTR_gMetaClass_0001e038,in_R8,in_R9D);
  *unaff_RDI = &PTR__MetaClass_00020638;
  return;
}



/* IOAudioDevice::MetaClass::alloc @ 0x2fc4 */

/* IOAudioDevice::MetaClass::alloc() const */

undefined8 * IOAudioDevice::MetaClass::alloc(void)

{
  undefined8 *puVar1;
  IOService *in_RCX;
  OSMetaClass *in_RDX;
  
  puVar1 = (undefined8 *)_OSObject_typed_operator_new();
  IOService::IOService(in_RCX,in_RDX);
  *puVar1 = 0x1fc00;
  OSMetaClass::instanceConstructed();
  return puVar1;
}



/* IOAudioDevice::operator.new @ 0x300c */

/* IOAudioDevice::operator new(unsigned long) */

void * __thiscall IOAudioDevice::operator_new(IOAudioDevice *this,ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)_OSObject_typed_operator_new();
  return pvVar1;
}



/* IOAudioDevice::IOAudioDevice @ 0x3020 */

/* IOAudioDevice::IOAudioDevice() */

void __thiscall IOAudioDevice::IOAudioDevice(IOAudioDevice *this)

{
  OSMetaClass *in_RDX;
  undefined8 *unaff_RDI;
  
  IOService::IOService((IOService *)this,in_RDX);
  *unaff_RDI = 0x1fc00;
  OSMetaClass::instanceConstructed();
  return;
}



/* IOAudioDevice::IOAudioDevice @ 0x3050 */

/* IOAudioDevice::IOAudioDevice() */

void __thiscall IOAudioDevice::IOAudioDevice(IOAudioDevice *this)

{
  OSMetaClass *in_RDX;
  undefined8 *unaff_RDI;
  
  IOService::IOService((IOService *)this,in_RDX);
  *unaff_RDI = 0x1fc00;
  OSMetaClass::instanceConstructed();
  return;
}



/* IOAudioDevice::_RESERVEDIOAudioDevice6 @ 0x3080 */

/* IOAudioDevice::_RESERVEDIOAudioDevice6() */

void __thiscall IOAudioDevice::_RESERVEDIOAudioDevice6(IOAudioDevice *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioDevice::_RESERVEDIOAudioDevice7 @ 0x3096 */

/* IOAudioDevice::_RESERVEDIOAudioDevice7() */

void __thiscall IOAudioDevice::_RESERVEDIOAudioDevice7(IOAudioDevice *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioDevice::_RESERVEDIOAudioDevice8 @ 0x30ac */

/* IOAudioDevice::_RESERVEDIOAudioDevice8() */

void __thiscall IOAudioDevice::_RESERVEDIOAudioDevice8(IOAudioDevice *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioDevice::_RESERVEDIOAudioDevice9 @ 0x30c2 */

/* IOAudioDevice::_RESERVEDIOAudioDevice9() */

void __thiscall IOAudioDevice::_RESERVEDIOAudioDevice9(IOAudioDevice *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioDevice::_RESERVEDIOAudioDevice10 @ 0x30d8 */

/* IOAudioDevice::_RESERVEDIOAudioDevice10() */

void __thiscall IOAudioDevice::_RESERVEDIOAudioDevice10(IOAudioDevice *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioDevice::_RESERVEDIOAudioDevice11 @ 0x30ee */

/* IOAudioDevice::_RESERVEDIOAudioDevice11() */

void __thiscall IOAudioDevice::_RESERVEDIOAudioDevice11(IOAudioDevice *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioDevice::_RESERVEDIOAudioDevice12 @ 0x3104 */

/* IOAudioDevice::_RESERVEDIOAudioDevice12() */

void __thiscall IOAudioDevice::_RESERVEDIOAudioDevice12(IOAudioDevice *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioDevice::_RESERVEDIOAudioDevice13 @ 0x311a */

/* IOAudioDevice::_RESERVEDIOAudioDevice13() */

void __thiscall IOAudioDevice::_RESERVEDIOAudioDevice13(IOAudioDevice *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioDevice::_RESERVEDIOAudioDevice14 @ 0x3130 */

/* IOAudioDevice::_RESERVEDIOAudioDevice14() */

void __thiscall IOAudioDevice::_RESERVEDIOAudioDevice14(IOAudioDevice *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioDevice::_RESERVEDIOAudioDevice15 @ 0x3146 */

/* IOAudioDevice::_RESERVEDIOAudioDevice15() */

void __thiscall IOAudioDevice::_RESERVEDIOAudioDevice15(IOAudioDevice *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioDevice::_RESERVEDIOAudioDevice16 @ 0x315c */

/* IOAudioDevice::_RESERVEDIOAudioDevice16() */

void __thiscall IOAudioDevice::_RESERVEDIOAudioDevice16(IOAudioDevice *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioDevice::_RESERVEDIOAudioDevice17 @ 0x3172 */

/* IOAudioDevice::_RESERVEDIOAudioDevice17() */

void __thiscall IOAudioDevice::_RESERVEDIOAudioDevice17(IOAudioDevice *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioDevice::_RESERVEDIOAudioDevice18 @ 0x3188 */

/* IOAudioDevice::_RESERVEDIOAudioDevice18() */

void __thiscall IOAudioDevice::_RESERVEDIOAudioDevice18(IOAudioDevice *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioDevice::_RESERVEDIOAudioDevice19 @ 0x319e */

/* IOAudioDevice::_RESERVEDIOAudioDevice19() */

void __thiscall IOAudioDevice::_RESERVEDIOAudioDevice19(IOAudioDevice *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioDevice::_RESERVEDIOAudioDevice20 @ 0x31b4 */

/* IOAudioDevice::_RESERVEDIOAudioDevice20() */

void __thiscall IOAudioDevice::_RESERVEDIOAudioDevice20(IOAudioDevice *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioDevice::_RESERVEDIOAudioDevice21 @ 0x31ca */

/* IOAudioDevice::_RESERVEDIOAudioDevice21() */

void __thiscall IOAudioDevice::_RESERVEDIOAudioDevice21(IOAudioDevice *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioDevice::_RESERVEDIOAudioDevice22 @ 0x31e0 */

/* IOAudioDevice::_RESERVEDIOAudioDevice22() */

void __thiscall IOAudioDevice::_RESERVEDIOAudioDevice22(IOAudioDevice *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioDevice::_RESERVEDIOAudioDevice23 @ 0x31f6 */

/* IOAudioDevice::_RESERVEDIOAudioDevice23() */

void __thiscall IOAudioDevice::_RESERVEDIOAudioDevice23(IOAudioDevice *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioDevice::_RESERVEDIOAudioDevice24 @ 0x320c */

/* IOAudioDevice::_RESERVEDIOAudioDevice24() */

void __thiscall IOAudioDevice::_RESERVEDIOAudioDevice24(IOAudioDevice *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioDevice::_RESERVEDIOAudioDevice25 @ 0x3222 */

/* IOAudioDevice::_RESERVEDIOAudioDevice25() */

void __thiscall IOAudioDevice::_RESERVEDIOAudioDevice25(IOAudioDevice *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioDevice::_RESERVEDIOAudioDevice26 @ 0x3238 */

/* IOAudioDevice::_RESERVEDIOAudioDevice26() */

void __thiscall IOAudioDevice::_RESERVEDIOAudioDevice26(IOAudioDevice *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioDevice::_RESERVEDIOAudioDevice27 @ 0x324e */

/* IOAudioDevice::_RESERVEDIOAudioDevice27() */

void __thiscall IOAudioDevice::_RESERVEDIOAudioDevice27(IOAudioDevice *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioDevice::_RESERVEDIOAudioDevice28 @ 0x3264 */

/* IOAudioDevice::_RESERVEDIOAudioDevice28() */

void __thiscall IOAudioDevice::_RESERVEDIOAudioDevice28(IOAudioDevice *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioDevice::_RESERVEDIOAudioDevice29 @ 0x327a */

/* IOAudioDevice::_RESERVEDIOAudioDevice29() */

void __thiscall IOAudioDevice::_RESERVEDIOAudioDevice29(IOAudioDevice *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioDevice::_RESERVEDIOAudioDevice30 @ 0x3290 */

/* IOAudioDevice::_RESERVEDIOAudioDevice30() */

void __thiscall IOAudioDevice::_RESERVEDIOAudioDevice30(IOAudioDevice *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioDevice::_RESERVEDIOAudioDevice31 @ 0x32a6 */

/* IOAudioDevice::_RESERVEDIOAudioDevice31() */

void __thiscall IOAudioDevice::_RESERVEDIOAudioDevice31(IOAudioDevice *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioDevice::setDeviceModelName @ 0x32bc */

/* IOAudioDevice::setDeviceModelName(char const*) */

void IOAudioDevice::setDeviceModelName(char *param_1)

{
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  __os_log_internal("+ IOAudioDevice[%p]::setDeviceModelName(%p)\n",0);
  if (unaff_RSI != 0) {
    (**(code **)(*unaff_RDI + 0x270))();
  }
  __os_log_internal("- IOAudioDevice[%p]::setDeviceModelName(%p)\n",0);
  return;
}



/* IOAudioDevice::setDeviceTransportType @ 0x3332 */

/* IOAudioDevice::setDeviceTransportType(unsigned int) */

void IOAudioDevice::setDeviceTransportType(uint param_1)

{
  int unaff_ESI;
  longlong *unaff_RDI;
  
  if (unaff_ESI != 0) {
                    /* WARNING: Could not recover jumptable at 0x00003353. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_RDI + 0x280))(0x20,unaff_ESI);
    return;
  }
  return;
}



/* IOAudioDevice::setAggressiveness @ 0x3358 */

/* IOAudioDevice::setAggressiveness(unsigned long, unsigned long) */

void IOAudioDevice::setAggressiveness(ulong param_1,ulong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00003364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_vtable_0001e050 + 2000))();
  return;
}



/* IOAudioDevice::setIdleAudioSleepTime @ 0x336a */

/* IOAudioDevice::setIdleAudioSleepTime(unsigned long long) */

void IOAudioDevice::setIdleAudioSleepTime(ulonglong param_1)

{
  longlong *plVar1;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  __os_log_internal("+ IOAudioDevice[%p]::setIdleAudioSleepTime: sleepDelay = %lx%lx\n",0);
  plVar1 = (longlong *)unaff_RDI[0x1b];
  if ((longlong *)plVar1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)plVar1[1] + 0x218))();
    plVar1 = (longlong *)unaff_RDI[0x1b];
  }
  if (*plVar1 != unaff_RSI) {
    *plVar1 = unaff_RSI;
  }
  if (unaff_RSI != -1) {
    (**(code **)(*unaff_RDI + 0x860))();
  }
  __os_log_internal("- IOAudioDevice[%p]::setIdleAudioSleepTime: sleepDelay = %lx%lx\n",0);
  return;
}



/* IOAudioDevice::scheduleIdleAudioSleep @ 0x3416 */

/* IOAudioDevice::scheduleIdleAudioSleep() */

void IOAudioDevice::scheduleIdleAudioSleep(void)

{
  OSObject *pOVar1;
  longlong lVar2;
  _func_void_OSObject_ptr_IOTimerEventSource_ptr *p_Var3;
  longlong *unaff_RDI;
  
  p_Var3 = (_func_void_OSObject_ptr_IOTimerEventSource_ptr *)0x0;
  __os_log_internal("+ IOAudioDevice[%p]::scheduleIdleAudioSleep: idleSleepDelayTime = %lx%lx\n");
  pOVar1 = (OSObject *)unaff_RDI[0x1b];
  lVar2 = *(longlong *)pOVar1;
  if (lVar2 == 0) {
    (**(code **)(*unaff_RDI + 0x9d0))();
  }
  else {
    if ((lVar2 != -1) && (*(longlong *)(pOVar1 + 8) == 0)) {
      lVar2 = IOTimerEventSource::timerEventSource(pOVar1,p_Var3);
      *(longlong *)(unaff_RDI[0x1b] + 8) = lVar2;
      if (lVar2 == 0) goto LAB_0000351f;
      (**(code **)(*(longlong *)unaff_RDI[0x11] + 0x140))();
      lVar2 = *(longlong *)unaff_RDI[0x1b];
    }
    if (lVar2 != -1) {
      _clock_get_uptime();
      _absolutetime_to_nanoseconds();
      _nanoseconds_to_absolutetime();
      (**(code **)(**(longlong **)(unaff_RDI[0x1b] + 8) + 0x210))();
    }
  }
LAB_0000351f:
  __os_log_internal("- IOAudioDevice[%p]::scheduleIdleAudioSleep: idleSleepDelayTime = %lx%lx\n",0);
  return;
}



/* IOAudioDevice::idleAudioSleepHandlerTimer @ 0x355e */

/* IOAudioDevice::idleAudioSleepHandlerTimer(OSObject*, IOTimerEventSource*) */

void IOAudioDevice::idleAudioSleepHandlerTimer(OSObject *param_1,IOTimerEventSource *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)
           OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,(OSMetaClass *)param_2);
  __os_log_internal("+ IOAudioDevice[%p]idleAudioSleepHandlerTimer: pendingPowerState = %d, idleSleepDelayTime = %lx%lx\n"
                    ,0,plVar2,*(undefined4 *)((longlong)plVar2 + 0xac));
  if (*(longlong *)plVar2[0x1b] != -1) {
    iVar1 = (**(code **)(*plVar2 + 0x9c0))();
    if (iVar1 == 1) {
      (**(code **)(*plVar2 + 0x9d0))();
    }
  }
  __os_log_internal("- IOAudioDevice[%p]idleAudioSleepHandlerTimer: pendingPowerState = %d, idleSleepDelayTime = %lx%lx\n"
                    ,0,plVar2,*(undefined4 *)((longlong)plVar2 + 0xac));
  return;
}



/* IOAudioDevice::setConfigurationApplicationBundle @ 0x3628 */

/* IOAudioDevice::setConfigurationApplicationBundle(char const*) */

void IOAudioDevice::setConfigurationApplicationBundle(char *param_1)

{
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  __os_log_internal("+ IOAudioDevice[%p]::setConfigurationApplicationBundle(%p)\n",0);
  if (unaff_RSI != 0) {
    (**(code **)(*unaff_RDI + 0x270))();
  }
  __os_log_internal("- IOAudioDevice[%p]::setConfigurationApplicationBundle(%p)\n",0);
  return;
}



/* IOAudioDevice::setDeviceCanBeDefault @ 0x369e */

/* IOAudioDevice::setDeviceCanBeDefault(unsigned int) */

void IOAudioDevice::setDeviceCanBeDefault(uint param_1)

{
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  
                    /* WARNING: Could not recover jumptable at 0x000036bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x280))(0x20,unaff_ESI);
  return;
}



/* IOAudioDevice::init @ 0x36be */

/* IOAudioDevice::init(OSDictionary*) */

undefined4 IOAudioDevice::init(OSDictionary *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  longlong unaff_RDI;
  undefined4 uVar5;
  
  uVar4 = 0x19a50;
  uVar5 = 0;
  __os_log_internal("+ IOAudioDevice[%p]::init(%p)\n",0);
  cVar1 = (**(code **)(PTR_vtable_0001e050 + 600))();
  if (cVar1 != '\0') {
    puVar2 = (undefined8 *)_IOMallocTypeImpl();
    *(undefined8 **)(unaff_RDI + 0xd8) = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      uVar5 = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      lVar3 = OSArray::withCapacity(uVar4);
      *(longlong *)(unaff_RDI + 0xb0) = lVar3;
      if (lVar3 == 0) goto LAB_000037a5;
      lVar3 = OSSet::withCapacity(uVar4);
      *(longlong *)(unaff_RDI + 0xc0) = lVar3;
      if (lVar3 != 0) {
        lVar3 = IOWorkLoop::workLoop();
        *(longlong *)(unaff_RDI + 0x88) = lVar3;
        if (lVar3 != 0) {
          *(undefined1 *)(unaff_RDI + 0xa2) = 0;
          *(undefined4 *)(unaff_RDI + 0xac) = 1;
          *(undefined8 *)(unaff_RDI + 0xa4) = 0x100000000;
          *(undefined2 *)(unaff_RDI + 0xa0) = 0x101;
          uVar5 = 1;
          goto LAB_000037a5;
        }
      }
    }
    uVar5 = 0;
  }
LAB_000037a5:
  __os_log_internal("- IOAudioDevice[%p]::init(%p) returns %d\n",0);
  return uVar5;
}



/* IOAudioDevice::free @ 0x37e0 */

/* IOAudioDevice::free() */

void IOAudioDevice::free(void)

{
  longlong *plVar1;
  longlong *unaff_RDI;
  
  __os_log_internal("+ IOAudioDevice[%p]::free()\n",0);
  if (unaff_RDI[0x16] != 0) {
    (**(code **)(*unaff_RDI + 0x988))();
    (**(code **)(*(longlong *)unaff_RDI[0x16] + 0x28))();
    unaff_RDI[0x16] = 0;
  }
  __os_log_internal("  did deactiveateAllAudioEngines ()\n",0);
  if (unaff_RDI[0x18] != 0) {
    (**(code **)(*unaff_RDI + 0xa00))();
    (**(code **)(*(longlong *)unaff_RDI[0x18] + 0x28))();
    unaff_RDI[0x18] = 0;
  }
  __os_log_internal("  did detachAllAudioPorts ()\n",0);
  if ((longlong *)unaff_RDI[0x17] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x17] + 0x28))();
    unaff_RDI[0x17] = 0;
  }
  __os_log_internal("  did timerEvents->release ()\n",0);
  plVar1 = (longlong *)unaff_RDI[0x13];
  if (plVar1 != (longlong *)0x0) {
    if (unaff_RDI[0x11] != 0) {
      (**(code **)(*plVar1 + 0x218))();
      (**(code **)(*(longlong *)unaff_RDI[0x11] + 0x148))();
      plVar1 = (longlong *)unaff_RDI[0x13];
    }
    (**(code **)(*plVar1 + 0x28))();
    unaff_RDI[0x13] = 0;
  }
  __os_log_internal("  did workLoop->removeEventSource ( timerEventSource )\n",0);
  if ((unaff_RDI[0x1b] != 0) &&
     (plVar1 = *(longlong **)(unaff_RDI[0x1b] + 8), plVar1 != (longlong *)0x0)) {
    if (unaff_RDI[0x11] != 0) {
      (**(code **)(*plVar1 + 0x218))();
      (**(code **)(*(longlong *)unaff_RDI[0x11] + 0x148))();
      plVar1 = *(longlong **)(unaff_RDI[0x1b] + 8);
    }
    (**(code **)(*plVar1 + 0x28))();
    *(undefined8 *)(unaff_RDI[0x1b] + 8) = 0;
  }
  __os_log_internal("  did workLoop->removeEventSource ( reserved->idleTimer )\n",0);
  if (unaff_RDI[0x1b] != 0) {
    unaff_RDI[0x1b] = 0;
    _IOFreeTypeImpl();
  }
  __os_log_internal("  did IOFree ()\n",0);
  plVar1 = (longlong *)unaff_RDI[0x12];
  if (plVar1 != (longlong *)0x0) {
    if ((longlong *)unaff_RDI[0x11] != (longlong *)0x0) {
      (**(code **)(*(longlong *)unaff_RDI[0x11] + 0x148))();
      plVar1 = (longlong *)unaff_RDI[0x12];
    }
    (**(code **)(*plVar1 + 0x28))();
    unaff_RDI[0x12] = 0;
  }
  __os_log_internal("  did workLoop->removeEventSource ( commandGate )\n",0);
  if ((longlong *)unaff_RDI[0x11] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x11] + 0x28))();
    unaff_RDI[0x11] = 0;
  }
  __os_log_internal("  did workLoop->release ()\n",0);
  (**(code **)(PTR_vtable_0001e050 + 0xa0))();
  __os_log_internal("- IOAudioDevice[%p]::free()\n",0);
  return;
}



/* IOAudioDevice::initHardware @ 0x3ade */

/* IOAudioDevice::initHardware(IOService*) */

undefined8 IOAudioDevice::initHardware(IOService *param_1)

{
  __os_log_internal("+-IOAudioDevice[%p]::initHardware(%p)\n",0);
  return 1;
}



/* IOAudioDevice::start @ 0x3b0a */

/* IOAudioDevice::start(IOService*) */

uint32_t IOAudioDevice::start(IOService *param_1)

{
  undefined *puVar1;
  char cVar2;
  longlong lVar3;
  ulong uVar4;
  char *pcVar5;
  _func_int_OSObject_ptr_void_ptr_void_ptr_void_ptr_void_ptr *p_Var6;
  _func_int_OSObject_ptr_void_ptr_void_ptr_void_ptr_void_ptr *unaff_RSI;
  OSObject *unaff_RDI;
  uintptr_t unaff_R14D;
  uintptr_t unaff_R15D;
  uint32_t debugid;
  
  pcVar5 = "+ IOAudioDevice[%p]::start(%p)\n";
  p_Var6 = (_func_int_OSObject_ptr_void_ptr_void_ptr_void_ptr_void_ptr *)0x0;
  __os_log_internal();
  puVar1 = PTR__kdebug_enable_0001e070;
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    pcVar5 = (char *)0x0;
    p_Var6 = unaff_RSI;
    _kernel_debug(0,(uintptr_t)unaff_RSI,0,0,unaff_R14D,unaff_R15D);
  }
  cVar2 = (**(code **)(PTR_vtable_0001e050 + 0x5d0))();
  if (cVar2 != '\0') {
    lVar3 = (**(code **)(*(longlong *)unaff_RSI + 0x2b8))();
    if (lVar3 != 0) {
      p_Var6 = (_func_int_OSObject_ptr_void_ptr_void_ptr_void_ptr_void_ptr *)0x0;
      pcVar5 = (char *)unaff_RDI;
      (**(code **)(*(longlong *)unaff_RSI + 0x6c0))();
    }
    debugid = 0;
    lVar3 = IOCommandGate::commandGate((OSObject *)pcVar5,p_Var6);
    *(longlong *)(unaff_RDI + 0x90) = lVar3;
    if (lVar3 == 0) goto LAB_00003c83;
    (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x140))();
    (**(code **)(*(longlong *)unaff_RDI + 0x870))();
    cVar2 = (**(code **)(*(longlong *)unaff_RDI + 0x950))();
    if (cVar2 != '\0') {
      if (((byte)unaff_RDI[0xa1] & 1) != 0) {
        (**(code **)(*(longlong *)unaff_RDI + 0x790))();
        (**(code **)(*(longlong *)unaff_RSI + 0x7a0))();
        if (*(longlong *)(unaff_RDI + 0x70) != 0) {
          uVar4 = 2;
          (**(code **)(*(longlong *)unaff_RDI + 0x7a8))(2,&start(IOService*)::powerStates);
          IOService::changePowerStateTo(uVar4);
        }
      }
      (**(code **)(*(longlong *)unaff_RDI + 0x5b0))();
      debugid = 1;
      goto LAB_00003c83;
    }
  }
  debugid = 0;
LAB_00003c83:
  __os_log_internal("- IOAudioDevice[%p]::start(%p)\n",0);
  if ((*(uint *)puVar1 & 0xfffffff7) != 0) {
    _kernel_debug(debugid,(uintptr_t)unaff_RSI,0,0,unaff_R14D,unaff_R15D);
  }
  return debugid;
}



/* IOAudioDevice::stop @ 0x3cdc */

/* IOAudioDevice::stop(IOService*) */

void IOAudioDevice::stop(IOService *param_1)

{
  longlong *plVar1;
  longlong *unaff_RDI;
  
  __os_log_internal("+ IOAudioDevice[%p]::stop(%p)\n",0);
  (**(code **)(*unaff_RDI + 0x9f0))();
  plVar1 = (longlong *)unaff_RDI[0x13];
  if (plVar1 != (longlong *)0x0) {
    if (unaff_RDI[0x11] != 0) {
      (**(code **)(*plVar1 + 0x218))();
      (**(code **)(*(longlong *)unaff_RDI[0x11] + 0x148))();
      plVar1 = (longlong *)unaff_RDI[0x13];
    }
    (**(code **)(*plVar1 + 0x28))();
    unaff_RDI[0x13] = 0;
  }
  plVar1 = *(longlong **)(unaff_RDI[0x1b] + 8);
  if (plVar1 != (longlong *)0x0) {
    if (unaff_RDI[0x11] != 0) {
      (**(code **)(*plVar1 + 0x218))();
      (**(code **)(*(longlong *)unaff_RDI[0x11] + 0x148))();
      plVar1 = *(longlong **)(unaff_RDI[0x1b] + 8);
    }
    (**(code **)(*plVar1 + 0x28))();
    *(undefined8 *)(unaff_RDI[0x1b] + 8) = 0;
  }
  (**(code **)(*unaff_RDI + 0x988))();
  (**(code **)(*unaff_RDI + 0xa00))();
  if (((*(byte *)((longlong)unaff_RDI + 0xa1) & 1) != 0) && (unaff_RDI[0xe] != 0)) {
    (**(code **)(*unaff_RDI + 0x798))();
  }
  plVar1 = (longlong *)unaff_RDI[0x12];
  if (plVar1 != (longlong *)0x0) {
    if ((longlong *)unaff_RDI[0x11] != (longlong *)0x0) {
      (**(code **)(*(longlong *)unaff_RDI[0x11] + 0x148))();
      plVar1 = (longlong *)unaff_RDI[0x12];
    }
    (**(code **)(*plVar1 + 0x28))();
    unaff_RDI[0x12] = 0;
  }
  (**(code **)(PTR_vtable_0001e050 + 0x5d8))();
  __os_log_internal("- IOAudioDevice[%p]::stop(%p)\n",0);
  return;
}



/* IOAudioDevice::willTerminate @ 0x3e72 */

/* IOAudioDevice::willTerminate(IOService*, unsigned int) */

undefined1 IOAudioDevice::willTerminate(IOService *param_1,uint param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined **ppuVar5;
  OSMetaClass *pOVar6;
  
  pcVar4 = "+ IOAudioDevice[%p]::willTerminate(%p, %lx)\n";
  pOVar6 = (OSMetaClass *)0x0;
  __os_log_internal();
  plVar2 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)pcVar4);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x128))();
    ppuVar5 = &IOAudioEngine::metaClass;
    while( true ) {
      plVar3 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)ppuVar5,pOVar6);
      if (plVar3 == (longlong *)0x0) break;
      ppuVar5 = (undefined **)*plVar3;
      (**(code **)((longlong)ppuVar5 + 0xb50))();
      (**(code **)(*plVar2 + 0x128))();
    }
    (**(code **)(*plVar2 + 0x28))();
  }
  uVar1 = (**(code **)(PTR_vtable_0001e050 + 0x410))();
  __os_log_internal("- IOAudioDevice[%p]::willTerminate(%p, %lx) returns %d\n",0);
  return uVar1;
}



/* IOAudioDevice::setFamilyManagePower @ 0x3f7c */

/* IOAudioDevice::setFamilyManagePower(bool) */

void IOAudioDevice::setFamilyManagePower(bool param_1)

{
  undefined1 unaff_SIL;
  longlong unaff_RDI;
  
  *(undefined1 *)(unaff_RDI + 0xa1) = unaff_SIL;
  return;
}



/* IOAudioDevice::setPowerState @ 0x3f8a */

/* IOAudioDevice::setPowerState(unsigned long, IOService*) */

uintptr_t IOAudioDevice::setPowerState(ulong param_1,IOService *param_2)

{
  undefined *puVar1;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  uintptr_t unaff_R12D;
  uintptr_t arg2;
  uintptr_t unaff_R13D;
  
  arg2 = 0;
  __os_log_internal("+ IOAudioDevice[%p]::setPowerState(%lu, %p)\n",0);
  puVar1 = PTR__kdebug_enable_0001e070;
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug((uint32_t)param_2,(uintptr_t)unaff_RSI,*(uintptr_t *)(unaff_RDI + 0xac),0,
                  unaff_R12D,unaff_R13D);
  }
  if (((*(byte *)(unaff_RDI + 0xa0) & 1) == 0) && (arg2 = 5, unaff_RSI < 2)) {
    arg2 = 0;
    if (*(longlong **)(unaff_RDI + 0x88) != (longlong *)0x0) {
      arg2 = 0;
      (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x1a0))();
    }
  }
  *(undefined1 *)(unaff_RDI + 0xa0) = 0;
  __os_log_internal("- IOAudioDevice[%p]::setPowerState(%lu, %p) returns 0x%lX\n",0);
  if ((*(uint *)puVar1 & 0xfffffff7) != 0) {
    _kernel_debug((uint32_t)param_2,*(uintptr_t *)(unaff_RDI + 0xa8),arg2,0,unaff_R12D,unaff_R13D);
  }
  return arg2;
}



/* IOAudioDevice::_setPowerStateAction @ 0x40cc */

/* IOAudioDevice::_setPowerStateAction(OSObject*, void*, void*, void*, void*) */

uintptr_t IOAudioDevice::_setPowerStateAction
                    (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  uintptr_t arg2;
  longlong *plVar1;
  uint32_t debugid;
  OSMetaClass *pOVar2;
  longlong unaff_RDI;
  uintptr_t unaff_R14D;
  uintptr_t unaff_R15D;
  
  debugid = (uint32_t)param_1;
  pOVar2 = param_2;
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug(debugid,(uintptr_t)param_2,0,0,unaff_R14D,unaff_R15D);
  }
  arg2 = 0;
  if (unaff_RDI != 0) {
    plVar1 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,pOVar2);
    if (plVar1 != (longlong *)0x0) {
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x970))();
      if (plVar1 != (longlong *)0x0) {
        arg2 = (**(code **)(*plVar1 + 0x1c8))(param_2);
      }
    }
  }
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug(debugid,(uintptr_t)param_2,arg2,0,unaff_R14D,unaff_R15D);
  }
  return arg2;
}



/* IOAudioDevice::setPowerStateAction @ 0x419e */

/* IOAudioDevice::setPowerStateAction(OSObject*, void*, void*, void*, void*) */

uintptr_t IOAudioDevice::setPowerStateAction
                    (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  undefined *puVar1;
  uintptr_t arg2;
  longlong *plVar2;
  uintptr_t arg1;
  OSMetaClass *pOVar3;
  OSMetaClass *unaff_RSI;
  longlong unaff_RDI;
  uintptr_t unaff_R14D;
  uintptr_t unaff_R15D;
  
  puVar1 = PTR__kdebug_enable_0001e070;
  arg1 = (uintptr_t)unaff_RSI;
  pOVar3 = param_2;
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    param_1 = param_2;
    _kernel_debug((uint32_t)param_2,arg1,0,0,unaff_R14D,unaff_R15D);
    pOVar3 = unaff_RSI;
  }
  arg2 = 0;
  if (unaff_RDI != 0) {
    plVar2 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,pOVar3);
    if (plVar2 != (longlong *)0x0) {
      arg2 = (**(code **)(*plVar2 + 0x998))(*plVar2,param_2);
    }
  }
  if ((*(uint *)puVar1 & 0xfffffff7) != 0) {
    _kernel_debug((uint32_t)param_2,arg1,arg2,0,unaff_R14D,unaff_R15D);
  }
  return arg2;
}



/* IOAudioDevice::protectedSetPowerState @ 0x4246 */

/* IOAudioDevice::protectedSetPowerState(unsigned long, IOService*) */

uintptr_t IOAudioDevice::protectedSetPowerState(ulong param_1,IOService *param_2)

{
  undefined *puVar1;
  uintptr_t uVar2;
  int iVar3;
  uintptr_t arg1;
  longlong *plVar4;
  longlong *plVar5;
  uint32_t debugid;
  char *pcVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  uintptr_t local_34;
  uintptr_t arg5;
  
  pcVar6 = "+ IOAudioDevice[%p]::protectedSetPowerState(%lu, %p)\n";
  __os_log_internal("+ IOAudioDevice[%p]::protectedSetPowerState(%lu, %p)\n",0);
  puVar1 = PTR__kdebug_enable_0001e070;
  debugid = (uint32_t)param_2;
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug(debugid,(uintptr_t)unaff_RSI,*(byte *)((longlong)unaff_RDI + 0xa2) & 1,0,
                  (uintptr_t)unaff_R14,(uintptr_t)unaff_R15);
    pcVar6 = (char *)param_2;
  }
  if ((*(byte *)((longlong)unaff_RDI + 0xa2) & 1) != 0) {
    (**(code **)(*unaff_RDI + 0x9c8))();
  }
  arg5 = (uintptr_t)unaff_R15;
  uVar2 = (uintptr_t)unaff_R14;
  if (unaff_RSI == 1) {
    arg1 = (**(code **)(*unaff_RDI + 0x9b8))();
    if ((*(uint *)puVar1 & 0xfffffff7) != 0) {
      _kernel_debug(*(uint32_t *)((longlong)unaff_RDI + 0xa4),arg1,1,0,uVar2,arg5);
    }
    iVar3 = (**(code **)(*unaff_RDI + 0x9b8))();
    if (iVar3 == 0) {
      if (*(int *)((longlong)unaff_RDI + 0xa4) == 0) {
        *(undefined4 *)((longlong)unaff_RDI + 0xac) = 1;
      }
      else {
        *(undefined4 *)((longlong)unaff_RDI + 0xac) = 2;
      }
    }
  }
  else if (unaff_RSI == 0) {
    uVar2 = (**(code **)(*unaff_RDI + 0x9b8))();
    if ((*(uint *)puVar1 & 0xfffffff7) != 0) {
      pcVar6 = (char *)(ulonglong)*(uint *)(unaff_RDI + 0x15);
      _kernel_debug(*(uint *)(unaff_RDI + 0x15),uVar2,0,0,(uintptr_t)unaff_R14,(uintptr_t)unaff_R15)
      ;
    }
    iVar3 = (**(code **)(*unaff_RDI + 0x9b8))();
    arg5 = (uintptr_t)unaff_R15;
    uVar2 = (uintptr_t)unaff_R14;
    if (((iVar3 != 0) && (*(undefined4 *)((longlong)unaff_RDI + 0xac) = 0, unaff_RDI[0x16] != 0)) &&
       (*(int *)((longlong)unaff_RDI + 0xa4) != 0)) {
      plVar4 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)pcVar6);
      arg5 = (uintptr_t)unaff_R15;
      uVar2 = (uintptr_t)unaff_R14;
      if (plVar4 != (longlong *)0x0) {
        plVar5 = (longlong *)(**(code **)(*plVar4 + 0x128))();
        arg5 = (uintptr_t)unaff_R15;
        uVar2 = (uintptr_t)unaff_R14;
        while (plVar5 != (longlong *)0x0) {
          iVar3 = (**(code **)(*plVar5 + 0xa70))();
          if (iVar3 == 1) {
            (**(code **)(*plVar5 + 0xa50))();
          }
          plVar5 = (longlong *)(**(code **)(*plVar4 + 0x128))();
          arg5 = (uintptr_t)unaff_R15;
          uVar2 = (uintptr_t)unaff_R14;
        }
        (**(code **)(*plVar4 + 0x28))();
      }
    }
  }
  local_34 = 0;
  if (((int)unaff_RDI[0x15] != *(int *)((longlong)unaff_RDI + 0xac)) &&
     (local_34 = (**(code **)(*unaff_RDI + 0x9d0))(), local_34 == 0)) {
    local_34 = 0;
  }
  __os_log_internal("- IOAudioDevice[%p]::protectedSetPowerState(%lu, %p) returns 0x%lX\n",0);
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug(debugid,(uintptr_t)unaff_RSI,local_34,0,uVar2,arg5);
  }
  return local_34;
}



/* IOAudioDevice::waitForPendingPowerStateChange @ 0x44be */

/* IOAudioDevice::waitForPendingPowerStateChange() */

void IOAudioDevice::waitForPendingPowerStateChange(void)

{
  undefined *puVar1;
  uint32_t debugid;
  longlong *plVar2;
  longlong *unaff_RDI;
  uintptr_t unaff_R14D;
  uintptr_t unaff_R15D;
  
  __os_log_internal("+ IOAudioDevice[%p]::waitForPendingPowerStateChange()\n",0);
  puVar1 = PTR__kdebug_enable_0001e070;
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug(0,*(byte *)((longlong)unaff_RDI + 0xa2) & 1,0,0,unaff_R14D,unaff_R15D);
  }
  if ((*(byte *)((longlong)unaff_RDI + 0xa2) & 1) == 0) {
    debugid = 0;
  }
  else {
    plVar2 = (longlong *)(**(code **)(*unaff_RDI + 0x970))();
    if (plVar2 == (longlong *)0x0) {
      debugid = 0;
      __os_log_internal("Sound assert: IOAudioDevice::waitForPendingPowerStateChange() - internal error - unable to get the command gate.\n"
                        ,0x10);
      _IOLog();
    }
    else {
      (**(code **)(*plVar2 + 0x20))();
      _clock_interval_to_deadline();
      debugid = (**(code **)(*plVar2 + 0x1f0))(2,0);
      if (debugid != 0) {
        __os_log_internal("Sound assert: IOAudioDevice::waitForPendingPowerStateChange got kr 0x%08x\n"
                          ,0x10,debugid);
        _IOLog();
      }
      (**(code **)(*plVar2 + 0x28))();
      if ((*(byte *)((longlong)unaff_RDI + 0xa2) & 1) != 0) {
        __os_log_internal("Sound assert: IOAudioDevice::waitForPendingPowerStateChange() - internal error - power state change still in progress\n"
                          ,0x10);
        _IOLog();
      }
    }
  }
  __os_log_internal("- IOAudioDevice[%p]::waitForPendingPowerStateChange()\n",0);
  if ((*(uint *)puVar1 & 0xfffffff7) != 0) {
    _kernel_debug(debugid,*(byte *)((longlong)unaff_RDI + 0xa2) & 1,0,0,unaff_R14D,unaff_R15D);
  }
  return;
}



/* IOAudioDevice::initiatePowerStateChange @ 0x4698 */

/* IOAudioDevice::initiatePowerStateChange(unsigned int*) */

uintptr_t IOAudioDevice::initiatePowerStateChange(uint *param_1)

{
  uintptr_t arg2;
  ulonglong in_RAX;
  uint32_t *unaff_RSI;
  longlong *unaff_RDI;
  uint32_t *puVar1;
  uint32_t debugid;
  uintptr_t unaff_R14D;
  uintptr_t unaff_R15D;
  undefined8 uStackY_38;
  
  arg2 = 0;
  uStackY_38 = in_RAX;
  __os_log_internal("+ IOAudioDevice[%p]::initiatePowerStateChange(%p) - current = %d - pending = %d\n"
                    ,0);
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug(*(uint32_t *)((longlong)unaff_RDI + 0xac),*(uintptr_t *)(unaff_RDI + 0x15),
                  *(byte *)((longlong)unaff_RDI + 0xa2) & 1,0,unaff_R14D,unaff_R15D);
  }
  if ((int)unaff_RDI[0x15] != *(int *)((longlong)unaff_RDI + 0xac)) {
    uStackY_38 = uStackY_38 & 0xffffffff;
    puVar1 = (uint32_t *)((longlong)&uStackY_38 + 4);
    if (unaff_RSI != (uint32_t *)0x0) {
      puVar1 = unaff_RSI;
    }
    *puVar1 = 0;
    *(undefined1 *)((longlong)unaff_RDI + 0xa2) = 1;
    arg2 = (**(code **)(*unaff_RDI + 0x9a0))(puVar1);
    if (arg2 == 1) {
      *(undefined1 *)((longlong)unaff_RDI + 0xa2) = 1;
    }
    else if (arg2 == 0) {
      if (*puVar1 == 0) {
        *(undefined1 *)((longlong)unaff_RDI + 0xa2) = 0;
        (**(code **)(*unaff_RDI + 0x9b0))();
      }
    }
    else {
      *(undefined1 *)((longlong)unaff_RDI + 0xa2) = 0;
    }
  }
  debugid = 0;
  __os_log_internal("- IOAudioDevice[%p]::initiatePowerStateChange(%p) - current = %d - pending = %d returns 0x%lX\n"
                    ,0);
  if (unaff_RSI != (uint32_t *)0x0) {
    debugid = *unaff_RSI;
  }
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug(debugid,*(uintptr_t *)(unaff_RDI + 0x15),arg2,0,unaff_R14D,unaff_R15D);
  }
  return arg2;
}



/* IOAudioDevice::completePowerStateChange @ 0x482a */

/* IOAudioDevice::completePowerStateChange() */

uintptr_t IOAudioDevice::completePowerStateChange(void)

{
  undefined *puVar1;
  uintptr_t arg2;
  longlong *plVar2;
  uintptr_t unaff_EBP;
  longlong *unaff_RDI;
  uintptr_t unaff_retaddr;
  
  plVar2 = (longlong *)(**(code **)(*unaff_RDI + 0x970))();
  puVar1 = PTR__kdebug_enable_0001e070;
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug(*(uint32_t *)((longlong)unaff_RDI + 0xac),*(uintptr_t *)(unaff_RDI + 0x15),
                  *(byte *)((longlong)unaff_RDI + 0xa2) & 1,0,unaff_EBP,unaff_retaddr);
  }
  if (plVar2 == (longlong *)0x0) {
    arg2 = 0xe00002bc;
  }
  else {
    arg2 = (**(code **)(*plVar2 + 0x1c8))(0,0,0);
  }
  if ((*(uint *)puVar1 & 0xfffffff7) != 0) {
    _kernel_debug(*(uint32_t *)((longlong)unaff_RDI + 0xac),*(uintptr_t *)(unaff_RDI + 0x15),arg2,0,
                  unaff_EBP,unaff_retaddr);
  }
  return arg2;
}



/* IOAudioDevice::completePowerStateChangeAction @ 0x48de */

/* IOAudioDevice::completePowerStateChangeAction(OSObject*, void*, void*, void*, void*) */

undefined8
IOAudioDevice::completePowerStateChangeAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  
  if (unaff_RDI != 0) {
    plVar1 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,param_2);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000048ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x9b0))();
      return uVar2;
    }
  }
  return 0xe00002c2;
}



/* IOAudioDevice::protectedCompletePowerStateChange @ 0x490c */

/* IOAudioDevice::protectedCompletePowerStateChange() */

undefined8 IOAudioDevice::protectedCompletePowerStateChange(void)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char *pcVar5;
  longlong *unaff_RDI;
  
  pcVar5 = 
  "+ IOAudioDevice[%p]::protectedCompletePowerStateChange() - current = %d - pending = %d\n";
  __os_log_internal("+ IOAudioDevice[%p]::protectedCompletePowerStateChange() - current = %d - pending = %d\n"
                    ,0);
  if ((int)unaff_RDI[0x15] != *(int *)((longlong)unaff_RDI + 0xac)) {
    plVar2 = (longlong *)(**(code **)(*unaff_RDI + 0x970))();
    if ((int)unaff_RDI[0x15] == 0) {
      _clock_get_uptime();
      unaff_RDI[0x1a] = unaff_RDI[0x1a] - unaff_RDI[0x19];
      if (((longlong *)unaff_RDI[0x17] != (longlong *)0x0) &&
         (iVar1 = (**(code **)(*(longlong *)unaff_RDI[0x17] + 0x130))(), iVar1 != 0)) {
        (**(code **)(*unaff_RDI + 0xa08))();
      }
      if (((unaff_RDI[0x16] != 0) && (*(int *)((longlong)unaff_RDI + 0xa4) != 0)) &&
         (plVar3 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)pcVar5),
         plVar3 != (longlong *)0x0)) {
        plVar4 = (longlong *)(**(code **)(*plVar3 + 0x128))();
        while (plVar4 != (longlong *)0x0) {
          iVar1 = (**(code **)(*plVar4 + 0xa70))();
          if (iVar1 == 2) {
            (**(code **)(*plVar4 + 0xa58))();
          }
          plVar4 = (longlong *)(**(code **)(*plVar3 + 0x128))();
        }
        (**(code **)(*plVar3 + 0x28))();
      }
    }
    if ((*(byte *)((longlong)unaff_RDI + 0xa2) & 1) == 0) {
      *(undefined4 *)(unaff_RDI + 0x15) = *(undefined4 *)((longlong)unaff_RDI + 0xac);
      if (plVar2 == (longlong *)0x0) goto LAB_00004ae4;
    }
    else {
      IOService::acknowledgeSetPowerState();
      *(undefined1 *)((longlong)unaff_RDI + 0xa2) = 0;
      if (plVar2 == (longlong *)0x0) {
        *(undefined4 *)(unaff_RDI + 0x15) = *(undefined4 *)((longlong)unaff_RDI + 0xac);
        goto LAB_00004ae4;
      }
      (**(code **)(*plVar2 + 0x1e8))();
      *(undefined4 *)(unaff_RDI + 0x15) = *(undefined4 *)((longlong)unaff_RDI + 0xac);
    }
    (**(code **)(*plVar2 + 0x1e8))();
  }
LAB_00004ae4:
  __os_log_internal("- IOAudioDevice[%p]::protectedCompletePowerStateChange() - current = %d - pending = %d returns 0x%lX\n"
                    ,0);
  return 0;
}



/* IOAudioDevice::performPowerStateChange @ 0x4b18 */

/* IOAudioDevice::performPowerStateChange(_IOAudioDevicePowerState, _IOAudioDevicePowerState,
   unsigned int*) */

undefined8 IOAudioDevice::performPowerStateChange(void)

{
  return 0;
}



/* IOAudioDevice::getPowerState @ 0x4b20 */

/* IOAudioDevice::getPowerState() */

undefined4 IOAudioDevice::getPowerState(void)

{
  longlong unaff_RDI;
  
  return *(undefined4 *)(unaff_RDI + 0xa8);
}



/* IOAudioDevice::getPendingPowerState @ 0x4b2c */

/* IOAudioDevice::getPendingPowerState() */

undefined4 IOAudioDevice::getPendingPowerState(void)

{
  longlong unaff_RDI;
  
  return *(undefined4 *)(unaff_RDI + 0xac);
}



/* IOAudioDevice::audioEngineStarting @ 0x4b38 */

/* IOAudioDevice::audioEngineStarting() */

void IOAudioDevice::audioEngineStarting(void)

{
  int iVar1;
  longlong *unaff_RDI;
  
  __os_log_internal("+ IOAudioDevice[%p]::audioEngineStarting() - numRunningAudioEngines = %ld\n",0)
  ;
  iVar1 = *(int *)((longlong)unaff_RDI + 0xa4);
  *(int *)((longlong)unaff_RDI + 0xa4) = iVar1 + 1;
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*unaff_RDI + 0x9b8))();
    if (iVar1 == 1) {
      if ((*(byte *)((longlong)unaff_RDI + 0xa2) & 1) != 0) {
        (**(code **)(*unaff_RDI + 0x9c8))();
      }
      *(undefined4 *)((longlong)unaff_RDI + 0xac) = 2;
      (**(code **)(*unaff_RDI + 0x9d0))();
      if ((*(byte *)((longlong)unaff_RDI + 0xa2) & 1) != 0) {
        (**(code **)(*unaff_RDI + 0x9c8))();
      }
    }
    else {
      iVar1 = (**(code **)(*unaff_RDI + 0x9c0))();
      if (iVar1 != 0) {
        *(undefined4 *)((longlong)unaff_RDI + 0xac) = 2;
      }
    }
  }
  __os_log_internal("- IOAudioDevice[%p]::audioEngineStarting() - numRunningAudioEngines = %ld\n",0)
  ;
  return;
}



/* IOAudioDevice::audioEngineStopped @ 0x4c26 */

/* IOAudioDevice::audioEngineStopped() */

void IOAudioDevice::audioEngineStopped(void)

{
  int iVar1;
  longlong *unaff_RDI;
  
  __os_log_internal("+ IOAudioDevice[%p]::audioEngineStopped() - numRunningAudioEngines = %ld\n",0);
  if ((*(int *)((longlong)unaff_RDI + 0xa4) == 0) ||
     (iVar1 = *(int *)((longlong)unaff_RDI + 0xa4) + -1,
     *(int *)((longlong)unaff_RDI + 0xa4) = iVar1, iVar1 == 0)) {
    iVar1 = (**(code **)(*unaff_RDI + 0x9b8))();
    if (iVar1 == 2) {
      if ((*(byte *)((longlong)unaff_RDI + 0xa2) & 1) != 0) {
        (**(code **)(*unaff_RDI + 0x9c8))();
      }
      *(undefined4 *)((longlong)unaff_RDI + 0xac) = 1;
      (**(code **)(*unaff_RDI + 0x860))();
    }
  }
  __os_log_internal("- IOAudioDevice[%p]::audioEngineStopped() - numRunningAudioEngines = %ld\n",0);
  return;
}



/* IOAudioDevice::getWorkLoop @ 0x4cd6 */

/* IOAudioDevice::getWorkLoop() const */

undefined8 IOAudioDevice::getWorkLoop(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(unaff_RDI + 0x88);
}



/* IOAudioDevice::getCommandGate @ 0x4ce4 */

/* IOAudioDevice::getCommandGate() const */

undefined8 IOAudioDevice::getCommandGate(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(unaff_RDI + 0x90);
}



/* IOAudioDevice::setDeviceName @ 0x4cf2 */

/* IOAudioDevice::setDeviceName(char const*) */

void IOAudioDevice::setDeviceName(char *param_1)

{
  size_t sVar1;
  size_t sVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  pcVar4 = "+ IOAudioDevice[%p]::setDeviceName(%p)\n";
  __os_log_internal("+ IOAudioDevice[%p]::setDeviceName(%p)\n",0);
  if (unaff_RSI != 0) {
    (**(code **)(*unaff_RDI + 0x270))();
    lVar3 = (**(code **)(*unaff_RDI + 0x2b8))();
    if (lVar3 == 0) {
      sVar1 = _strlen(pcVar4);
      (**(code **)(*unaff_RDI + 0x388))();
      sVar2 = _strlen(pcVar4);
      pcVar4 = (char *)(longlong)(int)(sVar2 + sVar1 + 2);
      lVar3 = _IOMallocData();
      if (lVar3 != 0) {
        (**(code **)(*unaff_RDI + 0x388))();
        pcVar5 = pcVar4;
        ___strncpy_chk(pcVar4,pcVar4);
        sVar1 = _strlen(pcVar5);
        pcVar5 = pcVar4;
        ___strncat_chk(pcVar4,(longlong)(int)sVar1);
        sVar1 = _strlen(pcVar5);
        ___strncat_chk(pcVar4,(longlong)(int)sVar1);
        (**(code **)(*unaff_RDI + 0x878))();
        _IOFreeData();
      }
    }
  }
  __os_log_internal("- IOAudioDevice[%p]::setDeviceName(%p)\n",0);
  return;
}



/* IOAudioDevice::setDeviceShortName @ 0x4e3c */

/* IOAudioDevice::setDeviceShortName(char const*) */

void IOAudioDevice::setDeviceShortName(char *param_1)

{
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  __os_log_internal("+ IOAudioDevice[%p]::setDeviceShortName(%p)\n",0);
  if (unaff_RSI != 0) {
    (**(code **)(*unaff_RDI + 0x270))();
  }
  __os_log_internal("- IOAudioDevice[%p]::setDeviceShortName(%p)\n",0);
  return;
}



/* IOAudioDevice::setManufacturerName @ 0x4eb2 */

/* IOAudioDevice::setManufacturerName(char const*) */

void IOAudioDevice::setManufacturerName(char *param_1)

{
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  __os_log_internal("+ IOAudioDevice[%p]::setManufacturerName(%p)\n",0);
  if (unaff_RSI != 0) {
    (**(code **)(*unaff_RDI + 0x270))();
  }
  __os_log_internal("- IOAudioDevice[%p]::setManufacturerName(%p)\n",0);
  return;
}



/* IOAudioDevice::activateAudioEngine @ 0x4f28 */

/* IOAudioDevice::activateAudioEngine(IOAudioEngine*) */

void IOAudioDevice::activateAudioEngine(IOAudioEngine *param_1)

{
  longlong *unaff_RDI;
  
                    /* WARNING: Could not recover jumptable at 0x00004f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x980))(param_1,1);
  return;
}



/* IOAudioDevice::activateAudioEngine @ 0x4f3e */

/* IOAudioDevice::activateAudioEngine(IOAudioEngine*, bool) */

undefined4 IOAudioDevice::activateAudioEngine(IOAudioEngine *param_1,bool param_2)

{
  char cVar1;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar2;
  
  __os_log_internal("+ IOAudioDevice[%p]::activateAudioEngine(%p, %d)\n",0);
  uVar2 = 0xe00002c2;
  if ((unaff_RSI != (longlong *)0x0) && (*(longlong *)(unaff_RDI + 0xb0) != 0)) {
    cVar1 = (**(code **)(*unaff_RSI + 0x670))();
    uVar2 = 0xe00002bc;
    if (cVar1 != '\0') {
      if (param_2) {
        cVar1 = (**(code **)(*unaff_RSI + 0x5c0))();
        if (cVar1 == '\0') {
          (**(code **)(*unaff_RSI + 0x678))();
          goto LAB_00005026;
        }
      }
      *(bool *)((longlong)unaff_RSI + 0x10d) = param_2;
      (**(code **)(**(longlong **)(unaff_RDI + 0xb0) + 0x1b8))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xb0) + 0x130))();
      (**(code **)(*unaff_RSI + 0x9f0))();
      uVar2 = 0;
      (**(code **)(*unaff_RSI + 0x5b0))();
    }
  }
LAB_00005026:
  __os_log_internal("- IOAudioDevice[%p]::activateAudioEngine(%p, %d) returns 0x%lX\n",0);
  return uVar2;
}



/* IOAudioDevice::deactivateAllAudioEngines @ 0x5060 */

/* IOAudioDevice::deactivateAllAudioEngines() */

void IOAudioDevice::deactivateAllAudioEngines(void)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined **ppuVar5;
  OSMetaClass *pOVar6;
  longlong unaff_RDI;
  
  pcVar4 = "+ IOAudioDevice[%p]::deactivateAllAudioEngines()\n";
  pOVar6 = (OSMetaClass *)0x0;
  __os_log_internal();
  if (*(longlong *)(unaff_RDI + 0xb0) != 0) {
    plVar2 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)pcVar4);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x128))();
      ppuVar5 = &IOAudioEngine::metaClass;
      plVar3 = (longlong *)
               OSMetaClassBase::safeMetaCast((OSMetaClassBase *)&IOAudioEngine::metaClass,pOVar6);
      while (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0xa48))();
        cVar1 = IOService::isInactive();
        if (cVar1 == '\0') {
          (**(code **)(*plVar3 + 0x600))();
        }
        (**(code **)(*plVar2 + 0x128))();
        plVar3 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)ppuVar5,pOVar6);
      }
      (**(code **)(*plVar2 + 0x28))();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0xb0) + 0x158))();
  }
  __os_log_internal("- IOAudioDevice[%p]::deactivateAllAudioEngines()\n",0);
  return;
}



/* IOAudioDevice::attachAudioPort @ 0x5160 */

/* IOAudioDevice::attachAudioPort(IOAudioPort*, IORegistryEntry*, IORegistryEntry*) */

undefined8
IOAudioDevice::attachAudioPort
          (IOAudioPort *param_1,IORegistryEntry *param_2,IORegistryEntry *param_3)

{
  return 0;
}



/* IOAudioDevice::detachAllAudioPorts @ 0x5168 */

/* IOAudioDevice::detachAllAudioPorts() */

void IOAudioDevice::detachAllAudioPorts(void)

{
  return;
}



/* IOAudioDevice::flushAudioControls @ 0x516e */

/* IOAudioDevice::flushAudioControls() */

void IOAudioDevice::flushAudioControls(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  OSCollection *in_RCX;
  OSMetaClass *in_RDX;
  longlong unaff_RDI;
  
  if ((*(longlong *)(unaff_RDI + 0xc0) != 0) &&
     (plVar1 = (longlong *)OSCollectionIterator::withCollection(in_RCX), plVar1 != (longlong *)0x0))
  {
    lVar2 = (**(code **)(*plVar1 + 0x128))();
    while (lVar2 != 0) {
      lVar3 = OSMetaClassBase::safeMetaCast((OSMetaClassBase *)in_RCX,in_RDX);
      if (((lVar3 != 0) && (*(longlong *)(lVar2 + 0x90) != 0)) &&
         (plVar4 = (longlong *)OSCollectionIterator::withCollection(in_RCX),
         plVar4 != (longlong *)0x0)) {
        while (plVar5 = (longlong *)(**(code **)(*plVar4 + 0x128))(), plVar5 != (longlong *)0x0) {
          in_RCX = (OSCollection *)*plVar5;
          (**(code **)(in_RCX + 0x968))();
        }
        (**(code **)(*plVar4 + 0x28))();
      }
      lVar2 = (**(code **)(*plVar1 + 0x128))();
    }
    (**(code **)(*plVar1 + 0x28))();
  }
  if ((*(longlong *)(unaff_RDI + 0xb0) != 0) &&
     (plVar1 = (longlong *)OSCollectionIterator::withCollection(in_RCX), plVar1 != (longlong *)0x0))
  {
    while (lVar2 = (**(code **)(*plVar1 + 0x128))(), lVar2 != 0) {
      if ((*(longlong *)(lVar2 + 0xf8) != 0) &&
         (plVar4 = (longlong *)OSCollectionIterator::withCollection(in_RCX),
         plVar4 != (longlong *)0x0)) {
        while (plVar5 = (longlong *)(**(code **)(*plVar4 + 0x128))(), plVar5 != (longlong *)0x0) {
          in_RCX = (OSCollection *)*plVar5;
          (**(code **)(in_RCX + 0x968))();
        }
        (**(code **)(*plVar4 + 0x28))();
      }
    }
    (**(code **)(*plVar1 + 0x28))();
  }
  __os_log_internal("+- IOAudioDevice[%p]::flushAudioControls()\n",0);
  return;
}



/* IOAudioDevice::addTimerEvent @ 0x52cc */

/* IOAudioDevice::addTimerEvent(OSObject*, void (*)(OSObject*, IOAudioDevice*), unsigned long long)
    */

int __thiscall
IOAudioDevice::addTimerEvent
          (IOAudioDevice *this,OSObject *param_1,_func_void_OSObject_ptr_IOAudioDevice_ptr *param_2,
          ulonglong param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  IOAudioDevice *this_00;
  OSObject *pOVar5;
  _func_void_OSObject_ptr_IOTimerEventSource_ptr *p_Var6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  uint uVar7;
  uint uVar8;
  
  uVar8 = (uint)param_3;
  uVar7 = (uint)param_2;
  if (param_1 == (OSObject *)0x0) {
    return -0x1ffffd3e;
  }
  this_00 = this;
  pOVar5 = param_1;
  plVar2 = (longlong *)_OSObject_typed_operator_new();
  OSObject::OSObject((OSObject *)this_00,(OSMetaClass *)pOVar5);
  *plVar2 = (longlong)&PTR__IOAudioTimerEvent_0001f7b0;
  OSMetaClass::instanceConstructed();
  plVar2[2] = unaff_RSI;
  plVar2[3] = (longlong)param_1;
  plVar2[4] = (longlong)this;
  if ((longlong *)unaff_RDI[0x17] == (longlong *)0x0) {
    p_Var6 = (_func_void_OSObject_ptr_IOTimerEventSource_ptr *)((longlong)&MACH_HEADER.magic + 1);
    pOVar5 = (OSObject *)((longlong)&MACH_HEADER.magic + 1);
    lVar3 = OSDictionary::withObjects
                      ((OSObject **)((longlong)&MACH_HEADER.magic + 1),
                       (OSSymbol **)((longlong)&MACH_HEADER.magic + 1),uVar7,uVar8);
    unaff_RDI[0x17] = lVar3;
    lVar3 = IOTimerEventSource::timerEventSource(pOVar5,p_Var6);
    unaff_RDI[0x13] = lVar3;
    plVar4 = (longlong *)(**(code **)(*unaff_RDI + 0x688))();
    if (plVar4 == (longlong *)0x0 || unaff_RDI[0x13] == 0) {
      return -0x1ffffd44;
    }
    iVar1 = (**(code **)(*plVar4 + 0x140))();
    if (iVar1 != 0) {
      return -0x1ffffd44;
    }
    (**(code **)(*(longlong *)unaff_RDI[0x13] + 0x150))();
  }
  else {
    (**(code **)(*(longlong *)unaff_RDI[0x17] + 0x1c0))();
  }
  (**(code **)(*plVar2 + 0x28))();
  iVar1 = (**(code **)(*(longlong *)unaff_RDI[0x17] + 0x130))();
  if (iVar1 == 1) {
    unaff_RDI[0x19] = (longlong)this;
    _clock_get_uptime();
    iVar1 = (**(code **)(*(longlong *)unaff_RDI[0x13] + 0x210))();
    if (iVar1 != 0) {
      _IOLog();
      return iVar1;
    }
  }
  else if (this < (IOAudioDevice *)unaff_RDI[0x19]) {
    _clock_get_uptime();
    lVar3 = unaff_RDI[0x19];
    unaff_RDI[0x19] = (longlong)this;
    if ((IOAudioDevice *)(lVar3 + unaff_RDI[0x1a]) <= this) {
      return 0;
    }
    iVar1 = (**(code **)(*(longlong *)unaff_RDI[0x13] + 0x210))();
    if (iVar1 == 0) {
      return 0;
    }
    _IOLog();
    return iVar1;
  }
  return 0;
}



/* IOAudioDevice::timerFired @ 0x54f8 */

/* IOAudioDevice::timerFired(OSObject*, IOTimerEventSource*) */

void IOAudioDevice::timerFired(OSObject *param_1,IOTimerEventSource *param_2)

{
  longlong *plVar1;
  longlong unaff_RDI;
  
  if (unaff_RDI != 0) {
    plVar1 = (longlong *)
             OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,(OSMetaClass *)param_2);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00005522. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0xa08))(*(code **)(*plVar1 + 0xa08));
      return;
    }
  }
  return;
}



/* IOAudioDevice::removeTimerEvent @ 0x5526 */

/* IOAudioDevice::removeTimerEvent(OSObject*) */

void IOAudioDevice::removeTimerEvent(OSObject *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong unaff_RDI;
  
  if ((*(longlong **)(unaff_RDI + 0xb8) == (longlong *)0x0) ||
     (plVar2 = (longlong *)(**(code **)(**(longlong **)(unaff_RDI + 0xb8) + 0x1f8))(),
     plVar2 == (longlong *)0x0)) {
    return;
  }
  (**(code **)(*plVar2 + 0x20))();
  (**(code **)(**(longlong **)(unaff_RDI + 0xb8) + 0x1d8))();
  iVar1 = (**(code **)(**(longlong **)(unaff_RDI + 0xb8) + 0x130))();
  if (iVar1 == 0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x218))();
  }
  else if ((ulonglong)plVar2[4] <= *(ulonglong *)(unaff_RDI + 200)) {
    plVar3 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)param_1);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x128))();
      lVar4 = (**(code **)(**(longlong **)(unaff_RDI + 0xb8) + 0x1f8))();
      if (lVar4 != 0) {
        uVar5 = *(ulonglong *)(lVar4 + 0x20);
        do {
          *(ulonglong *)(unaff_RDI + 200) = uVar5;
          do {
            lVar4 = (**(code **)(*plVar3 + 0x128))();
            if ((lVar4 == 0) ||
               (lVar4 = (**(code **)(**(longlong **)(unaff_RDI + 0xb8) + 0x1f8))(), lVar4 == 0))
            goto LAB_0000563c;
            uVar5 = *(ulonglong *)(lVar4 + 0x20);
          } while (*(ulonglong *)(unaff_RDI + 200) <= uVar5);
        } while( true );
      }
LAB_0000563c:
      (**(code **)(*plVar3 + 0x28))();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x210))();
  }
                    /* WARNING: Could not recover jumptable at 0x00005673. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))();
  return;
}



/* IOAudioDevice::removeAllTimerEvents @ 0x5676 */

/* IOAudioDevice::removeAllTimerEvents() */

void IOAudioDevice::removeAllTimerEvents(void)

{
  longlong unaff_RDI;
  
  __os_log_internal("+ IOAudioDevice[%p]::removeAllTimerEvents()\n",0);
  if (*(longlong **)(unaff_RDI + 0x98) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x218))();
  }
  if (*(longlong **)(unaff_RDI + 0xb8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0xb8) + 0x158))();
  }
  __os_log_internal("- IOAudioDevice[%p]::removeAllTimerEvents()\n",0);
  return;
}



/* IOAudioDevice::dispatchTimerEvents @ 0x56f2 */

/* IOAudioDevice::dispatchTimerEvents(bool) */

void IOAudioDevice::dispatchTimerEvents(bool param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined7 in_register_00000009;
  OSCollection *pOVar5;
  char unaff_SIL;
  longlong *unaff_RDI;
  
  pOVar5 = (OSCollection *)CONCAT71(in_register_00000009,param_1);
  if ((unaff_RDI[0x17] != 0) &&
     ((unaff_SIL != '\0' || (iVar2 = (**(code **)(*unaff_RDI + 0x9b8))(), iVar2 != 0)))) {
    lVar1 = unaff_RDI[0x19];
    plVar3 = (longlong *)OSCollectionIterator::withCollection(pOVar5);
    if (plVar3 != (longlong *)0x0) {
      while (lVar4 = (**(code **)(*plVar3 + 0x128))(), lVar4 != 0) {
        lVar4 = (**(code **)(*(longlong *)unaff_RDI[0x17] + 0x1f8))();
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 0x18))();
        }
      }
      (**(code **)(*plVar3 + 0x28))();
    }
    iVar2 = (**(code **)(*(longlong *)unaff_RDI[0x17] + 0x130))();
    if (iVar2 != 0) {
      unaff_RDI[0x1a] = lVar1 + unaff_RDI[0x1a];
                    /* WARNING: Could not recover jumptable at 0x000057c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)unaff_RDI[0x13] + 0x210))();
      return;
    }
  }
  return;
}



/* IOAudioTimerEvent::MetaClass::~MetaClass @ 0x57d6 */

/* IOAudioTimerEvent::MetaClass::~MetaClass() */

void __thiscall IOAudioTimerEvent::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* IOAudioEngineEntry::MetaClass::~MetaClass @ 0x57e0 */

/* IOAudioEngineEntry::MetaClass::~MetaClass() */

void __thiscall IOAudioEngineEntry::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* IOAudioDevice::MetaClass::~MetaClass @ 0x57ea */

/* IOAudioDevice::MetaClass::~MetaClass() */

void __thiscall IOAudioDevice::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* IOAudioEngine::MetaClass::MetaClass @ 0x58b0 */

/* IOAudioEngine::MetaClass::MetaClass() */

void __thiscall IOAudioEngine::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)section_00000108.segname,PTR_gMetaClass_0001e038,in_R8,in_R9D);
  *unaff_RDI = &PTR__MetaClass_00021340;
  return;
}



/* IOAudioEngine::MetaClass::~MetaClass @ 0x58e2 */

/* IOAudioEngine::MetaClass::~MetaClass() */

void __thiscall IOAudioEngine::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* IOAudioEngine::IOAudioEngine @ 0x58ec */

/* IOAudioEngine::IOAudioEngine(OSMetaClass const*) */

void __thiscall IOAudioEngine::IOAudioEngine(IOAudioEngine *this,OSMetaClass *param_1)

{
  undefined8 *unaff_RDI;
  
  IOService::IOService((IOService *)this,param_1);
  *unaff_RDI = &PTR__IOAudioEngine_00020730;
  return;
}



/* IOAudioEngine::~IOAudioEngine @ 0x590c */

/* IOAudioEngine::~IOAudioEngine() */

void __thiscall IOAudioEngine::~IOAudioEngine(IOAudioEngine *this)

{
  IOService::~IOService((IOService *)this);
  return;
}



/* IOAudioEngine::~IOAudioEngine @ 0x5916 */

/* IOAudioEngine::~IOAudioEngine() */

void __thiscall IOAudioEngine::~IOAudioEngine(IOAudioEngine *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* IOAudioEngine::~IOAudioEngine @ 0x591c */

/* IOAudioEngine::~IOAudioEngine() */

void __thiscall IOAudioEngine::~IOAudioEngine(IOAudioEngine *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* IOAudioEngine::getMetaClass @ 0x5922 */

/* IOAudioEngine::getMetaClass() const */

undefined ** IOAudioEngine::getMetaClass(void)

{
  return &gMetaClass;
}



/* IOAudioEngine::MetaClass::MetaClass @ 0x5930 */

/* IOAudioEngine::MetaClass::MetaClass() */

void __thiscall IOAudioEngine::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)section_00000108.segname,PTR_gMetaClass_0001e038,in_R8,in_R9D);
  *unaff_RDI = &PTR__MetaClass_00021340;
  return;
}



/* IOAudioEngine::MetaClass::alloc @ 0x5962 */

/* IOAudioEngine::MetaClass::alloc() const */

undefined8 IOAudioEngine::MetaClass::alloc(void)

{
  return 0;
}



/* IOAudioEngine::operator.new @ 0x596a */

/* IOAudioEngine::operator new(unsigned long) */

void * __thiscall IOAudioEngine::operator_new(IOAudioEngine *this,ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)_OSObject_typed_operator_new();
  return pvVar1;
}



/* IOAudioEngine::operator.delete @ 0x597e */

/* IOAudioEngine::operator delete(void*, unsigned long) */

void IOAudioEngine::operator_delete(void *param_1,ulong param_2)

{
  _OSObject_typed_operator_delete();
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine17 @ 0x5996 */

/* IOAudioEngine::_RESERVEDIOAudioEngine17() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine17(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine18 @ 0x59ac */

/* IOAudioEngine::_RESERVEDIOAudioEngine18() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine18(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine19 @ 0x59c2 */

/* IOAudioEngine::_RESERVEDIOAudioEngine19() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine19(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine20 @ 0x59d8 */

/* IOAudioEngine::_RESERVEDIOAudioEngine20() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine20(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine21 @ 0x59ee */

/* IOAudioEngine::_RESERVEDIOAudioEngine21() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine21(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine22 @ 0x5a04 */

/* IOAudioEngine::_RESERVEDIOAudioEngine22() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine22(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine23 @ 0x5a1a */

/* IOAudioEngine::_RESERVEDIOAudioEngine23() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine23(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine24 @ 0x5a30 */

/* IOAudioEngine::_RESERVEDIOAudioEngine24() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine24(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine25 @ 0x5a46 */

/* IOAudioEngine::_RESERVEDIOAudioEngine25() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine25(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine26 @ 0x5a5c */

/* IOAudioEngine::_RESERVEDIOAudioEngine26() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine26(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine27 @ 0x5a72 */

/* IOAudioEngine::_RESERVEDIOAudioEngine27() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine27(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine28 @ 0x5a88 */

/* IOAudioEngine::_RESERVEDIOAudioEngine28() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine28(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine29 @ 0x5a9e */

/* IOAudioEngine::_RESERVEDIOAudioEngine29() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine29(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine30 @ 0x5ab4 */

/* IOAudioEngine::_RESERVEDIOAudioEngine30() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine30(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine31 @ 0x5aca */

/* IOAudioEngine::_RESERVEDIOAudioEngine31() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine31(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine32 @ 0x5ae0 */

/* IOAudioEngine::_RESERVEDIOAudioEngine32() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine32(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine33 @ 0x5af6 */

/* IOAudioEngine::_RESERVEDIOAudioEngine33() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine33(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine34 @ 0x5b0c */

/* IOAudioEngine::_RESERVEDIOAudioEngine34() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine34(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine35 @ 0x5b22 */

/* IOAudioEngine::_RESERVEDIOAudioEngine35() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine35(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine36 @ 0x5b38 */

/* IOAudioEngine::_RESERVEDIOAudioEngine36() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine36(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine37 @ 0x5b4e */

/* IOAudioEngine::_RESERVEDIOAudioEngine37() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine37(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine38 @ 0x5b64 */

/* IOAudioEngine::_RESERVEDIOAudioEngine38() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine38(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine39 @ 0x5b7a */

/* IOAudioEngine::_RESERVEDIOAudioEngine39() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine39(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine40 @ 0x5b90 */

/* IOAudioEngine::_RESERVEDIOAudioEngine40() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine40(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine41 @ 0x5ba6 */

/* IOAudioEngine::_RESERVEDIOAudioEngine41() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine41(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine42 @ 0x5bbc */

/* IOAudioEngine::_RESERVEDIOAudioEngine42() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine42(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine43 @ 0x5bd2 */

/* IOAudioEngine::_RESERVEDIOAudioEngine43() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine43(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine44 @ 0x5be8 */

/* IOAudioEngine::_RESERVEDIOAudioEngine44() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine44(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine45 @ 0x5bfe */

/* IOAudioEngine::_RESERVEDIOAudioEngine45() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine45(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine46 @ 0x5c14 */

/* IOAudioEngine::_RESERVEDIOAudioEngine46() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine46(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::_RESERVEDIOAudioEngine47 @ 0x5c2a */

/* IOAudioEngine::_RESERVEDIOAudioEngine47() */

void __thiscall IOAudioEngine::_RESERVEDIOAudioEngine47(IOAudioEngine *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngine::setAttributeForConnection @ 0x5c40 */

/* IOAudioEngine::setAttributeForConnection(int, unsigned int, unsigned long) */

undefined8 IOAudioEngine::setAttributeForConnection(int param_1,uint param_2,ulong param_3)

{
  return 0xe00002c7;
}



/* IOAudioEngine::getAttributeForConnection @ 0x5c4c */

/* IOAudioEngine::getAttributeForConnection(int, unsigned int, unsigned long*) */

undefined8 IOAudioEngine::getAttributeForConnection(int param_1,uint param_2,ulong *param_3)

{
  return 0xe00002c7;
}



/* IOAudioEngine::calculateSampleTimeoutHiRes @ 0x5c58 */

/* IOAudioEngine::calculateSampleTimeoutHiRes(unsigned long long, unsigned int,
   IOAudioEnginePosition*, unsigned long long*) */

uintptr_t IOAudioEngine::calculateSampleTimeoutHiRes
                    (ulonglong param_1,uint param_2,IOAudioEnginePosition *param_3,
                    ulonglong *param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulonglong uVar4;
  uint uVar5;
  ulonglong unaff_RSI;
  longlong *unaff_RDI;
  uintptr_t uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uintptr_t arg1;
  uint uVar10;
  uintptr_t in_stack_ffffffffffffffb8;
  uintptr_t in_stack_ffffffffffffffc0;
  longlong lVar11;
  
  arg1 = 0xdeadbeef;
  uVar6 = 0xdeadbeef;
  if (param_1 != 0) {
    uVar6 = *(uintptr_t *)(param_1 + 4);
  }
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug(param_2,(uintptr_t)unaff_RSI,uVar6,0,in_stack_ffffffffffffffb8,
                  in_stack_ffffffffffffffc0);
  }
  if ((param_3 == (IOAudioEnginePosition *)0x0 || param_1 == 0) || (param_2 == 0 || unaff_RSI == 0))
  {
    uVar6 = 0xe00002c2;
    puVar9 = (uint *)PTR__kdebug_enable_0001e070;
    if (param_3 == (IOAudioEnginePosition *)0x0) goto LAB_00005f43;
  }
  else {
    lVar11 = 0;
    uVar6 = *(uintptr_t *)(unaff_RDI + 0x11);
    uVar5 = 1;
    uVar10 = uVar6;
    if (-1 < (longlong)unaff_RSI && uVar6 != 1) {
      do {
        unaff_RSI = unaff_RSI * 2;
        uVar5 = uVar5 * 2;
        if (uVar10 >> 1 == 1) break;
        uVar10 = uVar10 >> 1;
      } while (-1 < (longlong)unaff_RSI);
    }
    if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) == 0) {
      uVar10 = param_2 / *(uint *)(unaff_RDI[0x22] + 0x20) + *(int *)((longlong)unaff_RDI + 0x104);
    }
    else {
      _kernel_debug((uint32_t)unaff_RSI,uVar6,5,0,in_stack_ffffffffffffffb8,0);
      uVar10 = param_2 / *(uint *)(unaff_RDI[0x22] + 0x20) +
               *(uintptr_t *)((longlong)unaff_RDI + 0x104);
      if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
        _kernel_debug(uVar10,*(uintptr_t *)((longlong)unaff_RDI + 0x104),1,0,
                      in_stack_ffffffffffffffb8,(uintptr_t)lVar11);
      }
    }
    uVar1 = *(uint *)param_1;
    iVar7 = *(int *)(param_1 + 4);
    iVar8 = uVar1 - uVar10;
    if (uVar1 < uVar10) {
      iVar7 = iVar7 + -1;
      iVar8 = (uVar1 - uVar10) + (int)unaff_RDI[0x11];
    }
    (**(code **)(*unaff_RDI + 0xae8))();
    puVar9 = (uint *)PTR__kdebug_enable_0001e070;
    uVar10 = iVar7 * (int)unaff_RDI[0x11] + iVar8;
    if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) == 0) {
      uVar4 = ((ulonglong)(uVar5 >> 1) + (unaff_RSI >> 0x20) * (ulonglong)uVar10) /
              CONCAT44(0,uVar5);
    }
    else {
      _kernel_debug(uVar10,(uintptr_t)lVar11,2,0,in_stack_ffffffffffffffb8,(uintptr_t)lVar11);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = CONCAT44(0,uVar5);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulonglong)(uVar5 >> 1) + (ulonglong)uVar10 * (unaff_RSI >> 0x20);
      uVar4 = SUB168(auVar3 / auVar2,0);
      if ((*puVar9 & 0xfffffff7) != 0) {
        _kernel_debug(SUB164(auVar3 / auVar2,0),(uintptr_t)(unaff_RSI >> 0x20),3,0,
                      in_stack_ffffffffffffffb8,(uintptr_t)lVar11);
      }
    }
    _nanoseconds_to_absolutetime();
    *(ulonglong *)param_3 = uVar4 + lVar11;
    _clock_get_uptime();
    in_stack_ffffffffffffffc0 = (uintptr_t)lVar11;
    if (*(longlong *)param_3 == 0) {
      uVar6 = 0xe00002ee;
      if ((*puVar9 & 0xfffffff7) != 0) {
        _kernel_debug(0,0,4,0,in_stack_ffffffffffffffb8,in_stack_ffffffffffffffc0);
      }
    }
    else {
      _absolutetime_to_nanoseconds();
      uVar6 = 0;
    }
  }
  arg1 = (uintptr_t)*(undefined8 *)param_3;
LAB_00005f43:
  if ((*puVar9 & 0xfffffff7) != 0) {
    _kernel_debug(0,arg1,uVar6,0,in_stack_ffffffffffffffb8,in_stack_ffffffffffffffc0);
  }
  return uVar6;
}



/* IOAudioEngine::useHiResSampleInterval @ 0x5f7a */

/* IOAudioEngine::useHiResSampleInterval() */

undefined8 __thiscall IOAudioEngine::useHiResSampleInterval(IOAudioEngine *this)

{
  longlong *unaff_RDI;
  
  *(undefined1 *)(unaff_RDI[0x22] + 0x3c) = 1;
  (**(code **)(*unaff_RDI + 0x268))(this,**(undefined8 **)PTR__kOSBooleanTrue_0001e068);
  return 0;
}



/* IOAudioEngine::createUserClient @ 0x5faa */

/* IOAudioEngine::createUserClient(task*, void*, unsigned int, IOAudioEngineUserClient**,
   OSDictionary*) */

undefined8
IOAudioEngine::createUserClient
          (task *param_1,void *param_2,uint param_3,IOAudioEngineUserClient **param_4,
          OSDictionary *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 in_register_00000084;
  OSDictionary *in_stack_00000008;
  
  lVar1 = IOAudioEngineUserClient::withAudioEngine
                    ((IOAudioEngine *)param_1,param_2,param_4,(uint)param_4,in_stack_00000008);
  if (lVar1 == 0) {
    uVar2 = 0xe00002bd;
  }
  else {
    *(longlong *)CONCAT44(in_register_00000084,param_3) = lVar1;
    uVar2 = 0;
  }
  return uVar2;
}



/* IOAudioEngine::setInputSampleOffset @ 0x5fd4 */

/* IOAudioEngine::setInputSampleOffset(unsigned int) */

void IOAudioEngine::setInputSampleOffset(uint param_1)

{
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  
  __os_log_internal("+ IOAudioEngine[%p]::setInputSampleOffset(0x%lx)\n",0);
  *(undefined4 *)(unaff_RDI[0x22] + 0x30) = unaff_ESI;
  (**(code **)(*unaff_RDI + 0x280))(0x20,unaff_ESI);
  __os_log_internal("- IOAudioEngine[%p]::setInputSampleOffset(0x%lx)\n",0);
  return;
}



/* IOAudioEngine::setOutputSampleOffset @ 0x6066 */

/* IOAudioEngine::setOutputSampleOffset(unsigned int) */

void IOAudioEngine::setOutputSampleOffset(uint param_1)

{
  longlong *unaff_RDI;
  
  __os_log_internal("+ IOAudioEngine[%p]::setOutputSampleOffset(0x%lx)\n",0);
  (**(code **)(*unaff_RDI + 0xb78))();
  __os_log_internal("- IOAudioEngine[%p]::setOutputSampleOffset(0x%lx)\n",0);
  return;
}



/* IOAudioEngine::convertInputSamplesVBR @ 0x60e2 */

/* IOAudioEngine::convertInputSamplesVBR(void const*, void*, unsigned int, unsigned int&,
   _IOAudioStreamFormat const*, IOAudioStream*) */

void IOAudioEngine::convertInputSamplesVBR
               (void *param_1,void *param_2,uint param_3,uint *param_4,_IOAudioStreamFormat *param_5
               ,IOAudioStream *param_6)

{
  longlong *unaff_RDI;
  undefined4 in_register_00000084;
  
                    /* WARNING: Could not recover jumptable at 0x000060f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0xad8))
            (param_1,param_2,*(undefined4 *)CONCAT44(in_register_00000084,param_3));
  return;
}



/* IOAudioEngine::setClockDomain @ 0x60f6 */

/* IOAudioEngine::setClockDomain(unsigned int) */

void IOAudioEngine::setClockDomain(uint param_1)

{
  ulonglong uVar1;
  uint unaff_ESI;
  longlong *unaff_RDI;
  
  uVar1 = (ulonglong)unaff_RDI >> 2 & 0xffffffff;
  if (unaff_ESI != 0xffffffff) {
    uVar1 = (ulonglong)unaff_ESI;
  }
                    /* WARNING: Could not recover jumptable at 0x0000611e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x280))(0x20,uVar1);
  return;
}



/* IOAudioEngine::setClockIsStable @ 0x6120 */

/* IOAudioEngine::setClockIsStable(bool) */

void IOAudioEngine::setClockIsStable(bool param_1)

{
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  
                    /* WARNING: Could not recover jumptable at 0x00006138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x278))(param_1,unaff_ESI);
  return;
}



/* IOAudioEngine::getStreamForID @ 0x613a */

/* IOAudioEngine::getStreamForID(unsigned int) */

undefined8 __thiscall IOAudioEngine::getStreamForID(IOAudioEngine *this,uint param_1)

{
  longlong *plVar1;
  undefined8 extraout_RAX;
  undefined4 in_register_00000014;
  longlong unaff_RDI;
  
  plVar1 = *(longlong **)(*(longlong *)(unaff_RDI + 0x110) + 0x28);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x1e8))();
    OSMetaClassBase::safeMetaCast
              ((OSMetaClassBase *)&IOAudioStream::metaClass,
               (OSMetaClass *)CONCAT44(in_register_00000014,param_1));
    return extraout_RAX;
  }
  return 0;
}



/* IOAudioEngine::getNextStreamID @ 0x616e */

/* IOAudioEngine::getNextStreamID(IOAudioStream*) */

int IOAudioEngine::getNextStreamID(IOAudioStream *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong unaff_RDI;
  
  plVar2 = *(longlong **)(*(longlong *)(unaff_RDI + 0x110) + 0x28);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)OSArray::withCapacity((uint)param_1);
    *(longlong **)(*(longlong *)(unaff_RDI + 0x110) + 0x28) = plVar2;
  }
  (**(code **)(*plVar2 + 0x1b8))();
  iVar1 = (**(code **)(**(longlong **)(*(longlong *)(unaff_RDI + 0x110) + 0x28) + 0x130))();
  return iVar1 + -1;
}



/* IOAudioEngine::performFormatChange @ 0x61ca */

/* IOAudioEngine::performFormatChange(IOAudioStream*, _IOAudioStreamFormat const*,
   _IOAudioStreamFormatExtension const*, _IOAudioSampleRate const*) */

undefined8
IOAudioEngine::performFormatChange
          (IOAudioStream *param_1,_IOAudioStreamFormat *param_2,
          _IOAudioStreamFormatExtension *param_3,_IOAudioSampleRate *param_4)

{
  __os_log_internal("+-IOAudioEngine[%p]::performFormatChange(%p, %p, %p, %p)\n",0);
  return 0xe00002c7;
}



/* IOAudioEngine::getStatusDescriptor @ 0x6216 */

/* IOAudioEngine::getStatusDescriptor() */

undefined8 IOAudioEngine::getStatusDescriptor(void)

{
  longlong unaff_RDI;
  
  __os_log_internal("+-IOAudioEngine[%p]::getStatusDescriptor()\n",0);
  return *(undefined8 *)(*(longlong *)(unaff_RDI + 0x110) + 8);
}



/* IOAudioEngine::getNearestStartTime @ 0x6252 */

/* IOAudioEngine::getNearestStartTime(IOAudioStream*, _IOAudioTimeStamp*, bool) */

undefined8
IOAudioEngine::getNearestStartTime(IOAudioStream *param_1,_IOAudioTimeStamp *param_2,bool param_3)

{
  return 0;
}



/* IOAudioEngine::getBytesInInputBufferArrayDescriptor @ 0x625a */

/* IOAudioEngine::getBytesInInputBufferArrayDescriptor() */

undefined8 IOAudioEngine::getBytesInInputBufferArrayDescriptor(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(*(longlong *)(unaff_RDI + 0x110) + 0x10);
}



/* IOAudioEngine::getBytesInOutputBufferArrayDescriptor @ 0x626c */

/* IOAudioEngine::getBytesInOutputBufferArrayDescriptor() */

undefined8 IOAudioEngine::getBytesInOutputBufferArrayDescriptor(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(*(longlong *)(unaff_RDI + 0x110) + 0x18);
}



/* IOAudioEngine::eraseOutputSamples @ 0x627e */

/* IOAudioEngine::eraseOutputSamples(void const*, void*, unsigned int, unsigned int,
   _IOAudioStreamFormat const*, IOAudioStream*) */

undefined8
IOAudioEngine::eraseOutputSamples
          (void *param_1,void *param_2,uint param_3,uint param_4,_IOAudioStreamFormat *param_5,
          IOAudioStream *param_6)

{
  longlong unaff_RSI;
  undefined4 in_register_0000008c;
  
  if (unaff_RSI != 0) {
    ___bzero(*(int *)CONCAT44(in_register_0000008c,param_4) * 4 * (int)param_1);
  }
  if (param_2 != (void *)0x0) {
    ___bzero();
  }
  return 0;
}



/* IOAudioEngine::setMixClipOverhead @ 0x62ec */

/* IOAudioEngine::setMixClipOverhead(unsigned int) */

void IOAudioEngine::setMixClipOverhead(uint param_1)

{
  int unaff_ESI;
  longlong unaff_RDI;
  
  if (unaff_ESI - 2U < 0x61) {
    *(int *)(*(longlong *)(unaff_RDI + 0x110) + 0x20) = unaff_ESI;
  }
  return;
}



/* compareAudioStreams @ 0x6304 */

/* compareAudioStreams(IOAudioStream*, IOAudioStream*, void*) */

ulonglong compareAudioStreams(IOAudioStream *param_1,IOAudioStream *param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  
  uVar1 = (**(code **)(*unaff_RDI + 0xa78))();
  uVar2 = (**(code **)(*unaff_RSI + 0xa78))();
  uVar3 = 0xffffffff;
  if (uVar1 <= uVar2) {
    uVar3 = (ulonglong)(uVar1 < uVar2);
  }
  return uVar3;
}



/* IOAudioEngine::initKeys @ 0x633c */

/* IOAudioEngine::initKeys() */

void __thiscall IOAudioEngine::initKeys(IOAudioEngine *this)

{
  if (gSampleRateWholeNumberKey != 0) {
    return;
  }
  gSampleRateWholeNumberKey = OSSymbol::withCString((char *)this);
  gSampleRateFractionKey = OSSymbol::withCString((char *)this);
  return;
}



/* IOAudioEngine::createDictionaryFromSampleRate @ 0x6374 */

/* IOAudioEngine::createDictionaryFromSampleRate(_IOAudioSampleRate const*, OSDictionary*) */

longlong *
IOAudioEngine::createDictionaryFromSampleRate(_IOAudioSampleRate *param_1,OSDictionary *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  uVar3 = (uint)param_2;
  if (unaff_RDI == 0) {
LAB_00006414:
    unaff_RSI = (longlong *)0x0;
  }
  else {
    if (unaff_RSI == (longlong *)0x0) {
      unaff_RSI = (longlong *)OSDictionary::withCapacity((uint)param_1);
      if (unaff_RSI == (longlong *)0x0) goto LAB_00006414;
    }
    if (gSampleRateWholeNumberKey == 0) {
      initKeys((IOAudioEngine *)param_1);
    }
    plVar1 = (longlong *)OSNumber::withNumber((ulonglong)param_1,uVar3);
    plVar2 = plVar1;
    (**(code **)(*unaff_RSI + 0x1c0))();
    uVar3 = (uint)plVar2;
    (**(code **)(*plVar1 + 0x28))();
    plVar2 = (longlong *)OSNumber::withNumber((ulonglong)param_1,uVar3);
    (**(code **)(*unaff_RSI + 0x1c0))();
    (**(code **)(*plVar2 + 0x28))();
  }
  return unaff_RSI;
}



/* IOAudioEngine::createSampleRateFromDictionary @ 0x6424 */

/* IOAudioEngine::createSampleRateFromDictionary(OSDictionary const*, _IOAudioSampleRate*) */

undefined **
IOAudioEngine::createSampleRateFromDictionary(OSDictionary *param_1,_IOAudioSampleRate *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  OSMetaClassBase *pOVar3;
  undefined **ppuVar4;
  undefined **unaff_RSI;
  longlong *unaff_RDI;
  
  if (unaff_RDI == (longlong *)0x0) {
    ppuVar4 = (undefined **)0x0;
  }
  else {
    ppuVar4 = &createSampleRateFromDictionary(OSDictionary_const*,_IOAudioSampleRate*)::
               staticSampleRate;
    if (unaff_RSI != (undefined **)0x0) {
      ppuVar4 = unaff_RSI;
    }
    if (gSampleRateWholeNumberKey == 0) {
      initKeys((IOAudioEngine *)param_1);
    }
    *ppuVar4 = (undefined *)0x0;
    (**(code **)(*unaff_RDI + 0x1f8))();
    pOVar3 = (OSMetaClassBase *)PTR_metaClass_0001e020;
    plVar2 = (longlong *)
             OSMetaClassBase::safeMetaCast
                       ((OSMetaClassBase *)PTR_metaClass_0001e020,(OSMetaClass *)param_2);
    if (plVar2 != (longlong *)0x0) {
      pOVar3 = (OSMetaClassBase *)*plVar2;
      uVar1 = (**(code **)(pOVar3 + 0x148))();
      *(undefined4 *)ppuVar4 = uVar1;
    }
    (**(code **)(*unaff_RDI + 0x1f8))();
    plVar2 = (longlong *)OSMetaClassBase::safeMetaCast(pOVar3,(OSMetaClass *)param_2);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 0x148))();
      *(undefined4 *)((longlong)ppuVar4 + 4) = uVar1;
    }
  }
  return ppuVar4;
}



/* IOAudioEngine::timerCallback @ 0x64de */

/* IOAudioEngine::timerCallback(OSObject*, IOAudioDevice*) */

void IOAudioEngine::timerCallback(OSObject *param_1,IOAudioDevice *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,(OSMetaClass *)param_2);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000064fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xa98))();
    return;
  }
  return;
}



/* IOAudioEngine::free @ 0x6502 */

/* IOAudioEngine::free() */

void IOAudioEngine::free(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *unaff_RDI;
  
  __os_log_internal("+ IOAudioEngine[%p]::free()\n",0);
  lVar1 = unaff_RDI[0x22];
  if (lVar1 != 0) {
    if (*(longlong **)(lVar1 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 8) + 0x28))();
      lVar1 = unaff_RDI[0x22];
      *(undefined8 *)(lVar1 + 8) = 0;
      unaff_RDI[0x16] = 0;
    }
    if (*(longlong **)(lVar1 + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x28))();
      lVar1 = unaff_RDI[0x22];
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    if (*(longlong **)(lVar1 + 0x18) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x28))();
      lVar1 = unaff_RDI[0x22];
      *(undefined8 *)(lVar1 + 0x18) = 0;
    }
    if (*(longlong **)(lVar1 + 0x28) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x28) + 0x28))();
      lVar1 = unaff_RDI[0x22];
      *(undefined8 *)(lVar1 + 0x28) = 0;
    }
    if (*(longlong **)(lVar1 + 0x58) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x58) + 0x218))();
      lVar1 = unaff_RDI[0x22];
      if (*(longlong **)(lVar1 + 0x40) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar1 + 0x40) + 0x148))();
        lVar1 = unaff_RDI[0x22];
      }
      if (*(longlong **)(lVar1 + 0x58) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar1 + 0x58) + 0x28))();
        lVar1 = unaff_RDI[0x22];
      }
      *(undefined8 *)(lVar1 + 0x58) = 0;
    }
    if (*(longlong **)(lVar1 + 0x40) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x40) + 0x28))();
      lVar1 = unaff_RDI[0x22];
    }
    *(undefined8 *)(lVar1 + 0x40) = 0;
    unaff_RDI[0x22] = 0;
    _IOFreeTypeImpl();
  }
  if ((longlong *)unaff_RDI[0x1c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x1c] + 0x28))();
    unaff_RDI[0x1c] = 0;
  }
  if ((longlong *)unaff_RDI[0x1a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x1a] + 0x28))();
    unaff_RDI[0x1a] = 0;
  }
  if ((longlong *)unaff_RDI[0x1e] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x1e] + 0x28))();
    unaff_RDI[0x1e] = 0;
  }
  if (unaff_RDI[0x1f] != 0) {
    (**(code **)(*unaff_RDI + 0xb28))();
    (**(code **)(*(longlong *)unaff_RDI[0x1f] + 0x28))();
    unaff_RDI[0x1f] = 0;
  }
  plVar2 = (longlong *)unaff_RDI[0x19];
  if (plVar2 != (longlong *)0x0) {
    if ((longlong *)unaff_RDI[0x18] != (longlong *)0x0) {
      (**(code **)(*(longlong *)unaff_RDI[0x18] + 0x148))();
      plVar2 = (longlong *)unaff_RDI[0x19];
    }
    (**(code **)(*plVar2 + 0x28))();
    unaff_RDI[0x19] = 0;
  }
  if ((longlong *)unaff_RDI[0x18] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x18] + 0x28))();
    unaff_RDI[0x18] = 0;
  }
  (**(code **)(PTR_vtable_0001e050 + 0xa0))();
  __os_log_internal("- IOAudioEngine[%p]::free()\n",0);
  return;
}



/* IOAudioEngine::initHardware @ 0x675a */

/* IOAudioEngine::initHardware(IOService*) */

undefined8 IOAudioEngine::initHardware(IOService *param_1)

{
  __os_log_internal("+-IOAudioEngine[%p]::initHardware(%p)\n",0);
  return 1;
}



/* IOAudioEngine::start @ 0x6786 */

/* IOAudioEngine::start(IOService*) */

undefined1 IOAudioEngine::start(IOService *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  OSMetaClass *pOVar4;
  longlong *unaff_RDI;
  
  pcVar3 = "+ IOAudioEngine[%p]::start(%p)\n";
  pOVar4 = (OSMetaClass *)0x0;
  __os_log_internal();
  uVar2 = OSMetaClassBase::safeMetaCast((OSMetaClassBase *)pcVar3,pOVar4);
  uVar1 = (**(code **)(*unaff_RDI + 0x9d8))(*unaff_RDI,uVar2);
  __os_log_internal("- IOAudioEngine[%p]::start(%p) returns %d\n",0);
  return uVar1;
}



/* IOAudioEngine::start @ 0x681e */

/* IOAudioEngine::start(IOService*, IOAudioDevice*) */

uint IOAudioEngine::start(IOService *param_1,IOAudioDevice *param_2)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  OSObject *pOVar6;
  IOAudioEngine *this;
  uintptr_t arg1;
  IOWorkLoop *pIVar7;
  IOWorkLoop *unaff_RSI;
  longlong *unaff_RDI;
  uintptr_t unaff_R14D;
  uintptr_t unaff_R15D;
  
  pIVar7 = (IOWorkLoop *)0x0;
  __os_log_internal("+ IOAudioEngine[%p]::start(%p, %p)\n");
  puVar1 = PTR__kdebug_enable_0001e070;
  arg1 = (uintptr_t)unaff_RSI;
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug((uint32_t)param_2,arg1,0,0,unaff_R14D,unaff_R15D);
    pIVar7 = unaff_RSI;
  }
  cVar2 = (**(code **)(PTR_vtable_0001e050 + 0x5d0))();
  uVar3 = 0;
  if ((param_2 != (IOAudioDevice *)0x0) && (cVar2 != '\0')) {
    (**(code **)(*unaff_RDI + 0x9e8))();
    plVar4 = (longlong *)(**(code **)(*(longlong *)unaff_RDI[0x17] + 0x688))();
    unaff_RDI[0x18] = (longlong)plVar4;
    if (plVar4 == (longlong *)0x0) {
      uVar3 = 0;
    }
    else {
      pOVar6 = (OSObject *)*plVar4;
      (**(code **)(pOVar6 + 0x20))();
      uVar3 = 0;
      lVar5 = IOCommandGate::commandGate
                        (pOVar6,(_func_int_OSObject_ptr_void_ptr_void_ptr_void_ptr_void_ptr *)pIVar7
                        );
      unaff_RDI[0x19] = lVar5;
      if (lVar5 != 0) {
        this = *(IOAudioEngine **)unaff_RDI[0x18];
        (**(code **)(this + 0x140))();
        setWorkLoopOnAllAudioControls(this,pIVar7);
        uVar3 = (**(code **)(*unaff_RDI + 0x9e0))();
        *(undefined1 *)((longlong)unaff_RDI + 0x10c) = 0;
      }
    }
  }
  __os_log_internal("- IOAudioEngine[%p]::start(%p, %p)\n",0);
  if ((*(uint *)puVar1 & 0xfffffff7) != 0) {
    _kernel_debug((uint32_t)param_2,arg1,uVar3 & 0xff,0,unaff_R14D,unaff_R15D);
  }
  return uVar3;
}



/* IOAudioEngine::setWorkLoopOnAllAudioControls @ 0x699a */

/* IOAudioEngine::setWorkLoopOnAllAudioControls(IOWorkLoop*) */

void __thiscall
IOAudioEngine::setWorkLoopOnAllAudioControls(IOAudioEngine *this,IOWorkLoop *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong unaff_RDI;
  
  if (((*(longlong *)(unaff_RDI + 0xf8) != 0) && (cVar1 = IOService::isInactive(), cVar1 == '\0'))
     && (plVar2 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)this),
        plVar2 != (longlong *)0x0)) {
    plVar3 = (longlong *)(**(code **)(*plVar2 + 0x128))();
    while (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x680))();
      if (lVar4 == unaff_RDI) {
        IOAudioControl::setWorkLoop((IOAudioControl *)this,param_1);
      }
      plVar3 = (longlong *)(**(code **)(*plVar2 + 0x128))();
    }
                    /* WARNING: Could not recover jumptable at 0x00006a25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x28))();
    return;
  }
  return;
}



/* IOAudioEngine::stop @ 0x6a32 */

/* IOAudioEngine::stop(IOService*) */

void IOAudioEngine::stop(IOService *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *unaff_RDI;
  
  __os_log_internal("+ IOAudioEngine[%p]::stop(%p)\n",0);
  if ((longlong *)unaff_RDI[0x19] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x19] + 0x1c8))(0,0,0,0);
  }
  (**(code **)(*unaff_RDI + 0xa48))();
  (**(code **)(*unaff_RDI + 0xb98))();
  (**(code **)(*unaff_RDI + 0xbf0))();
  (**(code **)(*unaff_RDI + 0xb28))();
  lVar1 = unaff_RDI[0x22];
  if (*(int *)(lVar1 + 0x38) == 0) {
    *(undefined4 *)(lVar1 + 0x34) = 2;
    plVar2 = (longlong *)unaff_RDI[0x19];
    if (plVar2 != (longlong *)0x0) {
      if ((longlong *)unaff_RDI[0x18] != (longlong *)0x0) {
        (**(code **)(*(longlong *)unaff_RDI[0x18] + 0x148))();
        __os_log_internal("  completed removeEventSource ( ... )\n",0);
        plVar2 = (longlong *)unaff_RDI[0x19];
      }
      (**(code **)(*plVar2 + 0x28))();
      unaff_RDI[0x19] = 0;
      __os_log_internal("  completed release ()\n",0);
    }
  }
  else {
    *(undefined4 *)(lVar1 + 0x34) = 1;
  }
  (**(code **)(PTR_vtable_0001e050 + 0x5d8))();
  __os_log_internal("- IOAudioEngine[%p]::stop(%p)\n",0);
  return;
}



/* IOAudioEngine::detachUserClientsAction @ 0x6b8a */

/* IOAudioEngine::detachUserClientsAction(OSObject*, void*, void*, void*, void*) */

undefined4
IOAudioEngine::detachUserClientsAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong unaff_RDI;
  
  uVar1 = 0xe00002c2;
  if (unaff_RDI != 0) {
    plVar2 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,param_2);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 0xbc8))();
    }
  }
  __os_log_internal("+- IOAudioEngine::detachUserClientsAction(%p, %p, %p, %p, %p) returns 0x%lX\n",
                    0);
  return uVar1;
}



/* IOAudioEngine::getWorkLoop @ 0x6c18 */

/* IOAudioEngine::getWorkLoop() const */

undefined8 IOAudioEngine::getWorkLoop(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(unaff_RDI + 0xc0);
}



/* IOAudioEngine::getCommandGate @ 0x6c26 */

/* IOAudioEngine::getCommandGate() const */

undefined8 IOAudioEngine::getCommandGate(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(unaff_RDI + 200);
}



/* IOAudioEngine::registerService @ 0x6c34 */

/* IOAudioEngine::registerService(unsigned int) */

void IOAudioEngine::registerService(uint param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined **ppuVar5;
  OSMetaClass *pOVar6;
  longlong *unaff_RDI;
  
  pcVar4 = "+ IOAudioEngine[%p]::registerService(0x%lx)\n";
  pOVar6 = (OSMetaClass *)0x0;
  __os_log_internal();
  if ((*(byte *)((longlong)unaff_RDI + 0xa4) & 1) == 0) {
    (**(code **)(*unaff_RDI + 0xa20))();
    (**(code **)(PTR_vtable_0001e050 + 0x5c0))();
    if ((longlong *)unaff_RDI[0x1c] != (longlong *)0x0) {
      iVar1 = (**(code **)(*(longlong *)unaff_RDI[0x1c] + 0x130))();
      if (iVar1 != 0) {
        plVar2 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)pcVar4);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x128))();
          pcVar4 = (char *)&IOAudioStream::metaClass;
          while( true ) {
            plVar3 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)pcVar4,pOVar6);
            if (plVar3 == (longlong *)0x0) break;
            pcVar4 = (char *)*plVar3;
            (**(code **)(pcVar4 + 0x5b0))();
            (**(code **)(*plVar2 + 0x128))();
          }
          (**(code **)(*plVar2 + 0x28))();
        }
      }
    }
    if ((longlong *)unaff_RDI[0x1a] != (longlong *)0x0) {
      iVar1 = (**(code **)(*(longlong *)unaff_RDI[0x1a] + 0x130))();
      if (iVar1 != 0) {
        plVar2 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)pcVar4);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x128))();
          ppuVar5 = &IOAudioStream::metaClass;
          while( true ) {
            plVar3 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)ppuVar5,pOVar6);
            if (plVar3 == (longlong *)0x0) break;
            ppuVar5 = (undefined **)*plVar3;
            (**(code **)((longlong)ppuVar5 + 0x5b0))();
            (**(code **)(*plVar2 + 0x128))();
          }
          (**(code **)(*plVar2 + 0x28))();
        }
      }
    }
    *(undefined1 *)((longlong)unaff_RDI + 0xa4) = 1;
  }
  __os_log_internal("- IOAudioEngine[%p]::registerService(0x%lx)\n",0);
  return;
}



/* IOAudioEngine::getGlobalUniqueID @ 0x6dbe */

/* IOAudioEngine::getGlobalUniqueID() */

undefined8 IOAudioEngine::getGlobalUniqueID(void)

{
  size_t sVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  char *in_RCX;
  char *pcVar8;
  longlong *unaff_RDI;
  char *in_R8;
  uint uVar9;
  
  lVar3 = (**(code **)(*unaff_RDI + 0x38))();
  if (lVar3 == 0) {
    pcVar4 = (char *)0x0;
  }
  else {
    pcVar4 = (char *)OSMetaClass::getClassName();
  }
  lVar3 = (**(code **)(*unaff_RDI + 0x3b8))();
  plVar5 = (longlong *)(**(code **)(*unaff_RDI + 0xb38))();
  if (pcVar4 == (char *)0x0) {
    uVar9 = 3;
  }
  else {
    sVar1 = _strlen(in_RCX);
    uVar9 = sVar1 + 3;
  }
  if (lVar3 != 0) {
    sVar1 = _strlen(in_RCX);
    uVar9 = uVar9 + sVar1;
  }
  if (plVar5 != (longlong *)0x0) {
    iVar2 = (**(code **)(*plVar5 + 0x130))();
    uVar9 = iVar2 + uVar9;
  }
  pcVar8 = (char *)(ulonglong)uVar9;
  lVar6 = _IOMallocZeroData();
  if (lVar6 == 0) {
    uVar7 = 0;
  }
  else {
    if (pcVar4 != (char *)0x0) {
      _snprintf(pcVar4,0x1824d,in_R8);
      in_RCX = pcVar4;
    }
    if (lVar3 != 0) {
      ___strncat_chk(pcVar8,pcVar8);
      in_RCX = pcVar8;
      ___strncat_chk(pcVar8,pcVar8);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x148))();
      ___strncat_chk(pcVar8,pcVar8);
      (**(code **)(*plVar5 + 0x28))();
      in_RCX = pcVar8;
    }
    uVar7 = OSString::withCString(in_RCX);
    _IOFreeData();
  }
  return uVar7;
}



/* IOAudioEngine::getLocalUniqueID @ 0x6f02 */

/* IOAudioEngine::getLocalUniqueID() */

void IOAudioEngine::getLocalUniqueID(void)

{
  longlong lVar1;
  char *pcVar2;
  longlong unaff_RDI;
  char *in_R8;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_0001e058;
  pcVar2 = (char *)(ulonglong)*(uint *)(unaff_RDI + 0x108);
  _snprintf(pcVar2,0x18251,in_R8);
  OSString::withCString(pcVar2);
  if (*(longlong *)PTR____stack_chk_guard_0001e058 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* IOAudioEngine::setIndex @ 0x6f68 */

/* IOAudioEngine::setIndex(unsigned int) */

void IOAudioEngine::setIndex(uint param_1)

{
  longlong *plVar1;
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  
  *(undefined4 *)(unaff_RDI + 0x21) = unaff_ESI;
  plVar1 = (longlong *)(**(code **)(*unaff_RDI + 0xb30))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*unaff_RDI + 0x268))();
                    /* WARNING: Could not recover jumptable at 0x00006fa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))();
    return;
  }
  return;
}



/* IOAudioEngine::setAudioDevice @ 0x6fb2 */

/* IOAudioEngine::setAudioDevice(IOAudioDevice*) */

void IOAudioEngine::setAudioDevice(IOAudioDevice *param_1)

{
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  
  *(undefined8 *)(unaff_RDI + 0xb8) = unaff_RSI;
  return;
}



/* IOAudioEngine::setDescription @ 0x6fc0 */

/* IOAudioEngine::setDescription(char const*) */

void IOAudioEngine::setDescription(char *param_1)

{
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  if (unaff_RSI != 0) {
                    /* WARNING: Could not recover jumptable at 0x00006fde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_RDI + 0x270))();
    return;
  }
  return;
}



/* IOAudioEngine::resetStatusBuffer @ 0x6fe2 */

/* IOAudioEngine::resetStatusBuffer() */

void IOAudioEngine::resetStatusBuffer(void)

{
  longlong lVar1;
  undefined *puVar2;
  longlong *unaff_RDI;
  uintptr_t in_stack_00000008;
  uintptr_t in_stack_00000010;
  
  puVar2 = PTR__kdebug_enable_0001e070;
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug(0,0,0,0,in_stack_00000008,in_stack_00000010);
  }
  lVar1 = unaff_RDI[0x16];
  *(undefined4 *)(lVar1 + 4) = 0;
  *(undefined8 *)(lVar1 + 8) = 0;
  *(undefined4 *)(lVar1 + 0x10) = 0;
  (**(code **)(*unaff_RDI + 0xab8))();
  if ((*(uint *)puVar2 & 0xfffffff7) != 0) {
    _kernel_debug(0,0,0,0,in_stack_00000008,in_stack_00000010);
  }
  __os_log_internal("+- IOAudioEngine[%p]::resetStatusBuffer()\n",0);
  return;
}



/* IOAudioEngine::clearAllSampleBuffers @ 0x707e */

/* IOAudioEngine::clearAllSampleBuffers() */

void IOAudioEngine::clearAllSampleBuffers(void)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined **in_RCX;
  undefined **ppuVar4;
  OSMetaClass *in_RDX;
  longlong unaff_RDI;
  
  if (*(longlong **)(unaff_RDI + 0xe0) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x130))();
    if (iVar1 != 0) {
      plVar2 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)in_RCX);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x128))();
        in_RCX = &IOAudioStream::metaClass;
        while( true ) {
          plVar3 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)in_RCX,in_RDX);
          if (plVar3 == (longlong *)0x0) break;
          in_RCX = (undefined **)*plVar3;
          (**(code **)((longlong)in_RCX + 0xa18))();
          (**(code **)(*plVar2 + 0x128))();
        }
        (**(code **)(*plVar2 + 0x28))();
      }
    }
  }
  if (*(longlong **)(unaff_RDI + 0xd0) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(unaff_RDI + 0xd0) + 0x130))();
    if (iVar1 != 0) {
      plVar2 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)in_RCX);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x128))();
        ppuVar4 = &IOAudioStream::metaClass;
        while( true ) {
          plVar3 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)ppuVar4,in_RDX);
          if (plVar3 == (longlong *)0x0) break;
          ppuVar4 = (undefined **)*plVar3;
          (**(code **)((longlong)ppuVar4 + 0xa18))();
          (**(code **)(*plVar2 + 0x128))();
        }
                    /* WARNING: Could not recover jumptable at 0x00007189. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x28))();
        return;
      }
    }
  }
  return;
}



/* IOAudioEngine::createUserClient @ 0x718c */

/* IOAudioEngine::createUserClient(task*, void*, unsigned int, IOAudioEngineUserClient**) */

undefined8
IOAudioEngine::createUserClient
          (task *param_1,void *param_2,uint param_3,IOAudioEngineUserClient **param_4)

{
  longlong extraout_RAX;
  undefined8 uVar1;
  undefined4 in_register_00000084;
  
  IOAudioEngineUserClient::withAudioEngine
            ((IOAudioEngine *)param_1,param_2,(void *)CONCAT44(in_register_00000084,param_3),
             (uint)param_4);
  if (extraout_RAX == 0) {
    uVar1 = 0xe00002bd;
  }
  else {
    *(longlong *)CONCAT44(in_register_00000084,param_3) = extraout_RAX;
    uVar1 = 0;
  }
  return uVar1;
}



/* IOAudioEngine::newUserClient @ 0x71b2 */

/* IOAudioEngine::newUserClient(task*, void*, unsigned int, IOUserClient**) */

undefined8
IOAudioEngine::newUserClient(task *param_1,void *param_2,uint param_3,IOUserClient **param_4)

{
  return 0xe00002c7;
}



/* IOAudioEngine::newUserClient @ 0x71be */

/* IOAudioEngine::newUserClient(task*, void*, unsigned int, OSDictionary*, IOUserClient**) */

int IOAudioEngine::newUserClient
              (task *param_1,void *param_2,uint param_3,OSDictionary *param_4,IOUserClient **param_5
              )

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *unaff_RDI;
  undefined4 in_register_00000084;
  longlong *local_38;
  
  iVar2 = (**(code **)(*unaff_RDI + 0x778))(param_1,param_2,param_4);
  if (iVar2 == 0) {
    return 0;
  }
  local_38 = (longlong *)0x0;
  __os_log_internal("+ IOAudioEngine[%p]::newUserClient(0x%p, %p, 0x%lx, %p, %p)\n",0);
  cVar1 = IOService::isInactive();
  iVar2 = -0x1ffffd40;
  if (cVar1 == '\0') {
    iVar3 = (**(code **)(*unaff_RDI + 0x8b0))
                      ((ulonglong)param_1 & 0xffffffff,param_2,&local_38,
                       CONCAT44(in_register_00000084,param_3));
    iVar2 = -0x1ffffd43;
    if (local_38 != (longlong *)0x0 && iVar3 == 0) {
      cVar1 = (**(code **)(*local_38 + 0x670))();
      if (cVar1 == '\0') {
        (**(code **)(*local_38 + 0x28))();
      }
      else {
        cVar1 = (**(code **)(*local_38 + 0x5c0))();
        if (cVar1 != '\0') {
          iVar2 = (**(code **)(*(longlong *)unaff_RDI[0x18] + 0x1a0))(local_38);
          if (iVar2 == 0) {
            *(longlong **)param_4 = local_38;
            iVar2 = 0;
          }
          goto LAB_00007334;
        }
        (**(code **)(*local_38 + 0x678))();
        (**(code **)(*local_38 + 0x28))();
      }
      iVar2 = -0x1ffffd44;
    }
  }
LAB_00007334:
  __os_log_internal("- IOAudioEngine[%p]::newUserClient(0x%p, %p, 0x%lx, %p, %p)\n",0);
  return iVar2;
}



/* IOAudioEngine::_addUserClientAction @ 0x7378 */

/* IOAudioEngine::_addUserClientAction(OSObject*, void*, void*, void*, void*) */

undefined4
IOAudioEngine::_addUserClientAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 unaff_SIL;
  longlong unaff_RDI;
  
  uVar2 = 0xe00002c2;
  if (unaff_RDI != 0) {
    plVar3 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,param_2);
    if (plVar3 != (longlong *)0x0) {
      plVar4 = (longlong *)(**(code **)(*plVar3 + 0x9d0))();
      if (plVar4 == (longlong *)0x0) {
        uVar2 = 0xe00002bc;
      }
      else {
        lVar1 = plVar3[0x22];
        if ((lVar1 != 0) && (*(uint *)(lVar1 + 0x34) < 2)) {
          *(int *)(lVar1 + 0x38) = *(int *)(lVar1 + 0x38) + 1;
        }
        uVar2 = (**(code **)(*plVar4 + 0x1c8))();
        setCommandGateUsage(param_2,(bool)unaff_SIL);
      }
    }
  }
  return uVar2;
}



/* IOAudioEngine::clientClosed @ 0x741c */

/* IOAudioEngine::clientClosed(IOAudioEngineUserClient*) */

void IOAudioEngine::clientClosed(IOAudioEngineUserClient *param_1)

{
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  if (unaff_RSI != 0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0x1a0))();
  }
  __os_log_internal("+- IOAudioEngine[%p]::clientClosed(%p)\n",0);
  return;
}



/* IOAudioEngine::_removeUserClientAction @ 0x748a */

/* IOAudioEngine::_removeUserClientAction(OSObject*, void*, void*, void*, void*) */

undefined4
IOAudioEngine::_removeUserClientAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 unaff_SIL;
  longlong unaff_RDI;
  
  uVar2 = 0xe00002c2;
  if (unaff_RDI != 0) {
    plVar3 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,param_2);
    if (plVar3 != (longlong *)0x0) {
      plVar4 = (longlong *)(**(code **)(*plVar3 + 0x9d0))();
      if (plVar4 == (longlong *)0x0) {
        uVar2 = 0xe00002bc;
      }
      else {
        lVar1 = plVar3[0x22];
        if ((lVar1 != 0) && (*(uint *)(lVar1 + 0x34) < 2)) {
          *(int *)(lVar1 + 0x38) = *(int *)(lVar1 + 0x38) + 1;
        }
        uVar2 = (**(code **)(*plVar4 + 0x1c8))();
        setCommandGateUsage(param_2,(bool)unaff_SIL);
      }
    }
  }
  return uVar2;
}



/* IOAudioEngine::setCommandGateUsage @ 0x752e */

/* IOAudioEngine::setCommandGateUsage(IOAudioEngine*, bool) */

void IOAudioEngine::setCommandGateUsage(IOAudioEngine *param_1,bool param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  char unaff_SIL;
  longlong *plVar4;
  longlong unaff_RDI;
  
  lVar2 = *(longlong *)(unaff_RDI + 0x110);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x34);
    if (unaff_SIL == '\0') {
      if (uVar1 == 1) {
        if ((0 < *(int *)(lVar2 + 0x38)) &&
           (iVar3 = *(int *)(lVar2 + 0x38) + -1, *(int *)(lVar2 + 0x38) = iVar3, iVar3 == 0)) {
          *(undefined4 *)(lVar2 + 0x34) = 2;
          plVar4 = *(longlong **)(unaff_RDI + 200);
          if (plVar4 != (longlong *)0x0) {
            if (*(longlong **)(unaff_RDI + 0xc0) != (longlong *)0x0) {
              (**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0x148))();
              plVar4 = *(longlong **)(unaff_RDI + 200);
            }
            (**(code **)(*plVar4 + 0x28))();
            *(undefined8 *)(unaff_RDI + 200) = 0;
          }
        }
      }
      else if ((uVar1 == 0) && (0 < *(int *)(lVar2 + 0x38))) {
        *(int *)(lVar2 + 0x38) = *(int *)(lVar2 + 0x38) + -1;
      }
    }
    else if (uVar1 < 2) {
      *(int *)(lVar2 + 0x38) = *(int *)(lVar2 + 0x38) + 1;
    }
  }
  return;
}



/* IOAudioEngine::addUserClientAction @ 0x75c8 */

/* IOAudioEngine::addUserClientAction(OSObject*, void*, void*, void*, void*) */

undefined4
IOAudioEngine::addUserClientAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  undefined4 uVar1;
  longlong *plVar2;
  char *pcVar3;
  OSMetaClass *pOVar4;
  longlong unaff_RDI;
  
  pcVar3 = "+ IOAudioEngine::addUserClientAction(%p, %p)\n";
  pOVar4 = (OSMetaClass *)0x0;
  __os_log_internal();
  uVar1 = 0xe00002c2;
  if (unaff_RDI != 0) {
    plVar2 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)pcVar3,pOVar4);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 3000))();
    }
  }
  __os_log_internal("- IOAudioEngine::addUserClientAction(%p, %p) returns 0x%lX\n",0);
  return uVar1;
}



/* IOAudioEngine::removeUserClientAction @ 0x7666 */

/* IOAudioEngine::removeUserClientAction(OSObject*, void*, void*, void*, void*) */

undefined4
IOAudioEngine::removeUserClientAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong unaff_RDI;
  
  uVar1 = 0xe00002c2;
  if (unaff_RDI != 0) {
    plVar2 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,param_2);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 0xbc0))();
    }
  }
  __os_log_internal("+- IOAudioEngine::removeUserClientAction(%p, %p) returns 0x%lX\n",0);
  return uVar1;
}



/* IOAudioEngine::addUserClient @ 0x76e0 */

/* IOAudioEngine::addUserClient(IOAudioEngineUserClient*) */

undefined8 IOAudioEngine::addUserClient(IOAudioEngineUserClient *param_1)

{
  longlong unaff_RDI;
  
  (**(code **)(**(longlong **)(unaff_RDI + 0xf0) + 0x1c0))();
  __os_log_internal("+- IOAudioEngine[%p]::addUserClient(%p) returns 0x%lX\n",0);
  return 0;
}



/* IOAudioEngine::removeUserClient @ 0x7738 */

/* IOAudioEngine::removeUserClient(IOAudioEngineUserClient*) */

undefined8 IOAudioEngine::removeUserClient(IOAudioEngineUserClient *param_1)

{
  char cVar1;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RSI + 0x20))();
  (**(code **)(*(longlong *)unaff_RDI[0x1e] + 0x1d8))();
  cVar1 = (**(code **)(*unaff_RSI + 0xab8))();
  if (cVar1 != '\0') {
    (**(code **)(*unaff_RDI + 0xbe8))();
  }
  cVar1 = IOService::isInactive();
  if (cVar1 == '\0') {
    (**(code **)(*unaff_RSI + 0x600))();
  }
  (**(code **)(*unaff_RSI + 0x28))();
  __os_log_internal("+- IOAudioEngine[%p]::removeUserClient(%p) returns 0x%lX\n",0);
  return 0;
}



/* IOAudioEngine::detachUserClients @ 0x77dc */

/* IOAudioEngine::detachUserClients() */

undefined8 IOAudioEngine::detachUserClients(void)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  char *pcVar5;
  longlong *unaff_RDI;
  
  __os_log_internal("+ IOAudioEngine[%p]::detachUserClients\n",0);
  cVar1 = IOService::isInactive();
  if (cVar1 == '\0') {
    pcVar5 = "  !isInactive ()\n";
    __os_log_internal("  !isInactive ()\n",0);
    plVar3 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)pcVar5);
    if (plVar3 != (longlong *)0x0) {
      plVar4 = (longlong *)(**(code **)(*plVar3 + 0x128))();
      while (plVar4 != (longlong *)0x0) {
        __os_log_internal("  will invoke userClient->terminate ()\n",0);
        (**(code **)(*plVar4 + 0x600))();
        __os_log_internal("  completed userClient->terminate ()\n");
        plVar4 = (longlong *)(**(code **)(*plVar3 + 0x128))();
      }
      __os_log_internal("  will invoke iterator->release ()\n",0);
      (**(code **)(*plVar3 + 0x28))();
      __os_log_internal("  completed iterator->release ()\n",0);
    }
  }
  __os_log_internal("  will invoke userClients->flushCollection ()\n",0);
  (**(code **)(*(longlong *)unaff_RDI[0x1e] + 0x158))();
  __os_log_internal("  completed userClients->flushCollection ()\n",0);
  iVar2 = (**(code **)(*unaff_RDI + 0xa70))();
  if (iVar2 == 1) {
    (**(code **)(*unaff_RDI + 0xa38))();
    __os_log_internal("  will invoke stopEngineAtPosition ()\n",0);
    (**(code **)(*unaff_RDI + 0xab8))();
    __os_log_internal("  completed stopEngineAtPosition ()\n",0);
  }
  __os_log_internal("- IOAudioEngine[%p]::detachUserClients returns 0x%lX\n",0,unaff_RDI,0);
  return 0;
}



/* IOAudioEngine::startClient @ 0x7a16 */

/* IOAudioEngine::startClient(IOAudioEngineUserClient*) */

uintptr_t IOAudioEngine::startClient(IOAudioEngineUserClient *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uintptr_t uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  undefined1 uVar11;
  longlong lVar12;
  uintptr_t uVar13;
  uintptr_t uVar14;
  undefined8 unaff_RBX;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  uintptr_t in_stack_ffffffffffffffc8;
  uintptr_t arg5;
  
  uVar6 = IOService::isInactive();
  plVar1 = (longlong *)unaff_RDI[0x17];
  if (plVar1 == (longlong *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)(*plVar1 + 0x9b8))();
  }
  puVar3 = PTR__kdebug_enable_0001e070;
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug((uint32_t)plVar1,uVar6 & 0xff,uVar7,0,in_stack_ffffffffffffffc8,
                  (uintptr_t)unaff_RBX);
  }
  pcVar10 = "+ IOAudioEngine[%p]::startClient(%p)\n";
  lVar12 = 0;
  __os_log_internal("+ IOAudioEngine[%p]::startClient(%p)\n");
  (**(code **)(*unaff_RDI + 0x20))();
  arg5 = (uintptr_t)unaff_RBX;
  uVar7 = 0xe00002c0;
  if ((unaff_RDI[0x17] == 0) || (unaff_RDI[0x19] == 0)) goto LAB_00007cd5;
  cVar4 = IOService::isInactive();
  arg5 = (uintptr_t)unaff_RBX;
  if (cVar4 != '\0') goto LAB_00007cd5;
  cVar4 = IOService::isInactive();
  arg5 = (uintptr_t)unaff_RBX;
  if (cVar4 != '\0') goto LAB_00007cd5;
  (**(code **)(*(longlong *)unaff_RDI[0x17] + 0x20))();
  lVar2 = unaff_RDI[0x22];
  if ((lVar2 != 0) && (*(uint *)(lVar2 + 0x34) < 2)) {
    *(int *)(lVar2 + 0x38) = *(int *)(lVar2 + 0x38) + 1;
  }
  uVar7 = 0;
  uVar6 = 10;
  while( true ) {
    uVar8 = uVar6;
    uVar11 = (undefined1)lVar12;
    iVar9 = (**(code **)(*(longlong *)unaff_RDI[0x17] + 0x9b8))();
    arg5 = (uintptr_t)unaff_RBX;
    if (iVar9 != 0) break;
    _clock_interval_to_deadline();
    lVar12 = 0;
    pcVar10 = (char *)0x0;
    uVar6 = (**(code **)(*(longlong *)unaff_RDI[0x19] + 0x1f0))(2);
    bVar5 = IOService::isInactive();
    if ((*(uint *)puVar3 & 0xfffffff7) != 0) {
      pcVar10 = (char *)0x0;
      lVar12 = (longlong)(int)uVar6;
      _kernel_debug((uint)bVar5,uVar6,0,0,in_stack_ffffffffffffffc8,(uintptr_t)unaff_RBX);
    }
    arg5 = (uintptr_t)unaff_RBX;
    uVar11 = (undefined1)lVar12;
    if (1 < uVar6) {
      uVar14 = 0xe00002eb;
      if (uVar6 != 2) {
        uVar11 = 0x10;
        __os_log_internal("Sound Assert: IOAudioEngine::startClient got kr 0x%08x\n",0x10,uVar6);
        _IOLog();
      }
      goto LAB_00007c5a;
    }
    cVar4 = IOService::isInactive();
    arg5 = (uintptr_t)unaff_RBX;
    uVar11 = (undefined1)lVar12;
    uVar14 = 0xe00002c0;
    uVar13 = 0xe00002c0;
    if (((cVar4 != '\0') || (uVar14 = uVar13, unaff_RDI[0x19] == 0)) || (unaff_RDI[0x17] == 0))
    goto LAB_00007c5a;
    cVar4 = IOService::isInactive();
    arg5 = (uintptr_t)unaff_RBX;
    uVar11 = (undefined1)lVar12;
    if (cVar4 != '\0') goto LAB_00007c5a;
    if ((longlong *)unaff_RDI[0x17] != (longlong *)0x0) {
      iVar9 = (**(code **)(*(longlong *)unaff_RDI[0x17] + 0x9b8))();
      arg5 = (uintptr_t)unaff_RBX;
      uVar11 = (undefined1)lVar12;
      if (iVar9 != 0) break;
    }
    arg5 = (uintptr_t)unaff_RBX;
    uVar11 = (undefined1)lVar12;
    pcVar10 = (char *)(ulonglong)uVar8;
    uVar6 = uVar8 - 1;
    if (uVar8 - 1 == 0) goto code_r0x00007c13;
  }
LAB_00007c9f:
  pcVar10 = (char *)CONCAT71((int7)((ulonglong)pcVar10 >> 8),uVar7 != 0 || unaff_RSI == 0);
  if (uVar7 == 0 && unaff_RSI != 0) {
    uVar7 = (**(code **)(*unaff_RDI + 0xbe0))();
  }
  goto LAB_00007cbe;
code_r0x00007c13:
  uVar14 = 0;
LAB_00007c5a:
  pcVar10 = (char *)(ulonglong)uVar8;
  uVar7 = uVar14;
  if (uVar8 != 1) goto LAB_00007c9f;
  pcVar10 = "Sound Assert: IOAudioEngine::startClient timed out waiting\n";
  uVar11 = 0x10;
  __os_log_internal();
  _IOLog();
  uVar7 = 0xe00002d6;
LAB_00007cbe:
  setCommandGateUsage((IOAudioEngine *)pcVar10,(bool)uVar11);
  (**(code **)(*(longlong *)unaff_RDI[0x17] + 0x28))();
LAB_00007cd5:
  (**(code **)(*unaff_RDI + 0x28))();
  __os_log_internal("- IOAudioEngine[%p]::startClient(%p) returns 0x%lX\n",0);
  bVar5 = IOService::isInactive();
  if ((*(uint *)puVar3 & 0xfffffff7) != 0) {
    _kernel_debug((uint)bVar5,(uintptr_t)unaff_RSI,uVar7,0,in_stack_ffffffffffffffc8,arg5);
  }
  return uVar7;
}



/* IOAudioEngine::stopClient @ 0x7d44 */

/* IOAudioEngine::stopClient(IOAudioEngineUserClient*) */

undefined4 IOAudioEngine::stopClient(IOAudioEngineUserClient *param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  
  if (unaff_RSI == (longlong *)0x0) {
    uVar2 = 0xe00002c2;
  }
  else {
    cVar1 = (**(code **)(*unaff_RSI + 0xab8))();
    uVar2 = 0;
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*unaff_RDI + 0xbe8))();
    }
  }
  __os_log_internal("+- IOAudioEngine[%p]::stopClient(%p) returns 0x%lX\n",0);
  return uVar2;
}



/* IOAudioEngine::incrementActiveUserClients @ 0x7dba */

/* IOAudioEngine::incrementActiveUserClients() */

int IOAudioEngine::incrementActiveUserClients(void)

{
  int iVar1;
  longlong *unaff_RDI;
  int iVar2;
  
  __os_log_internal("+ IOAudioEngine[%p]::incrementActiveUserClients() - %ld\n",0);
  *(int *)(unaff_RDI + 0x20) = (int)unaff_RDI[0x20] + 1;
  (**(code **)(*unaff_RDI + 0x280))(0x20);
  iVar2 = 0;
  if ((int)unaff_RDI[0x20] == 1) {
    iVar1 = (**(code **)(*unaff_RDI + 0xa40))();
    if (iVar1 != 0) {
      (**(code **)(*unaff_RDI + 0xbe8))();
      iVar2 = iVar1;
    }
  }
  __os_log_internal("- IOAudioEngine[%p]::incrementActiveUserClients() - %ld returns %lX\n",0);
  return iVar2;
}



/* IOAudioEngine::decrementActiveUserClients @ 0x7e80 */

/* IOAudioEngine::decrementActiveUserClients() */

undefined8 IOAudioEngine::decrementActiveUserClients(void)

{
  int iVar1;
  longlong *unaff_RDI;
  
  *(int *)(unaff_RDI + 0x20) = (int)unaff_RDI[0x20] + -1;
  (**(code **)(*unaff_RDI + 0x280))(0x20);
  if ((int)unaff_RDI[0x20] == 0) {
    iVar1 = (**(code **)(*unaff_RDI + 0xa70))();
    if (iVar1 == 1) {
      (**(code **)(*unaff_RDI + 0xa38))();
      (**(code **)(*unaff_RDI + 0xab8))();
    }
  }
  __os_log_internal("+- IOAudioEngine[%p]::decrementActiveUserClients() - %ld returns 0x%lX\n",0);
  return 0;
}



/* IOAudioEngine::addAudioStream @ 0x7f30 */

/* IOAudioEngine::addAudioStream(IOAudioStream*) */

undefined4 IOAudioEngine::addAudioStream(IOAudioStream *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar5;
  ulong uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 uVar9;
  
  plVar7 = unaff_RDI;
  __os_log_internal("+ IOAudioEngine[%p]::addAudioStream(%p)\n",0);
  uVar6 = (ulong)plVar7;
  if (unaff_RSI == (longlong *)0x0) {
    uVar9 = 0xe00002c2;
    goto LAB_000080ef;
  }
  cVar1 = (**(code **)(*unaff_RSI + 0x670))();
  uVar9 = 0xe00002bc;
  if (cVar1 == '\0') goto LAB_000080ef;
  cVar1 = (**(code **)(*unaff_RSI + 0x5c0))();
  lVar8 = *unaff_RSI;
  if (cVar1 == '\0') {
    (**(code **)(lVar8 + 0x678))();
    goto LAB_000080ef;
  }
  iVar2 = (**(code **)(lVar8 + 0x9d8))();
  uVar4 = (uint)lVar8;
  if (iVar2 == 1) {
    plVar7 = unaff_RDI + 0x1a;
    (**(code **)(*(longlong *)unaff_RDI[0x1a] + 0x1a8))();
    iVar2 = (**(code **)(*unaff_RSI + 0xa80))();
    *(int *)(unaff_RDI + 0x1b) = (int)unaff_RDI[0x1b] + iVar2;
    plVar5 = *(longlong **)(unaff_RDI[0x22] + 0x10);
    lVar8 = 0x10;
LAB_0000808d:
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))();
    }
    (**(code **)(*(longlong *)*plVar7 + 0x130))();
    uVar3 = IOBufferMemoryDescriptor::withOptions
                      (uVar4,(ulong)*(undefined8 *)PTR__page_size_0001e078,uVar6);
    *(undefined8 *)(unaff_RDI[0x22] + lVar8) = uVar3;
  }
  else if (iVar2 == 0) {
    (**(code **)(*(longlong *)unaff_RDI[0x1c] + 0x1a8))();
    iVar2 = (**(code **)(*unaff_RSI + 0xa80))();
    *(int *)(unaff_RDI + 0x1d) = (int)unaff_RDI[0x1d] + iVar2;
    iVar2 = (**(code **)(*(longlong *)unaff_RDI[0x1c] + 0x130))();
    if (iVar2 == 1) {
      (**(code **)(*unaff_RDI + 0xb80))();
    }
    plVar7 = unaff_RDI + 0x1c;
    plVar5 = *(longlong **)(unaff_RDI[0x22] + 0x18);
    lVar8 = 0x18;
    goto LAB_0000808d;
  }
  uVar9 = 0;
  if ((*(byte *)((longlong)unaff_RDI + 0xa4) & 1) != 0) {
    uVar9 = 0;
    (**(code **)(*unaff_RSI + 0x5b0))();
  }
LAB_000080ef:
  __os_log_internal("- IOAudioEngine[%p]::addAudioStream(%p) returns 0x%lX\n",0);
  return uVar9;
}



/* IOAudioEngine::detachAudioStreams @ 0x812c */

/* IOAudioEngine::detachAudioStreams() */

void IOAudioEngine::detachAudioStreams(void)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  char *pcVar5;
  undefined **ppuVar6;
  OSMetaClass *pOVar7;
  longlong unaff_RDI;
  
  pcVar5 = "+ IOAudioEngine[%p]::detachAudioStreams()\n";
  pOVar7 = (OSMetaClass *)0x0;
  __os_log_internal();
  if ((*(longlong **)(unaff_RDI + 0xe0) != (longlong *)0x0) &&
     (iVar2 = (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x130))(), iVar2 != 0)) {
    plVar3 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)pcVar5);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x128))();
      ppuVar6 = &IOAudioStream::metaClass;
      plVar4 = (longlong *)
               OSMetaClassBase::safeMetaCast((OSMetaClassBase *)&IOAudioStream::metaClass,pOVar7);
      pcVar5 = (char *)ppuVar6;
      while (plVar4 != (longlong *)0x0) {
        cVar1 = IOService::isInactive();
        if (cVar1 == '\0') {
          (**(code **)(*plVar4 + 0x678))();
          (**(code **)(*plVar4 + 0x600))();
        }
        (**(code **)(*plVar3 + 0x128))();
        plVar4 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)pcVar5,pOVar7);
      }
      (**(code **)(*plVar3 + 0x28))();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x158))();
    plVar3 = *(longlong **)(*(longlong *)(unaff_RDI + 0x110) + 0x18);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))();
      *(undefined8 *)(*(longlong *)(unaff_RDI + 0x110) + 0x18) = 0;
    }
  }
  if ((*(longlong **)(unaff_RDI + 0xd0) != (longlong *)0x0) &&
     (iVar2 = (**(code **)(**(longlong **)(unaff_RDI + 0xd0) + 0x130))(), iVar2 != 0)) {
    plVar3 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)pcVar5);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x128))();
      ppuVar6 = &IOAudioStream::metaClass;
      plVar4 = (longlong *)
               OSMetaClassBase::safeMetaCast((OSMetaClassBase *)&IOAudioStream::metaClass,pOVar7);
      while (plVar4 != (longlong *)0x0) {
        cVar1 = IOService::isInactive();
        if (cVar1 == '\0') {
          (**(code **)(*plVar4 + 0x678))();
          (**(code **)(*plVar4 + 0x600))();
        }
        (**(code **)(*plVar3 + 0x128))();
        plVar4 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)ppuVar6,pOVar7);
      }
      (**(code **)(*plVar3 + 0x28))();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0xd0) + 0x158))();
    plVar3 = *(longlong **)(*(longlong *)(unaff_RDI + 0x110) + 0x10);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))();
      *(undefined8 *)(*(longlong *)(unaff_RDI + 0x110) + 0x10) = 0;
    }
  }
  plVar3 = *(longlong **)(*(longlong *)(unaff_RDI + 0x110) + 0x28);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x158))();
  }
  __os_log_internal("- IOAudioEngine[%p]::detachAudioStreams()\n",0);
  return;
}



/* IOAudioEngine::lockAllStreams @ 0x836a */

/* IOAudioEngine::lockAllStreams() */

void __thiscall IOAudioEngine::lockAllStreams(IOAudioEngine *this)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong unaff_RDI;
  
  if ((*(longlong *)(unaff_RDI + 0xe0) != 0) &&
     (plVar1 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)this),
     plVar1 != (longlong *)0x0)) {
    while (plVar2 = (longlong *)(**(code **)(*plVar1 + 0x128))(), plVar2 != (longlong *)0x0) {
      this = (IOAudioEngine *)*plVar2;
      (**(code **)(this + 0xaa8))();
    }
    (**(code **)(*plVar1 + 0x28))();
  }
  if ((*(longlong *)(unaff_RDI + 0xd0) != 0) &&
     (plVar1 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)this),
     plVar1 != (longlong *)0x0)) {
    while (plVar2 = (longlong *)(**(code **)(*plVar1 + 0x128))(), plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0xaa8))();
    }
                    /* WARNING: Could not recover jumptable at 0x000083fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))();
    return;
  }
  return;
}



/* IOAudioEngine::unlockAllStreams @ 0x8400 */

/* IOAudioEngine::unlockAllStreams() */

void __thiscall IOAudioEngine::unlockAllStreams(IOAudioEngine *this)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong unaff_RDI;
  
  if ((*(longlong *)(unaff_RDI + 0xe0) != 0) &&
     (plVar1 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)this),
     plVar1 != (longlong *)0x0)) {
    while (plVar2 = (longlong *)(**(code **)(*plVar1 + 0x128))(), plVar2 != (longlong *)0x0) {
      this = (IOAudioEngine *)*plVar2;
      (**(code **)(this + 0xab0))();
    }
    (**(code **)(*plVar1 + 0x28))();
  }
  if ((*(longlong *)(unaff_RDI + 0xd0) != 0) &&
     (plVar1 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)this),
     plVar1 != (longlong *)0x0)) {
    while (plVar2 = (longlong *)(**(code **)(*plVar1 + 0x128))(), plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0xab0))();
    }
                    /* WARNING: Could not recover jumptable at 0x00008492. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))();
    return;
  }
  return;
}



/* IOAudioEngine::getAudioStream @ 0x8496 */

/* IOAudioEngine::getAudioStream(_IOAudioStreamDirection, unsigned int) */

longlong IOAudioEngine::getAudioStream(OSCollection *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int unaff_ESI;
  longlong unaff_RDI;
  
  if ((*(longlong *)((ulonglong)(unaff_ESI == 0) * 0x10 + 0xd0 + unaff_RDI) == 0) ||
     (plVar1 = (longlong *)OSCollectionIterator::withCollection(param_1), plVar1 == (longlong *)0x0)
     ) {
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*plVar1 + 0x128))();
    while (lVar2 != 0) {
      if ((*(uint *)(lVar2 + 0xdc) <= param_2) &&
         (param_2 < *(uint *)(lVar2 + 0xdc) + *(int *)(lVar2 + 0xe0))) goto LAB_00008507;
      lVar2 = (**(code **)(*plVar1 + 0x128))();
    }
    lVar2 = 0;
LAB_00008507:
    (**(code **)(*plVar1 + 0x28))();
  }
  return lVar2;
}



/* IOAudioEngine::updateChannelNumbers @ 0x8524 */

/* IOAudioEngine::updateChannelNumbers() */

void IOAudioEngine::updateChannelNumbers(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  char *pcVar10;
  ulonglong uVar11;
  longlong unaff_RDI;
  uint uVar12;
  ulonglong uVar13;
  uint local_34;
  
  pcVar10 = "+ IOAudioEngine[%p]::updateChannelNumbers ()\n";
  __os_log_internal();
  *(undefined4 *)(unaff_RDI + 0xe8) = 0;
  *(undefined4 *)(unaff_RDI + 0xd8) = 0;
  iVar2 = (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x130))();
  if ((iVar2 != 0) &&
     (plVar4 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)pcVar10),
     plVar4 != (longlong *)0x0)) {
    while (plVar5 = (longlong *)(**(code **)(*plVar4 + 0x128))(), plVar5 != (longlong *)0x0) {
      pcVar10 = (char *)*plVar5;
      iVar2 = (**(code **)(pcVar10 + 0xa80))();
      *(int *)(unaff_RDI + 0xe8) = *(int *)(unaff_RDI + 0xe8) + iVar2;
    }
    (**(code **)(*plVar4 + 0x28))();
  }
  iVar2 = (**(code **)(**(longlong **)(unaff_RDI + 0xd0) + 0x130))();
  if ((iVar2 != 0) &&
     (plVar4 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)pcVar10),
     plVar4 != (longlong *)0x0)) {
    while (plVar5 = (longlong *)(**(code **)(*plVar4 + 0x128))(), plVar5 != (longlong *)0x0) {
      iVar2 = (**(code **)(*plVar5 + 0xa80))();
      *(int *)(unaff_RDI + 0xd8) = *(int *)(unaff_RDI + 0xd8) + iVar2;
    }
    (**(code **)(*plVar4 + 0x28))();
  }
  pcVar10 = "  o=%ld i=%ld\n";
  lVar6 = 0;
  __os_log_internal("  o=%ld i=%ld\n",0,*(undefined4 *)(unaff_RDI + 0xe8),
                    *(undefined4 *)(unaff_RDI + 0xd8));
  if (*(int *)(unaff_RDI + 0xe8) != 0) {
    lVar6 = _IOMallocData();
  }
  if (*(int *)(unaff_RDI + 0xd8) == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = _IOMallocData();
  }
  iVar2 = (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x130))();
  if ((iVar2 != 0) &&
     (plVar4 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)pcVar10),
     plVar4 != (longlong *)0x0)) {
    plVar5 = (longlong *)(**(code **)(*plVar4 + 0x128))();
    if (plVar5 != (longlong *)0x0) {
      iVar2 = 1;
      local_34 = 1;
      do {
        puVar8 = (uint *)(**(code **)(*plVar5 + 0xa30))();
        if (puVar8 != (uint *)0x0) {
          uVar13 = (ulonglong)*puVar8;
          uVar3 = (**(code **)(*plVar5 + 0xa80))();
          cVar1 = (**(code **)(*plVar5 + 0xa90))();
          pcVar10 = *(char **)(*plVar5 + 0xb00);
          if (cVar1 == '\0') {
            uVar13 = 0;
            (*(code *)pcVar10)();
          }
          else {
            (*(code *)pcVar10)();
            if (uVar13 == 0) {
              uVar13 = 0;
            }
            else {
              pcVar10 = (char *)(ulonglong)local_34;
              uVar11 = 0;
              do {
                *(uint *)(lVar6 + (ulonglong)(uint)(iVar2 + -1 + (int)uVar11) * 4) =
                     local_34 + (int)uVar11;
                uVar11 = uVar11 + 1;
              } while (uVar13 != uVar11);
            }
          }
          uVar12 = (uint)uVar13;
          if (uVar12 < uVar3) {
            lVar9 = uVar3 - uVar13;
            pcVar10 = (char *)(ulonglong)((uVar12 + iVar2) - 1);
            do {
              *(undefined4 *)(lVar6 + (longlong)pcVar10 * 4) = 0xffffffff;
              pcVar10 = (char *)(ulonglong)((int)pcVar10 + 1);
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
          iVar2 = iVar2 + uVar3;
          local_34 = local_34 + uVar12;
        }
        plVar5 = (longlong *)(**(code **)(*plVar4 + 0x128))();
      } while (plVar5 != (longlong *)0x0);
    }
    (**(code **)(*plVar4 + 0x28))();
  }
  iVar2 = (**(code **)(**(longlong **)(unaff_RDI + 0xd0) + 0x130))();
  if ((iVar2 != 0) &&
     (plVar4 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)pcVar10),
     plVar4 != (longlong *)0x0)) {
    plVar5 = (longlong *)(**(code **)(*plVar4 + 0x128))();
    if (plVar5 != (longlong *)0x0) {
      iVar2 = 1;
      local_34 = 1;
      do {
        puVar8 = (uint *)(**(code **)(*plVar5 + 0xa30))();
        if (puVar8 != (uint *)0x0) {
          uVar13 = (ulonglong)*puVar8;
          uVar3 = (**(code **)(*plVar5 + 0xa80))();
          cVar1 = (**(code **)(*plVar5 + 0xa90))();
          pcVar10 = *(char **)(*plVar5 + 0xb00);
          if (cVar1 == '\0') {
            uVar13 = 0;
            (*(code *)pcVar10)();
          }
          else {
            (*(code *)pcVar10)();
            if (uVar13 == 0) {
              uVar13 = 0;
            }
            else {
              pcVar10 = (char *)(ulonglong)local_34;
              uVar11 = 0;
              do {
                *(uint *)(lVar7 + (ulonglong)(uint)(iVar2 + -1 + (int)uVar11) * 4) =
                     local_34 + (int)uVar11;
                uVar11 = uVar11 + 1;
              } while (uVar13 != uVar11);
            }
          }
          uVar12 = (uint)uVar13;
          if (uVar12 < uVar3) {
            lVar9 = uVar3 - uVar13;
            pcVar10 = (char *)(ulonglong)((uVar12 + iVar2) - 1);
            do {
              *(undefined4 *)(lVar7 + (longlong)pcVar10 * 4) = 0xffffffff;
              pcVar10 = (char *)(ulonglong)((int)pcVar10 + 1);
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
          iVar2 = iVar2 + uVar3;
          local_34 = local_34 + uVar12;
        }
        plVar5 = (longlong *)(**(code **)(*plVar4 + 0x128))();
      } while (plVar5 != (longlong *)0x0);
    }
    (**(code **)(*plVar4 + 0x28))();
  }
  if ((*(longlong *)(unaff_RDI + 0xf8) != 0) &&
     (plVar4 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)pcVar10),
     plVar4 != (longlong *)0x0)) {
    plVar5 = (longlong *)(**(code **)(*plVar4 + 0x128))();
    while (plVar5 != (longlong *)0x0) {
      iVar2 = (**(code **)(*plVar5 + 0x9b0))();
      lVar9 = *plVar5;
      if (iVar2 == 0) {
LAB_000089ca:
        (**(code **)(lVar9 + 0x9f0))();
      }
      else {
        iVar2 = (**(code **)(lVar9 + 0x9c8))();
        if (((iVar2 == 0x696e7074) || (iVar2 == 0x70617373)) || (iVar2 == 0x6f757470)) {
          lVar9 = *plVar5;
          goto LAB_000089ca;
        }
      }
      plVar5 = (longlong *)(**(code **)(*plVar4 + 0x128))();
    }
    (**(code **)(*plVar4 + 0x28))();
  }
  if ((lVar6 != 0) && (*(int *)(unaff_RDI + 0xe8) != 0)) {
    _IOFreeData();
  }
  if ((lVar7 != 0) && (*(int *)(unaff_RDI + 0xd8) != 0)) {
    _IOFreeData();
  }
  __os_log_internal("- IOAudioEngine[%p]::updateChannelNumbers ()\n",0,unaff_RDI);
  return;
}



/* IOAudioEngine::startAudioEngine @ 0x8a64 */

/* IOAudioEngine::startAudioEngine() */

int IOAudioEngine::startAudioEngine(void)

{
  int iVar1;
  int iVar2;
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0xa70))();
  __os_log_internal("+ IOAudioEngine[%p]::startAudioEngine(state = %d)\n",0);
  iVar1 = (**(code **)(*unaff_RDI + 0xa70))();
  if (iVar1 == 0) {
    (**(code **)(*(longlong *)unaff_RDI[0x17] + 0xa10))();
  }
  else if (iVar1 != 3) {
    iVar2 = 0;
    if (iVar1 == 2) {
      iVar2 = (**(code **)(*unaff_RDI + 0xa58))();
    }
    goto LAB_00008b4e;
  }
  (**(code **)(*unaff_RDI + 0xa28))();
  *(undefined4 *)unaff_RDI[0x22] = 0;
  iVar2 = (**(code **)(*unaff_RDI + 0xa60))();
  if (iVar2 == 0) {
    (**(code **)(*unaff_RDI + 0xb50))();
    (**(code **)(*unaff_RDI + 0xba8))();
    iVar2 = 0;
  }
  else {
    iVar1 = (**(code **)(*unaff_RDI + 0xa70))();
    if (iVar1 == 0) {
      (**(code **)(*(longlong *)unaff_RDI[0x17] + 0xa18))();
    }
  }
LAB_00008b4e:
  __os_log_internal("- IOAudioEngine[%p]::startAudioEngine() returns 0x%lX\n",0);
  return iVar2;
}



/* IOAudioEngine::stopAudioEngine @ 0x8b84 */

/* IOAudioEngine::stopAudioEngine() */

int IOAudioEngine::stopAudioEngine(void)

{
  int iVar1;
  int iVar2;
  longlong *unaff_RDI;
  
  iVar2 = 0;
  __os_log_internal("+ IOAudioEngine[%p]::stopAudioEngine()\n",0);
  iVar1 = (**(code **)(*unaff_RDI + 0xa70))();
  if (iVar1 != 3) {
    if (iVar1 != 1) goto LAB_00008c0d;
    iVar2 = (**(code **)(*unaff_RDI + 0xa68))();
    if (iVar2 != 0) goto LAB_00008c0d;
  }
  iVar2 = 0;
  (**(code **)(*unaff_RDI + 0xb50))();
  (**(code **)(*unaff_RDI + 0xba8))();
  (**(code **)(*(longlong *)unaff_RDI[0x17] + 0xa18))();
LAB_00008c0d:
  __os_log_internal("- IOAudioEngine[%p]::stopAudioEngine() returns 0x%lX\n",0);
  return iVar2;
}



/* IOAudioEngine::pauseAudioEngine @ 0x8c3c */

/* IOAudioEngine::pauseAudioEngine() */

int IOAudioEngine::pauseAudioEngine(void)

{
  uint uVar1;
  int iVar2;
  longlong *unaff_RDI;
  
  iVar2 = 0;
  __os_log_internal("+ IOAudioEngine[%p]::pauseAudioEngine()\n",0);
  *(int *)unaff_RDI[0x22] = *(int *)unaff_RDI[0x22] + 1;
  uVar1 = (**(code **)(*unaff_RDI + 0xa70))();
  if ((uVar1 | 2) == 3) {
    iVar2 = (**(code **)(*unaff_RDI + 0xa68))();
    if (iVar2 == 0) {
      (**(code **)(*unaff_RDI + 0xb50))();
      (**(code **)(*unaff_RDI + 0xa30))();
      (**(code **)(*unaff_RDI + 0xba8))();
      iVar2 = 0;
    }
  }
  __os_log_internal("- IOAudioEngine[%p]::pauseAudioEngine() returns 0x%lX\n",0);
  return iVar2;
}



/* IOAudioEngine::resumeAudioEngine @ 0x8cfa */

/* IOAudioEngine::resumeAudioEngine() */

undefined8 IOAudioEngine::resumeAudioEngine(void)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  longlong *unaff_RDI;
  
  __os_log_internal("+ IOAudioEngine[%p]::resumeAudioEngine()\n");
  iVar2 = *(int *)unaff_RDI[0x22];
  if (iVar2 == 0) {
    __os_log_internal("  attempting to resume while not paused\n",0);
  }
  else {
    iVar2 = iVar2 + -1;
    *(int *)unaff_RDI[0x22] = iVar2;
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*unaff_RDI + 0xa70))();
      if (iVar2 == 2) {
        (**(code **)(*unaff_RDI + 0xb50))();
        (**(code **)(*unaff_RDI + 0xba8))();
        if (unaff_RDI[0x19] != 0) {
          pcVar3 = "send commandWakeup on resume for [%p]\n";
          __os_log_internal();
          lVar1 = unaff_RDI[0x22];
          if ((lVar1 != 0) && (*(uint *)(lVar1 + 0x34) < 2)) {
            *(int *)(lVar1 + 0x38) = *(int *)(lVar1 + 0x38) + 1;
          }
          bVar4 = false;
          (**(code **)(*(longlong *)unaff_RDI[0x19] + 0x1e8))();
          setCommandGateUsage((IOAudioEngine *)pcVar3,bVar4);
          if (((int)unaff_RDI[0x20] == 0) &&
             (((int)unaff_RDI[0x14] != 0 || (*(int *)((longlong)unaff_RDI + 0x9c) != 0)))) {
            iVar2 = (**(code **)(*(longlong *)unaff_RDI[0x17] + 0x9b8))();
            if (iVar2 != 0) {
              (**(code **)(*unaff_RDI + 0xa48))();
            }
          }
        }
      }
    }
  }
  __os_log_internal("- IOAudioEngine[%p]::resumeAudioEngine() returns 0x%lX\n",0);
  return 0;
}



/* IOAudioEngine::performAudioEngineStart @ 0x8e66 */

/* IOAudioEngine::performAudioEngineStart() */

undefined8 IOAudioEngine::performAudioEngineStart(void)

{
  return 0;
}



/* IOAudioEngine::performAudioEngineStop @ 0x8e6e */

/* IOAudioEngine::performAudioEngineStop() */

undefined8 IOAudioEngine::performAudioEngineStop(void)

{
  return 0;
}



/* IOAudioEngine::getStatus @ 0x8e76 */

/* IOAudioEngine::getStatus() */

undefined8 IOAudioEngine::getStatus(void)

{
  longlong unaff_RDI;
  
  __os_log_internal("+-IOAudioEngine[%p]::getStatus()\n",0);
  return *(undefined8 *)(unaff_RDI + 0xb0);
}



/* IOAudioEngine::setNumSampleFramesPerBuffer @ 0x8eae */

/* IOAudioEngine::setNumSampleFramesPerBuffer(unsigned int) */

void IOAudioEngine::setNumSampleFramesPerBuffer(uint param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  segment_command *psVar4;
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  
  __os_log_internal("+ IOAudioEngine[%p]::setNumSampleFramesPerBuffer(0x%lx)\n",0);
  iVar1 = (**(code **)(*unaff_RDI + 0xa70))();
  if (iVar1 == 1) {
    __os_log_internal("IOAudioEngine::setNumSampleFramesPerBuffer(0x%ld) - Error: can\'t change num sample frames while engine is running.\n"
                      ,0x10,unaff_ESI);
    _IOLog();
  }
  else {
    *(undefined4 *)(unaff_RDI + 0x11) = unaff_ESI;
    psVar4 = &segment_command_00000020;
    (**(code **)(*unaff_RDI + 0x280))(0x20,unaff_ESI);
    if ((unaff_RDI[0x1c] != 0) &&
       (plVar2 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)psVar4),
       plVar2 != (longlong *)0x0)) {
      while (plVar3 = (longlong *)(**(code **)(*plVar2 + 0x128))(), plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0xa10))();
      }
      (**(code **)(*plVar2 + 0x28))();
    }
  }
  __os_log_internal("- IOAudioEngine[%p]::setNumSampleFramesPerBuffer(0x%lx)\n",0);
  return;
}



/* IOAudioEngine::getNumSampleFramesPerBuffer @ 0x8fbe */

/* IOAudioEngine::getNumSampleFramesPerBuffer() */

undefined4 IOAudioEngine::getNumSampleFramesPerBuffer(void)

{
  longlong unaff_RDI;
  
  return *(undefined4 *)(unaff_RDI + 0x88);
}



/* IOAudioEngine::getState @ 0x8fca */

/* IOAudioEngine::getState() */

undefined4 IOAudioEngine::getState(void)

{
  longlong unaff_RDI;
  
  return *(undefined4 *)(unaff_RDI + 0xa8);
}



/* IOAudioEngine::setState @ 0x8fd6 */

/* IOAudioEngine::setState(_IOAudioEngineState) */

uintptr_t IOAudioEngine::setState(void)

{
  uintptr_t arg2;
  longlong lVar1;
  undefined *puVar2;
  char *pcVar3;
  bool bVar4;
  uintptr_t unaff_ESI;
  longlong *unaff_RDI;
  uintptr_t unaff_R14D;
  uintptr_t unaff_R15D;
  
  __os_log_internal("+-IOAudioEngine[%p]::setState(0x%x. oldState=%#x)\n");
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug(*(uint32_t *)(unaff_RDI + 0x15),*(uintptr_t *)(unaff_RDI + 0x21),unaff_ESI,0,
                  unaff_R14D,unaff_R15D);
  }
  arg2 = *(uintptr_t *)(unaff_RDI + 0x15);
  *(uintptr_t *)(unaff_RDI + 0x15) = unaff_ESI;
  puVar2 = PTR__kdebug_enable_0001e070;
  if (unaff_ESI == 0) {
    if (arg2 == 2) {
      if (unaff_RDI[0x19] != 0) {
        pcVar3 = "send commandWakeup on stop for [%p]\n";
        __os_log_internal();
        lVar1 = unaff_RDI[0x22];
        if ((lVar1 != 0) && (*(uint *)(lVar1 + 0x34) < 2)) {
          *(int *)(lVar1 + 0x38) = *(int *)(lVar1 + 0x38) + 1;
        }
        bVar4 = false;
        (**(code **)(*(longlong *)unaff_RDI[0x19] + 0x1e8))();
        setCommandGateUsage((IOAudioEngine *)pcVar3,bVar4);
      }
    }
    else if (arg2 == 1) {
      (**(code **)(*unaff_RDI + 0xb98))();
      (**(code **)(*unaff_RDI + 0xaa8))();
    }
  }
  else if ((unaff_ESI == 1) && (arg2 != 1)) {
    (**(code **)(*unaff_RDI + 0xb90))();
  }
  (**(code **)(*unaff_RDI + 0x280))(0x20,unaff_ESI);
  if ((*(uint *)puVar2 & 0xfffffff7) != 0) {
    _kernel_debug(*(uint32_t *)(unaff_RDI + 0x15),*(uintptr_t *)(unaff_RDI + 0x21),arg2,0,unaff_R14D
                  ,unaff_R15D);
  }
  return arg2;
}



/* IOAudioEngine::getSampleRate @ 0x9176 */

/* IOAudioEngine::getSampleRate() */

longlong IOAudioEngine::getSampleRate(void)

{
  longlong unaff_RDI;
  
  return unaff_RDI + 0x8c;
}



/* IOAudioEngine::setSampleRate @ 0x9184 */

/* IOAudioEngine::setSampleRate(_IOAudioSampleRate const*) */

void IOAudioEngine::setSampleRate(_IOAudioSampleRate *param_1)

{
  longlong *plVar1;
  char *pcVar2;
  OSDictionary *pOVar3;
  uintptr_t *unaff_RSI;
  longlong *unaff_RDI;
  uintptr_t in_stack_00000008;
  uintptr_t in_stack_00000010;
  
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug(0,*unaff_RSI,0,0,in_stack_00000008,in_stack_00000010);
  }
  pcVar2 = "+-IOAudioEngine[%p]::setSampleRate(%p)\n";
  pOVar3 = (OSDictionary *)0x0;
  __os_log_internal();
  *(undefined8 *)((longlong)unaff_RDI + 0x8c) = *(undefined8 *)unaff_RSI;
  plVar1 = (longlong *)createDictionaryFromSampleRate((_IOAudioSampleRate *)pcVar2,pOVar3);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*unaff_RDI + 0x268))();
                    /* WARNING: Could not recover jumptable at 0x0000921c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))();
    return;
  }
  return;
}



/* IOAudioEngine::hardwareSampleRateChanged @ 0x9224 */

/* IOAudioEngine::hardwareSampleRateChanged(_IOAudioSampleRate const*) */

undefined8 IOAudioEngine::hardwareSampleRateChanged(_IOAudioSampleRate *param_1)

{
  longlong lVar1;
  undefined *puVar2;
  uintptr_t arg1;
  uintptr_t unaff_EBP;
  uintptr_t *unaff_RSI;
  longlong *unaff_RDI;
  uintptr_t unaff_retaddr;
  
  puVar2 = PTR__kdebug_enable_0001e070;
  if (unaff_RSI == (uintptr_t *)0x0) {
    arg1 = 0;
  }
  else {
    arg1 = *unaff_RSI;
  }
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug(0,arg1,0,0,unaff_EBP,unaff_retaddr);
  }
  if ((*unaff_RSI != *(uintptr_t *)((longlong)unaff_RDI + 0x8c)) ||
     (unaff_RSI[1] != *(uintptr_t *)(unaff_RDI + 0x12))) {
    lVar1 = unaff_RDI[0x15];
    if ((int)lVar1 == 1) {
      (**(code **)(*unaff_RDI + 0xa50))();
    }
    (**(code **)(*unaff_RDI + 0xb58))();
    if ((*(byte *)((longlong)unaff_RDI + 0xa5) & 1) == 0) {
      (**(code **)(*unaff_RDI + 0xba8))();
    }
    if ((int)lVar1 == 1) {
      (**(code **)(*unaff_RDI + 0xa58))();
    }
  }
  if ((*(uint *)puVar2 & 0xfffffff7) != 0) {
    _kernel_debug(0,0,0,0,unaff_EBP,unaff_retaddr);
  }
  return 0;
}



/* IOAudioEngine::setSampleLatency @ 0x92fc */

/* IOAudioEngine::setSampleLatency(unsigned int) */

void IOAudioEngine::setSampleLatency(uint param_1)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0xb68))();
                    /* WARNING: Could not recover jumptable at 0x00009324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0xb70))();
  return;
}



/* IOAudioEngine::setOutputSampleLatency @ 0x9326 */

/* IOAudioEngine::setOutputSampleLatency(unsigned int) */

void IOAudioEngine::setOutputSampleLatency(uint param_1)

{
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  
                    /* WARNING: Could not recover jumptable at 0x00009343. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x280))(0x20,unaff_ESI);
  return;
}



/* IOAudioEngine::setInputSampleLatency @ 0x9346 */

/* IOAudioEngine::setInputSampleLatency(unsigned int) */

void IOAudioEngine::setInputSampleLatency(uint param_1)

{
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  
                    /* WARNING: Could not recover jumptable at 0x00009363. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x280))(0x20,unaff_ESI);
  return;
}



/* IOAudioEngine::setSampleOffset @ 0x9366 */

/* IOAudioEngine::setSampleOffset(unsigned int) */

void IOAudioEngine::setSampleOffset(uint param_1)

{
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  
  *(undefined4 *)((longlong)unaff_RDI + 0x104) = unaff_ESI;
                    /* WARNING: Could not recover jumptable at 0x00009389. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x280))(0x20,unaff_ESI);
  return;
}



/* IOAudioEngine::setRunEraseHead @ 0x938c */

/* IOAudioEngine::setRunEraseHead(bool) */

void IOAudioEngine::setRunEraseHead(bool param_1)

{
  undefined1 unaff_SIL;
  longlong unaff_RDI;
  
  __os_log_internal("+-IOAudioEngine[%p]::setRunEraseHead(%d)\n",0);
  *(undefined1 *)(unaff_RDI + 0x98) = unaff_SIL;
  return;
}



/* IOAudioEngine::getRunEraseHead @ 0x93c8 */

/* IOAudioEngine::getRunEraseHead() */

byte IOAudioEngine::getRunEraseHead(void)

{
  longlong unaff_RDI;
  
  return *(byte *)(unaff_RDI + 0x98) & 1;
}



/* IOAudioEngine::getTimerInterval @ 0x93d6 */

/* IOAudioEngine::getTimerInterval() */

undefined8 __thiscall IOAudioEngine::getTimerInterval(IOAudioEngine *this)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *unaff_RDI;
  
  piVar5 = (int *)(**(code **)(*unaff_RDI + 0xa78))();
  iVar3 = (**(code **)(*unaff_RDI + 0xb48))();
  if ((iVar3 != 0) && ((piVar5 == (int *)0x0 || (*piVar5 != 0)))) {
    if ((*(int *)((longlong)unaff_RDI + 0x94) == 0) ||
       (cVar2 = (**(code **)(*unaff_RDI + 0xa88))(), cVar2 == '\0')) {
      (**(code **)(*unaff_RDI + 0xb48))();
    }
    else {
      plVar6 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)this);
      if (plVar6 != (longlong *)0x0) {
        while (plVar7 = (longlong *)(**(code **)(*plVar6 + 0x128))(), plVar7 != (longlong *)0x0) {
          uVar4 = (**(code **)(*plVar7 + 0x9f0))();
          uVar1 = *(uint *)((longlong)unaff_RDI + 0x94);
          if ((0x10000 < uVar4 / uVar1) && (uVar1 < uVar4 >> 0x10)) {
            *(uint *)((longlong)unaff_RDI + 0x94) = uVar4 >> 0x10;
          }
        }
        (**(code **)(*plVar6 + 0x28))();
      }
      (**(code **)(*unaff_RDI + 0xb48))();
    }
  }
  _nanoseconds_to_absolutetime();
  __os_log_internal("- IOAudioEngine[%p]::getTimerInterval()\n",0);
  return 0;
}



/* IOAudioEngine::timerFired @ 0x951c */

/* WARNING: Removing unreachable block (ram,0x0000955a) */
/* WARNING: Removing unreachable block (ram,0x0000955e) */
/* WARNING: Removing unreachable block (ram,0x00009566) */
/* IOAudioEngine::timerFired() */

void IOAudioEngine::timerFired(void)

{
  undefined8 uVar1;
  uintptr_t unaff_EBP;
  longlong *unaff_RDI;
  uintptr_t unaff_retaddr;
  
  uVar1 = *(undefined8 *)(unaff_RDI[0x22] + 0x60);
  _clock_get_uptime();
  if (*(longlong **)(unaff_RDI[0x22] + 0x58) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI[0x22] + 0x58) + 0x210))();
  }
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug((uint32_t)uVar1,0,(uintptr_t)*(undefined8 *)(unaff_RDI[0x22] + 0x60),0,unaff_EBP,
                  unaff_retaddr);
  }
  (**(code **)(*unaff_RDI + 0xaa8))();
  (**(code **)(*unaff_RDI + 0xab0))();
  return;
}



/* IOAudioEngine::performErase @ 0x95d0 */

/* IOAudioEngine::performErase() */

void IOAudioEngine::performErase(void)

{
  uint32_t debugid;
  longlong lVar1;
  char cVar2;
  int iVar3;
  uintptr_t arg1;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *unaff_RDI;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  uintptr_t in_stack_00000028;
  uintptr_t in_stack_00000030;
  uintptr_t in_stack_ffffffffffffffb8;
  longlong *plVar12;
  uintptr_t in_stack_ffffffffffffffc0;
  
  puVar10 = (uint *)PTR__kdebug_enable_0001e070;
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug(0,0,0,0,in_stack_ffffffffffffffb8,in_stack_ffffffffffffffc0);
  }
  cVar2 = (**(code **)(*unaff_RDI + 0xa88))();
  if (cVar2 != '\0') {
    iVar3 = (**(code **)(*unaff_RDI + 0xa70))();
    if (iVar3 == 1) {
      debugid = *(uint32_t *)(unaff_RDI[0x16] + 0x10);
      arg1 = (**(code **)(*unaff_RDI + 0xa38))();
      *(uintptr_t *)(unaff_RDI[0x16] + 0x10) = arg1;
      if ((*puVar10 & 0xfffffff7) != 0) {
        _kernel_debug(debugid,arg1,debugid,0,in_stack_ffffffffffffffb8,in_stack_ffffffffffffffc0);
      }
      (**(code **)(*(longlong *)unaff_RDI[0x1c] + 0x20))();
      iVar3 = (**(code **)(*(longlong *)unaff_RDI[0x1c] + 0x130))();
      if (iVar3 != 0) {
        uVar8 = 0;
        plVar12 = unaff_RDI;
        do {
          plVar5 = (longlong *)(**(code **)(*(longlong *)unaff_RDI[0x1c] + 0x1f8))();
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0xaa8))();
            uVar6 = (**(code **)(*plVar5 + 0x9e8))();
            lVar7 = (**(code **)(*plVar5 + 0xa00))();
            uVar9 = (uint)*(byte *)((longlong)plVar5 + 0xbd) * (int)plVar5[0x16] >> 3;
            iVar11 = (int)plVar5[0x16] * 4;
            iVar3 = (**(code **)(*plVar5 + 0x9f0))();
            if (arg1 < debugid) {
              if (iVar3 != 0) {
                unaff_RDI = plVar12;
                uVar4 = (**(code **)(*plVar5 + 0x9f0))();
                plVar12 = unaff_RDI;
                if (uVar9 * arg1 <= uVar4) {
                  uVar4 = (**(code **)(*plVar5 + 0xa08))();
                  plVar12 = unaff_RDI;
                  if (iVar11 * arg1 <= uVar4 || lVar7 == 0) {
                    lVar1 = unaff_RDI[0x11];
                    uVar4 = (**(code **)(*plVar5 + 0x9f0))();
                    if (uVar9 * (int)lVar1 <= uVar4) {
                      lVar1 = plVar12[0x11];
                      unaff_RDI = plVar12;
                      uVar9 = (**(code **)(*plVar5 + 0xa08))();
                      plVar12 = unaff_RDI;
                      if (((uint)(iVar11 * (int)lVar1) <= uVar9 || lVar7 == 0) &&
                         (debugid < *(uint *)(unaff_RDI + 0x11))) goto LAB_000097f5;
                    }
                  }
                }
                goto LAB_00009888;
              }
LAB_000097f5:
              (**(code **)(*unaff_RDI + 0x878))(0,uVar6,arg1,plVar5 + 0x16);
LAB_00009865:
              (**(code **)(*unaff_RDI + 0x878))();
            }
            else {
              if (iVar3 == 0) goto LAB_00009865;
              uVar4 = (**(code **)(*plVar5 + 0x9f0))();
              if (uVar9 * arg1 <= uVar4) {
                uVar9 = (**(code **)(*plVar5 + 0xa08))();
                if (iVar11 * arg1 <= uVar9 || lVar7 == 0) goto LAB_00009865;
              }
            }
LAB_00009888:
            (**(code **)(*plVar5 + 0xab0))();
          }
          uVar8 = uVar8 + 1;
          uVar9 = (**(code **)(*(longlong *)unaff_RDI[0x1c] + 0x130))();
        } while (uVar8 < uVar9);
      }
      (**(code **)(*(longlong *)unaff_RDI[0x1c] + 0x28))();
      puVar10 = (uint *)PTR__kdebug_enable_0001e070;
    }
  }
  if ((*puVar10 & 0xfffffff7) != 0) {
    _kernel_debug(0,0,0,0,in_stack_00000028,in_stack_00000030);
    return;
  }
  return;
}



/* IOAudioEngine::stopEngineAtPosition @ 0x9902 */

/* IOAudioEngine::stopEngineAtPosition(IOAudioEnginePosition*) */

void IOAudioEngine::stopEngineAtPosition(IOAudioEnginePosition *param_1)

{
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  
  if (unaff_RSI == (undefined8 *)0x0) {
    *(undefined8 *)(unaff_RDI + 0x9c) = 0;
  }
  else {
    *(undefined8 *)(unaff_RDI + 0x9c) = *unaff_RSI;
  }
  __os_log_internal("- IOAudioEngine[%p]::stopEngineAtPosition(%lx,%lx)\n",0);
  return;
}



/* IOAudioEngine::performFlush @ 0x995c */

/* IOAudioEngine::performFlush() */

void IOAudioEngine::performFlush(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong *unaff_RDI;
  
  if ((int)unaff_RDI[0x20] == 0) {
    iVar2 = (**(code **)(*unaff_RDI + 0xa70))();
    if (iVar2 == 1) {
      uVar1 = *(uint *)(unaff_RDI[0x16] + 4);
      uVar3 = (**(code **)(*unaff_RDI + 0xa38))();
      if ((*(uint *)(unaff_RDI + 0x14) < uVar1) ||
         ((uVar1 == *(uint *)(unaff_RDI + 0x14) && (*(uint *)((longlong)unaff_RDI + 0x9c) < uVar3)))
         ) {
                    /* WARNING: Could not recover jumptable at 0x000099a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*unaff_RDI + 0xa48))();
        return;
      }
    }
  }
  return;
}



/* IOAudioEngine::addTimer @ 0x99bc */

/* IOAudioEngine::addTimer() */

void IOAudioEngine::addTimer(void)

{
  longlong lVar1;
  kern_return_t kVar2;
  undefined8 uVar3;
  longlong *unaff_RDI;
  thread_policy_t in_R8;
  mach_msg_type_number_t in_R9D;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = 0;
  local_30 = 0;
  uVar3 = (**(code **)(*unaff_RDI + 0xaa0))();
  *(undefined8 *)(unaff_RDI[0x22] + 0x68) = uVar3;
  _nanoseconds_to_absolutetime();
  _nanoseconds_to_absolutetime();
  local_48 = *(undefined4 *)(unaff_RDI[0x22] + 0x68);
  local_44 = (undefined4)local_38;
  local_40 = (undefined4)local_30;
  local_3c = 0;
  (**(code **)(**(longlong **)(unaff_RDI[0x22] + 0x40) + 0x128))();
  kVar2 = _thread_policy_set(4,(thread_policy_flavor_t)&local_48,in_R8,in_R9D);
  if (kVar2 != 0) {
    __os_log_internal("IOAudioEngine[%p]::addTimer() - failed to set thread constraint policy: %x\n"
                      ,0x10);
    _IOLog();
  }
  _clock_get_uptime();
  lVar1 = unaff_RDI[0x22];
  *(longlong *)(lVar1 + 0x60) = *(longlong *)(lVar1 + 0x60) + *(longlong *)(lVar1 + 0x68);
  if ((*(longlong *)(lVar1 + 0x58) != 0) && (*(longlong **)(lVar1 + 0x40) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(lVar1 + 0x40) + 0x140))();
    (**(code **)(**(longlong **)(unaff_RDI[0x22] + 0x58) + 0x150))();
    (**(code **)(**(longlong **)(unaff_RDI[0x22] + 0x58) + 0x210))();
  }
  return;
}



/* IOAudioEngine::removeTimer @ 0x9b14 */

/* IOAudioEngine::removeTimer() */

void IOAudioEngine::removeTimer(void)

{
  longlong *plVar1;
  longlong unaff_RDI;
  
  plVar1 = *(longlong **)(*(longlong *)(unaff_RDI + 0x110) + 0x58);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x218))();
    (**(code **)(**(longlong **)(*(longlong *)(unaff_RDI + 0x110) + 0x58) + 0x158))();
    plVar1 = *(longlong **)(*(longlong *)(unaff_RDI + 0x110) + 0x40);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00009b6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x148))();
      return;
    }
  }
  return;
}



/* IOAudioEngine::clipOutputSamples @ 0x9b78 */

/* IOAudioEngine::clipOutputSamples(void const*, void*, unsigned int, unsigned int,
   _IOAudioStreamFormat const*, IOAudioStream*) */

undefined8
IOAudioEngine::clipOutputSamples
          (void *param_1,void *param_2,uint param_3,uint param_4,_IOAudioStreamFormat *param_5,
          IOAudioStream *param_6)

{
  return 0xe00002c7;
}



/* IOAudioEngine::resetClipPosition @ 0x9b84 */

/* IOAudioEngine::resetClipPosition(IOAudioStream*, unsigned int) */

void IOAudioEngine::resetClipPosition(IOAudioStream *param_1,uint param_2)

{
  return;
}



/* IOAudioEngine::convertInputSamples @ 0x9b8a */

/* IOAudioEngine::convertInputSamples(void const*, void*, unsigned int, unsigned int,
   _IOAudioStreamFormat const*, IOAudioStream*) */

undefined8
IOAudioEngine::convertInputSamples
          (void *param_1,void *param_2,uint param_3,uint param_4,_IOAudioStreamFormat *param_5,
          IOAudioStream *param_6)

{
  return 0xe00002c7;
}



/* IOAudioEngine::takeTimeStamp @ 0x9b96 */

/* IOAudioEngine::takeTimeStamp(bool, unsigned long long*) */

void IOAudioEngine::takeTimeStamp(bool param_1,ulonglong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  longlong lVar3;
  undefined1 auVar4 [16];
  uint64_t uVar5;
  uint32_t debugid;
  undefined7 in_register_00000009;
  int iVar6;
  byte unaff_SIL;
  longlong unaff_RDI;
  uintptr_t arg2;
  ulonglong local_50;
  undefined8 local_48;
  ulonglong local_40;
  ulonglong uVar7;
  uintptr_t arg5;
  
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  if (param_2 == (ulonglong *)0x0) {
    param_2 = &local_50;
    _clock_get_uptime(CONCAT71(in_register_00000009,param_1));
  }
  uVar7 = 0;
  _clock_interval_to_deadline();
  do {
    pauVar2 = *(undefined1 (**) [16])(unaff_RDI + 0xb0);
    arg5 = *(uintptr_t *)*pauVar2;
    iVar6 = *(int *)(*pauVar2 + 4);
    auVar4 = *pauVar2;
    local_40 = *(undefined8 *)(*pauVar2 + 8);
    local_48 = *(undefined8 *)pauVar2[1];
    local_40 = *param_2;
    if (unaff_SIL != 0) {
      iVar6 = iVar6 + 1;
    }
    LOCK();
    auVar1 = *pauVar2;
    if (auVar4 == auVar1) {
      *(ulonglong *)*pauVar2 = CONCAT44(iVar6,arg5);
      *(ulonglong *)(*pauVar2 + 8) = local_40;
    }
    UNLOCK();
  } while ((auVar4 != auVar1) && (uVar5 = _mach_absolute_time(), uVar5 < uVar7));
  uVar5 = _mach_absolute_time();
  if (uVar7 < uVar5) {
    _IOLog();
  }
  lVar3 = *(longlong *)(unaff_RDI + 0xb0);
  if (lVar3 == 0) {
    debugid = 0;
    arg2 = 0;
  }
  else {
    debugid = (uint32_t)*(undefined8 *)(lVar3 + 8);
    arg2 = *(uintptr_t *)(lVar3 + 4);
  }
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug(debugid,(uint)unaff_SIL,arg2,0,(uintptr_t)uVar7,arg5);
  }
  return;
}



/* IOAudioEngine::getLoopCountAndTimeStamp @ 0x9cac */

/* IOAudioEngine::getLoopCountAndTimeStamp(unsigned int*, unsigned long long*) */

undefined8 IOAudioEngine::getLoopCountAndTimeStamp(uint *param_1,ulonglong *param_2)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  uint64_t uVar3;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  undefined4 uStack_44;
  ulonglong uStack_40;
  
  uVar2 = 0xe00002c2;
  if (param_2 != (ulonglong *)0x0 && unaff_RSI != (undefined4 *)0x0) {
    _clock_interval_to_deadline();
    pauVar1 = *(undefined1 (**) [16])(unaff_RDI + 0xb0);
    uStack_44 = (undefined4)((ulonglong)*(undefined8 *)*pauVar1 >> 0x20);
    LOCK();
    if (*pauVar1 == *pauVar1) {
      uStack_44 = (undefined4)((ulonglong)*(undefined8 *)*pauVar1 >> 0x20);
    }
    uStack_40 = *(ulonglong *)(*pauVar1 + 8);
    UNLOCK();
    if (*pauVar1 != *pauVar1) {
      _mach_absolute_time();
    }
    uVar3 = _mach_absolute_time();
    if (uVar3 != 0) {
      _IOLog();
    }
    *unaff_RSI = uStack_44;
    *param_2 = uStack_40;
    uVar2 = 0;
  }
  return uVar2;
}



/* IOAudioEngine::calculateSampleTimeout @ 0x9d6a */

/* IOAudioEngine::calculateSampleTimeout(unsigned long long*, unsigned int, IOAudioEnginePosition*,
   unsigned long long*) */

uintptr_t IOAudioEngine::calculateSampleTimeout
                    (ulonglong *param_1,uint param_2,IOAudioEnginePosition *param_3,
                    ulonglong *param_4)

{
  undefined *puVar1;
  uintptr_t uVar2;
  uint32_t debugid;
  uint *puVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  uintptr_t uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uintptr_t in_stack_ffffffffffffffa8;
  uintptr_t in_stack_ffffffffffffffb0;
  longlong lVar9;
  
  uVar2 = 0xdeadbeef;
  if (unaff_RSI != (longlong *)0x0) {
    uVar2 = (uintptr_t)*unaff_RSI;
  }
  uVar4 = 0xdeadbeef;
  if (param_1 != (ulonglong *)0x0) {
    uVar4 = *(uintptr_t *)((longlong)param_1 + 4);
  }
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug(param_2,uVar2,uVar4,0,in_stack_ffffffffffffffa8,in_stack_ffffffffffffffb0);
  }
  if ((*(byte *)(unaff_RDI[0x22] + 0x3c) & 1) == 0) {
    uVar2 = 0xe00002c2;
    if (((param_1 == (ulonglong *)0x0) || (unaff_RSI == (longlong *)0x0)) || (param_2 == 0))
    goto LAB_00009ed1;
    if (param_3 == (IOAudioEnginePosition *)0x0) goto LAB_00009ed5;
    lVar9 = 0;
    debugid = param_2 / *(uint *)(unaff_RDI[0x22] + 0x20) +
              *(uintptr_t *)((longlong)unaff_RDI + 0x104);
    if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
      _kernel_debug(debugid,*(uintptr_t *)((longlong)unaff_RDI + 0x104),1,0,
                    in_stack_ffffffffffffffa8,0);
    }
    uVar6 = (uint)*param_1;
    iVar5 = *(int *)((longlong)param_1 + 4);
    iVar8 = uVar6 - debugid;
    if (uVar6 < debugid) {
      iVar5 = iVar5 + -1;
      iVar8 = (uVar6 - debugid) + (int)unaff_RDI[0x11];
    }
    (**(code **)(*unaff_RDI + 0xae8))();
    puVar1 = PTR__kdebug_enable_0001e070;
    uVar6 = iVar5 * (int)unaff_RDI[0x11] + iVar8;
    if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) == 0) {
      lVar7 = (ulonglong)uVar6 * *unaff_RSI;
    }
    else {
      _kernel_debug(uVar6,(uintptr_t)lVar9,2,0,in_stack_ffffffffffffffa8,(uintptr_t)lVar9);
      lVar7 = (ulonglong)uVar6 * *unaff_RSI;
      if ((*(uint *)puVar1 & 0xfffffff7) != 0) {
        _kernel_debug((uint32_t)lVar7,(uint32_t)lVar7,3,0,in_stack_ffffffffffffffa8,(uintptr_t)lVar9
                     );
      }
    }
    _nanoseconds_to_absolutetime();
    *(longlong *)param_3 = lVar7 + lVar9;
    _clock_get_uptime();
    in_stack_ffffffffffffffb0 = (uintptr_t)lVar9;
    _absolutetime_to_nanoseconds();
    puVar3 = (uint *)PTR__kdebug_enable_0001e070;
    if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
      _kernel_debug(0,0,5,0,in_stack_ffffffffffffffa8,in_stack_ffffffffffffffb0);
    }
    if (*(longlong *)param_3 == 0) {
      uVar2 = 0xe00002ee;
      if ((*puVar3 & 0xfffffff7) != 0) {
        _kernel_debug(0,0,4,0,in_stack_ffffffffffffffa8,in_stack_ffffffffffffffb0);
      }
    }
    else {
      _absolutetime_to_nanoseconds();
      uVar2 = 0;
    }
  }
  else {
    if (unaff_RSI == (longlong *)0x0) {
LAB_00009ed1:
      uVar2 = 0xe00002c2;
    }
    else {
      uVar2 = (**(code **)(*unaff_RDI + 0x8c8))(param_1,param_2,param_3);
    }
LAB_00009ed5:
    uVar4 = 0xdeadbeef;
    puVar3 = (uint *)PTR__kdebug_enable_0001e070;
    if (param_3 == (IOAudioEnginePosition *)0x0) goto LAB_0000a02b;
  }
  uVar4 = (uintptr_t)*(undefined8 *)param_3;
LAB_0000a02b:
  if ((*puVar3 & 0xfffffff7) != 0) {
    _kernel_debug(0,uVar4,uVar2,0,in_stack_ffffffffffffffa8,in_stack_ffffffffffffffb0);
  }
  return uVar2;
}



/* IOAudioEngine::performFormatChange @ 0xa05e */

/* IOAudioEngine::performFormatChange(IOAudioStream*, _IOAudioStreamFormat const*,
   _IOAudioSampleRate const*) */

undefined8
IOAudioEngine::performFormatChange
          (IOAudioStream *param_1,_IOAudioStreamFormat *param_2,_IOAudioSampleRate *param_3)

{
  __os_log_internal("+-IOAudioEngine[%p]::performFormatChange(%p, %p, %p)\n",0);
  return 0;
}



/* IOAudioEngine::sendFormatChangeNotification @ 0xa098 */

/* IOAudioEngine::sendFormatChangeNotification(IOAudioStream*) */

void IOAudioEngine::sendFormatChangeNotification(IOAudioStream *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char *pcVar3;
  undefined **ppuVar4;
  OSMetaClass *pOVar5;
  longlong unaff_RDI;
  
  pcVar3 = "+ IOAudioEngine[%p]::sendFormatChangeNotification(%p)\n";
  pOVar5 = (OSMetaClass *)0x0;
  __os_log_internal();
  if ((*(byte *)(unaff_RDI + 0xa5) & 1) == 0) {
    plVar1 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)pcVar3);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x128))();
      ppuVar4 = &IOAudioEngineUserClient::metaClass;
      while( true ) {
        plVar2 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)ppuVar4,pOVar5);
        if (plVar2 == (longlong *)0x0) break;
        ppuVar4 = (undefined **)*plVar2;
        (**(code **)((longlong)ppuVar4 + 0xb20))();
        (**(code **)(*plVar1 + 0x128))();
      }
      (**(code **)(*plVar1 + 0x28))();
    }
  }
  __os_log_internal("- IOAudioEngine[%p]::sendFormatChangeNotification(%p)\n",0);
  return;
}



/* IOAudioEngine::sendNotification @ 0xa164 */

/* IOAudioEngine::sendNotification(unsigned int) */

void __thiscall IOAudioEngine::sendNotification(IOAudioEngine *this,uint param_1)

{
  longlong *plVar1;
  longlong *extraout_RAX;
  undefined **ppuVar2;
  undefined4 in_register_00000014;
  
  plVar1 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)this);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x128))();
    ppuVar2 = &IOAudioEngineUserClient::metaClass;
    while( true ) {
      OSMetaClassBase::safeMetaCast
                ((OSMetaClassBase *)ppuVar2,(OSMetaClass *)CONCAT44(in_register_00000014,param_1));
      if (extraout_RAX == (longlong *)0x0) break;
      ppuVar2 = (undefined **)*extraout_RAX;
      (**(code **)((longlong)ppuVar2 + 0xb28))();
      (**(code **)(*plVar1 + 0x128))();
    }
                    /* WARNING: Could not recover jumptable at 0x0000a1d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))();
    return;
  }
  return;
}



/* IOAudioEngine::beginConfigurationChange @ 0xa1e4 */

/* IOAudioEngine::beginConfigurationChange() */

void IOAudioEngine::beginConfigurationChange(void)

{
  longlong unaff_RDI;
  
  __os_log_internal("+-IOAudioEngine[%p]::beginConfigurationChange()\n",0);
  *(undefined1 *)(unaff_RDI + 0xa5) = 1;
  return;
}



/* IOAudioEngine::completeConfigurationChange @ 0xa21c */

/* IOAudioEngine::completeConfigurationChange() */

void __thiscall IOAudioEngine::completeConfigurationChange(IOAudioEngine *this)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *unaff_RDI;
  
  if ((*(byte *)((longlong)unaff_RDI + 0xa5) & 1) != 0) {
    *(undefined1 *)((longlong)unaff_RDI + 0xa5) = 0;
    (**(code **)(*unaff_RDI + 0xba8))();
    if (((unaff_RDI[0x1f] != 0) && (cVar1 = IOService::isInactive(), cVar1 == '\0')) &&
       (plVar2 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)this),
       plVar2 != (longlong *)0x0)) {
      while (plVar3 = (longlong *)(**(code **)(*plVar2 + 0x128))(), plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x860))();
      }
      (**(code **)(*plVar2 + 0x28))();
    }
  }
  __os_log_internal("+- IOAudioEngine[%p]::completeConfigurationChange()\n",0);
  return;
}



/* IOAudioEngine::cancelConfigurationChange @ 0xa2c0 */

/* IOAudioEngine::cancelConfigurationChange() */

void IOAudioEngine::cancelConfigurationChange(void)

{
  longlong unaff_RDI;
  
  __os_log_internal("+-IOAudioEngine[%p]::cancelConfigurationChange()\n",0);
  *(undefined1 *)(unaff_RDI + 0xa5) = 0;
  return;
}



/* IOAudioEngine::addDefaultAudioControl @ 0xa2f8 */

/* IOAudioEngine::addDefaultAudioControl(IOAudioControl*) */

undefined8 IOAudioEngine::addDefaultAudioControl(IOAudioControl *param_1)

{
  char cVar1;
  longlong lVar2;
  IOWorkLoop *in_RDX;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  uint in_R8D;
  undefined8 uVar3;
  
  if (unaff_RSI == (longlong *)0x0) {
    uVar3 = 0xe00002c2;
  }
  else {
    if (unaff_RDI[0x18] != 0) {
      IOAudioControl::setWorkLoop(param_1,in_RDX);
    }
    cVar1 = (**(code **)(*unaff_RSI + 0x918))();
    uVar3 = 0xe00002bc;
    if (cVar1 != '\0') {
      if ((longlong *)unaff_RDI[0x1f] == (longlong *)0x0) {
        lVar2 = OSSet::withObjects((OSObject **)param_1,1,in_R8D);
        unaff_RDI[0x1f] = lVar2;
      }
      else {
        (**(code **)(*(longlong *)unaff_RDI[0x1f] + 0x1c0))();
      }
      uVar3 = 0;
      if ((*(byte *)((longlong)unaff_RDI + 0xa4) & 1) != 0) {
        (**(code **)(*unaff_RDI + 0xa20))();
      }
    }
  }
  return uVar3;
}



/* IOAudioEngine::removeDefaultAudioControl @ 0xa3a0 */

/* IOAudioEngine::removeDefaultAudioControl(IOAudioControl*) */

undefined8 IOAudioEngine::removeDefaultAudioControl(IOAudioControl *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar3;
  
  if (unaff_RSI == (longlong *)0x0) {
    uVar3 = 0xe00002c2;
  }
  else {
    uVar3 = 0xe00002e2;
    if ((*(uint *)(unaff_RDI + 0x15) | 2) != 3) {
      uVar3 = 0xe00002f0;
      if ((longlong *)unaff_RDI[0x1f] != (longlong *)0x0) {
        cVar1 = (**(code **)(*(longlong *)unaff_RDI[0x1f] + 0x1e0))();
        if (cVar1 != '\0') {
          (**(code **)(*unaff_RSI + 0x20))();
          (**(code **)(*(longlong *)unaff_RDI[0x1f] + 0x1d8))();
          (**(code **)(*unaff_RSI + 0x678))();
          plVar2 = (longlong *)(**(code **)(*unaff_RSI + 0x680))();
          if (plVar2 == unaff_RDI) {
            (**(code **)(*unaff_RSI + 0x600))();
          }
          (**(code **)(*unaff_RSI + 0x28))();
          uVar3 = 0;
          if ((*(byte *)((longlong)unaff_RDI + 0xa5) & 1) == 0) {
            (**(code **)(*unaff_RDI + 0xba8))();
          }
        }
      }
    }
  }
  return uVar3;
}



/* IOAudioEngine::removeAllDefaultAudioControls @ 0xa47a */

/* IOAudioEngine::removeAllDefaultAudioControls() */

void IOAudioEngine::removeAllDefaultAudioControls(void)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char *pcVar5;
  longlong unaff_RDI;
  
  pcVar5 = "+ IOAudioEngine[%p]::removeAllDefaultAudioControls()\n";
  __os_log_internal("+ IOAudioEngine[%p]::removeAllDefaultAudioControls()\n",0);
  if (*(longlong *)(unaff_RDI + 0xf8) != 0) {
    cVar1 = IOService::isInactive();
    if ((cVar1 == '\0') &&
       (plVar2 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)pcVar5),
       plVar2 != (longlong *)0x0)) {
      plVar3 = (longlong *)(**(code **)(*plVar2 + 0x128))();
      while (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x678))();
        lVar4 = (**(code **)(*plVar3 + 0x680))();
        if (lVar4 == unaff_RDI) {
          (**(code **)(*plVar3 + 0x600))();
        }
        plVar3 = (longlong *)(**(code **)(*plVar2 + 0x128))();
      }
      (**(code **)(*plVar2 + 0x28))();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0xf8) + 0x158))();
  }
  __os_log_internal("- IOAudioEngine[%p]::removeAllDefaultAudioControls()\n",0);
  return;
}



/* IOAudioEngine::waitForEngineResume @ 0xa572 */

/* IOAudioEngine::waitForEngineResume() */

uintptr_t IOAudioEngine::waitForEngineResume(void)

{
  longlong lVar1;
  undefined *puVar2;
  uint uVar3;
  IOAudioEngine *pIVar4;
  bool bVar5;
  longlong *unaff_RDI;
  uintptr_t unaff_R14D;
  uintptr_t arg2;
  uintptr_t unaff_R15D;
  
  puVar2 = PTR__kdebug_enable_0001e070;
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug(0,0,0,0,unaff_R14D,unaff_R15D);
  }
  if (unaff_RDI[0x19] == 0) {
    arg2 = 0xe00002bc;
  }
  else {
    (**(code **)(*unaff_RDI + 0x20))();
    __os_log_internal("Waiting on engine[%p] resume...\n",0);
    lVar1 = unaff_RDI[0x22];
    if ((lVar1 != 0) && (*(uint *)(lVar1 + 0x34) < 2)) {
      *(int *)(lVar1 + 0x38) = *(int *)(lVar1 + 0x38) + 1;
    }
    _clock_interval_to_deadline();
    bVar5 = false;
    pIVar4 = (IOAudioEngine *)((longlong)&MACH_HEADER.magic + 2);
    uVar3 = (**(code **)(*(longlong *)unaff_RDI[0x19] + 0x1f0))();
    setCommandGateUsage(pIVar4,bVar5);
    __os_log_internal();
    arg2 = 0xe00002bc;
    if (uVar3 < 4) {
      arg2 = *(uintptr_t *)(&DAT_0001dc60 + (ulonglong)uVar3 * 4);
    }
    (**(code **)(*unaff_RDI + 0x28))();
  }
  if ((*(uint *)puVar2 & 0xfffffff7) != 0) {
    _kernel_debug(0,0,arg2,0,unaff_R14D,unaff_R15D);
  }
  return arg2;
}



/* IOAudioEngine::MetaClass::~MetaClass @ 0xa6c4 */

/* IOAudioEngine::MetaClass::~MetaClass() */

void __thiscall IOAudioEngine::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* IOAudioClientBufferSet::MetaClass::MetaClass @ 0xa714 */

/* IOAudioClientBufferSet::MetaClass::MetaClass() */

void __thiscall IOAudioClientBufferSet::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)&segment_command_00000020.maxprot,PTR_gMetaClass_0001e028,in_R8,in_R9D);
  *unaff_RDI = &PTR__MetaClass_00021568;
  return;
}



/* IOAudioClientBufferSet::MetaClass::~MetaClass @ 0xa746 */

/* IOAudioClientBufferSet::MetaClass::~MetaClass() */

void __thiscall IOAudioClientBufferSet::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* IOAudioClientBufferSet::IOAudioClientBufferSet @ 0xa750 */

/* IOAudioClientBufferSet::IOAudioClientBufferSet(OSMetaClass const*) */

void __thiscall
IOAudioClientBufferSet::IOAudioClientBufferSet(IOAudioClientBufferSet *this,OSMetaClass *param_1)

{
  undefined8 *unaff_RDI;
  
  OSObject::OSObject((OSObject *)this,param_1);
  *unaff_RDI = &PTR__IOAudioClientBufferSet_00021438;
  return;
}



/* IOAudioClientBufferSet::IOAudioClientBufferSet @ 0xa770 */

/* IOAudioClientBufferSet::IOAudioClientBufferSet(OSMetaClass const*) */

void __thiscall
IOAudioClientBufferSet::IOAudioClientBufferSet(IOAudioClientBufferSet *this,OSMetaClass *param_1)

{
  undefined8 *unaff_RDI;
  
  OSObject::OSObject((OSObject *)this,param_1);
  *unaff_RDI = &PTR__IOAudioClientBufferSet_00021438;
  return;
}



/* IOAudioClientBufferSet::~IOAudioClientBufferSet @ 0xa790 */

/* IOAudioClientBufferSet::~IOAudioClientBufferSet() */

void __thiscall IOAudioClientBufferSet::~IOAudioClientBufferSet(IOAudioClientBufferSet *this)

{
  OSObject::~OSObject((OSObject *)this);
  return;
}



/* IOAudioClientBufferSet::~IOAudioClientBufferSet @ 0xa79a */

/* IOAudioClientBufferSet::~IOAudioClientBufferSet() */

void __thiscall IOAudioClientBufferSet::~IOAudioClientBufferSet(IOAudioClientBufferSet *this)

{
  OSObject::~OSObject((OSObject *)this);
  return;
}



/* IOAudioClientBufferSet::~IOAudioClientBufferSet @ 0xa7a4 */

/* IOAudioClientBufferSet::~IOAudioClientBufferSet() */

void __thiscall IOAudioClientBufferSet::~IOAudioClientBufferSet(IOAudioClientBufferSet *this)

{
  OSObject::~OSObject((OSObject *)this);
  _OSObject_typed_operator_delete();
  return;
}



/* IOAudioClientBufferSet::operator.delete @ 0xa7cc */

/* IOAudioClientBufferSet::operator delete(void*, unsigned long) */

void IOAudioClientBufferSet::operator_delete(void *param_1,ulong param_2)

{
  _OSObject_typed_operator_delete();
  return;
}



/* IOAudioClientBufferSet::getMetaClass @ 0xa7e4 */

/* IOAudioClientBufferSet::getMetaClass() const */

undefined ** IOAudioClientBufferSet::getMetaClass(void)

{
  return &gMetaClass;
}



/* IOAudioClientBufferSet::MetaClass::MetaClass @ 0xa7f2 */

/* IOAudioClientBufferSet::MetaClass::MetaClass() */

void __thiscall IOAudioClientBufferSet::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)&segment_command_00000020.maxprot,PTR_gMetaClass_0001e028,in_R8,in_R9D);
  *unaff_RDI = &PTR__MetaClass_00021568;
  return;
}



/* IOAudioClientBufferSet::MetaClass::alloc @ 0xa824 */

/* IOAudioClientBufferSet::MetaClass::alloc() const */

undefined8 * IOAudioClientBufferSet::MetaClass::alloc(void)

{
  undefined8 *puVar1;
  OSObject *in_RCX;
  OSMetaClass *in_RDX;
  
  puVar1 = (undefined8 *)_OSObject_typed_operator_new();
  OSObject::OSObject(in_RCX,in_RDX);
  *puVar1 = &PTR__IOAudioClientBufferSet_00021438;
  OSMetaClass::instanceConstructed();
  return puVar1;
}



/* IOAudioClientBufferSet::operator.new @ 0xa86c */

/* IOAudioClientBufferSet::operator new(unsigned long) */

void * __thiscall IOAudioClientBufferSet::operator_new(IOAudioClientBufferSet *this,ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)_OSObject_typed_operator_new();
  return pvVar1;
}



/* IOAudioClientBufferSet::IOAudioClientBufferSet @ 0xa880 */

/* IOAudioClientBufferSet::IOAudioClientBufferSet() */

void __thiscall IOAudioClientBufferSet::IOAudioClientBufferSet(IOAudioClientBufferSet *this)

{
  OSMetaClass *in_RDX;
  undefined8 *unaff_RDI;
  
  OSObject::OSObject((OSObject *)this,in_RDX);
  *unaff_RDI = &PTR__IOAudioClientBufferSet_00021438;
  OSMetaClass::instanceConstructed();
  return;
}



/* IOAudioClientBufferSet::IOAudioClientBufferSet @ 0xa8b0 */

/* IOAudioClientBufferSet::IOAudioClientBufferSet() */

void __thiscall IOAudioClientBufferSet::IOAudioClientBufferSet(IOAudioClientBufferSet *this)

{
  OSMetaClass *in_RDX;
  undefined8 *unaff_RDI;
  
  OSObject::OSObject((OSObject *)this,in_RDX);
  *unaff_RDI = &PTR__IOAudioClientBufferSet_00021438;
  OSMetaClass::instanceConstructed();
  return;
}



/* IOAudioClientBufferSet::init @ 0xa8e0 */

/* IOAudioClientBufferSet::init(unsigned int, IOAudioEngineUserClient*) */

ulonglong IOAudioClientBufferSet::init(uint param_1,IOAudioEngineUserClient *param_2)

{
  byte bVar1;
  undefined4 unaff_ESI;
  longlong unaff_RDI;
  undefined8 unaff_R14;
  
  bVar1 = (**(code **)(PTR_vtable_0001e048 + 0x98))();
  bVar1 = param_2 != (IOAudioEngineUserClient *)0x0 & bVar1;
  if (bVar1 == 1) {
    *(undefined4 *)(unaff_RDI + 0xc) = unaff_ESI;
    (**(code **)(*(longlong *)param_2 + 0x20))();
    *(IOAudioEngineUserClient **)(unaff_RDI + 0x10) = param_2;
    *(undefined8 *)(unaff_RDI + 0x18) = 0;
    *(undefined8 *)(unaff_RDI + 0x20) = 0;
    *(undefined8 *)(unaff_RDI + 0x40) = 0;
    *(undefined8 *)(unaff_RDI + 0x48) = 0;
    *(undefined4 *)(unaff_RDI + 0x50) = 0;
    *(undefined1 *)(unaff_RDI + 0x54) = 0;
    *(undefined8 *)(unaff_RDI + 0x28) = 0;
  }
  return CONCAT71((int7)((ulonglong)unaff_R14 >> 8),bVar1) & 0xffffffff;
}



/* IOAudioClientBufferSet::resetNextOutputPosition @ 0xa950 */

/* IOAudioClientBufferSet::resetNextOutputPosition() */

void IOAudioClientBufferSet::resetNextOutputPosition(void)

{
  longlong unaff_RDI;
  
  *(undefined8 *)(unaff_RDI + 0x28) = 0;
  return;
}



/* IOAudioClientBufferSet::free @ 0xa95e */

/* IOAudioClientBufferSet::free() */

void IOAudioClientBufferSet::free(void)

{
  longlong unaff_RDI;
  
  if (*(longlong *)(unaff_RDI + 0x48) != 0) {
    freeWatchdogTimer();
  }
  if (*(longlong **)(unaff_RDI + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x28))();
    *(undefined8 *)(unaff_RDI + 0x10) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0000a99d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_vtable_0001e048 + 0xa0))();
  return;
}



/* IOAudioClientBufferSet::freeWatchdogTimer @ 0xa9a4 */

/* IOAudioClientBufferSet::freeWatchdogTimer() */

void IOAudioClientBufferSet::freeWatchdogTimer(void)

{
  longlong unaff_RDI;
  
  if (*(longlong *)(unaff_RDI + 0x48) != 0) {
    cancelWatchdogTimer();
    _thread_call_free();
    *(undefined8 *)(unaff_RDI + 0x48) = 0;
  }
  return;
}



/* IOAudioClientBufferSet::allocateWatchdogTimer @ 0xa9d2 */

/* IOAudioClientBufferSet::allocateWatchdogTimer() */

void IOAudioClientBufferSet::allocateWatchdogTimer(void)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if (*(longlong *)(unaff_RDI + 0x48) != 0) {
    return;
  }
  uVar1 = _thread_call_allocate();
  *(undefined8 *)(unaff_RDI + 0x48) = uVar1;
  return;
}



/* IOAudioClientBufferSet::watchdogTimerFired @ 0xa9fe */

/* IOAudioClientBufferSet::watchdogTimerFired(IOAudioClientBufferSet*, unsigned int) */

void IOAudioClientBufferSet::watchdogTimerFired(IOAudioClientBufferSet *param_1,uint param_2)

{
  longlong *plVar1;
  uintptr_t unaff_EBP;
  uintptr_t unaff_ESI;
  longlong *unaff_RDI;
  uintptr_t unaff_retaddr;
  
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug(*(uint32_t *)((longlong)unaff_RDI + 0x2c),unaff_ESI,*(uintptr_t *)(unaff_RDI + 5),
                  0,unaff_EBP,unaff_retaddr);
  }
  plVar1 = (longlong *)unaff_RDI[2];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
    (**(code **)(*plVar1 + 0xa90))();
    if ((*(byte *)((longlong)unaff_RDI + 0x54) & 1) != 0) {
      (**(code **)(*plVar1 + 0xa88))();
    }
    (**(code **)(*unaff_RDI + 0x28))();
    (**(code **)(*plVar1 + 0xa98))();
                    /* WARNING: Could not recover jumptable at 0x0000aa94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))();
    return;
  }
  return;
}



/* IOAudioClientBufferSet::cancelWatchdogTimer @ 0xaaa2 */

/* IOAudioClientBufferSet::cancelWatchdogTimer() */

void IOAudioClientBufferSet::cancelWatchdogTimer(void)

{
  undefined *puVar1;
  int iVar2;
  longlong *unaff_RDI;
  uintptr_t in_stack_00000008;
  uintptr_t in_stack_00000010;
  uintptr_t in_stack_00000028;
  uintptr_t in_stack_00000030;
  
  puVar1 = PTR__kdebug_enable_0001e070;
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug(0,*(byte *)((longlong)unaff_RDI + 0x54) & 1,0,0,in_stack_00000008,
                  in_stack_00000010);
  }
  if ((longlong *)unaff_RDI[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[2] + 0x20))();
    (**(code **)(*(longlong *)unaff_RDI[2] + 0xa90))();
    if ((*(byte *)((longlong)unaff_RDI + 0x54) & 1) != 0) {
      *(undefined1 *)((longlong)unaff_RDI + 0x54) = 0;
      iVar2 = _thread_call_cancel();
      if (iVar2 != 0) {
        (**(code **)(*unaff_RDI + 0x28))();
      }
    }
    (**(code **)(*(longlong *)unaff_RDI[2] + 0xa98))();
    (**(code **)(*(longlong *)unaff_RDI[2] + 0x28))();
  }
  if ((*(uint *)puVar1 & 0xfffffff7) != 0) {
    _kernel_debug(0,*(byte *)((longlong)unaff_RDI + 0x54) & 1,0,0,in_stack_00000028,
                  in_stack_00000030);
    return;
  }
  return;
}



/* IOAudioClientBufferSet::setWatchdogTimeout @ 0xab5a */

/* IOAudioClientBufferSet::setWatchdogTimeout(unsigned long long*) */

void IOAudioClientBufferSet::setWatchdogTimeout(ulonglong *param_1)

{
  int iVar1;
  uintptr_t unaff_EBP;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  uintptr_t unaff_retaddr;
  
  if (unaff_RDI[9] == 0) {
    __os_log_internal("IOAudioClientBufferSet::setWatchdogTimeout() - no thread call.\n",0x10);
    _IOLog();
  }
  unaff_RDI[6] = *unaff_RSI;
  *(int *)(unaff_RDI + 10) = (int)unaff_RDI[10] + 1;
  (**(code **)(*(longlong *)unaff_RDI[2] + 0xa90))();
  (**(code **)(*unaff_RDI + 0x20))();
  *(undefined1 *)((longlong)unaff_RDI + 0x54) = 1;
  _absolutetime_to_nanoseconds();
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug(0,*(uintptr_t *)(unaff_RDI + 10),(uintptr_t)unaff_RDI[6],0,unaff_EBP,unaff_retaddr
                 );
  }
  iVar1 = _thread_call_enter1_delayed();
  if (iVar1 != 0) {
    (**(code **)(*unaff_RDI + 0x28))();
  }
  (**(code **)(*(longlong *)unaff_RDI[2] + 0xa98))();
  return;
}



/* IOAudioEngineUserClient::MetaClass::MetaClass @ 0xac52 */

/* IOAudioEngineUserClient::MetaClass::MetaClass() */

void __thiscall IOAudioEngineUserClient::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)&section_000001f0.flags,PTR_gMetaClass_0001e000,in_R8,in_R9D);
  *unaff_RDI = &PTR__MetaClass_000221a8;
  return;
}



/* IOAudioEngineUserClient::MetaClass::~MetaClass @ 0xac84 */

/* IOAudioEngineUserClient::MetaClass::~MetaClass() */

void __thiscall IOAudioEngineUserClient::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* IOAudioEngineUserClient::IOAudioEngineUserClient @ 0xac8e */

/* IOAudioEngineUserClient::IOAudioEngineUserClient(OSMetaClass const*) */

void __thiscall
IOAudioEngineUserClient::IOAudioEngineUserClient(IOAudioEngineUserClient *this,OSMetaClass *param_1)

{
  undefined8 *unaff_RDI;
  
  IOUserClient::IOUserClient((IOUserClient *)this,param_1);
  *unaff_RDI = &PTR__IOAudioEngineUserClient_00021660;
  return;
}



/* IOAudioEngineUserClient::IOAudioEngineUserClient @ 0xacae */

/* IOAudioEngineUserClient::IOAudioEngineUserClient(OSMetaClass const*) */

void __thiscall
IOAudioEngineUserClient::IOAudioEngineUserClient(IOAudioEngineUserClient *this,OSMetaClass *param_1)

{
  undefined8 *unaff_RDI;
  
  IOUserClient::IOUserClient((IOUserClient *)this,param_1);
  *unaff_RDI = &PTR__IOAudioEngineUserClient_00021660;
  return;
}



/* IOAudioEngineUserClient::~IOAudioEngineUserClient @ 0xacce */

/* IOAudioEngineUserClient::~IOAudioEngineUserClient() */

void __thiscall IOAudioEngineUserClient::~IOAudioEngineUserClient(IOAudioEngineUserClient *this)

{
  IOUserClient::~IOUserClient((IOUserClient *)this);
  return;
}



/* IOAudioEngineUserClient::~IOAudioEngineUserClient @ 0xacd8 */

/* IOAudioEngineUserClient::~IOAudioEngineUserClient() */

void __thiscall IOAudioEngineUserClient::~IOAudioEngineUserClient(IOAudioEngineUserClient *this)

{
  IOUserClient::~IOUserClient((IOUserClient *)this);
  return;
}



/* IOAudioEngineUserClient::~IOAudioEngineUserClient @ 0xace2 */

/* IOAudioEngineUserClient::~IOAudioEngineUserClient() */

void __thiscall IOAudioEngineUserClient::~IOAudioEngineUserClient(IOAudioEngineUserClient *this)

{
  IOUserClient::~IOUserClient((IOUserClient *)this);
  _OSObject_typed_operator_delete();
  return;
}



/* IOAudioEngineUserClient::operator.delete @ 0xad0a */

/* IOAudioEngineUserClient::operator delete(void*, unsigned long) */

void IOAudioEngineUserClient::operator_delete(void *param_1,ulong param_2)

{
  _OSObject_typed_operator_delete();
  return;
}



/* IOAudioEngineUserClient::getMetaClass @ 0xad22 */

/* IOAudioEngineUserClient::getMetaClass() const */

undefined ** IOAudioEngineUserClient::getMetaClass(void)

{
  return &gMetaClass;
}



/* IOAudioEngineUserClient::MetaClass::MetaClass @ 0xad30 */

/* IOAudioEngineUserClient::MetaClass::MetaClass() */

void __thiscall IOAudioEngineUserClient::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)&section_000001f0.flags,PTR_gMetaClass_0001e000,in_R8,in_R9D);
  *unaff_RDI = &PTR__MetaClass_000221a8;
  return;
}



/* IOAudioEngineUserClient::MetaClass::alloc @ 0xad62 */

/* IOAudioEngineUserClient::MetaClass::alloc() const */

undefined8 * IOAudioEngineUserClient::MetaClass::alloc(void)

{
  undefined8 *puVar1;
  IOUserClient *in_RCX;
  OSMetaClass *in_RDX;
  
  puVar1 = (undefined8 *)_OSObject_typed_operator_new();
  IOUserClient::IOUserClient(in_RCX,in_RDX);
  *puVar1 = &PTR__IOAudioEngineUserClient_00021660;
  OSMetaClass::instanceConstructed();
  return puVar1;
}



/* IOAudioEngineUserClient::operator.new @ 0xadaa */

/* IOAudioEngineUserClient::operator new(unsigned long) */

void * __thiscall IOAudioEngineUserClient::operator_new(IOAudioEngineUserClient *this,ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)_OSObject_typed_operator_new();
  return pvVar1;
}



/* IOAudioEngineUserClient::IOAudioEngineUserClient @ 0xadbe */

/* IOAudioEngineUserClient::IOAudioEngineUserClient() */

void __thiscall IOAudioEngineUserClient::IOAudioEngineUserClient(IOAudioEngineUserClient *this)

{
  OSMetaClass *in_RDX;
  undefined8 *unaff_RDI;
  
  IOUserClient::IOUserClient((IOUserClient *)this,in_RDX);
  *unaff_RDI = &PTR__IOAudioEngineUserClient_00021660;
  OSMetaClass::instanceConstructed();
  return;
}



/* IOAudioEngineUserClient::IOAudioEngineUserClient @ 0xadee */

/* IOAudioEngineUserClient::IOAudioEngineUserClient() */

void __thiscall IOAudioEngineUserClient::IOAudioEngineUserClient(IOAudioEngineUserClient *this)

{
  OSMetaClass *in_RDX;
  undefined8 *unaff_RDI;
  
  IOUserClient::IOUserClient((IOUserClient *)this,in_RDX);
  *unaff_RDI = &PTR__IOAudioEngineUserClient_00021660;
  OSMetaClass::instanceConstructed();
  return;
}



/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient12 @ 0xae1e */

/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient12() */

void __thiscall
IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient12(IOAudioEngineUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient13 @ 0xae34 */

/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient13() */

void __thiscall
IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient13(IOAudioEngineUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient14 @ 0xae4a */

/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient14() */

void __thiscall
IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient14(IOAudioEngineUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient15 @ 0xae60 */

/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient15() */

void __thiscall
IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient15(IOAudioEngineUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient16 @ 0xae76 */

/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient16() */

void __thiscall
IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient16(IOAudioEngineUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient17 @ 0xae8c */

/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient17() */

void __thiscall
IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient17(IOAudioEngineUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient18 @ 0xaea2 */

/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient18() */

void __thiscall
IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient18(IOAudioEngineUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient19 @ 0xaeb8 */

/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient19() */

void __thiscall
IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient19(IOAudioEngineUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient20 @ 0xaece */

/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient20() */

void __thiscall
IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient20(IOAudioEngineUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient21 @ 0xaee4 */

/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient21() */

void __thiscall
IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient21(IOAudioEngineUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient22 @ 0xaefa */

/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient22() */

void __thiscall
IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient22(IOAudioEngineUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient23 @ 0xaf10 */

/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient23() */

void __thiscall
IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient23(IOAudioEngineUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient24 @ 0xaf26 */

/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient24() */

void __thiscall
IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient24(IOAudioEngineUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient25 @ 0xaf3c */

/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient25() */

void __thiscall
IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient25(IOAudioEngineUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient26 @ 0xaf52 */

/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient26() */

void __thiscall
IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient26(IOAudioEngineUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient27 @ 0xaf68 */

/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient27() */

void __thiscall
IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient27(IOAudioEngineUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient28 @ 0xaf7e */

/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient28() */

void __thiscall
IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient28(IOAudioEngineUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient29 @ 0xaf94 */

/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient29() */

void __thiscall
IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient29(IOAudioEngineUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient30 @ 0xafaa */

/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient30() */

void __thiscall
IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient30(IOAudioEngineUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient31 @ 0xafc0 */

/* IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient31() */

void __thiscall
IOAudioEngineUserClient::_RESERVEDIOAudioEngineUserClient31(IOAudioEngineUserClient *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioEngineUserClient::initWithAudioEngine @ 0xafd6 */

/* IOAudioEngineUserClient::initWithAudioEngine(IOAudioEngine*, task*, void*, unsigned int,
   OSDictionary*) */

undefined1
IOAudioEngineUserClient::initWithAudioEngine
          (IOAudioEngine *param_1,task *param_2,void *param_3,uint param_4,OSDictionary *param_5)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  OSObject *buffer;
  u_int numBytes;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  undefined4 in_register_0000008c;
  undefined1 uVar4;
  
  plVar3 = (longlong *)CONCAT44(in_register_0000008c,param_4);
  __os_log_internal("+ IOAudioEngineUserClient[%p]::initWithAudioEngine(%p, 0x%lx, %p, 0x%lx, %p)\n"
                    ,0);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x1d0))();
  }
  cVar1 = (**(code **)(*unaff_RDI + 0x8e0))((ulonglong)param_3 & 0xffffffff,param_1,plVar3);
  if (cVar1 != '\0') {
    if (param_2 == (task *)0x0 || unaff_RSI == 0) {
      uVar4 = 0;
      goto LAB_0000b1b2;
    }
    unaff_RDI[0x3f] = (longlong)param_2;
    unaff_RDI[0x1b] = unaff_RSI;
    uVar4 = 0;
    (**(code **)(*unaff_RDI + 0xa70))();
    unaff_RDI[0x41] = 0;
    lVar2 = _IORecursiveLockAlloc();
    unaff_RDI[0x42] = lVar2;
    if (lVar2 == 0) goto LAB_0000b1b2;
    plVar3 = (longlong *)(**(code **)(*(longlong *)unaff_RDI[0x1b] + 0x688))();
    unaff_RDI[0x1c] = (longlong)plVar3;
    if (plVar3 != (longlong *)0x0) {
      buffer = (OSObject *)*plVar3;
      (**(code **)(buffer + 0x20))();
      uVar4 = 0;
      lVar2 = IOCommandGate::commandGate
                        (buffer,(_func_int_OSObject_ptr_void_ptr_void_ptr_void_ptr_void_ptr *)
                                param_1);
      numBytes = (u_int)param_1;
      unaff_RDI[0x1d] = lVar2;
      if (lVar2 == 0) goto LAB_0000b1b2;
      lVar2 = _IOMallocTypeImpl();
      unaff_RDI[0x45] = lVar2;
      if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 0xc) = 0;
        _read_random(buffer,numBytes);
        __os_log_internal("  ConnectionID:0x%x\n",0,*(undefined4 *)(unaff_RDI[0x45] + 0x14));
        (**(code **)(*(longlong *)unaff_RDI[0x1c] + 0x140))();
        unaff_RDI[0x3c] = (longlong)unaff_RDI;
        unaff_RDI[0x3d] = 0xb19;
        unaff_RDI[0x3e] = 0;
        uVar4 = 1;
        goto LAB_0000b1b2;
      }
    }
  }
  uVar4 = 0;
LAB_0000b1b2:
  __os_log_internal("- IOAudioEngineUserClient[%p]::initWithAudioEngine(%p, 0x%lx, %p, 0x%lx, %p) returns %d\n"
                    ,0);
  return uVar4;
}



/* IOAudioEngineUserClient::registerClientParameterBuffer @ 0xb1fe */

/* IOAudioEngineUserClient::registerClientParameterBuffer(void*, unsigned int) */

int IOAudioEngineUserClient::registerClientParameterBuffer(void *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  uint *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar7;
  task *in_R9;
  
  lVar3 = 0;
  uVar7 = 0;
  __os_log_internal("+ IOAudioEngineUserClient::registerClientParameterBuffer() - result = 0x%x\n",0
                   );
  cVar1 = IOService::isInactive();
  if (cVar1 != '\0') {
    iVar2 = -0x1ffffd40;
    goto LAB_0000b24a;
  }
  if (unaff_RSI == (uint *)0x0) {
    return -0x1ffffd3e;
  }
  if (1 < *unaff_RSI) {
    return -0x1ffffd3e;
  }
  (**(code **)(*unaff_RDI + 0xa90))();
  lVar3 = (**(code **)(*unaff_RDI + 0x9b8))();
  if (lVar3 != 0) {
    (**(code **)(*unaff_RDI + 0xa98))();
    return -0x1ffffd3e;
  }
  lVar3 = (**(code **)(*unaff_RDI + 0xae0))();
  (**(code **)(*unaff_RDI + 0xa98))();
  if (lVar3 == 0) {
    lVar3 = 0;
LAB_0000b383:
    iVar2 = 0;
  }
  else {
    lVar3 = _IOMallocTypeImpl();
    if (lVar3 == 0) {
      return -0x1ffffd44;
    }
    plVar4 = (longlong *)IOMemoryDescriptor::withAddressRange(unaff_RDI[0x3f],1,uVar7,in_R9);
    *(longlong **)(lVar3 + 0x10) = plVar4;
    if (plVar4 == (longlong *)0x0) {
      iVar2 = -0x1ffffd37;
      goto LAB_0000b24a;
    }
    iVar2 = (**(code **)(*plVar4 + 0x1f0))();
    if (iVar2 != 0) goto LAB_0000b24a;
    plVar4 = (longlong *)(**(code **)(**(longlong **)(lVar3 + 0x10) + 0x200))();
    *(longlong **)(lVar3 + 0x18) = plVar4;
    if (plVar4 == (longlong *)0x0) {
      _IOLog();
    }
    else {
      lVar5 = (**(code **)(*plVar4 + 0x118))();
      *(longlong *)(lVar3 + 8) = lVar5;
      if (lVar5 != 0) {
        *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)unaff_RSI;
        lVar5 = *(longlong *)unaff_RDI[0x45];
        if (lVar5 == 0) {
          *(longlong *)unaff_RDI[0x45] = lVar3;
        }
        else {
          do {
            lVar6 = lVar5;
            lVar5 = *(longlong *)(lVar6 + 0x38);
          } while (lVar5 != 0);
          *(longlong *)(lVar6 + 0x38) = lVar3;
        }
        goto LAB_0000b383;
      }
    }
    iVar2 = -0x1ffffd38;
  }
LAB_0000b24a:
  __os_log_internal("- IOAudioEngineUserClient::registerClientParameterBuffer() - result = 0x%lX\n",
                    0,(longlong)iVar2);
  if ((lVar3 != 0) && (iVar2 != 0)) {
    if (*(longlong **)(lVar3 + 0x18) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar3 + 0x18) + 0x28))();
    }
    *(undefined8 *)(lVar3 + 0x18) = 0;
    if (*(longlong **)(lVar3 + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x28))();
    }
    *(undefined8 *)(lVar3 + 0x10) = 0;
    _IOFreeTypeImpl();
  }
  return iVar2;
}



/* IOAudioEngineUserClient::findExtendedInfo @ 0xb418 */

/* IOAudioEngineUserClient::findExtendedInfo(unsigned int) */

int * IOAudioEngineUserClient::findExtendedInfo(uint param_1)

{
  int *piVar1;
  int unaff_ESI;
  longlong unaff_RDI;
  
  piVar1 = (int *)**(undefined8 **)(unaff_RDI + 0x228);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    if (*piVar1 == unaff_ESI) break;
    piVar1 = *(int **)(piVar1 + 0xe);
  }
  return piVar1;
}



/* IOAudioEngineUserClient::findExtendedInfo64 @ 0xb43a */

/* IOAudioEngineUserClient::findExtendedInfo64(unsigned int) */

int * IOAudioEngineUserClient::findExtendedInfo64(uint param_1)

{
  int *piVar1;
  int unaff_ESI;
  longlong unaff_RDI;
  
  piVar1 = (int *)**(undefined8 **)(unaff_RDI + 0x228);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    if (*piVar1 == unaff_ESI) break;
    piVar1 = *(int **)(piVar1 + 0xe);
  }
  return piVar1;
}



/* IOAudioEngineUserClient::getNearestStartTime @ 0xb45c */

/* IOAudioEngineUserClient::getNearestStartTime(IOAudioStream*, _IOAudioTimeStamp*, unsigned int) */

undefined8
IOAudioEngineUserClient::getNearestStartTime
          (IOAudioStream *param_1,_IOAudioTimeStamp *param_2,uint param_3)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if (*(longlong **)(unaff_RDI + 0xe0) != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x1a0))();
    return uVar1;
  }
  return 0xe00002bc;
}



/* IOAudioEngineUserClient::_getNearestStartTimeAction @ 0xb4a4 */

/* IOAudioEngineUserClient::_getNearestStartTimeAction(OSObject*, void*, void*, void*, void*) */

undefined4
IOAudioEngineUserClient::_getNearestStartTimeAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 unaff_SIL;
  longlong unaff_RDI;
  
  uVar2 = 0xe00002c2;
  if (unaff_RDI != 0) {
    lVar3 = OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,param_2);
    if (lVar3 != 0) {
      plVar1 = *(longlong **)(lVar3 + 0xe8);
      if (plVar1 == (longlong *)0x0) {
        uVar2 = 0xe00002bc;
      }
      else {
        lVar3 = *(longlong *)(lVar3 + 0x228);
        if ((lVar3 != 0) && (*(uint *)(lVar3 + 0xc) < 2)) {
          *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
        }
        uVar2 = (**(code **)(*plVar1 + 0x1c8))();
        setCommandGateUsage(param_2,(bool)unaff_SIL);
      }
    }
  }
  return uVar2;
}



/* IOAudioEngineUserClient::setCommandGateUsage @ 0xb540 */

/* IOAudioEngineUserClient::setCommandGateUsage(IOAudioEngineUserClient*, bool) */

void IOAudioEngineUserClient::setCommandGateUsage(IOAudioEngineUserClient *param_1,bool param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  char unaff_SIL;
  longlong *plVar4;
  longlong unaff_RDI;
  
  lVar2 = *(longlong *)(unaff_RDI + 0x228);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0xc);
    if (unaff_SIL == '\0') {
      if (uVar1 == 1) {
        if ((0 < *(int *)(lVar2 + 0x10)) &&
           (iVar3 = *(int *)(lVar2 + 0x10) + -1, *(int *)(lVar2 + 0x10) = iVar3, iVar3 == 0)) {
          *(undefined4 *)(lVar2 + 0xc) = 2;
          plVar4 = *(longlong **)(unaff_RDI + 0xe8);
          if (plVar4 != (longlong *)0x0) {
            if (*(longlong **)(unaff_RDI + 0xe0) != (longlong *)0x0) {
              (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x148))();
              plVar4 = *(longlong **)(unaff_RDI + 0xe8);
            }
            (**(code **)(*plVar4 + 0x28))();
            *(undefined8 *)(unaff_RDI + 0xe8) = 0;
          }
        }
      }
      else if ((uVar1 == 0) && (0 < *(int *)(lVar2 + 0x10))) {
        *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
      }
    }
    else if (uVar1 < 2) {
      *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
    }
  }
  return;
}



/* IOAudioEngineUserClient::getNearestStartTimeAction @ 0xb5da */

/* IOAudioEngineUserClient::getNearestStartTimeAction(OSObject*, void*, void*, void*, void*) */

undefined8
IOAudioEngineUserClient::getNearestStartTimeAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  
  if (unaff_RDI != 0) {
    plVar1 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,param_2);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0000b622. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x978))
                        ((ulonglong)param_3 & 0xffffffff,param_2,*(code **)(*plVar1 + 0x978));
      return uVar2;
    }
  }
  return 0xe00002c2;
}



/* IOAudioEngineUserClient::getClientNearestStartTime @ 0xb636 */

/* IOAudioEngineUserClient::getClientNearestStartTime(IOAudioStream*, _IOAudioTimeStamp*, unsigned
   int) */

undefined8
IOAudioEngineUserClient::getClientNearestStartTime
          (IOAudioStream *param_1,_IOAudioTimeStamp *param_2,uint param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  
  if (*(longlong *)(unaff_RDI + 0xd8) != 0) {
    cVar1 = IOService::isInactive();
    if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0000b696. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(longlong **)(unaff_RDI + 0xd8) + 0x860))((int)param_1 != 0,param_2);
      return uVar2;
    }
  }
  return 0xe00002bc;
}



/* IOAudioEngineUserClient::withAudioEngine @ 0xb698 */

/* IOAudioEngineUserClient::withAudioEngine(IOAudioEngine*, task*, void*, unsigned int,
   OSDictionary*) */

longlong *
IOAudioEngineUserClient::withAudioEngine
          (IOAudioEngine *param_1,task *param_2,void *param_3,uint param_4,OSDictionary *param_5)

{
  char cVar1;
  longlong *plVar2;
  IOAudioEngine *this;
  task *ptVar3;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  
  this = param_1;
  ptVar3 = param_2;
  plVar2 = (longlong *)_OSObject_typed_operator_new();
  IOUserClient::IOUserClient((IOUserClient *)this,(OSMetaClass *)ptVar3);
  *plVar2 = (longlong)&PTR__IOAudioEngineUserClient_00021660;
  OSMetaClass::instanceConstructed();
  cVar1 = (**(code **)(*plVar2 + 0x988))(param_2,unaff_RSI,(ulonglong)param_1 & 0xffffffff,param_3);
  if (cVar1 == '\0') {
    (**(code **)(*plVar2 + 0x28))();
    plVar2 = (longlong *)0x0;
  }
  __os_log_internal("+- IOAudioEngineUserClient::withAudioEngine(%p, 0x%lx, %p, 0x%lx, %p) returns %p\n"
                    ,0,unaff_RDI,unaff_RSI);
  return plVar2;
}



/* IOAudioEngineUserClient::withAudioEngine @ 0xb77a */

/* IOAudioEngineUserClient::withAudioEngine(IOAudioEngine*, task*, void*, unsigned int) */

longlong *
IOAudioEngineUserClient::withAudioEngine
          (IOAudioEngine *param_1,task *param_2,void *param_3,uint param_4)

{
  char cVar1;
  longlong *plVar2;
  task *ptVar3;
  
  ptVar3 = param_2;
  plVar2 = (longlong *)_OSObject_typed_operator_new();
  IOUserClient::IOUserClient((IOUserClient *)param_1,(OSMetaClass *)ptVar3);
  *plVar2 = (longlong)&PTR__IOAudioEngineUserClient_00021660;
  OSMetaClass::instanceConstructed();
  cVar1 = (**(code **)(*plVar2 + 0xaa0))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(*plVar2 + 0x28))();
    plVar2 = (longlong *)0x0;
  }
  __os_log_internal("+- IOAudioEngineUserClient::withAudioEngine(%p, 0x%lx, %p, 0x%lx) returns %p\n"
                    ,0);
  return plVar2;
}



/* IOAudioEngineUserClient::initWithAudioEngine @ 0xb844 */

/* IOAudioEngineUserClient::initWithAudioEngine(IOAudioEngine*, task*, void*, unsigned int) */

undefined1
IOAudioEngineUserClient::initWithAudioEngine
          (IOAudioEngine *param_1,task *param_2,void *param_3,uint param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  OSObject *buffer;
  u_int numBytes;
  undefined1 uVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  __os_log_internal("+ IOAudioEngineUserClient[%p]::initWithAudioEngine(%p, 0x%lx, %p, 0x%lx)\n",0);
  uVar4 = 0;
  cVar1 = (**(code **)(*unaff_RDI + 0x8e8))((ulonglong)param_3 & 0xffffffff);
  if (cVar1 != '\0') {
    if (param_2 == (task *)0x0 || unaff_RSI == 0) {
      uVar4 = 0;
    }
    else {
      unaff_RDI[0x3f] = (longlong)param_2;
      unaff_RDI[0x1b] = unaff_RSI;
      uVar4 = 0;
      (**(code **)(*unaff_RDI + 0xa70))();
      unaff_RDI[0x41] = 0;
      lVar2 = _IORecursiveLockAlloc();
      unaff_RDI[0x42] = lVar2;
      if (lVar2 != 0) {
        plVar3 = (longlong *)(**(code **)(*(longlong *)unaff_RDI[0x1b] + 0x688))();
        unaff_RDI[0x1c] = (longlong)plVar3;
        if (plVar3 != (longlong *)0x0) {
          buffer = (OSObject *)*plVar3;
          (**(code **)(buffer + 0x20))();
          uVar4 = 0;
          lVar2 = IOCommandGate::commandGate
                            (buffer,(_func_int_OSObject_ptr_void_ptr_void_ptr_void_ptr_void_ptr *)
                                    param_1);
          numBytes = (u_int)param_1;
          unaff_RDI[0x1d] = lVar2;
          if (lVar2 == 0) goto LAB_0000ba0a;
          lVar2 = _IOMallocTypeImpl();
          unaff_RDI[0x45] = lVar2;
          if (lVar2 != 0) {
            *(undefined4 *)(lVar2 + 0xc) = 0;
            _read_random(buffer,numBytes);
            __os_log_internal("  ConnectionID:0x%x\n",0,*(undefined4 *)(unaff_RDI[0x45] + 0x14));
            (**(code **)(*(longlong *)unaff_RDI[0x1c] + 0x140))();
            unaff_RDI[0x3c] = (longlong)unaff_RDI;
            unaff_RDI[0x3d] = 0xb19;
            unaff_RDI[0x3e] = 0;
            uVar4 = 1;
            goto LAB_0000ba0a;
          }
        }
        uVar4 = 0;
      }
    }
  }
LAB_0000ba0a:
  __os_log_internal("- IOAudioEngineUserClient[%p]::initWithAudioEngine(%p, 0x%lx, %p, 0x%lx) returns %d\n"
                    ,0);
  return uVar4;
}



/* IOAudioEngineUserClient::free @ 0xba50 */

/* IOAudioEngineUserClient::free() */

void __thiscall IOAudioEngineUserClient::free(IOAudioEngineUserClient *this)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0xaa8))();
  if (unaff_RDI[0x42] != 0) {
    _IORecursiveLockFree();
    unaff_RDI[0x42] = 0;
  }
  if (unaff_RDI[0x43] != 0) {
    unaff_RDI[0x43] = 0;
    _IOFreeTypeImpl();
    unaff_RDI[0x43] = 0;
  }
  plVar3 = (longlong *)unaff_RDI[0x1d];
  if (plVar3 != (longlong *)0x0) {
    if ((longlong *)unaff_RDI[0x1c] != (longlong *)0x0) {
      (**(code **)(*(longlong *)unaff_RDI[0x1c] + 0x148))();
      plVar3 = (longlong *)unaff_RDI[0x1d];
    }
    (**(code **)(*plVar3 + 0x28))();
    unaff_RDI[0x1d] = 0;
  }
  if ((longlong *)unaff_RDI[0x1c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x1c] + 0x28))();
    unaff_RDI[0x1c] = 0;
  }
  if ((longlong *)unaff_RDI[0x45] != (longlong *)0x0) {
    lVar2 = *(longlong *)unaff_RDI[0x45];
    while (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar2 + 0x38);
      if (*(longlong **)(lVar2 + 0x18) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x28))();
      }
      *(undefined8 *)(lVar2 + 0x18) = 0;
      if (*(longlong **)(lVar2 + 0x10) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x28))();
      }
      *(undefined8 *)(lVar2 + 0x10) = 0;
      _IOFreeTypeVarImpl();
      lVar2 = lVar1;
    }
    unaff_RDI[0x45] = 0;
    _IOFreeTypeImpl();
  }
                    /* WARNING: Could not recover jumptable at 0x0000bb9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_vtable_0001e040 + 0xa0))();
  return;
}



/* IOAudioEngineUserClient::freeClientBufferSetList @ 0xbba0 */

/* IOAudioEngineUserClient::freeClientBufferSetList() */

void IOAudioEngineUserClient::freeClientBufferSetList(void)

{
  longlong *plVar1;
  longlong *unaff_RDI;
  longlong lVar2;
  
  (**(code **)(*unaff_RDI + 0xa90))();
  lVar2 = unaff_RDI[0x41];
  while (lVar2 != 0) {
    IOAudioClientBufferSet::cancelWatchdogTimer();
    plVar1 = (longlong *)unaff_RDI[0x41];
    lVar2 = plVar1[3];
    while (lVar2 != 0) {
      lVar2 = *(longlong *)(lVar2 + 0x70);
      (**(code **)(*unaff_RDI + 0xab0))();
      plVar1 = (longlong *)unaff_RDI[0x41];
      plVar1[3] = lVar2;
    }
    lVar2 = plVar1[4];
    while (lVar2 != 0) {
      lVar2 = *(longlong *)(lVar2 + 0x70);
      (**(code **)(*unaff_RDI + 0xab0))();
      plVar1 = (longlong *)unaff_RDI[0x41];
      plVar1[4] = lVar2;
    }
    lVar2 = plVar1[8];
    (**(code **)(*plVar1 + 0x28))();
    unaff_RDI[0x41] = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0000bc43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0xa98))();
  return;
}



/* IOAudioEngineUserClient::freeClientBuffer @ 0xbc4a */

/* IOAudioEngineUserClient::freeClientBuffer(IOAudioClientBuffer64*) */

void IOAudioEngineUserClient::freeClientBuffer(IOAudioClientBuffer64 *param_1)

{
  longlong unaff_RSI;
  
  if (unaff_RSI != 0) {
    if (*(longlong **)(unaff_RSI + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(unaff_RSI + 8) + 0xac8))();
      (**(code **)(**(longlong **)(unaff_RSI + 8) + 0x28))();
      *(undefined8 *)(unaff_RSI + 8) = 0;
    }
    if (*(longlong **)(unaff_RSI + 0x18) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(unaff_RSI + 0x18) + 0x1f8))();
      (**(code **)(**(longlong **)(unaff_RSI + 0x18) + 0x28))();
      *(undefined8 *)(unaff_RSI + 0x18) = 0;
    }
    if (*(longlong **)(unaff_RSI + 0x20) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(unaff_RSI + 0x20) + 0x28))();
      *(undefined8 *)(unaff_RSI + 0x20) = 0;
    }
    _IOFreeTypeImpl();
    return;
  }
  return;
}



/* IOAudioEngineUserClient::stop @ 0xbcd6 */

/* IOAudioEngineUserClient::stop(IOService*) */

void IOAudioEngineUserClient::stop(IOService *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *unaff_RDI;
  
  if ((longlong *)unaff_RDI[0x1d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x1d] + 0x1c8))(0,0,0,0);
  }
  (**(code **)(*unaff_RDI + 0xaa8))();
  lVar1 = unaff_RDI[0x45];
  if (*(int *)(lVar1 + 0x10) == 0) {
    *(undefined4 *)(lVar1 + 0xc) = 2;
    plVar2 = (longlong *)unaff_RDI[0x1d];
    if (plVar2 != (longlong *)0x0) {
      if ((longlong *)unaff_RDI[0x1c] != (longlong *)0x0) {
        (**(code **)(*(longlong *)unaff_RDI[0x1c] + 0x148))();
        plVar2 = (longlong *)unaff_RDI[0x1d];
      }
      (**(code **)(*plVar2 + 0x28))();
      unaff_RDI[0x1d] = 0;
    }
  }
  else {
    *(undefined4 *)(lVar1 + 0xc) = 1;
  }
  (**(code **)(PTR_vtable_0001e040 + 0x5d8))();
  __os_log_internal("+- IOAudioEngineUserClient[%p]::stop(%p)\n",0);
  return;
}



/* IOAudioEngineUserClient::stopClientAction @ 0xbdaa */

/* IOAudioEngineUserClient::stopClientAction(OSObject*, void*, void*, void*, void*) */

undefined8
IOAudioEngineUserClient::stopClientAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  
  if (unaff_RDI != 0) {
    plVar1 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,param_2);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0000bdcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0xb10))();
      return uVar2;
    }
  }
  return 0xe00002c2;
}



/* IOAudioEngineUserClient::clientClose @ 0xbdd8 */

/* IOAudioEngineUserClient::clientClose() */

undefined8 IOAudioEngineUserClient::clientClose(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  
  if (((*(longlong *)(unaff_RDI + 0xd8) != 0) && (*(longlong *)(unaff_RDI + 0xe0) != 0)) &&
     (cVar1 = IOService::isInactive(), cVar1 == '\0')) {
    uVar2 = (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x1a0))(0);
    return uVar2;
  }
  return 0;
}



/* IOAudioEngineUserClient::_closeClientAction @ 0xbe36 */

/* IOAudioEngineUserClient::_closeClientAction(OSObject*, void*, void*, void*, void*) */

undefined4
IOAudioEngineUserClient::_closeClientAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 unaff_SIL;
  longlong unaff_RDI;
  
  uVar2 = 0xe00002c2;
  if (unaff_RDI != 0) {
    lVar3 = OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,param_2);
    if (lVar3 != 0) {
      plVar1 = *(longlong **)(lVar3 + 0xe8);
      if (plVar1 == (longlong *)0x0) {
        uVar2 = 0xe00002bc;
      }
      else {
        lVar3 = *(longlong *)(lVar3 + 0x228);
        if ((lVar3 != 0) && (*(uint *)(lVar3 + 0xc) < 2)) {
          *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
        }
        uVar2 = (**(code **)(*plVar1 + 0x1c8))();
        setCommandGateUsage(param_2,(bool)unaff_SIL);
      }
    }
  }
  return uVar2;
}



/* IOAudioEngineUserClient::clientDied @ 0xbed2 */

/* IOAudioEngineUserClient::clientDied() */

undefined4 IOAudioEngineUserClient::clientDied(void)

{
  undefined4 uVar1;
  longlong *unaff_RDI;
  
  uVar1 = (**(code **)(*unaff_RDI + 0x8f0))();
  __os_log_internal("+- IOAudioEngineUserClient[%p]::clientDied() returns 0x%lX\n",0);
  return uVar1;
}



/* IOAudioEngineUserClient::closeClientAction @ 0xbf14 */

/* IOAudioEngineUserClient::closeClientAction(OSObject*, void*, void*, void*, void*) */

undefined8
IOAudioEngineUserClient::closeClientAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  
  if (unaff_RDI != 0) {
    plVar1 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,param_2);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0000bf35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0xa60))();
      return uVar2;
    }
  }
  return 0xe00002c2;
}



/* IOAudioEngineUserClient::closeClient @ 0xbf42 */

/* IOAudioEngineUserClient::closeClient() */

undefined8 IOAudioEngineUserClient::closeClient(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  if ((unaff_RDI[0x1b] != 0) && (cVar1 = IOService::isInactive(), cVar1 == '\0')) {
    cVar1 = (**(code **)(*unaff_RDI + 0xab8))();
    if (cVar1 != '\0') {
      (**(code **)(*unaff_RDI + 0xb10))();
    }
    (**(code **)(*(longlong *)unaff_RDI[0x1b] + 0xb88))();
    unaff_RDI[0x1b] = 0;
  }
  return 0;
}



/* IOAudioEngineUserClient::setOnline @ 0xbfa2 */

/* IOAudioEngineUserClient::setOnline(bool) */

void IOAudioEngineUserClient::setOnline(bool param_1)

{
  byte unaff_SIL;
  longlong *unaff_RDI;
  
  if ((*(byte *)(unaff_RDI + 0x44) & 1) != unaff_SIL) {
    *(byte *)(unaff_RDI + 0x44) = unaff_SIL;
    (**(code **)(*unaff_RDI + 0x280))(0x40,unaff_SIL);
  }
  __os_log_internal("+- IOAudioEngineUserClient[%p]::setOnline(%d)\n",0);
  return;
}



/* IOAudioEngineUserClient::isOnline @ 0xc008 */

/* IOAudioEngineUserClient::isOnline() */

byte IOAudioEngineUserClient::isOnline(void)

{
  longlong unaff_RDI;
  
  return *(byte *)(unaff_RDI + 0x220) & 1;
}



/* IOAudioEngineUserClient::lockBuffers @ 0xc016 */

/* IOAudioEngineUserClient::lockBuffers() */

void IOAudioEngineUserClient::lockBuffers(void)

{
  _IORecursiveLockLock();
  return;
}



/* IOAudioEngineUserClient::unlockBuffers @ 0xc028 */

/* IOAudioEngineUserClient::unlockBuffers() */

void IOAudioEngineUserClient::unlockBuffers(void)

{
  _IORecursiveLockUnlock();
  return;
}



/* IOAudioEngineUserClient::getExternalMethodForIndex @ 0xc03a */

/* IOAudioEngineUserClient::getExternalMethodForIndex(unsigned int) */

undefined8 IOAudioEngineUserClient::getExternalMethodForIndex(uint param_1)

{
  return 0;
}



/* IOAudioEngineUserClient::getExternalTrapForIndex @ 0xc042 */

/* IOAudioEngineUserClient::getExternalTrapForIndex(unsigned int) */

longlong IOAudioEngineUserClient::getExternalTrapForIndex(uint param_1)

{
  int unaff_ESI;
  longlong unaff_RDI;
  
  if (unaff_ESI == 0x1000) {
    *(undefined4 *)(*(longlong *)(unaff_RDI + 0x228) + 8) = 1;
    return unaff_RDI + 0x1e0;
  }
  if (unaff_ESI == 0) {
    return unaff_RDI + 0x1e0;
  }
  return 0;
}



/* IOAudioEngineUserClient::registerNotificationPort @ 0xc076 */

/* IOAudioEngineUserClient::registerNotificationPort(ipc_port*, unsigned int, unsigned int) */

undefined4
IOAudioEngineUserClient::registerNotificationPort(ipc_port *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  longlong unaff_RDI;
  undefined4 in_register_00000084;
  
  if (param_2 == 0) {
    if (*(longlong **)(unaff_RDI + 0xe0) == (longlong *)0x0) {
      uVar1 = 0xe00002bc;
    }
    else {
      uVar1 = (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x1a0))();
    }
  }
  else {
    __os_log_internal("IOAudioEngineUserClient::registerNotificationPort() - ERROR: invalid notification type specified - no notifications will be sent.\n"
                      ,0x10,CONCAT44(in_register_00000084,param_3));
    _IOLog();
    uVar1 = 0xe00002c2;
  }
  __os_log_internal("- IOAudioEngineUserClient[%p]::registerNotificationPort(0x%lx, 0x%lx, 0x%lx) returns 0x%lX\n"
                    ,0);
  return uVar1;
}



/* IOAudioEngineUserClient::_registerNotificationAction @ 0xc144 */

/* IOAudioEngineUserClient::_registerNotificationAction(OSObject*, void*, void*, void*, void*) */

undefined4
IOAudioEngineUserClient::_registerNotificationAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 unaff_SIL;
  longlong unaff_RDI;
  
  uVar2 = 0xe00002c2;
  if (unaff_RDI != 0) {
    lVar3 = OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,param_2);
    if (lVar3 != 0) {
      plVar1 = *(longlong **)(lVar3 + 0xe8);
      if (plVar1 == (longlong *)0x0) {
        uVar2 = 0xe00002bc;
      }
      else {
        lVar3 = *(longlong *)(lVar3 + 0x228);
        if ((lVar3 != 0) && (*(uint *)(lVar3 + 0xc) < 2)) {
          *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
        }
        uVar2 = (**(code **)(*plVar1 + 0x1c8))();
        setCommandGateUsage(param_2,(bool)unaff_SIL);
      }
    }
  }
  return uVar2;
}



/* IOAudioEngineUserClient::registerNotificationAction @ 0xc1e0 */

/* IOAudioEngineUserClient::registerNotificationAction(OSObject*, void*, void*, void*, void*) */

undefined4
IOAudioEngineUserClient::registerNotificationAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong unaff_RDI;
  
  uVar1 = 0xe00002c2;
  if (unaff_RDI != 0) {
    plVar2 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,param_2);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 0xa68))(*plVar2,(ulonglong)param_2 & 0xffffffff);
    }
  }
  __os_log_internal("- IOAudioEngineUserClient::registerNotificationAction(%p, %p) returns 0x%lX\n",
                    0);
  return uVar1;
}



/* IOAudioEngineUserClient::registerNotification @ 0xc268 */

/* IOAudioEngineUserClient::registerNotification(ipc_port*, unsigned int) */

undefined4 IOAudioEngineUserClient::registerNotification(ipc_port *param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  cVar2 = IOService::isInactive();
  uVar4 = 0xe00002c0;
  if (cVar2 == '\0') {
    lVar1 = *(longlong *)(unaff_RDI + 0x218);
    if (unaff_RSI == 0) {
      uVar4 = 0;
      if (lVar1 != 0) {
        *(undefined8 *)(lVar1 + 8) = 0;
        uVar4 = 0;
      }
    }
    else if (lVar1 == 0) {
      puVar3 = (undefined8 *)_IOMallocTypeImpl();
      *(undefined8 **)(unaff_RDI + 0x218) = puVar3;
      if (puVar3 == (undefined8 *)0x0) {
        uVar4 = 0xe00002bd;
      }
      else {
        *puVar3 = 0x3000000013;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[1] = unaff_RSI;
        *(uint *)((longlong)puVar3 + 0x24) = param_2;
        uVar4 = 0;
      }
    }
    else {
      *(longlong *)(lVar1 + 8) = unaff_RSI;
      *(uint *)(lVar1 + 0x24) = param_2;
      uVar4 = 0;
    }
  }
  __os_log_internal("- IOAudioEngineUserClient[%p]::registerFormatNotification(0x%lx, 0x%lx) returns 0x%lX\n"
                    ,0);
  return uVar4;
}



/* IOAudioEngineUserClient::registerBuffer @ 0xc338 */

/* IOAudioEngineUserClient::registerBuffer(IOAudioStream*, void*, unsigned int, unsigned int) */

undefined8
IOAudioEngineUserClient::registerBuffer
          (IOAudioStream *param_1,void *param_2,uint param_3,uint param_4)

{
  __os_log_internal("+-IOAudioEngineUserClient::registerBuffer Deprecated 0x%llx %p 0x%lx 0x%lx\n",0
                   );
  return 0xe00002c7;
}



/* IOAudioEngineUserClient::registerBuffer64 @ 0xc378 */

/* IOAudioEngineUserClient::registerBuffer64(IOAudioStream*, unsigned long long, unsigned int,
   unsigned int) */

undefined4
IOAudioEngineUserClient::registerBuffer64
          (IOAudioStream *param_1,ulonglong param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  longlong unaff_RDI;
  
  __os_log_internal("+ IOAudioEngineUserClient::registerBuffer64 0x%llx 0x%llx 0x%lx 0x%lx\n",0);
  if (*(longlong **)(unaff_RDI + 0xe0) == (longlong *)0x0) {
    uVar1 = 0xe00002bc;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x1a0))();
  }
  __os_log_internal("- IOAudioEngineUserClient::registerBuffer64 0x%llx 0x%llx 0x%lx 0x%lx returns 0x%lX\n"
                    ,0);
  return uVar1;
}



/* IOAudioEngineUserClient::_registerBufferAction @ 0xc44a */

/* IOAudioEngineUserClient::_registerBufferAction(OSObject*, void*, void*, void*, void*) */

undefined4
IOAudioEngineUserClient::_registerBufferAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 unaff_SIL;
  longlong unaff_RDI;
  
  uVar2 = 0xe00002c2;
  if (unaff_RDI != 0) {
    lVar3 = OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,param_2);
    if (lVar3 != 0) {
      plVar1 = *(longlong **)(lVar3 + 0xe8);
      if (plVar1 == (longlong *)0x0) {
        uVar2 = 0xe00002bc;
      }
      else {
        lVar3 = *(longlong *)(lVar3 + 0x228);
        if ((lVar3 != 0) && (*(uint *)(lVar3 + 0xc) < 2)) {
          *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
        }
        uVar2 = (**(code **)(*plVar1 + 0x1c8))();
        setCommandGateUsage(param_2,(bool)unaff_SIL);
      }
    }
  }
  return uVar2;
}



/* IOAudioEngineUserClient::unregisterBuffer @ 0xc4e6 */

/* IOAudioEngineUserClient::unregisterBuffer(void*, unsigned int) */

undefined8 IOAudioEngineUserClient::unregisterBuffer(void *param_1,uint param_2)

{
  __os_log_internal("+-IOAudioEngineUserClient::unregisterBuffer 32 bit version NOT SUPPORTED \n",0)
  ;
  return 0xe00002c7;
}



/* IOAudioEngineUserClient::unregisterBuffer64 @ 0xc510 */

/* IOAudioEngineUserClient::unregisterBuffer64(unsigned long long, unsigned int) */

undefined8 IOAudioEngineUserClient::unregisterBuffer64(ulonglong param_1,uint param_2)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if (*(longlong **)(unaff_RDI + 0xe0) == (longlong *)0x0) {
    uVar1 = 0xe00002bc;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x1a0))(&stack0xfffffffffffffff0);
  }
  return uVar1;
}



/* IOAudioEngineUserClient::_unregisterBufferAction @ 0xc55e */

/* IOAudioEngineUserClient::_unregisterBufferAction(OSObject*, void*, void*, void*, void*) */

undefined4
IOAudioEngineUserClient::_unregisterBufferAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 unaff_SIL;
  longlong unaff_RDI;
  
  uVar2 = 0xe00002c2;
  if (unaff_RDI != 0) {
    lVar3 = OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,param_2);
    if (lVar3 != 0) {
      plVar1 = *(longlong **)(lVar3 + 0xe8);
      if (plVar1 == (longlong *)0x0) {
        uVar2 = 0xe00002bc;
      }
      else {
        lVar3 = *(longlong *)(lVar3 + 0x228);
        if ((lVar3 != 0) && (*(uint *)(lVar3 + 0xc) < 2)) {
          *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
        }
        uVar2 = (**(code **)(*plVar1 + 0x1c8))();
        setCommandGateUsage(param_2,(bool)unaff_SIL);
      }
    }
  }
  return uVar2;
}



/* IOAudioEngineUserClient::registerBufferAction @ 0xc5fa */

/* IOAudioEngineUserClient::registerBufferAction(OSObject*, void*, void*, void*, void*) */

undefined8
IOAudioEngineUserClient::registerBufferAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  
  if (unaff_RDI != 0) {
    plVar1 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,param_2);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0000c648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x990))
                        ((ulonglong)param_1 & 0xffffffff,param_2,(ulonglong)param_3 & 0xffffffff,
                         *(code **)(*plVar1 + 0x990));
      return uVar2;
    }
  }
  return 0xe00002c2;
}



/* IOAudioEngineUserClient::unregisterBufferAction @ 0xc65a */

/* IOAudioEngineUserClient::unregisterBufferAction(OSObject*, void*, void*, void*, void*) */

undefined8
IOAudioEngineUserClient::unregisterBufferAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  
  if (unaff_RDI != 0) {
    plVar1 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,param_2);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0000c693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x9b0))
                        (*(code **)(*plVar1 + 0x9b0),(ulonglong)param_2 & 0xffffffff);
      return uVar2;
    }
  }
  return 0xe00002c2;
}



/* IOAudioEngineUserClient::registerClientBuffer @ 0xc6a0 */

/* IOAudioEngineUserClient::registerClientBuffer(IOAudioStream*, void*, unsigned int, unsigned int)
    */

undefined8
IOAudioEngineUserClient::registerClientBuffer
          (IOAudioStream *param_1,void *param_2,uint param_3,uint param_4)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xa78))();
  __os_log_internal("+-IOAudioEngineUserClient[%p]::registerClientBuffer  32 bit version Deprecated (%p[%ld], %p, 0x%lx, 0x%lx)\n"
                    ,0);
  return 0xe00002c7;
}



/* IOAudioEngineUserClient::registerClientBuffer64 @ 0xc716 */

/* IOAudioEngineUserClient::registerClientBuffer64(IOAudioStream*, unsigned long long, unsigned int,
   unsigned int) */

int IOAudioEngineUserClient::registerClientBuffer64
              (IOAudioStream *param_1,ulonglong param_2,uint param_3,uint param_4)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  uint *puVar9;
  longlong lVar10;
  char *this;
  undefined8 *puVar11;
  uint uVar12;
  longlong *plVar13;
  task *unaff_RSI;
  ulonglong uVar14;
  ulonglong uVar15;
  IOAudioEngineUserClient *unaff_RDI;
  uint uVar16;
  IOAudioEngineUserClient *pIVar17;
  task *ptVar18;
  task *ptVar19;
  ulonglong uVar20;
  
  (**(code **)(*(longlong *)unaff_RSI + 0xa78))();
  uVar12 = (uint)param_1;
  ptVar19 = (task *)(ulonglong)param_3;
  pIVar17 = unaff_RDI;
  ptVar18 = unaff_RSI;
  __os_log_internal(
                   "+ IOAudioEngineUserClient[%p]::registerClientBuffer64  (%p[%ld], 0x%llx, 0x%lx, 0x%lx)\n"
                   );
  uVar16 = (uint)pIVar17;
  cVar2 = IOService::isInactive();
  if (cVar2 != '\0') {
    __os_log_internal("  !isActive - no Device \n",0);
    iVar3 = -0x1ffffd40;
    goto LAB_0000c7b6;
  }
  if (uVar12 < 0x10 || param_2 == 0) {
    __os_log_internal("  bad argument\n",0);
    return -0x1ffffd3e;
  }
  puVar5 = (uint *)(**(code **)(*(longlong *)unaff_RSI + 0xa30))();
  if (puVar5 == (uint *)0x0) {
    __os_log_internal("  no format\n",0);
    return -0x1ffffd44;
  }
  if (((char)puVar5[4] == '\0') &&
     (iVar3 = (**(code **)(*(longlong *)unaff_RSI + 0xad0))(), iVar3 != 0)) {
    __os_log_internal("  mix problem or client exists\n",0);
    return -0x1ffffd3b;
  }
  (**(code **)(*(longlong *)unaff_RDI + 0xa90))();
  lVar6 = (**(code **)(*(longlong *)unaff_RDI + 0xae0))();
  if (lVar6 != 0) {
    iVar3 = (**(code **)(*(longlong *)unaff_RSI + 0x9d8))();
    for (lVar6 = *(longlong *)(lVar6 + 0x18 + (ulonglong)(iVar3 != 0) * 8); lVar6 != 0;
        lVar6 = *(longlong *)(lVar6 + 0x70)) {
      if (*(ulonglong *)(lVar6 + 0x68) == param_2) {
        uVar20 = param_2;
        __os_log_internal("  source buffer (0x%llx) already registered in buffer set 0x%lx. Unregister existing source buffer...\n"
                          ,0);
        uVar16 = (uint)uVar20;
        (**(code **)(*(longlong *)unaff_RDI + 0x9b0))();
        ptVar18 = ptVar19;
        break;
      }
    }
  }
  (**(code **)(*(longlong *)unaff_RDI + 0xa98))();
  puVar7 = (undefined8 *)_IOMallocTypeImpl();
  if (puVar7 == (undefined8 *)0x0) {
    __os_log_internal("  no clientbuffer\n",0);
LAB_0000c9ec:
    iVar3 = -0x1ffffd43;
  }
  else {
    *puVar7 = unaff_RDI;
    (**(code **)(*(longlong *)unaff_RSI + 0x9d8))();
    (**(code **)(*(longlong *)unaff_RSI + 0x20))();
    puVar7[1] = unaff_RSI;
    plVar8 = (longlong *)
             IOMemoryDescriptor::withAddressRange
                       (*(ulonglong *)(unaff_RDI + 0x1f8),0,uVar16,ptVar18);
    puVar7[3] = plVar8;
    if (plVar8 == (longlong *)0x0) {
      __os_log_internal("  no sourcebufferdescriptor\n",0);
      iVar3 = -0x1ffffd37;
    }
    else {
      iVar3 = (**(code **)(*plVar8 + 0x1f0))();
      if (iVar3 == 0) {
        plVar8 = (longlong *)(**(code **)(*(longlong *)puVar7[3] + 0x200))();
        puVar7[4] = plVar8;
        if (plVar8 == (longlong *)0x0) {
          __os_log_internal("IOAudioEngineUserClient::registerClientBuffer64() - error mapping memory.\n"
                            ,0x10);
          _IOLog();
        }
        else {
          puVar9 = (uint *)(**(code **)(*plVar8 + 0x118))();
          puVar7[2] = puVar9;
          if (puVar9 != (uint *)0x0) {
            uVar20 = (ulonglong)*puVar9;
            if ((((uVar20 != 0) || (puVar9[1] != 0)) || (puVar9[2] != 0)) || (puVar9[3] != 0)) {
              uVar14 = 4;
              if ((char)puVar5[4] == '\0') {
                uVar14 = (ulonglong)(*(byte *)((longlong)puVar5 + 0xd) >> 3);
              }
              if ((((*puVar5 * uVar14 >> 0x20 != 0) ||
                   (uVar14 = *puVar5 * uVar14 * (ulonglong)puVar9[1], uVar14 >> 0x20 != 0)) ||
                  ((puVar9[2] != uVar12 ||
                   ((uVar15 = ((ulonglong)param_1 & 0xffffffff) - 0x10, uVar15 < uVar20 ||
                    (uVar15 < puVar9[3])))))) || (uVar20 <= uVar14 && uVar14 - uVar20 != 0)) {
                __os_log_internal("  bad argument\n",0);
                iVar3 = -0x1ffffd3e;
                goto LAB_0000cb14;
              }
            }
            __os_log_internal("  clientBuffer->mAudioClientBuffer32.sourceBuffer before offset: %p, offset size: %ld\n"
                              ,0,puVar9,0x10);
            puVar7[0xc] = puVar7[2];
            puVar7[2] = puVar7[2] + 0x10;
            __os_log_internal("  clientBuffer->mAudioClientBuffer32.sourceBuffer after offset: %p\n"
                             );
            *(uint *)(unaff_RDI + 0x200) = uVar12;
            uVar20 = ((ulonglong)param_1 & 0xffffffff) - 0x10;
            if ((char)puVar5[4] == '\0') {
              uVar14 = (ulonglong)*puVar5;
              uVar15 = (ulonglong)((uint)(*(byte *)((longlong)puVar5 + 0xd) >> 3) * *puVar5);
            }
            else {
              uVar14 = (ulonglong)*puVar5;
              uVar15 = uVar14 << 2;
            }
            *(int *)(puVar7 + 6) = (int)(uVar20 / uVar15);
            *(int *)((longlong)puVar7 + 0x34) = (int)uVar14;
            puVar7[0xd] = param_2;
            puVar7[5] = param_2;
            puVar7[0xe] = 0;
            puVar7[8] = 0;
            puVar7[9] = 0;
            puVar7[10] = 0;
            puVar7[0xb] = 0;
            (**(code **)(*(longlong *)unaff_RDI + 0xa90))(uVar14,uVar20 % uVar15);
            lVar6 = (**(code **)(*(longlong *)unaff_RDI + 0xae0))();
            if (lVar6 == 0) {
              this = "  creating new IOAudioClientBufferSet \n";
              __os_log_internal("  creating new IOAudioClientBufferSet \n",0);
              lVar6 = _OSObject_typed_operator_new();
              IOAudioClientBufferSet::IOAudioClientBufferSet((IOAudioClientBufferSet *)this);
              if (lVar6 != 0) {
                cVar2 = IOAudioClientBufferSet::init((uint)this,unaff_RDI);
                if (cVar2 == '\0') {
                  (**(code **)(*(longlong *)unaff_RDI + 0xa98))();
                  iVar3 = -0x1ffffd44;
                  goto LAB_0000cb14;
                }
                *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)(unaff_RDI + 0x208);
                *(longlong *)(unaff_RDI + 0x208) = lVar6;
                goto LAB_0000cc8c;
              }
              lVar6 = *(longlong *)unaff_RDI;
LAB_0000ce85:
              (**(code **)(lVar6 + 0xa98))();
              goto LAB_0000c9ec;
            }
LAB_0000cc8c:
            iVar3 = (**(code **)(*(longlong *)unaff_RSI + 0x9d8))();
            if (iVar3 == 0) {
              __os_log_internal("  output \n",0);
              plVar8 = (longlong *)(lVar6 + 0x18);
              if (*(longlong *)(lVar6 + 0x48) == 0) {
                lVar10 = _thread_call_allocate();
                *(longlong *)(lVar6 + 0x48) = lVar10;
                if (lVar10 == 0) {
                  lVar6 = *(longlong *)unaff_RDI;
                  goto LAB_0000ce85;
                }
              }
            }
            else {
              __os_log_internal("  input \n",0);
              plVar8 = (longlong *)(lVar6 + 0x20);
            }
            lVar6 = *plVar8;
            plVar13 = plVar8;
            if (*plVar8 != 0) {
              do {
                lVar10 = lVar6;
                lVar6 = *(longlong *)(lVar10 + 0x70);
              } while (*(longlong *)(lVar10 + 0x70) != 0);
              __os_log_internal("  assigning  clientBufPtr->mAudioClientBuffer32.mNextBuffer32 %p \n"
                                ,0,puVar7);
              *(undefined8 **)(lVar10 + 0x70) = puVar7;
              plVar13 = (longlong *)(lVar10 + 0x40);
            }
            *plVar13 = (longlong)puVar7;
            cVar2 = (**(code **)(*(longlong *)unaff_RDI + 0xab8))();
            if (cVar2 == '\0') {
              __os_log_internal("  !isOnline \n",0);
              iVar3 = 0;
            }
            else {
              __os_log_internal("  isOnline adding client \n",0);
              iVar4 = (**(code **)(*(longlong *)unaff_RSI + 0xac0))();
              iVar3 = 0;
              if (iVar4 != 0) {
                puVar1 = (undefined8 *)*plVar8;
                iVar3 = iVar4;
                if ((undefined8 *)*plVar8 == puVar7) {
                  *plVar8 = 0;
                }
                else {
                  do {
                    puVar11 = puVar1;
                    if (puVar11 == (undefined8 *)0x0) break;
                    puVar1 = (undefined8 *)puVar11[0xe];
                  } while ((undefined8 *)puVar11[0xe] != puVar7);
                  puVar11[0xe] = 0;
                  puVar11[8] = 0;
                }
              }
            }
            (**(code **)(*(longlong *)unaff_RDI + 0xa98))();
            if (iVar3 == 0) {
              iVar3 = 0;
              goto LAB_0000c7b6;
            }
            goto LAB_0000cb14;
          }
        }
        iVar3 = -0x1ffffd38;
      }
      else {
        __os_log_internal("  prepare error \n",0);
      }
    }
  }
LAB_0000cb14:
  __os_log_internal("  result (0x%x) != kIOReturnSuccess \n",0,iVar3);
  if (puVar7 != (undefined8 *)0x0) {
    if ((longlong *)puVar7[3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)puVar7[3] + 0x28))();
      puVar7[3] = 0;
    }
    if ((longlong *)puVar7[4] != (longlong *)0x0) {
      (**(code **)(*(longlong *)puVar7[4] + 0x28))();
      puVar7[4] = 0;
    }
    if ((longlong *)puVar7[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)puVar7[1] + 0x28))();
      puVar7[1] = 0;
    }
    _IOFreeTypeImpl();
  }
LAB_0000c7b6:
  __os_log_internal("- IOAudioEngineUserClient::registerClientBuffer64() result 0x%lX\n",0,
                    (longlong)iVar3);
  return iVar3;
}



/* IOAudioEngineUserClient::unregisterClientBuffer @ 0xce90 */

/* IOAudioEngineUserClient::unregisterClientBuffer(void*, unsigned int) */

undefined8 IOAudioEngineUserClient::unregisterClientBuffer(void *param_1,uint param_2)

{
  __os_log_internal("+-IOAudioEngineUserClient[%p]::unregisterClientBuffer NOT SUPPORTED for 32 bit buffer( %p, 0x%lx)\n"
                    ,0);
  return 0xe00002c7;
}



/* IOAudioEngineUserClient::unregisterClientBuffer64 @ 0xcece */

/* IOAudioEngineUserClient::unregisterClientBuffer64(unsigned long long*, unsigned int) */

int IOAudioEngineUserClient::unregisterClientBuffer64(ulonglong *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  
  __os_log_internal("+ IOAudioEngineUserClient[%p]::unregisterClientBuffer64(0x%p, 0x%lx)\n",0);
  if (unaff_RSI == (longlong *)0x0) {
    __os_log_internal("  no sourcebuffer \n",0);
    iVar7 = -0x1ffffd3e;
    goto LAB_0000d0ff;
  }
  (**(code **)(*unaff_RDI + 0xa90))();
  lVar2 = (**(code **)(*unaff_RDI + 0xae0))();
  if (lVar2 == 0) {
    __os_log_internal("  no bufferSet found for id 0x%lx \n",0,param_2);
LAB_0000d0ed:
    iVar7 = -0x1ffffd10;
  }
  else {
    plVar1 = (longlong *)(lVar2 + 0x18);
    if (*(longlong *)(lVar2 + 0x18) == 0) {
      __os_log_internal("  clientBuf for output not found \n",0);
LAB_0000d042:
      if (*(longlong *)(lVar2 + 0x20) != 0) {
        plVar5 = (longlong *)(lVar2 + 0x20);
        __os_log_internal("  checking input \n",0);
        lVar6 = *plVar5;
        if (lVar6 != 0) {
          if (*(longlong *)(lVar6 + 0x68) == *unaff_RSI) {
            lVar4 = 0;
          }
          else {
            do {
              lVar4 = lVar6;
              lVar6 = *(longlong *)(lVar4 + 0x70);
              if (lVar6 == 0) goto LAB_0000d0cf;
            } while (*(longlong *)(lVar6 + 0x68) != *unaff_RSI);
          }
          goto LAB_0000d0a2;
        }
      }
LAB_0000d0cf:
      __os_log_internal("  no clientbuffer found \n",0);
      goto LAB_0000d0ed;
    }
    __os_log_internal("  searching for sourceBuffer 0x%llx \n",0,*unaff_RSI);
    lVar6 = *plVar1;
    if (lVar6 == 0) goto LAB_0000d042;
    plVar5 = plVar1;
    if (*(longlong *)(lVar6 + 0x68) == *unaff_RSI) {
      lVar4 = 0;
    }
    else {
      do {
        lVar4 = lVar6;
        __os_log_internal("  checking against 0x%llx \n",0);
        lVar6 = *(longlong *)(lVar4 + 0x70);
        if (lVar6 == 0) goto LAB_0000d042;
      } while (*(longlong *)(lVar6 + 0x68) != *unaff_RSI);
    }
LAB_0000d0a2:
    plVar3 = (longlong *)(lVar4 + 0x70);
    if (lVar4 == 0) {
      plVar3 = plVar5;
    }
    *plVar3 = *(longlong *)(lVar6 + 0x70);
    if (*plVar1 == 0) {
      if (*(longlong *)(lVar2 + 0x20) == 0) {
        (**(code **)(*unaff_RDI + 0xae8))();
      }
      else if (*(longlong *)(lVar2 + 0x48) != 0) {
        IOAudioClientBufferSet::freeWatchdogTimer();
      }
    }
    (**(code **)(*unaff_RDI + 0xab0))();
    iVar7 = 0;
  }
  (**(code **)(*unaff_RDI + 0xa98))();
LAB_0000d0ff:
  __os_log_internal("- IOAudioEngineUserClient::unregisterClientBuffer64 no sourcebuffer returns 0x%lX\n"
                    ,0,(longlong)iVar7);
  return iVar7;
}



/* IOAudioEngineUserClient::findBufferSet @ 0xd168 */

/* IOAudioEngineUserClient::findBufferSet(unsigned int) */

longlong IOAudioEngineUserClient::findBufferSet(uint param_1)

{
  int unaff_ESI;
  longlong unaff_RDI;
  longlong lVar1;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x208);
  if (lVar1 != 0) goto LAB_0000d1ad;
  __os_log_internal("  null clientBufferSetList\n",0);
  lVar1 = *(longlong *)(unaff_RDI + 0x208);
  while( true ) {
    if (lVar1 == 0) {
      __os_log_internal("  did not find clientBufferSetList for ID 0x%lx \n",0,unaff_ESI);
      return 0;
    }
LAB_0000d1ad:
    if (*(int *)(lVar1 + 0xc) == unaff_ESI) break;
    lVar1 = *(longlong *)(lVar1 + 0x40);
  }
  return lVar1;
}



/* IOAudioEngineUserClient::removeBufferSet @ 0xd1ec */

/* IOAudioEngineUserClient::removeBufferSet(IOAudioClientBufferSet*) */

void IOAudioEngineUserClient::removeBufferSet(IOAudioClientBufferSet *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar3;
  
  (**(code **)(*unaff_RDI + 0xa90))();
  plVar2 = unaff_RDI + 0x41;
  plVar1 = (longlong *)0x0;
  do {
    plVar3 = plVar1;
    plVar1 = (longlong *)*plVar2;
    if (plVar1 == (longlong *)0x0) break;
    plVar2 = plVar1 + 8;
  } while (plVar1 != unaff_RSI);
  if (plVar1 != (longlong *)0x0) {
    IOAudioClientBufferSet::cancelWatchdogTimer();
    plVar2 = plVar3 + 8;
    if (plVar3 == (longlong *)0x0) {
      plVar2 = unaff_RDI + 0x41;
    }
    *plVar2 = plVar1[8];
    (**(code **)(*plVar1 + 0x28))();
  }
  (**(code **)(*unaff_RDI + 0xa98))();
  __os_log_internal("+- IOAudioEngineUserClient[%p]::removeBufferSet(%p)\n",0);
  return;
}



/* FlipFloats @ 0xd294 */

/* FlipFloats(void*, long) */

void FlipFloats(void *param_1,long param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  if (unaff_RSI != 0) {
    lVar2 = 0;
    do {
      uVar1 = *(uint *)(unaff_RDI + lVar2 * 4);
      *(uint *)(unaff_RDI + lVar2 * 4) =
           uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      lVar2 = lVar2 + 1;
    } while (unaff_RSI != lVar2);
  }
  return;
}



/* IOAudioEngineUserClient::performClientInput @ 0xd2b4 */

/* IOAudioEngineUserClient::performClientInput(unsigned int, IOAudioClientBufferSet*) */

uintptr_t IOAudioEngineUserClient::performClientInput(uint param_1,IOAudioClientBufferSet *param_2)

{
  uint uVar1;
  uint *puVar2;
  uintptr_t arg2;
  uintptr_t arg4;
  uintptr_t uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uintptr_t unaff_ESI;
  longlong unaff_RDI;
  uint *puVar9;
  longlong *plVar10;
  longlong lVar11;
  uint local_60 [2];
  uintptr_t in_stack_ffffffffffffffa8;
  uintptr_t in_stack_ffffffffffffffb0;
  uintptr_t arg5;
  uint *local_38;
  
  puVar9 = (uint *)PTR__kdebug_enable_0001e070;
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug((uint32_t)param_2,unaff_ESI,0,0,in_stack_ffffffffffffffa8,
                  in_stack_ffffffffffffffb0);
  }
  lVar11 = *(longlong *)(param_2 + 0x20);
  arg4 = 0;
  arg2 = 0;
  local_60[0] = 0;
  local_60[1] = 0;
  arg5 = 0;
  if (lVar11 != 0) {
    puVar9 = *(uint **)(lVar11 + 0x60);
    if ((puVar9 == (uint *)0x0) || (*(int *)(*(longlong *)(unaff_RDI + 0x228) + 8) == 0)) {
      if (puVar9 == (uint *)0x0) {
        uVar8 = *(uint *)(lVar11 + 0x30);
        puVar9 = (uint *)0x0;
      }
      else {
        uVar8 = puVar9[1];
      }
    }
    else {
      uVar1 = *puVar9;
      uVar8 = puVar9[1];
      uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      local_60[1] = uVar8;
      local_60[0] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      uVar1 = puVar9[2];
      arg4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      puVar9 = local_60;
    }
    plVar10 = *(longlong **)(lVar11 + 8);
    (**(code **)(*plVar10 + 0xaa8))();
    uVar1 = *(uint *)(lVar11 + 0x30);
    if (uVar8 <= uVar1) {
      arg2 = 0;
      do {
        local_38 = (uint *)(lVar11 + 0x30);
        if (puVar9 != (uint *)0x0) {
          *local_38 = uVar8;
          uVar8 = *puVar9;
          lVar4 = (**(code **)(**(longlong **)(lVar11 + 0x18) + 0x1c8))();
          if ((lVar4 - 0x10U < (ulonglong)uVar8) || (puVar9[2] < *puVar9)) {
            (**(code **)(**(longlong **)(lVar11 + 0x18) + 0x1c8))();
            __os_log_internal("  *** VBR INPUT ERROR! clientBuffer = %p: actual frames = %ld, actual bytes = %ld, nominal bytes = %ld, total bytes = %ld, source buffer size = %ld\n"
                              ,0,lVar11);
            break;
          }
        }
        (**(code **)(*plVar10 + 0x8a8))();
        uVar3 = (**(code **)(*plVar10 + 0xae0))();
        if ((((*(int *)(*(longlong *)(unaff_RDI + 0x228) + 8) != 0) &&
             (*(longlong *)(lVar11 + 0x10) != 0)) &&
            (lVar4 = (**(code **)(*plVar10 + 0xa30))(), *(char *)(lVar4 + 0x10) != '\0')) &&
           ((*(int *)(lVar4 + 4) == 0x6c70636d &&
            (uVar8 = *(int *)(lVar11 + 0x34) * *local_38, uVar8 != 0)))) {
          lVar4 = *(longlong *)(lVar11 + 0x10);
          uVar7 = 0;
          do {
            uVar5 = *(uint *)(lVar4 + uVar7 * 4);
            *(uint *)(lVar4 + uVar7 * 4) =
                 uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
            uVar7 = uVar7 + 1;
          } while (uVar8 != uVar7);
        }
        uVar8 = (**(code **)(*plVar10 + 0x8a0))();
        uVar5 = (int)plVar10[0x16] * uVar8;
        uVar6 = uVar5 * 4;
        *puVar9 = uVar6;
        puVar9[1] = uVar8;
        if (*(int *)(*(longlong *)(unaff_RDI + 0x228) + 8) != 0) {
          puVar2 = *(uint **)(lVar11 + 0x60);
          *puVar2 = (uVar5 & 0x3fffffff) >> 0x16 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                    uVar5 * 0x4000000;
          puVar2[1] = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                      uVar8 << 0x18;
          uVar8 = puVar9[2];
          puVar2[2] = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                      uVar8 << 0x18;
          uVar8 = puVar9[3];
          puVar2[3] = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                      uVar8 << 0x18;
        }
        *local_38 = uVar1;
        (**(code **)(*plVar10 + 0xab0))();
        if (uVar3 != 0) {
          __os_log_internal("  readInputSamples failed - result 0x%x\n",0,uVar3);
          arg2 = uVar3;
        }
        lVar11 = *(longlong *)(lVar11 + 0x70);
        puVar9 = (uint *)PTR__kdebug_enable_0001e070;
        if (lVar11 == 0) goto LAB_0000d607;
        puVar9 = *(uint **)(lVar11 + 0x60);
        if ((puVar9 == (uint *)0x0) || (*(int *)(*(longlong *)(unaff_RDI + 0x228) + 8) == 0)) {
          if (puVar9 == (uint *)0x0) {
            uVar8 = *(uint *)(lVar11 + 0x30);
            puVar9 = (uint *)0x0;
          }
          else {
            uVar8 = puVar9[1];
          }
        }
        else {
          uVar1 = *puVar9;
          uVar8 = puVar9[1];
          uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
          local_60[1] = uVar8;
          local_60[0] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                        uVar1 << 0x18;
          uVar1 = puVar9[2];
          arg4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
          puVar9 = local_60;
        }
        plVar10 = *(longlong **)(lVar11 + 8);
        (**(code **)(*plVar10 + 0xaa8))();
        uVar1 = *(uint *)(lVar11 + 0x30);
      } while (uVar8 <= uVar1);
    }
    (**(code **)(*plVar10 + 0xab0))();
    arg2 = 0xe00002c2;
    puVar9 = (uint *)PTR__kdebug_enable_0001e070;
  }
LAB_0000d607:
  if ((*puVar9 & 0xfffffff7) != 0) {
    _kernel_debug(0,0,arg2,0,arg4,arg5);
  }
  return arg2;
}



/* IOAudioEngineUserClient::performWatchdogOutput @ 0xd63e */

/* IOAudioEngineUserClient::performWatchdogOutput(IOAudioClientBufferSet*, unsigned int) */

void IOAudioEngineUserClient::performWatchdogOutput(IOAudioClientBufferSet *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong *puVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar9;
  uint *puVar10;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong *local_48;
  uint in_stack_ffffffffffffffc8;
  uintptr_t arg5;
  
  uVar8 = (ulonglong)param_2;
  __os_log_internal("+ IOAudioEngineUserClient[%p]::performWatchdogOutput(%p, %ld) - (%lx,%lx)\n");
  puVar10 = (uint *)PTR__kdebug_enable_0001e070;
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug(*(uint32_t *)(unaff_RSI + 0x2c),param_2,*(uintptr_t *)(unaff_RSI + 0x28),0,
                  in_stack_ffffffffffffffc8,(uintptr_t)unaff_RBX);
  }
  (**(code **)(*unaff_RDI + 0xa90))();
  arg5 = (uintptr_t)unaff_RBX;
  if (unaff_RDI[0x1b] != 0) {
    cVar3 = IOService::isInactive();
    arg5 = (uintptr_t)unaff_RBX;
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*unaff_RDI + 0xab8))();
      arg5 = (uintptr_t)unaff_RBX;
      if (cVar3 != '\0') {
        if (((*(byte *)(unaff_RSI + 0x54) & 1) == 0) || (*(uint *)(unaff_RSI + 0x50) != param_2))
        goto LAB_0000d8d2;
        lVar9 = *(longlong *)(unaff_RSI + 0x18);
        if (lVar9 != 0) {
          local_48 = (ulonglong *)(unaff_RSI + 0x28);
          do {
            plVar1 = *(longlong **)(lVar9 + 8);
            lVar2 = *(longlong *)(lVar9 + 0x60);
            if ((lVar2 == 0) || (*(int *)(unaff_RDI[0x45] + 8) == 0)) {
              if (lVar2 != 0) {
                uVar4 = *(uint *)(lVar2 + 0xc);
                goto LAB_0000d75c;
              }
              uVar4 = *(uint *)(lVar9 + 0x30);
              local_50 = 1;
            }
            else {
              uVar4 = *(uint *)(lVar2 + 0xc);
              uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                      uVar4 << 0x18;
LAB_0000d75c:
              local_50 = 0;
              uVar4 = SUB164(ZEXT416(uVar4) / (ZEXT416(*(uint *)(lVar9 + 0x34)) << 2),0);
            }
            (**(code **)(*plVar1 + 0xaa8))();
            uVar6 = *(uint *)(lVar9 + 0x30);
            if (uVar4 <= uVar6) {
              if ((char)local_50 == '\0') {
                *(uint *)(lVar9 + 0x30) = uVar4;
              }
              (**(code **)(*plVar1 + 0xad8))
                        (*(undefined4 *)(unaff_RSI + 0x2c),*(undefined4 *)(unaff_RSI + 0x28),0);
              *(uint *)(lVar9 + 0x30) = uVar6;
            }
            (**(code **)(*plVar1 + 0xab0))();
            puVar10 = (uint *)PTR__kdebug_enable_0001e070;
            param_2 = (uint)uVar8;
            arg5 = (uintptr_t)unaff_RBX;
            lVar9 = *(longlong *)(lVar9 + 0x70);
          } while (lVar9 != 0);
          lVar9 = *(longlong *)(unaff_RSI + 0x18);
          if (lVar9 != 0) {
            local_58 = 0;
            lVar2 = *(longlong *)(lVar9 + 0x60);
            if ((lVar2 == 0) || (*(int *)(unaff_RDI[0x45] + 8) == 0)) {
              if (lVar2 != 0) {
                uVar4 = *(uint *)(lVar2 + 0xc);
                goto LAB_0000d84a;
              }
              iVar5 = *(int *)(lVar9 + 0x30);
            }
            else {
              uVar4 = *(uint *)(lVar2 + 0xc);
              uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                      uVar4 << 0x18;
LAB_0000d84a:
              iVar5 = SUB164(ZEXT416(uVar4) / (ZEXT416(*(uint *)(lVar9 + 0x34)) << 2),0);
            }
            in_stack_ffffffffffffffc8 = param_2;
            uVar4 = (**(code **)(*(longlong *)unaff_RDI[0x1b] + 0xb48))();
            uVar6 = (uint)*local_48 + iVar5;
            *(uint *)local_48 = uVar6;
            if (uVar4 <= uVar6) {
              *(uint *)(unaff_RSI + 0x28) = uVar6 - uVar4;
              *(int *)(unaff_RSI + 0x2c) = *(int *)(unaff_RSI + 0x2c) + 1;
            }
            puVar7 = local_48;
            iVar5 = (**(code **)(*(longlong *)unaff_RDI[0x1b] + 0xaf0))(local_48,iVar5,&local_58);
            if (iVar5 == 0) {
              IOAudioClientBufferSet::setWatchdogTimeout(puVar7);
              goto LAB_0000d8d2;
            }
            __os_log_internal("IOAudioEngineUserClient[%p]::performWatchdogOutput failed to calculateSampleTimeout (returned %#x)\n"
                              ,0,unaff_RDI);
            goto LAB_0000d8cd;
          }
        }
        *(undefined1 *)(unaff_RSI + 0x54) = 0;
        puVar10 = (uint *)PTR__kdebug_enable_0001e070;
        in_stack_ffffffffffffffc8 = param_2;
        goto LAB_0000d8d2;
      }
    }
  }
LAB_0000d8cd:
  *(undefined1 *)(unaff_RSI + 0x54) = 0;
LAB_0000d8d2:
  (**(code **)(*unaff_RDI + 0xa98))();
  if ((*puVar10 & 0xfffffff7) != 0) {
    _kernel_debug(*(uint32_t *)(unaff_RSI + 0x2c),param_2,*(uintptr_t *)(unaff_RSI + 0x28),0,
                  in_stack_ffffffffffffffc8,arg5);
  }
  __os_log_internal("- IOAudioEngineUserClient[%p]::performWatchdogOutput(%p, %ld) - (%lx,%lx)\n",0,
                    unaff_RDI);
  return;
}



/* IOAudioEngineUserClient::getConnectionID @ 0xd966 */

/* IOAudioEngineUserClient::getConnectionID(unsigned int*) */

undefined8 IOAudioEngineUserClient::getConnectionID(uint *param_1)

{
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  
  __os_log_internal("+ IOAudioEngineUserClient[%p]::getConnectionID(%p)\n",0);
  *unaff_RSI = *(undefined4 *)(*(longlong *)(unaff_RDI + 0x228) + 0x14);
  __os_log_internal("- IOAudioEngineUserClient[%p]::getConnectionID(%p) ConnectionID:0x%x\n",0);
  return 0;
}



/* IOAudioEngineUserClient::clientStart @ 0xd9e0 */

/* IOAudioEngineUserClient::clientStart() */

undefined8 IOAudioEngineUserClient::clientStart(void)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if (*(longlong **)(unaff_RDI + 0xe0) != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x1a0))(0);
    return uVar1;
  }
  return 0xe00002bc;
}



/* IOAudioEngineUserClient::_startClientAction @ 0xda24 */

/* IOAudioEngineUserClient::_startClientAction(OSObject*, void*, void*, void*, void*) */

undefined4
IOAudioEngineUserClient::_startClientAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 unaff_SIL;
  longlong unaff_RDI;
  
  uVar2 = 0xe00002c2;
  if (unaff_RDI != 0) {
    lVar3 = OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,param_2);
    if (lVar3 != 0) {
      plVar1 = *(longlong **)(lVar3 + 0xe8);
      if (plVar1 == (longlong *)0x0) {
        uVar2 = 0xe00002bc;
      }
      else {
        lVar3 = *(longlong *)(lVar3 + 0x228);
        if ((lVar3 != 0) && (*(uint *)(lVar3 + 0xc) < 2)) {
          *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
        }
        uVar2 = (**(code **)(*plVar1 + 0x1c8))();
        setCommandGateUsage(param_2,(bool)unaff_SIL);
      }
    }
  }
  return uVar2;
}



/* IOAudioEngineUserClient::clientStop @ 0xdac0 */

/* IOAudioEngineUserClient::clientStop() */

undefined8 IOAudioEngineUserClient::clientStop(void)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if (*(longlong **)(unaff_RDI + 0xe0) != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x1a0))(0);
    return uVar1;
  }
  return 0xe00002bc;
}



/* IOAudioEngineUserClient::_stopClientAction @ 0xdb04 */

/* IOAudioEngineUserClient::_stopClientAction(OSObject*, void*, void*, void*, void*) */

undefined4
IOAudioEngineUserClient::_stopClientAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 unaff_SIL;
  longlong unaff_RDI;
  
  uVar2 = 0xe00002c2;
  if (unaff_RDI != 0) {
    lVar3 = OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,param_2);
    if (lVar3 != 0) {
      plVar1 = *(longlong **)(lVar3 + 0xe8);
      if (plVar1 == (longlong *)0x0) {
        uVar2 = 0xe00002bc;
      }
      else {
        lVar3 = *(longlong *)(lVar3 + 0x228);
        if ((lVar3 != 0) && (*(uint *)(lVar3 + 0xc) < 2)) {
          *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
        }
        uVar2 = (**(code **)(*plVar1 + 0x1c8))();
        setCommandGateUsage(param_2,(bool)unaff_SIL);
      }
    }
  }
  return uVar2;
}



/* IOAudioEngineUserClient::startClientAction @ 0xdba0 */

/* IOAudioEngineUserClient::startClientAction(OSObject*, void*, void*, void*, void*) */

undefined8
IOAudioEngineUserClient::startClientAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  
  if (unaff_RDI != 0) {
    plVar1 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,param_2);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0000dbc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0xb08))();
      return uVar2;
    }
  }
  return 0xe00002c2;
}



/* IOAudioEngineUserClient::startClient @ 0xdbce */

/* IOAudioEngineUserClient::startClient() */

int IOAudioEngineUserClient::startClient(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong *unaff_RDI;
  longlong lVar5;
  longlong lVar6;
  
  __os_log_internal("+ IOAudioEngineUserClient[%p]::startClient() - %ld\n",0);
  (**(code **)(*unaff_RDI + 0x20))();
  iVar3 = -0x1ffffd40;
  if ((unaff_RDI[0x1b] != 0) && (cVar1 = IOService::isInactive(), cVar1 == '\0')) {
    uVar2 = (**(code **)(*(longlong *)unaff_RDI[0x1b] + 0xa70))();
    __os_log_internal("  audioEngine && !isInactive(). State = %d \n",0,uVar2);
    iVar3 = (**(code **)(*(longlong *)unaff_RDI[0x1b] + 0xa70))();
    iVar4 = -0x1ffffd40;
    if (iVar3 == 2) {
      __os_log_internal("Will need to wait for engine to resume\n",0);
      iVar3 = IOAudioEngine::waitForEngineResume();
      iVar4 = 0;
      if (iVar3 == 0) goto LAB_0000dccc;
LAB_0000decb:
      cVar1 = IOService::isInactive();
      if (cVar1 == '\0') {
        if (iVar3 == 0) {
          iVar3 = 0;
          goto LAB_0000df35;
        }
        goto LAB_0000df06;
      }
    }
    else {
LAB_0000dccc:
      iVar3 = iVar4;
      cVar1 = IOService::isInactive();
      if (cVar1 != '\0') goto LAB_0000decb;
      iVar3 = 0;
      __os_log_internal("  audioEngine->getState() != kIOAudioEnginePaused \n",0);
      cVar1 = (**(code **)(*unaff_RDI + 0xab8))();
      if (cVar1 == '\0') {
        (**(code **)(*unaff_RDI + 0xa70))();
        __os_log_internal("  !isOnline() setting online \n",0);
        iVar3 = (**(code **)(*(longlong *)unaff_RDI[0x1b] + 0xbd0))();
        if (iVar3 == 0) {
          __os_log_internal("  engine started \n",0);
          (**(code **)(*unaff_RDI + 0xa90))();
          lVar6 = unaff_RDI[0x41];
          iVar3 = 0;
          if (lVar6 != 0) {
            iVar3 = 0;
LAB_0000dddb:
            __os_log_internal("  bufferSet %p \n",0,lVar6);
            for (lVar5 = *(longlong *)(lVar6 + 0x18); lVar5 != 0;
                lVar5 = *(longlong *)(lVar5 + 0x70)) {
              if (*(longlong *)(lVar5 + 8) != 0) {
                iVar3 = 0;
                __os_log_internal("  output clientBuffer %p \n",0,lVar5);
                iVar4 = (**(code **)(**(longlong **)(lVar5 + 8) + 0xac0))();
                if (iVar4 != 0) goto LAB_0000de94;
              }
            }
            if (iVar3 == 0) {
              iVar3 = 0;
              for (lVar5 = *(longlong *)(lVar6 + 0x20); lVar5 != 0;
                  lVar5 = *(longlong *)(lVar5 + 0x70)) {
                __os_log_internal("  input clientBuffer %p \n",0,lVar5);
                if ((*(longlong **)(lVar5 + 8) != (longlong *)0x0) &&
                   (iVar4 = (**(code **)(**(longlong **)(lVar5 + 8) + 0xac0))(), iVar4 != 0))
                goto LAB_0000de94;
              }
            }
            goto LAB_0000deaa;
          }
LAB_0000debf:
          (**(code **)(*unaff_RDI + 0xa98))();
        }
        else {
          __os_log_internal("  engine NOT started \n",0);
        }
        goto LAB_0000decb;
      }
      cVar1 = IOService::isInactive();
      if (cVar1 == '\0') goto LAB_0000df35;
    }
    __os_log_internal("Device no longer exists\n",0);
    iVar3 = -0x1ffffd40;
  }
LAB_0000df06:
  __os_log_internal("  error (0x%x) - setting offline \n",0,iVar3);
  (**(code **)(*unaff_RDI + 0xa70))();
LAB_0000df35:
  (**(code **)(*unaff_RDI + 0x28))();
  __os_log_internal("- IOAudioEngineUserClient[%p]::startClient() - %ld returns 0x%lX\n",0);
  return iVar3;
LAB_0000de94:
  (**(code **)(*(longlong *)unaff_RDI[0x1b] + 0xbd8))();
  iVar3 = iVar4;
LAB_0000deaa:
  *(undefined8 *)(lVar6 + 0x28) = 0;
  lVar6 = *(longlong *)(lVar6 + 0x40);
  if (lVar6 == 0) goto LAB_0000debf;
  goto LAB_0000dddb;
}



/* IOAudioEngineUserClient::stopClient @ 0xdf96 */

/* IOAudioEngineUserClient::stopClient() */

undefined4 IOAudioEngineUserClient::stopClient(void)

{
  char cVar1;
  undefined4 uVar2;
  longlong *unaff_RDI;
  longlong lVar3;
  longlong lVar4;
  
  cVar1 = (**(code **)(*unaff_RDI + 0xab8))();
  uVar2 = 0;
  if (cVar1 != '\0') {
    (**(code **)(*unaff_RDI + 0xa90))();
    for (lVar3 = unaff_RDI[0x41]; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x40)) {
      IOAudioClientBufferSet::cancelWatchdogTimer();
      for (lVar4 = *(longlong *)(lVar3 + 0x18); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x70)) {
        if (*(longlong **)(lVar4 + 8) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar4 + 8) + 0xac8))();
        }
      }
      for (lVar4 = *(longlong *)(lVar3 + 0x20); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x70)) {
        if (*(longlong **)(lVar4 + 8) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar4 + 8) + 0xac8))();
        }
      }
    }
    (**(code **)(*unaff_RDI + 0xa98))();
    if ((longlong *)unaff_RDI[0x1b] == (longlong *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*(longlong *)unaff_RDI[0x1b] + 0xbd8))();
    }
    (**(code **)(*unaff_RDI + 0xa70))();
  }
  return uVar2;
}



/* IOAudioEngineUserClient::sendFormatChangeNotification @ 0xe06e */

/* IOAudioEngineUserClient::sendFormatChangeNotification(IOAudioStream*) */

void IOAudioEngineUserClient::sendFormatChangeNotification(IOAudioStream *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 in_RAX;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 local_28;
  
  local_28 = in_RAX;
  cVar2 = IOService::isInactive();
  if (((unaff_RSI != (longlong *)0x0 && cVar2 == '\0') && (unaff_RDI[0x43] != 0)) &&
     (*(longlong *)(unaff_RDI[0x43] + 8) != 0)) {
    local_28 = 0;
    (**(code **)(*unaff_RSI + 0x20))();
    iVar3 = (**(code **)(*unaff_RDI + 0x928))(&local_28);
    if (iVar3 == 0) {
      lVar1 = unaff_RDI[0x43];
      *(undefined4 *)(lVar1 + 0x20) = 1;
      *(undefined8 *)(lVar1 + 0x28) = local_28;
      iVar3 = _mach_msg_send_from_kernel_proper();
      if (iVar3 != 0) {
        __os_log_internal("IOAudioEngineUserClient::sendFormatChangeNotification() failed - msg_send returned: %d\n"
                          ,0x10,iVar3);
        _IOLog();
      }
    }
    else {
      __os_log_internal("IOAudioEngineUserClient::sendFormatChangeNotification() - ERROR - unable to export stream object for notification - notification not sent\n"
                        ,0x10);
      _IOLog();
    }
  }
  __os_log_internal("+- IOAudioEngineUserClient[%p]::sendFormatChangeNotification(%p)\n",0);
  return;
}



/* IOAudioEngineUserClient::sendNotification @ 0xe198 */

/* IOAudioEngineUserClient::sendNotification(unsigned int) */

undefined8 IOAudioEngineUserClient::sendNotification(uint param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 in_register_0000000c;
  int unaff_ESI;
  longlong *unaff_RDI;
  
  if (unaff_ESI == 5) {
    (**(code **)(*unaff_RDI + 0xb10))(CONCAT44(in_register_0000000c,param_1));
  }
  lVar1 = unaff_RDI[0x43];
  uVar3 = 0;
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
    *(int *)(lVar1 + 0x20) = unaff_ESI;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    iVar2 = _mach_msg_send_from_kernel_proper();
    uVar3 = 0xe00002bc;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* IOAudioClientBufferSet::MetaClass::~MetaClass @ 0xe1ee */

/* IOAudioClientBufferSet::MetaClass::~MetaClass() */

void __thiscall IOAudioClientBufferSet::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* IOAudioEngineUserClient::MetaClass::~MetaClass @ 0xe1f8 */

/* IOAudioEngineUserClient::MetaClass::~MetaClass() */

void __thiscall IOAudioEngineUserClient::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* IOAudioLevelControl::MetaClass::MetaClass @ 0xe280 */

/* IOAudioLevelControl::MetaClass::MetaClass() */

void __thiscall IOAudioLevelControl::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)&section_000000b8.reserved2,(char *)&IOAudioControl::gMetaClass,in_R8,
             in_R9D);
  *unaff_RDI = &PTR__MetaClass_00022de0;
  return;
}



/* IOAudioLevelControl::MetaClass::~MetaClass @ 0xe2b2 */

/* IOAudioLevelControl::MetaClass::~MetaClass() */

void __thiscall IOAudioLevelControl::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* IOAudioLevelControl::IOAudioLevelControl @ 0xe2bc */

/* IOAudioLevelControl::IOAudioLevelControl(OSMetaClass const*) */

void __thiscall
IOAudioLevelControl::IOAudioLevelControl(IOAudioLevelControl *this,OSMetaClass *param_1)

{
  undefined8 *unaff_RDI;
  
  IOAudioControl::IOAudioControl((IOAudioControl *)this,param_1);
  *unaff_RDI = &PTR__IOAudioLevelControl_000222a0;
  return;
}



/* IOAudioLevelControl::IOAudioLevelControl @ 0xe2dc */

/* IOAudioLevelControl::IOAudioLevelControl(OSMetaClass const*) */

void __thiscall
IOAudioLevelControl::IOAudioLevelControl(IOAudioLevelControl *this,OSMetaClass *param_1)

{
  undefined8 *unaff_RDI;
  
  IOAudioControl::IOAudioControl((IOAudioControl *)this,param_1);
  *unaff_RDI = &PTR__IOAudioLevelControl_000222a0;
  return;
}



/* IOAudioLevelControl::~IOAudioLevelControl @ 0xe2fc */

/* IOAudioLevelControl::~IOAudioLevelControl() */

void __thiscall IOAudioLevelControl::~IOAudioLevelControl(IOAudioLevelControl *this)

{
  IOAudioControl::~IOAudioControl((IOAudioControl *)this);
  return;
}



/* IOAudioLevelControl::~IOAudioLevelControl @ 0xe306 */

/* IOAudioLevelControl::~IOAudioLevelControl() */

void __thiscall IOAudioLevelControl::~IOAudioLevelControl(IOAudioLevelControl *this)

{
  IOAudioControl::~IOAudioControl((IOAudioControl *)this);
  return;
}



/* IOAudioLevelControl::~IOAudioLevelControl @ 0xe310 */

/* IOAudioLevelControl::~IOAudioLevelControl() */

void __thiscall IOAudioLevelControl::~IOAudioLevelControl(IOAudioLevelControl *this)

{
  IOAudioControl::~IOAudioControl((IOAudioControl *)this);
  _OSObject_typed_operator_delete();
  return;
}



/* IOAudioLevelControl::operator.delete @ 0xe338 */

/* IOAudioLevelControl::operator delete(void*, unsigned long) */

void IOAudioLevelControl::operator_delete(void *param_1,ulong param_2)

{
  _OSObject_typed_operator_delete();
  return;
}



/* IOAudioLevelControl::getMetaClass @ 0xe350 */

/* IOAudioLevelControl::getMetaClass() const */

undefined ** IOAudioLevelControl::getMetaClass(void)

{
  return &gMetaClass;
}



/* IOAudioLevelControl::MetaClass::MetaClass @ 0xe35e */

/* IOAudioLevelControl::MetaClass::MetaClass() */

void __thiscall IOAudioLevelControl::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)&section_000000b8.reserved2,(char *)&IOAudioControl::gMetaClass,in_R8,
             in_R9D);
  *unaff_RDI = &PTR__MetaClass_00022de0;
  return;
}



/* IOAudioLevelControl::MetaClass::alloc @ 0xe390 */

/* IOAudioLevelControl::MetaClass::alloc() const */

undefined8 * IOAudioLevelControl::MetaClass::alloc(void)

{
  undefined8 *puVar1;
  IOAudioControl *in_RCX;
  OSMetaClass *in_RDX;
  
  puVar1 = (undefined8 *)_OSObject_typed_operator_new();
  IOAudioControl::IOAudioControl(in_RCX,in_RDX);
  *puVar1 = &PTR__IOAudioLevelControl_000222a0;
  OSMetaClass::instanceConstructed();
  return puVar1;
}



/* IOAudioLevelControl::operator.new @ 0xe3d8 */

/* IOAudioLevelControl::operator new(unsigned long) */

void * __thiscall IOAudioLevelControl::operator_new(IOAudioLevelControl *this,ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)_OSObject_typed_operator_new();
  return pvVar1;
}



/* IOAudioLevelControl::IOAudioLevelControl @ 0xe3ec */

/* IOAudioLevelControl::IOAudioLevelControl() */

void __thiscall IOAudioLevelControl::IOAudioLevelControl(IOAudioLevelControl *this)

{
  OSMetaClass *in_RDX;
  undefined8 *unaff_RDI;
  
  IOAudioControl::IOAudioControl((IOAudioControl *)this,in_RDX);
  *unaff_RDI = &PTR__IOAudioLevelControl_000222a0;
  OSMetaClass::instanceConstructed();
  return;
}



/* IOAudioLevelControl::IOAudioLevelControl @ 0xe41c */

/* IOAudioLevelControl::IOAudioLevelControl() */

void __thiscall IOAudioLevelControl::IOAudioLevelControl(IOAudioLevelControl *this)

{
  OSMetaClass *in_RDX;
  undefined8 *unaff_RDI;
  
  IOAudioControl::IOAudioControl((IOAudioControl *)this,in_RDX);
  *unaff_RDI = &PTR__IOAudioLevelControl_000222a0;
  OSMetaClass::instanceConstructed();
  return;
}



/* IOAudioLevelControl::_RESERVEDIOAudioLevelControl1 @ 0xe44c */

/* IOAudioLevelControl::_RESERVEDIOAudioLevelControl1() */

void __thiscall IOAudioLevelControl::_RESERVEDIOAudioLevelControl1(IOAudioLevelControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioLevelControl::_RESERVEDIOAudioLevelControl2 @ 0xe462 */

/* IOAudioLevelControl::_RESERVEDIOAudioLevelControl2() */

void __thiscall IOAudioLevelControl::_RESERVEDIOAudioLevelControl2(IOAudioLevelControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioLevelControl::_RESERVEDIOAudioLevelControl3 @ 0xe478 */

/* IOAudioLevelControl::_RESERVEDIOAudioLevelControl3() */

void __thiscall IOAudioLevelControl::_RESERVEDIOAudioLevelControl3(IOAudioLevelControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioLevelControl::_RESERVEDIOAudioLevelControl4 @ 0xe48e */

/* IOAudioLevelControl::_RESERVEDIOAudioLevelControl4() */

void __thiscall IOAudioLevelControl::_RESERVEDIOAudioLevelControl4(IOAudioLevelControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioLevelControl::_RESERVEDIOAudioLevelControl5 @ 0xe4a4 */

/* IOAudioLevelControl::_RESERVEDIOAudioLevelControl5() */

void __thiscall IOAudioLevelControl::_RESERVEDIOAudioLevelControl5(IOAudioLevelControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioLevelControl::_RESERVEDIOAudioLevelControl6 @ 0xe4ba */

/* IOAudioLevelControl::_RESERVEDIOAudioLevelControl6() */

void __thiscall IOAudioLevelControl::_RESERVEDIOAudioLevelControl6(IOAudioLevelControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioLevelControl::_RESERVEDIOAudioLevelControl7 @ 0xe4d0 */

/* IOAudioLevelControl::_RESERVEDIOAudioLevelControl7() */

void __thiscall IOAudioLevelControl::_RESERVEDIOAudioLevelControl7(IOAudioLevelControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioLevelControl::_RESERVEDIOAudioLevelControl8 @ 0xe4e6 */

/* IOAudioLevelControl::_RESERVEDIOAudioLevelControl8() */

void __thiscall IOAudioLevelControl::_RESERVEDIOAudioLevelControl8(IOAudioLevelControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioLevelControl::_RESERVEDIOAudioLevelControl9 @ 0xe4fc */

/* IOAudioLevelControl::_RESERVEDIOAudioLevelControl9() */

void __thiscall IOAudioLevelControl::_RESERVEDIOAudioLevelControl9(IOAudioLevelControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioLevelControl::_RESERVEDIOAudioLevelControl10 @ 0xe512 */

/* IOAudioLevelControl::_RESERVEDIOAudioLevelControl10() */

void __thiscall IOAudioLevelControl::_RESERVEDIOAudioLevelControl10(IOAudioLevelControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioLevelControl::_RESERVEDIOAudioLevelControl11 @ 0xe528 */

/* IOAudioLevelControl::_RESERVEDIOAudioLevelControl11() */

void __thiscall IOAudioLevelControl::_RESERVEDIOAudioLevelControl11(IOAudioLevelControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioLevelControl::_RESERVEDIOAudioLevelControl12 @ 0xe53e */

/* IOAudioLevelControl::_RESERVEDIOAudioLevelControl12() */

void __thiscall IOAudioLevelControl::_RESERVEDIOAudioLevelControl12(IOAudioLevelControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioLevelControl::_RESERVEDIOAudioLevelControl13 @ 0xe554 */

/* IOAudioLevelControl::_RESERVEDIOAudioLevelControl13() */

void __thiscall IOAudioLevelControl::_RESERVEDIOAudioLevelControl13(IOAudioLevelControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioLevelControl::_RESERVEDIOAudioLevelControl14 @ 0xe56a */

/* IOAudioLevelControl::_RESERVEDIOAudioLevelControl14() */

void __thiscall IOAudioLevelControl::_RESERVEDIOAudioLevelControl14(IOAudioLevelControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioLevelControl::_RESERVEDIOAudioLevelControl15 @ 0xe580 */

/* IOAudioLevelControl::_RESERVEDIOAudioLevelControl15() */

void __thiscall IOAudioLevelControl::_RESERVEDIOAudioLevelControl15(IOAudioLevelControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioLevelControl::createPassThruVolumeControl @ 0xe596 */

/* IOAudioLevelControl::createPassThruVolumeControl(int, int, int, int, int, unsigned int, char
   const*, unsigned int) */

void IOAudioLevelControl::createPassThruVolumeControl
               (int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
               char *param_7,uint param_8)

{
  int unaff_EBP;
  uint unaff_retaddr;
  char *in_stack_00000008;
  uint in_stack_00000010;
  uint in_stack_00000018;
  uint in_stack_00000020;
  
  create(param_1,param_2,param_3,param_4,unaff_EBP,unaff_retaddr,in_stack_00000008,in_stack_00000010
         ,in_stack_00000018,in_stack_00000020);
  return;
}



/* IOAudioLevelControl::create @ 0xe5b6 */

/* IOAudioLevelControl::create(int, int, int, int, int, unsigned int, char const*, unsigned int,
   unsigned int, unsigned int) */

longlong *
IOAudioLevelControl::create
          (int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,char *param_7,
          uint param_8,uint param_9,uint param_10)

{
  char cVar1;
  longlong *plVar2;
  undefined4 in_register_0000000c;
  IOAudioControl *this;
  undefined4 in_register_00000014;
  OSMetaClass *pOVar3;
  undefined4 unaff_ESI;
  undefined4 local_res20;
  
  pOVar3 = (OSMetaClass *)CONCAT44(in_register_00000014,param_2);
  this = (IOAudioControl *)CONCAT44(in_register_0000000c,param_1);
  plVar2 = (longlong *)_OSObject_typed_operator_new();
  IOAudioControl::IOAudioControl(this,pOVar3);
  *plVar2 = (longlong)&PTR__IOAudioLevelControl_000222a0;
  OSMetaClass::instanceConstructed();
  cVar1 = (**(code **)(*plVar2 + 0xad0))(param_2,unaff_ESI,param_1,param_3,local_res20,0);
  if (cVar1 == '\0') {
    (**(code **)(*plVar2 + 0x28))();
    plVar2 = (longlong *)0x0;
  }
  return plVar2;
}



/* IOAudioLevelControl::setLinearScale @ 0xe66e */

/* IOAudioLevelControl::setLinearScale(bool) */

void IOAudioLevelControl::setLinearScale(bool param_1)

{
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  
                    /* WARNING: Could not recover jumptable at 0x0000e68b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x280))(8,unaff_ESI);
  return;
}



/* IOAudioLevelControl::createVolumeControl @ 0xe68e */

/* IOAudioLevelControl::createVolumeControl(int, int, int, int, int, unsigned int, char const*,
   unsigned int, unsigned int) */

void IOAudioLevelControl::createVolumeControl
               (int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
               char *param_7,uint param_8,uint param_9)

{
  int unaff_EBP;
  uint unaff_retaddr;
  char *in_stack_00000008;
  uint in_stack_00000010;
  uint in_stack_00000018;
  uint in_stack_00000020;
  
  create(param_1,param_2,param_3,param_4,unaff_EBP,unaff_retaddr,in_stack_00000008,in_stack_00000010
         ,in_stack_00000018,in_stack_00000020);
  return;
}



/* IOAudioLevelControl::init @ 0xe6b0 */

/* IOAudioLevelControl::init(int, int, int, int, int, unsigned int, char const*, unsigned int,
   unsigned int, unsigned int, OSDictionary*) */

undefined4
IOAudioLevelControl::init
          (int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,char *param_7,
          uint param_8,uint param_9,uint param_10,OSDictionary *param_11)

{
  undefined4 uVar1;
  OSObject *pOVar2;
  undefined4 in_register_0000000c;
  uint unaff_EBX;
  longlong *unaff_RDI;
  uint unaff_R12D;
  OSDictionary *unaff_R13;
  undefined4 local_res8;
  undefined4 local_res10;
  undefined4 local_res18;
  
  pOVar2 = (OSObject *)OSNumber::withNumber(CONCAT44(in_register_0000000c,param_1),param_2);
  if (pOVar2 == (OSObject *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = IOAudioControl::init
                      (local_res8,pOVar2,local_res10,(char *)(ulonglong)local_res18,param_3,
                       unaff_EBX,unaff_R12D,unaff_R13);
    if ((char)uVar1 != '\0') {
      (**(code **)(*unaff_RDI + 0xad8))();
      (**(code **)(*unaff_RDI + 0xae8))();
      (**(code **)(*unaff_RDI + 0xaf8))();
      (**(code **)(*unaff_RDI + 0xb08))();
    }
    (**(code **)(*(longlong *)pOVar2 + 0x28))();
  }
  return uVar1;
}



/* IOAudioLevelControl::free @ 0xe784 */

/* IOAudioLevelControl::free() */

void IOAudioLevelControl::free(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong unaff_RDI;
  
  if (*(longlong **)(unaff_RDI + 0xf0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0xf0) + 0x28))();
    *(undefined8 *)(unaff_RDI + 0xf0) = 0;
  }
  if (*(longlong **)(unaff_RDI + 0xd0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0xd0) + 0x28))();
    *(undefined8 *)(unaff_RDI + 0xd0) = 0;
  }
  if (*(longlong **)(unaff_RDI + 200) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 200) + 0x28))();
  }
  *(undefined8 *)(unaff_RDI + 200) = 0;
  plVar2 = *(longlong **)(unaff_RDI + 0x90);
  if (plVar2 != (longlong *)0x0) {
    if (*(longlong **)(unaff_RDI + 0x88) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x148))();
      plVar2 = *(longlong **)(unaff_RDI + 0x90);
    }
    (**(code **)(*plVar2 + 0x28))();
    *(undefined8 *)(unaff_RDI + 0x90) = 0;
  }
  if (*(longlong **)(unaff_RDI + 0x88) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x28))();
    *(undefined8 *)(unaff_RDI + 0x88) = 0;
  }
  lVar1 = *(longlong *)(unaff_RDI + 0xd8);
  if (lVar1 != 0) {
    if (*(longlong **)(lVar1 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 8) + 0x28))();
      lVar1 = *(longlong *)(unaff_RDI + 0xd8);
    }
    *(undefined8 *)(lVar1 + 8) = 0;
    *(undefined8 *)(unaff_RDI + 0xd8) = 0;
    _IOFreeTypeImpl();
    *(undefined8 *)(unaff_RDI + 0xd8) = 0;
  }
  if (*(longlong **)(unaff_RDI + 0xb0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0xb0) + 0x28))();
  }
  *(undefined8 *)(unaff_RDI + 0xb0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00001014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_vtable_0001e050 + 0xa0))();
  return;
}



/* IOAudioLevelControl::setMinValue @ 0xe7c0 */

/* IOAudioLevelControl::setMinValue(int) */

void IOAudioLevelControl::setMinValue(int param_1)

{
  int unaff_ESI;
  longlong *unaff_RDI;
  
  *(int *)(unaff_RDI + 0x1c) = unaff_ESI;
  (**(code **)(*unaff_RDI + 0x280))(0x20,(longlong)unaff_ESI);
                    /* WARNING: Could not recover jumptable at 0x0000e7ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x850))();
  return;
}



/* IOAudioLevelControl::getMinValue @ 0xe802 */

/* IOAudioLevelControl::getMinValue() */

undefined4 IOAudioLevelControl::getMinValue(void)

{
  longlong unaff_RDI;
  
  return *(undefined4 *)(unaff_RDI + 0xe0);
}



/* IOAudioLevelControl::setMaxValue @ 0xe80e */

/* IOAudioLevelControl::setMaxValue(int) */

void IOAudioLevelControl::setMaxValue(int param_1)

{
  int unaff_ESI;
  longlong *unaff_RDI;
  
  *(int *)((longlong)unaff_RDI + 0xe4) = unaff_ESI;
  (**(code **)(*unaff_RDI + 0x280))(0x20,(longlong)unaff_ESI);
                    /* WARNING: Could not recover jumptable at 0x0000e84d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x850))();
  return;
}



/* IOAudioLevelControl::getMaxValue @ 0xe850 */

/* IOAudioLevelControl::getMaxValue() */

undefined4 IOAudioLevelControl::getMaxValue(void)

{
  longlong unaff_RDI;
  
  return *(undefined4 *)(unaff_RDI + 0xe4);
}



/* IOAudioLevelControl::setMinDB @ 0xe85c */

/* IOAudioLevelControl::setMinDB(int) */

void IOAudioLevelControl::setMinDB(int param_1)

{
  int unaff_ESI;
  longlong *unaff_RDI;
  
  *(int *)(unaff_RDI + 0x1d) = unaff_ESI;
  (**(code **)(*unaff_RDI + 0x280))(0x20,(longlong)unaff_ESI);
                    /* WARNING: Could not recover jumptable at 0x0000e89b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x850))();
  return;
}



/* IOAudioLevelControl::getMinDB @ 0xe89e */

/* IOAudioLevelControl::getMinDB() */

undefined4 IOAudioLevelControl::getMinDB(void)

{
  longlong unaff_RDI;
  
  return *(undefined4 *)(unaff_RDI + 0xe8);
}



/* IOAudioLevelControl::setMaxDB @ 0xe8aa */

/* IOAudioLevelControl::setMaxDB(int) */

void IOAudioLevelControl::setMaxDB(int param_1)

{
  int unaff_ESI;
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x280))(0x20,(longlong)unaff_ESI);
                    /* WARNING: Could not recover jumptable at 0x0000e8e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x850))();
  return;
}



/* IOAudioLevelControl::getMaxDB @ 0xe8e6 */

/* IOAudioLevelControl::getMaxDB() */

undefined4 IOAudioLevelControl::getMaxDB(void)

{
  longlong unaff_RDI;
  
  return *(undefined4 *)(unaff_RDI + 0xec);
}



/* IOAudioLevelControl::addRange @ 0xe8f2 */

/* IOAudioLevelControl::addRange(int, int, int, int) */

undefined8 IOAudioLevelControl::addRange(int param_1,int param_2,int param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 in_register_0000000c;
  OSArray *pOVar6;
  uint uVar7;
  longlong *unaff_RDI;
  undefined8 uVar8;
  longlong *plVar9;
  
  pOVar6 = (OSArray *)CONCAT44(in_register_0000000c,param_1);
  plVar9 = (longlong *)unaff_RDI[0x1e];
  if (plVar9 == (longlong *)0x0) {
    lVar5 = OSArray::withCapacity(param_1);
    unaff_RDI[0x1e] = lVar5;
    if (lVar5 == 0) {
      return 0xe00002bc;
    }
    pOVar6 = (OSArray *)*unaff_RDI;
    (**(code **)(pOVar6 + 0x268))();
    param_2 = (int)lVar5;
    plVar9 = (longlong *)unaff_RDI[0x1e];
    if (plVar9 == (longlong *)0x0) {
      return 0xe00002bc;
    }
  }
  plVar1 = (longlong *)OSArray::withArray(pOVar6,param_2);
  if (plVar1 == (longlong *)0x0) {
    uVar8 = 0xe00002bd;
  }
  else {
    plVar2 = (longlong *)OSDictionary::withCapacity((uint)pOVar6);
    if (plVar2 == (longlong *)0x0) {
      uVar8 = 0xe00002bc;
    }
    else {
      plVar3 = (longlong *)OSNumber::withNumber((ulonglong)pOVar6,param_2);
      plVar4 = plVar3;
      (**(code **)(*plVar2 + 0x1d0))();
      uVar7 = (uint)plVar4;
      (**(code **)(*plVar3 + 0x28))();
      plVar3 = (longlong *)OSNumber::withNumber((ulonglong)pOVar6,uVar7);
      plVar4 = plVar3;
      (**(code **)(*plVar2 + 0x1d0))();
      uVar7 = (uint)plVar4;
      (**(code **)(*plVar3 + 0x28))();
      plVar3 = (longlong *)OSNumber::withNumber((ulonglong)pOVar6,uVar7);
      plVar4 = plVar3;
      (**(code **)(*plVar2 + 0x1d0))();
      uVar7 = (uint)plVar4;
      (**(code **)(*plVar3 + 0x28))();
      plVar4 = (longlong *)OSNumber::withNumber((ulonglong)pOVar6,uVar7);
      (**(code **)(*plVar2 + 0x1d0))();
      (**(code **)(*plVar4 + 0x28))();
      (**(code **)(*plVar1 + 0x1b8))();
      (**(code **)(*unaff_RDI + 0x268))();
      unaff_RDI[0x1e] = (longlong)plVar1;
      (**(code **)(*plVar9 + 0x28))();
      (**(code **)(*plVar2 + 0x28))();
      uVar8 = 0;
    }
  }
  return uVar8;
}



/* IOAudioLevelControl::addNegativeInfinity @ 0xeabe */

/* IOAudioLevelControl::addNegativeInfinity(int) */

void IOAudioLevelControl::addNegativeInfinity(int param_1)

{
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  
                    /* WARNING: Could not recover jumptable at 0x0000eada. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0xb18))(0xffffffff,unaff_ESI,0xffffffff);
  return;
}



/* IOAudioLevelControl::validateValue @ 0xeadc */

/* IOAudioLevelControl::validateValue(OSObject*) */

undefined4 __thiscall
IOAudioLevelControl::validateValue(IOAudioLevelControl *this,OSObject *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong unaff_RDI;
  undefined4 uVar3;
  
  plVar2 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)this,(OSMetaClass *)param_1)
  ;
  __os_log_internal("+ IOAudioLevelControl::validateValue[%p] (%p)\n",0);
  if (plVar2 == (longlong *)0x0) {
    uVar3 = 0xe00002c2;
  }
  else {
    iVar1 = (**(code **)(*plVar2 + 0x148))();
    uVar3 = 0;
    __os_log_internal("  IOAudioLevelControl::validateValue[%p] - newIntValue = %ld, min = %ld, max = %ld\n"
                      ,0);
    if ((iVar1 < *(int *)(unaff_RDI + 0xe0)) || (*(int *)(unaff_RDI + 0xe4) < iVar1)) {
      uVar3 = 0xe00002bc;
    }
  }
  __os_log_internal("- IOAudioLevelControl::validateValue[%p] (%p) returns 0x%lX\n",0);
  return uVar3;
}



/* IOAudioLevelControl::MetaClass::~MetaClass @ 0xebd4 */

/* IOAudioLevelControl::MetaClass::~MetaClass() */

void __thiscall IOAudioLevelControl::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* IOAudioPort::MetaClass::MetaClass @ 0xec22 */

/* IOAudioPort::MetaClass::MetaClass() */

void __thiscall IOAudioPort::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)&section_00000068.flags,PTR_gMetaClass_0001e038,in_R8,in_R9D);
  *unaff_RDI = &PTR__MetaClass_00023878;
  return;
}



/* IOAudioPort::MetaClass::~MetaClass @ 0xec54 */

/* IOAudioPort::MetaClass::~MetaClass() */

void __thiscall IOAudioPort::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* IOAudioPort::IOAudioPort @ 0xec5e */

/* IOAudioPort::IOAudioPort(OSMetaClass const*) */

void __thiscall IOAudioPort::IOAudioPort(IOAudioPort *this,OSMetaClass *param_1)

{
  undefined8 *unaff_RDI;
  
  IOService::IOService((IOService *)this,param_1);
  *unaff_RDI = &PTR__IOAudioPort_00022ed8;
  return;
}



/* IOAudioPort::IOAudioPort @ 0xec7e */

/* IOAudioPort::IOAudioPort(OSMetaClass const*) */

void __thiscall IOAudioPort::IOAudioPort(IOAudioPort *this,OSMetaClass *param_1)

{
  undefined8 *unaff_RDI;
  
  IOService::IOService((IOService *)this,param_1);
  *unaff_RDI = &PTR__IOAudioPort_00022ed8;
  return;
}



/* IOAudioPort::~IOAudioPort @ 0xec9e */

/* IOAudioPort::~IOAudioPort() */

void __thiscall IOAudioPort::~IOAudioPort(IOAudioPort *this)

{
  IOService::~IOService((IOService *)this);
  return;
}



/* IOAudioPort::~IOAudioPort @ 0xeca8 */

/* IOAudioPort::~IOAudioPort() */

void __thiscall IOAudioPort::~IOAudioPort(IOAudioPort *this)

{
  IOService::~IOService((IOService *)this);
  return;
}



/* IOAudioPort::~IOAudioPort @ 0xecb2 */

/* IOAudioPort::~IOAudioPort() */

void __thiscall IOAudioPort::~IOAudioPort(IOAudioPort *this)

{
  IOService::~IOService((IOService *)this);
  _OSObject_typed_operator_delete();
  return;
}



/* IOAudioPort::operator.delete @ 0xecda */

/* IOAudioPort::operator delete(void*, unsigned long) */

void IOAudioPort::operator_delete(void *param_1,ulong param_2)

{
  _OSObject_typed_operator_delete();
  return;
}



/* IOAudioPort::getMetaClass @ 0xecf2 */

/* IOAudioPort::getMetaClass() const */

undefined ** IOAudioPort::getMetaClass(void)

{
  return &gMetaClass;
}



/* IOAudioPort::MetaClass::MetaClass @ 0xed00 */

/* IOAudioPort::MetaClass::MetaClass() */

void __thiscall IOAudioPort::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)&section_00000068.flags,PTR_gMetaClass_0001e038,in_R8,in_R9D);
  *unaff_RDI = &PTR__MetaClass_00023878;
  return;
}



/* IOAudioPort::MetaClass::alloc @ 0xed32 */

/* IOAudioPort::MetaClass::alloc() const */

undefined8 * IOAudioPort::MetaClass::alloc(void)

{
  undefined8 *puVar1;
  IOService *in_RCX;
  OSMetaClass *in_RDX;
  
  puVar1 = (undefined8 *)_OSObject_typed_operator_new();
  IOService::IOService(in_RCX,in_RDX);
  *puVar1 = &PTR__IOAudioPort_00022ed8;
  OSMetaClass::instanceConstructed();
  return puVar1;
}



/* IOAudioPort::operator.new @ 0xed7a */

/* IOAudioPort::operator new(unsigned long) */

void * __thiscall IOAudioPort::operator_new(IOAudioPort *this,ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)_OSObject_typed_operator_new();
  return pvVar1;
}



/* IOAudioPort::IOAudioPort @ 0xed8e */

/* IOAudioPort::IOAudioPort() */

void __thiscall IOAudioPort::IOAudioPort(IOAudioPort *this)

{
  OSMetaClass *in_RDX;
  undefined8 *unaff_RDI;
  
  IOService::IOService((IOService *)this,in_RDX);
  *unaff_RDI = &PTR__IOAudioPort_00022ed8;
  OSMetaClass::instanceConstructed();
  return;
}



/* IOAudioPort::IOAudioPort @ 0xedbe */

/* IOAudioPort::IOAudioPort() */

void __thiscall IOAudioPort::IOAudioPort(IOAudioPort *this)

{
  OSMetaClass *in_RDX;
  undefined8 *unaff_RDI;
  
  IOService::IOService((IOService *)this,in_RDX);
  *unaff_RDI = &PTR__IOAudioPort_00022ed8;
  OSMetaClass::instanceConstructed();
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort0 @ 0xedee */

/* IOAudioPort::_RESERVEDIOAudioPort0() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort0(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort1 @ 0xee02 */

/* IOAudioPort::_RESERVEDIOAudioPort1() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort1(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort2 @ 0xee18 */

/* IOAudioPort::_RESERVEDIOAudioPort2() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort2(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort3 @ 0xee2e */

/* IOAudioPort::_RESERVEDIOAudioPort3() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort3(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort4 @ 0xee44 */

/* IOAudioPort::_RESERVEDIOAudioPort4() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort4(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort5 @ 0xee5a */

/* IOAudioPort::_RESERVEDIOAudioPort5() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort5(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort6 @ 0xee70 */

/* IOAudioPort::_RESERVEDIOAudioPort6() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort6(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort7 @ 0xee86 */

/* IOAudioPort::_RESERVEDIOAudioPort7() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort7(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort8 @ 0xee9c */

/* IOAudioPort::_RESERVEDIOAudioPort8() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort8(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort9 @ 0xeeb2 */

/* IOAudioPort::_RESERVEDIOAudioPort9() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort9(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort10 @ 0xeec8 */

/* IOAudioPort::_RESERVEDIOAudioPort10() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort10(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort11 @ 0xeede */

/* IOAudioPort::_RESERVEDIOAudioPort11() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort11(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort12 @ 0xeef4 */

/* IOAudioPort::_RESERVEDIOAudioPort12() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort12(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort13 @ 0xef0a */

/* IOAudioPort::_RESERVEDIOAudioPort13() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort13(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort14 @ 0xef20 */

/* IOAudioPort::_RESERVEDIOAudioPort14() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort14(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort15 @ 0xef36 */

/* IOAudioPort::_RESERVEDIOAudioPort15() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort15(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort16 @ 0xef4c */

/* IOAudioPort::_RESERVEDIOAudioPort16() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort16(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort17 @ 0xef62 */

/* IOAudioPort::_RESERVEDIOAudioPort17() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort17(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort18 @ 0xef78 */

/* IOAudioPort::_RESERVEDIOAudioPort18() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort18(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort19 @ 0xef8e */

/* IOAudioPort::_RESERVEDIOAudioPort19() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort19(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort20 @ 0xefa4 */

/* IOAudioPort::_RESERVEDIOAudioPort20() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort20(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort21 @ 0xefba */

/* IOAudioPort::_RESERVEDIOAudioPort21() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort21(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort22 @ 0xefd0 */

/* IOAudioPort::_RESERVEDIOAudioPort22() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort22(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort23 @ 0xefe6 */

/* IOAudioPort::_RESERVEDIOAudioPort23() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort23(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort24 @ 0xeffc */

/* IOAudioPort::_RESERVEDIOAudioPort24() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort24(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort25 @ 0xf012 */

/* IOAudioPort::_RESERVEDIOAudioPort25() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort25(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort26 @ 0xf028 */

/* IOAudioPort::_RESERVEDIOAudioPort26() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort26(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort27 @ 0xf03e */

/* IOAudioPort::_RESERVEDIOAudioPort27() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort27(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort28 @ 0xf054 */

/* IOAudioPort::_RESERVEDIOAudioPort28() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort28(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort29 @ 0xf06a */

/* IOAudioPort::_RESERVEDIOAudioPort29() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort29(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort30 @ 0xf080 */

/* IOAudioPort::_RESERVEDIOAudioPort30() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort30(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::_RESERVEDIOAudioPort31 @ 0xf096 */

/* IOAudioPort::_RESERVEDIOAudioPort31() */

void __thiscall IOAudioPort::_RESERVEDIOAudioPort31(IOAudioPort *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioPort::withAttributes @ 0xf0ac */

/* IOAudioPort::withAttributes(unsigned int, char const*, unsigned int, OSDictionary*) */

longlong *
IOAudioPort::withAttributes(uint param_1,char *param_2,uint param_3,OSDictionary *param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined4 in_register_0000000c;
  IOService *this;
  undefined4 in_register_00000084;
  ulonglong uVar3;
  
  this = (IOService *)CONCAT44(in_register_0000000c,param_1);
  uVar3 = (ulonglong)param_2 & 0xffffffff;
  plVar2 = (longlong *)
           _OSObject_typed_operator_new(this,param_2,CONCAT44(in_register_00000084,param_3));
  IOService::IOService(this,(OSMetaClass *)param_2);
  *plVar2 = (longlong)&PTR__IOAudioPort_00022ed8;
  OSMetaClass::instanceConstructed();
  cVar1 = (**(code **)(*plVar2 + 0x950))(uVar3);
  if (cVar1 == '\0') {
    (**(code **)(*plVar2 + 0x28))();
    plVar2 = (longlong *)0x0;
  }
  return plVar2;
}



/* IOAudioPort::initWithAttributes @ 0xf13a */

/* IOAudioPort::initWithAttributes(unsigned int, char const*, unsigned int, OSDictionary*) */

bool IOAudioPort::initWithAttributes(uint param_1,char *param_2,uint param_3,OSDictionary *param_4)

{
  uint uVar1;
  longlong lVar2;
  int unaff_ESI;
  longlong *unaff_RDI;
  bool bVar3;
  
  uVar1 = (**(code **)(*unaff_RDI + 0x248))();
  bVar3 = false;
  if ((unaff_ESI != 0) && ((char)uVar1 != '\0')) {
    unaff_RDI[0x11] = 0;
    *(undefined1 *)(unaff_RDI + 0x13) = 0;
    (**(code **)(*unaff_RDI + 0x970))();
    if (param_2 != (char *)0x0) {
      (**(code **)(*unaff_RDI + 0x980))();
    }
    if (param_1 != 0) {
      (**(code **)(*unaff_RDI + 0x978))();
    }
    lVar2 = OSSet::withCapacity(uVar1);
    unaff_RDI[0x12] = lVar2;
    bVar3 = lVar2 != 0;
  }
  return bVar3;
}



/* IOAudioPort::free @ 0xf1d4 */

/* IOAudioPort::free() */

void IOAudioPort::free(void)

{
  longlong unaff_RDI;
  
  if (*(longlong **)(unaff_RDI + 0x90) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x28))();
  }
                    /* WARNING: Could not recover jumptable at 0x0000f1ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_vtable_0001e050 + 0xa0))();
  return;
}



/* IOAudioPort::setType @ 0xf206 */

/* IOAudioPort::setType(unsigned int) */

void IOAudioPort::setType(uint param_1)

{
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  
                    /* WARNING: Could not recover jumptable at 0x0000f223. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x280))(0x20,unaff_ESI);
  return;
}



/* IOAudioPort::setSubType @ 0xf226 */

/* IOAudioPort::setSubType(unsigned int) */

void IOAudioPort::setSubType(uint param_1)

{
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  
                    /* WARNING: Could not recover jumptable at 0x0000f243. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x280))(0x20,unaff_ESI);
  return;
}



/* IOAudioPort::setName @ 0xf246 */

/* IOAudioPort::setName(char const*) */

void IOAudioPort::setName(char *param_1)

{
  longlong *unaff_RDI;
  
                    /* WARNING: Could not recover jumptable at 0x0000f25f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x270))();
  return;
}



/* IOAudioPort::start @ 0xf262 */

/* IOAudioPort::start(IOService*) */

ulonglong __thiscall IOAudioPort::start(IOAudioPort *this,IOService *param_1)

{
  undefined *puVar1;
  char cVar2;
  longlong lVar3;
  uintptr_t arg1;
  uintptr_t unaff_EBP;
  IOService *unaff_RSI;
  longlong unaff_RDI;
  undefined8 unaff_R15;
  ulonglong uVar4;
  uintptr_t unaff_retaddr;
  
  puVar1 = PTR__kdebug_enable_0001e070;
  arg1 = (uintptr_t)unaff_RSI;
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    this = (IOAudioPort *)0x0;
    _kernel_debug(0,arg1,0,0,unaff_EBP,unaff_retaddr);
    param_1 = unaff_RSI;
  }
  cVar2 = (**(code **)(PTR_vtable_0001e050 + 0x5d0))();
  if (cVar2 != '\0') {
    lVar3 = OSMetaClassBase::safeMetaCast((OSMetaClassBase *)this,(OSMetaClass *)param_1);
    *(longlong *)(unaff_RDI + 0x88) = lVar3;
    if (lVar3 != 0) {
      uVar4 = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),1);
      if ((*(uint *)puVar1 & 0xfffffff7) != 0) {
        _kernel_debug(1,arg1,0,0,unaff_EBP,unaff_retaddr);
      }
      goto LAB_0000f2fe;
    }
  }
  uVar4 = 0;
LAB_0000f2fe:
  return uVar4 & 0xffffffff;
}



/* IOAudioPort::stop @ 0xf30a */

/* IOAudioPort::stop(IOService*) */

void IOAudioPort::stop(IOService *param_1)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x968))();
                    /* WARNING: Could not recover jumptable at 0x0000f331. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_vtable_0001e050 + 0x5d8))();
  return;
}



/* IOAudioPort::registerService @ 0xf338 */

/* IOAudioPort::registerService(unsigned int) */

void IOAudioPort::registerService(uint param_1)

{
  longlong *extraout_RAX;
  longlong *plVar1;
  longlong lVar2;
  undefined4 in_register_0000000c;
  longlong unaff_RDI;
  
  (**(code **)(PTR_vtable_0001e050 + 0x5c0))();
  if (((*(longlong *)(unaff_RDI + 0x90) != 0) && ((*(byte *)(unaff_RDI + 0x98) & 1) == 0)) &&
     (OSCollectionIterator::withCollection((OSCollection *)CONCAT44(in_register_0000000c,param_1)),
     extraout_RAX != (longlong *)0x0)) {
    plVar1 = (longlong *)(**(code **)(*extraout_RAX + 0x128))();
    while (plVar1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 0x680))();
      if (lVar2 == unaff_RDI) {
        (**(code **)(*plVar1 + 0x5b0))();
      }
      plVar1 = (longlong *)(**(code **)(*extraout_RAX + 0x128))();
    }
    (**(code **)(*extraout_RAX + 0x28))();
  }
  *(undefined1 *)(unaff_RDI + 0x98) = 1;
  return;
}



/* IOAudioPort::getAudioDevice @ 0xf3d6 */

/* IOAudioPort::getAudioDevice() */

undefined8 IOAudioPort::getAudioDevice(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(unaff_RDI + 0x88);
}



/* IOAudioPort::addAudioControl @ 0xf3e4 */

/* IOAudioPort::addAudioControl(IOAudioControl*) */

undefined8 IOAudioPort::addAudioControl(IOAudioControl *param_1)

{
  char cVar1;
  byte bVar2;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 uVar3;
  
  uVar3 = 0xe00002c2;
  if ((unaff_RSI != (longlong *)0x0) && (*(longlong *)(unaff_RDI + 0x90) != 0)) {
    cVar1 = (**(code **)(*unaff_RSI + 0x670))();
    uVar3 = 0xe00002bc;
    if (cVar1 != '\0') {
      bVar2 = (**(code **)(*unaff_RSI + 0x920))();
      if ((bVar2 == 0) && (cVar1 = (**(code **)(*unaff_RSI + 0x5c0))(), cVar1 == '\0')) {
        (**(code **)(*unaff_RSI + 0x678))();
        return 0xe00002bc;
      }
      (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x1c0))();
      uVar3 = 0;
      if (((bVar2 | ~*(byte *)(unaff_RDI + 0x98)) & 1) == 0) {
        uVar3 = 0;
        (**(code **)(*unaff_RSI + 0x5b0))();
      }
    }
  }
  return uVar3;
}



/* IOAudioPort::deactivateAudioControls @ 0xf4a8 */

/* IOAudioPort::deactivateAudioControls() */

void __thiscall IOAudioPort::deactivateAudioControls(IOAudioPort *this)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong unaff_RDI;
  
  if (*(longlong *)(unaff_RDI + 0x90) != 0) {
    plVar2 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)this);
    if (plVar2 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*plVar2 + 0x128))();
      while (plVar3 != (longlong *)0x0) {
        cVar1 = IOService::isInactive();
        if (cVar1 == '\0') {
          (**(code **)(*plVar3 + 0x600))();
        }
        plVar3 = (longlong *)(**(code **)(*plVar2 + 0x128))();
      }
      (**(code **)(*plVar2 + 0x28))();
    }
                    /* WARNING: Could not recover jumptable at 0x0000f52d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x158))();
    return;
  }
  return;
}



/* IOAudioPort::MetaClass::~MetaClass @ 0xf53e */

/* IOAudioPort::MetaClass::~MetaClass() */

void __thiscall IOAudioPort::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* IOAudioStream::MetaClass::MetaClass @ 0xf58c */

/* IOAudioStream::MetaClass::MetaClass() */

void __thiscall IOAudioStream::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)&section_00000108.reserved2,PTR_gMetaClass_0001e038,in_R8,in_R9D);
  *unaff_RDI = &PTR__MetaClass_00024498;
  return;
}



/* IOAudioStream::MetaClass::~MetaClass @ 0xf5be */

/* IOAudioStream::MetaClass::~MetaClass() */

void __thiscall IOAudioStream::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* IOAudioStream::IOAudioStream @ 0xf5c8 */

/* IOAudioStream::IOAudioStream(OSMetaClass const*) */

void __thiscall IOAudioStream::IOAudioStream(IOAudioStream *this,OSMetaClass *param_1)

{
  undefined8 *unaff_RDI;
  
  IOService::IOService((IOService *)this,param_1);
  *unaff_RDI = &PTR__IOAudioStream_00023970;
  return;
}



/* IOAudioStream::IOAudioStream @ 0xf5e8 */

/* IOAudioStream::IOAudioStream(OSMetaClass const*) */

void __thiscall IOAudioStream::IOAudioStream(IOAudioStream *this,OSMetaClass *param_1)

{
  undefined8 *unaff_RDI;
  
  IOService::IOService((IOService *)this,param_1);
  *unaff_RDI = &PTR__IOAudioStream_00023970;
  return;
}



/* IOAudioStream::~IOAudioStream @ 0xf608 */

/* IOAudioStream::~IOAudioStream() */

void __thiscall IOAudioStream::~IOAudioStream(IOAudioStream *this)

{
  IOService::~IOService((IOService *)this);
  return;
}



/* IOAudioStream::~IOAudioStream @ 0xf612 */

/* IOAudioStream::~IOAudioStream() */

void __thiscall IOAudioStream::~IOAudioStream(IOAudioStream *this)

{
  IOService::~IOService((IOService *)this);
  return;
}



/* IOAudioStream::~IOAudioStream @ 0xf61c */

/* IOAudioStream::~IOAudioStream() */

void __thiscall IOAudioStream::~IOAudioStream(IOAudioStream *this)

{
  IOService::~IOService((IOService *)this);
  _OSObject_typed_operator_delete();
  return;
}



/* IOAudioStream::operator.delete @ 0xf644 */

/* IOAudioStream::operator delete(void*, unsigned long) */

void IOAudioStream::operator_delete(void *param_1,ulong param_2)

{
  _OSObject_typed_operator_delete();
  return;
}



/* IOAudioStream::getMetaClass @ 0xf65c */

/* IOAudioStream::getMetaClass() const */

undefined ** IOAudioStream::getMetaClass(void)

{
  return &gMetaClass;
}



/* IOAudioStream::MetaClass::MetaClass @ 0xf66a */

/* IOAudioStream::MetaClass::MetaClass() */

void __thiscall IOAudioStream::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)&section_00000108.reserved2,PTR_gMetaClass_0001e038,in_R8,in_R9D);
  *unaff_RDI = &PTR__MetaClass_00024498;
  return;
}



/* IOAudioStream::MetaClass::alloc @ 0xf69c */

/* IOAudioStream::MetaClass::alloc() const */

undefined8 * IOAudioStream::MetaClass::alloc(void)

{
  undefined8 *puVar1;
  IOService *in_RCX;
  OSMetaClass *in_RDX;
  
  puVar1 = (undefined8 *)_OSObject_typed_operator_new();
  IOService::IOService(in_RCX,in_RDX);
  *puVar1 = &PTR__IOAudioStream_00023970;
  OSMetaClass::instanceConstructed();
  return puVar1;
}



/* IOAudioStream::operator.new @ 0xf6e4 */

/* IOAudioStream::operator new(unsigned long) */

void * __thiscall IOAudioStream::operator_new(IOAudioStream *this,ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)_OSObject_typed_operator_new();
  return pvVar1;
}



/* IOAudioStream::IOAudioStream @ 0xf6f8 */

/* IOAudioStream::IOAudioStream() */

void __thiscall IOAudioStream::IOAudioStream(IOAudioStream *this)

{
  OSMetaClass *in_RDX;
  undefined8 *unaff_RDI;
  
  IOService::IOService((IOService *)this,in_RDX);
  *unaff_RDI = &PTR__IOAudioStream_00023970;
  OSMetaClass::instanceConstructed();
  return;
}



/* IOAudioStream::IOAudioStream @ 0xf728 */

/* IOAudioStream::IOAudioStream() */

void __thiscall IOAudioStream::IOAudioStream(IOAudioStream *this)

{
  OSMetaClass *in_RDX;
  undefined8 *unaff_RDI;
  
  IOService::IOService((IOService *)this,in_RDX);
  *unaff_RDI = &PTR__IOAudioStream_00023970;
  OSMetaClass::instanceConstructed();
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream12 @ 0xf758 */

/* IOAudioStream::_RESERVEDIOAudioStream12() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream12(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream13 @ 0xf76e */

/* IOAudioStream::_RESERVEDIOAudioStream13() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream13(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream14 @ 0xf784 */

/* IOAudioStream::_RESERVEDIOAudioStream14() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream14(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream15 @ 0xf79a */

/* IOAudioStream::_RESERVEDIOAudioStream15() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream15(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream16 @ 0xf7b0 */

/* IOAudioStream::_RESERVEDIOAudioStream16() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream16(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream17 @ 0xf7c6 */

/* IOAudioStream::_RESERVEDIOAudioStream17() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream17(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream18 @ 0xf7dc */

/* IOAudioStream::_RESERVEDIOAudioStream18() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream18(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream19 @ 0xf7f2 */

/* IOAudioStream::_RESERVEDIOAudioStream19() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream19(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream20 @ 0xf808 */

/* IOAudioStream::_RESERVEDIOAudioStream20() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream20(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream21 @ 0xf81e */

/* IOAudioStream::_RESERVEDIOAudioStream21() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream21(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream22 @ 0xf834 */

/* IOAudioStream::_RESERVEDIOAudioStream22() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream22(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream23 @ 0xf84a */

/* IOAudioStream::_RESERVEDIOAudioStream23() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream23(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream24 @ 0xf860 */

/* IOAudioStream::_RESERVEDIOAudioStream24() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream24(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream25 @ 0xf876 */

/* IOAudioStream::_RESERVEDIOAudioStream25() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream25(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream26 @ 0xf88c */

/* IOAudioStream::_RESERVEDIOAudioStream26() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream26(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream27 @ 0xf8a2 */

/* IOAudioStream::_RESERVEDIOAudioStream27() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream27(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream28 @ 0xf8b8 */

/* IOAudioStream::_RESERVEDIOAudioStream28() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream28(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream29 @ 0xf8ce */

/* IOAudioStream::_RESERVEDIOAudioStream29() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream29(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream30 @ 0xf8e4 */

/* IOAudioStream::_RESERVEDIOAudioStream30() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream30(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream31 @ 0xf8fa */

/* IOAudioStream::_RESERVEDIOAudioStream31() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream31(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream32 @ 0xf910 */

/* IOAudioStream::_RESERVEDIOAudioStream32() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream32(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream33 @ 0xf926 */

/* IOAudioStream::_RESERVEDIOAudioStream33() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream33(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream34 @ 0xf93c */

/* IOAudioStream::_RESERVEDIOAudioStream34() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream34(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream35 @ 0xf952 */

/* IOAudioStream::_RESERVEDIOAudioStream35() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream35(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream36 @ 0xf968 */

/* IOAudioStream::_RESERVEDIOAudioStream36() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream36(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream37 @ 0xf97e */

/* IOAudioStream::_RESERVEDIOAudioStream37() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream37(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream38 @ 0xf994 */

/* IOAudioStream::_RESERVEDIOAudioStream38() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream38(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream39 @ 0xf9aa */

/* IOAudioStream::_RESERVEDIOAudioStream39() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream39(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream40 @ 0xf9c0 */

/* IOAudioStream::_RESERVEDIOAudioStream40() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream40(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream41 @ 0xf9d6 */

/* IOAudioStream::_RESERVEDIOAudioStream41() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream41(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream42 @ 0xf9ec */

/* IOAudioStream::_RESERVEDIOAudioStream42() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream42(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream43 @ 0xfa02 */

/* IOAudioStream::_RESERVEDIOAudioStream43() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream43(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream44 @ 0xfa18 */

/* IOAudioStream::_RESERVEDIOAudioStream44() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream44(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream45 @ 0xfa2e */

/* IOAudioStream::_RESERVEDIOAudioStream45() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream45(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream46 @ 0xfa44 */

/* IOAudioStream::_RESERVEDIOAudioStream46() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream46(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::_RESERVEDIOAudioStream47 @ 0xfa5a */

/* IOAudioStream::_RESERVEDIOAudioStream47() */

void __thiscall IOAudioStream::_RESERVEDIOAudioStream47(IOAudioStream *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioStream::safeLogError @ 0xfa70 */

/* IOAudioStream::safeLogError(int, unsigned long, unsigned long, unsigned long, unsigned long,
   void*, void*) */

void IOAudioStream::safeLogError
               (int param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,void *param_6,
               void *param_7)

{
  longlong lVar1;
  int unaff_ESI;
  longlong unaff_RDI;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x148);
  if (lVar1 != 0) {
    switch(unaff_ESI) {
    case 0:
      *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
      *(undefined1 *)(lVar1 + 0x30) = 1;
      __os_log_internal("+-IOAudioStream[%p]:: clipIfNecessary() - Error: attempting to clip to a position more than one buffer ahead of last clip position (%lx,%lx)->(%lx,%lx).\n"
                        ,0);
      break;
    case 1:
      *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
      *(undefined1 *)(lVar1 + 0x30) = 1;
      __os_log_internal("+-IOAudioStream[%p]::safeLogError clipIfNecessary() - adjusting clipped position to (%lx,%lx)\n"
                        ,0);
      break;
    case 2:
      *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
      *(undefined1 *)(lVar1 + 0x30) = 1;
      __os_log_internal("+-IOAudioStream[%p]:: clipIfNecessary() - clip position is off %ld < %ld - %ld \n"
                        ,0);
      break;
    case 3:
      *(int *)(lVar1 + 0x24) = *(int *)(lVar1 + 0x24) + 1;
      *(undefined1 *)(lVar1 + 0x30) = 1;
      __os_log_internal("+-IOAudioStream[%p]::safeLogError clipIfNecessary() - Error: already clipped to a position (0x%lx,0x%lx) past data to be clipped (0x%lx, 0x%lx) - data ignored.\n"
                        ,0);
      break;
    case 4:
      *(int *)(lVar1 + 0x28) = *(int *)(lVar1 + 0x28) + 1;
      *(undefined1 *)(lVar1 + 0x30) = 1;
      __os_log_internal("+-IOAudioStream[%p]::safeLogError clipOutputSamples(0x%lx, 0x%lx) - Internal Error: mixBuffer = %p - sampleBuffer = %p\n"
                        ,0);
      break;
    case 5:
      *(int *)(lVar1 + 0x2c) = *(int *)(lVar1 + 0x2c) + 1;
      *(undefined1 *)(lVar1 + 0x30) = 1;
      __os_log_internal("+-IOAudioStream[%p]::safeLogError clipOutputSamples(0x%lx, 0x%lx) - clipping function returned error: 0x%lx\n"
                        ,0);
      break;
    default:
      if (unaff_ESI == 0xffff) {
        __os_log_internal("+-IOAudioStream[%p]::safeLogError kErrorLogDumpCounters mStreamErrorCountsUpdated=%d\n"
                          ,0);
        lVar1 = *(longlong *)(unaff_RDI + 0x148);
        if (*(int *)(lVar1 + 0x18) != 0) {
          _IOLog();
          lVar1 = *(longlong *)(unaff_RDI + 0x148);
          *(undefined4 *)(lVar1 + 0x18) = 0;
        }
        if (*(int *)(lVar1 + 0x20) != 0) {
          _IOLog();
          lVar1 = *(longlong *)(unaff_RDI + 0x148);
          *(undefined4 *)(lVar1 + 0x20) = 0;
        }
        if (*(int *)(lVar1 + 0x24) != 0) {
          _IOLog();
          lVar1 = *(longlong *)(unaff_RDI + 0x148);
          *(undefined4 *)(lVar1 + 0x24) = 0;
        }
        if (*(int *)(lVar1 + 0x28) != 0) {
          _IOLog();
          lVar1 = *(longlong *)(unaff_RDI + 0x148);
          *(undefined4 *)(lVar1 + 0x28) = 0;
        }
        if (*(int *)(lVar1 + 0x2c) != 0) {
          _IOLog();
          *(undefined4 *)(*(longlong *)(unaff_RDI + 0x148) + 0x2c) = 0;
        }
      }
    }
  }
  return;
}



/* IOAudioStream::validateFormat @ 0xfd10 */

/* IOAudioStream::validateFormat(_IOAudioStreamFormat*, _IOAudioStreamFormatExtension*,
   IOAudioStreamFormatDesc*, _IOAudioSampleRate const*) */

uint IOAudioStream::validateFormat
               (_IOAudioStreamFormat *param_1,_IOAudioStreamFormatExtension *param_2,
               IOAudioStreamFormatDesc *param_3,_IOAudioSampleRate *param_4)

{
  byte bVar1;
  uint uVar2;
  uintptr_t uVar3;
  uint32_t debugid;
  void *pvVar4;
  ulonglong uVar5;
  undefined8 unaff_RBX;
  uintptr_t *unaff_RSI;
  longlong lVar6;
  longlong unaff_RDI;
  uint uVar7;
  size_t sVar8;
  longlong lVar9;
  uintptr_t uVar10;
  
  uVar10 = 0;
  __os_log_internal("+ IOAudioStream[%p]::validateFormat(%p, %p, %p)\n",0);
  if (unaff_RSI == (uintptr_t *)0x0) {
    debugid = 0;
  }
  else {
    uVar10 = *unaff_RSI;
    debugid = (uint32_t)(byte)unaff_RSI[3];
  }
  if (param_3 == (IOAudioStreamFormatDesc *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)param_3;
  }
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug(debugid,uVar10,uVar7,0,(uintptr_t)param_3,(uintptr_t)unaff_RBX);
  }
  uVar10 = (uintptr_t)unaff_RBX;
  if ((unaff_RSI == (uintptr_t *)0x0) || (lVar6 = *(longlong *)(unaff_RDI + 200), lVar6 == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    if ((param_3 != (IOAudioStreamFormatDesc *)0x0) && (uVar7 = 0, *(int *)(unaff_RDI + 0xd8) != 0))
    {
      uVar3 = *unaff_RSI;
      lVar9 = 0;
      uVar5 = 0;
      do {
        __os_log_internal("  %ld: streamFormat->fNumChannels = %ld\n",0,
                          *(undefined4 *)(lVar6 + lVar9),uVar3);
        __os_log_internal("  0x%lx: streamFormat->fSampleFormat = 0x%lx\n",0,
                          *(undefined4 *)(*(longlong *)(unaff_RDI + 200) + 4 + lVar9),unaff_RSI[1]);
        __os_log_internal("  0x%lx: streamFormat->fNumericRepresentation = 0x%lx\n",0,
                          *(undefined4 *)(*(longlong *)(unaff_RDI + 200) + 8 + lVar9),unaff_RSI[2]);
        __os_log_internal("  %d: streamFormat->fBitDepth = %d\n",0,
                          *(undefined1 *)(*(longlong *)(unaff_RDI + 200) + 0xc + lVar9),
                          (char)unaff_RSI[3]);
        __os_log_internal("  %d: streamFormat->fBitWidth = %d\n",0,
                          *(undefined1 *)(*(longlong *)(unaff_RDI + 200) + 0xd + lVar9),
                          *(undefined1 *)((longlong)unaff_RSI + 0xd));
        __os_log_internal("  %d: streamFormat->fAlignment = %d\n",0,
                          *(undefined1 *)(*(longlong *)(unaff_RDI + 200) + 0xe + lVar9),
                          *(undefined1 *)((longlong)unaff_RSI + 0xe));
        bVar1 = *(byte *)(*(longlong *)(unaff_RDI + 200) + 0xf + lVar9);
        sVar8 = (size_t)bVar1;
        __os_log_internal("  %d: streamFormat->fByteOrder = %d\n",0,bVar1,
                          *(undefined1 *)((longlong)unaff_RSI + 0xf));
        uVar10 = (uintptr_t)unaff_RBX;
        lVar6 = *(longlong *)(unaff_RDI + 200);
        uVar3 = *unaff_RSI;
        if (((((*(uintptr_t *)(lVar6 + lVar9) == uVar3) &&
              (*(uintptr_t *)(lVar6 + 4 + lVar9) == unaff_RSI[1])) &&
             (*(uintptr_t *)(lVar6 + 8 + lVar9) == unaff_RSI[2])) &&
            ((*(char *)(lVar6 + 0xc + lVar9) == (char)unaff_RSI[3] &&
             (*(char *)(lVar6 + 0xd + lVar9) == *(char *)((longlong)unaff_RSI + 0xd))))) &&
           ((*(char *)(lVar6 + 0xe + lVar9) == *(char *)((longlong)unaff_RSI + 0xe) &&
            ((*(char *)(lVar6 + 0xf + lVar9) == *(char *)((longlong)unaff_RSI + 0xf) &&
             (*(char *)(lVar6 + 0x10 + lVar9) == (char)unaff_RSI[4])))))) {
          uVar7 = *(uint *)param_3;
          pvVar4 = (void *)(ulonglong)uVar7;
          if ((uVar7 == 0) ||
             (((*(uint *)(lVar6 + 0x18 + lVar9) <= uVar7 &&
               (uVar2 = *(uint *)(lVar6 + 0x20 + lVar9), uVar7 <= uVar2)) &&
              ((uVar2 != uVar7 ||
               (uVar7 = *(uint *)(lVar6 + 0x24 + lVar9), pvVar4 = (void *)(ulonglong)uVar7,
               *(uint *)(param_3 + 4) <= uVar7)))))) {
            uVar3 = *(uintptr_t *)(lVar6 + 0x14 + lVar9);
            if (unaff_RSI[5] != uVar3) {
              unaff_RSI[5] = uVar3;
            }
            uVar7 = (uint)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
            if (param_1 != (_IOAudioStreamFormat *)0x0) {
              _memmove(pvVar4,&segment_command_00000020.fileoff,sVar8);
            }
            goto LAB_0000ffdf;
          }
        }
        uVar5 = uVar5 + 1;
        lVar9 = lVar9 + 0x48;
      } while (uVar5 < *(uint *)(unaff_RDI + 0xd8));
      uVar7 = 0;
    }
  }
LAB_0000ffdf:
  uVar3 = (uintptr_t)param_3;
  __os_log_internal("- IOAudioStream[%p]::validateFormat(%p, %p, %p) returns %d\n",0,unaff_RDI);
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug(0,0,uVar7 & 0xff,0,uVar3,uVar10);
  }
  return uVar7;
}



/* IOAudioStream::getFormatExtension @ 0x10082 */

/* IOAudioStream::getFormatExtension() */

undefined8 IOAudioStream::getFormatExtension(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(unaff_RDI + 0x148);
}



/* IOAudioStream::setFormat @ 0x10090 */

/* IOAudioStream::setFormat(_IOAudioStreamFormat const*, _IOAudioStreamFormatExtension const*, bool)
    */

uintptr_t IOAudioStream::setFormat
                    (_IOAudioStreamFormat *param_1,_IOAudioStreamFormatExtension *param_2,
                    bool param_3)

{
  undefined *puVar1;
  uintptr_t arg2;
  longlong *plVar2;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  undefined7 in_register_00000081;
  OSDictionary *pOVar3;
  OSDictionary *pOVar4;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  uintptr_t in_stack_ffffffffffffff98;
  uintptr_t in_stack_ffffffffffffffa0;
  undefined8 local_40;
  _IOAudioStreamFormat *local_38;
  
  puVar1 = PTR__kdebug_enable_0001e070;
  pOVar3 = (OSDictionary *)CONCAT71(in_register_00000081,param_3);
  local_38 = (_IOAudioStreamFormat *)0x0;
  local_40 = 0;
  if (unaff_RSI == 0) {
    arg2 = 0xe00002c2;
    if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
      _kernel_debug(0,3,(uint)param_1 & 0xff,0,in_stack_ffffffffffffff98,in_stack_ffffffffffffffa0);
    }
  }
  else {
    pOVar4 = (OSDictionary *)((ulonglong)param_1 & 0xff);
    if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
      pOVar3 = pOVar4;
      _kernel_debug((uint)*(byte *)(unaff_RSI + 0xc),3,(uintptr_t)pOVar4,0,in_stack_ffffffffffffff98
                    ,in_stack_ffffffffffffffa0);
    }
    if (param_2 == (_IOAudioStreamFormatExtension *)0x0) {
      in_stack_ffffffffffffffa0 = 0;
      in_stack_ffffffffffffff98 = 0;
      local_70 = 0;
      local_78 = 0;
      local_80 = 0;
      local_88 = 0;
      (**(code **)(*unaff_RDI + 0x878))(&local_88);
      local_40 = 0;
      local_38 = (_IOAudioStreamFormat *)0x0;
    }
    else {
      local_40 = *(undefined8 *)param_2;
      local_38 = *(_IOAudioStreamFormat **)(param_2 + 8);
    }
    plVar2 = (longlong *)
             createDictionaryFromFormat(local_38,(_IOAudioStreamFormatExtension *)0x0,pOVar3);
    if (plVar2 == (longlong *)0x0) {
      arg2 = 0xe00002bc;
    }
    else {
      (**(code **)(*plVar2 + 0x130))();
      if ((*(uint *)puVar1 & 0xfffffff7) != 0) {
        _kernel_debug((uint32_t)local_40,3,0,0,in_stack_ffffffffffffff98,in_stack_ffffffffffffffa0);
      }
      arg2 = (**(code **)(*unaff_RDI + 0x860))(plVar2,&local_40,pOVar4);
      (**(code **)(*plVar2 + 0x28))();
    }
  }
  if ((*(uint *)puVar1 & 0xfffffff7) != 0) {
    _kernel_debug(0,3,arg2,0,in_stack_ffffffffffffff98,in_stack_ffffffffffffffa0);
  }
  return arg2;
}



/* IOAudioStream::createDictionaryFromFormat @ 0x1024c */

/* IOAudioStream::createDictionaryFromFormat(_IOAudioStreamFormat const*,
   _IOAudioStreamFormatExtension const*, OSDictionary*) */

_IOAudioStreamFormatExtension *
IOAudioStream::createDictionaryFromFormat
          (_IOAudioStreamFormat *param_1,_IOAudioStreamFormatExtension *param_2,
          OSDictionary *param_3)

{
  _IOAudioStreamFormatExtension *p_Var1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  int *unaff_RSI;
  longlong unaff_RDI;
  
  if (unaff_RDI == 0) {
LAB_000104f4:
    p_Var1 = (_IOAudioStreamFormatExtension *)0x0;
  }
  else {
    p_Var1 = param_2;
    if (param_2 == (_IOAudioStreamFormatExtension *)0x0) {
      p_Var1 = (_IOAudioStreamFormatExtension *)OSDictionary::withCapacity((uint)param_1);
      if (p_Var1 == (_IOAudioStreamFormatExtension *)0x0) goto LAB_000104f4;
    }
    uVar4 = (uint)param_2;
    if (gNumChannelsKey == 0) {
      initKeys((IOAudioStream *)param_1);
    }
    plVar2 = (longlong *)OSNumber::withNumber((ulonglong)param_1,uVar4);
    plVar3 = plVar2;
    (**(code **)(*(longlong *)p_Var1 + 0x1c0))();
    uVar4 = (uint)plVar3;
    (**(code **)(*plVar2 + 0x28))();
    plVar2 = (longlong *)OSNumber::withNumber((ulonglong)param_1,uVar4);
    plVar3 = plVar2;
    (**(code **)(*(longlong *)p_Var1 + 0x1c0))();
    uVar4 = (uint)plVar3;
    (**(code **)(*plVar2 + 0x28))();
    plVar2 = (longlong *)OSNumber::withNumber((ulonglong)param_1,uVar4);
    plVar3 = plVar2;
    (**(code **)(*(longlong *)p_Var1 + 0x1c0))();
    uVar4 = (uint)plVar3;
    (**(code **)(*plVar2 + 0x28))();
    plVar2 = (longlong *)OSNumber::withNumber((ulonglong)param_1,uVar4);
    plVar3 = plVar2;
    (**(code **)(*(longlong *)p_Var1 + 0x1c0))();
    uVar4 = (uint)plVar3;
    (**(code **)(*plVar2 + 0x28))();
    plVar2 = (longlong *)OSNumber::withNumber((ulonglong)param_1,uVar4);
    plVar3 = plVar2;
    (**(code **)(*(longlong *)p_Var1 + 0x1c0))();
    uVar4 = (uint)plVar3;
    (**(code **)(*plVar2 + 0x28))();
    plVar2 = (longlong *)OSNumber::withNumber((ulonglong)param_1,uVar4);
    plVar3 = plVar2;
    (**(code **)(*(longlong *)p_Var1 + 0x1c0))();
    uVar4 = (uint)plVar3;
    (**(code **)(*plVar2 + 0x28))();
    plVar2 = (longlong *)OSNumber::withNumber((ulonglong)param_1,uVar4);
    plVar3 = plVar2;
    (**(code **)(*(longlong *)p_Var1 + 0x1c0))();
    uVar4 = (uint)plVar3;
    (**(code **)(*plVar2 + 0x28))();
    plVar2 = (longlong *)OSNumber::withNumber((ulonglong)param_1,uVar4);
    plVar3 = plVar2;
    (**(code **)(*(longlong *)p_Var1 + 0x1c0))();
    uVar4 = (uint)plVar3;
    (**(code **)(*plVar2 + 0x28))();
    plVar2 = (longlong *)OSNumber::withNumber((ulonglong)param_1,uVar4);
    plVar3 = plVar2;
    (**(code **)(*(longlong *)p_Var1 + 0x1c0))();
    uVar4 = (uint)plVar3;
    (**(code **)(*plVar2 + 0x28))();
    if ((unaff_RSI != (int *)0x0) && (*unaff_RSI != 0)) {
      plVar2 = (longlong *)OSNumber::withNumber((ulonglong)param_1,uVar4);
      plVar3 = plVar2;
      (**(code **)(*(longlong *)p_Var1 + 0x1d0))();
      uVar4 = (uint)plVar3;
      (**(code **)(*plVar2 + 0x28))();
      plVar2 = (longlong *)OSNumber::withNumber((ulonglong)param_1,uVar4);
      plVar3 = plVar2;
      (**(code **)(*(longlong *)p_Var1 + 0x1d0))();
      uVar4 = (uint)plVar3;
      (**(code **)(*plVar2 + 0x28))();
      plVar3 = (longlong *)OSNumber::withNumber((ulonglong)param_1,uVar4);
      (**(code **)(*(longlong *)p_Var1 + 0x1d0))();
      (**(code **)(*plVar3 + 0x28))();
    }
  }
  return p_Var1;
}



/* IOAudioStream::setFormat @ 0x10502 */

/* WARNING: Removing unreachable block (ram,0x00010951) */
/* IOAudioStream::setFormat(_IOAudioStreamFormat const*, _IOAudioStreamFormatExtension const*,
   OSDictionary*, bool) */

uintptr_t IOAudioStream::setFormat
                    (_IOAudioStreamFormat *param_1,_IOAudioStreamFormatExtension *param_2,
                    OSDictionary *param_3,bool param_4)

{
  char cVar1;
  uint32_t uVar2;
  longlong lVar3;
  OSDictionary *pOVar4;
  OSCollection *pOVar5;
  uint *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  uint32_t uVar11;
  OSCollection *pOVar12;
  _IOAudioSampleRate *p_Var13;
  OSMetaClass *pOVar14;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  OSDictionary *pOVar15;
  uint uVar16;
  OSCollection *pOVar17;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  uintptr_t in_stack_ffffffffffffff68;
  uintptr_t arg4;
  undefined8 uVar18;
  uintptr_t in_stack_ffffffffffffff70;
  uintptr_t arg5;
  undefined8 uVar19;
  char local_64;
  longlong local_58;
  longlong local_50;
  OSCollection *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (unaff_RSI == (longlong *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (uint32_t)*(byte *)((longlong)unaff_RSI + 0xc);
  }
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug(uVar11,4,(uint)param_3 & 0xff,0,in_stack_ffffffffffffff68,
                  in_stack_ffffffffffffff70);
  }
  local_48 = (OSCollection *)0x0;
  local_50 = 0;
  local_58 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  uVar18 = 0;
  uVar19 = 0;
  local_40 = 0;
  local_38 = 0;
  p_Var13 = (_IOAudioSampleRate *)0x0;
  __os_log_internal("+ IOAudioStream[%p]::setFormat(%p, %p)\n");
  puVar6 = (uint *)PTR__kdebug_enable_0001e070;
  arg5 = (uintptr_t)uVar19;
  arg4 = (uintptr_t)uVar18;
  if (unaff_RSI == (longlong *)0x0 || param_1 == (_IOAudioStreamFormat *)0x0) {
    uVar11 = 0xe00002c2;
    if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
      _kernel_debug((uint32_t)param_1,4,0,0,arg4,arg5);
    }
    goto LAB_00010b08;
  }
  local_48 = (OSCollection *)unaff_RSI[2];
  local_58 = *unaff_RSI;
  local_50 = unaff_RSI[1];
  if (param_2 == (_IOAudioStreamFormatExtension *)0x0) {
    local_40 = 1;
    local_38 = CONCAT44((uint)(*(byte *)((longlong)unaff_RSI + 0xd) >> 3) * (int)*unaff_RSI,1);
  }
  else {
    local_40 = *(undefined8 *)param_2;
    local_38 = *(undefined8 *)(param_2 + 8);
  }
  (**(code **)(*(longlong *)param_1 + 0x208))();
  pOVar4 = (OSDictionary *)PTR_metaClass_0001e008;
  lVar3 = OSMetaClassBase::safeMetaCast
                    ((OSMetaClassBase *)PTR_metaClass_0001e008,(OSMetaClass *)p_Var13);
  if (lVar3 == 0) {
    pOVar4 = (OSDictionary *)(**(code **)(*(longlong *)unaff_RDI[0x11] + 0xa78))();
  }
  else {
    pOVar4 = (OSDictionary *)IOAudioEngine::createSampleRateFromDictionary(pOVar4,p_Var13);
  }
  pOVar14 = (OSMetaClass *)&local_40;
  pOVar12 = (OSCollection *)&local_b8;
  pOVar15 = pOVar4;
  cVar1 = (**(code **)(*unaff_RDI + 0x898))();
  arg5 = (uintptr_t)uVar19;
  arg4 = (uintptr_t)uVar18;
  if (cVar1 == '\0') {
    uVar2 = 0;
    _IOLog();
    if (pOVar4 != (OSDictionary *)0x0) {
      uVar2 = *(uint32_t *)pOVar4;
    }
    uVar11 = 0xe00002c2;
    puVar6 = (uint *)PTR__kdebug_enable_0001e070;
    if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
      _kernel_debug(uVar2,4,1,0,arg4,arg5);
      puVar6 = (uint *)PTR__kdebug_enable_0001e070;
    }
    goto LAB_00010b08;
  }
  (**(code **)(*(longlong *)param_1 + 0x208))();
  lVar3 = OSMetaClassBase::safeMetaCast((OSMetaClassBase *)pOVar12,pOVar14);
  pOVar17 = (OSCollection *)0x0;
  if (lVar3 != 0) {
    pOVar5 = (OSCollection *)
             IOAudioEngine::createSampleRateFromDictionary
                       ((OSDictionary *)pOVar12,(_IOAudioSampleRate *)pOVar14);
    puVar6 = (uint *)(**(code **)(*(longlong *)unaff_RDI[0x11] + 0xa78))();
    if (((pOVar5 != (OSCollection *)0x0) &&
        (pOVar12 = (OSCollection *)(ulonglong)*(uint *)pOVar5, pOVar17 = pOVar5,
        *(uint *)pOVar5 == *puVar6)) &&
       (pOVar12 = (OSCollection *)(ulonglong)*(uint *)(pOVar5 + 4),
       *(uint *)(pOVar5 + 4) == puVar6[1])) {
      pOVar17 = (OSCollection *)0x0;
    }
  }
  plVar7 = (longlong *)OSSet::withCapacity((uint)pOVar12);
  arg5 = (uintptr_t)uVar19;
  arg4 = (uintptr_t)uVar18;
  uVar11 = 0xe00002bd;
  puVar6 = (uint *)PTR__kdebug_enable_0001e070;
  if (plVar7 == (longlong *)0x0) goto LAB_00010b08;
  (**(code **)(*unaff_RDI + 0xaa8))();
  for (lVar3 = unaff_RDI[0x28]; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x58)) {
    (**(code **)(*plVar7 + 0x1c0))();
  }
  (**(code **)(*unaff_RDI + 0xab0))();
  plVar8 = (longlong *)OSCollectionIterator::withCollection(pOVar12);
  arg5 = (uintptr_t)uVar19;
  arg4 = (uintptr_t)uVar18;
  if (plVar8 != (longlong *)0x0) {
    while (puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x128))(), puVar9 != (undefined8 *)0x0) {
      pOVar12 = (OSCollection *)*puVar9;
      (**(code **)(pOVar12 + 0xa90))();
    }
    (**(code **)(*plVar8 + 0x28))();
    (**(code **)(*(longlong *)unaff_RDI[0x11] + 0xa50))();
    local_64 = (char)param_3;
    if (local_64 == '\0') {
LAB_00010935:
      pOVar12 = (OSCollection *)((ulonglong)pOVar12 & 0xffffffffffffff00);
      plVar8 = (longlong *)
               createDictionaryFromFormat
                         ((_IOAudioStreamFormat *)pOVar12,(_IOAudioStreamFormatExtension *)0x0,
                          pOVar15);
      if (plVar8 == (longlong *)0x0) {
        uVar11 = 0xe00002bc;
      }
      else {
        (**(code **)(*unaff_RDI + 0xaa8))();
        if (unaff_RDI[0x1f] != 0) {
          if ((char)local_48 == '\0') {
            (**(code **)(*unaff_RDI + 0x9f8))();
          }
          else if ((((*(byte *)((longlong)unaff_RDI + 0x104) & 1) != 0) &&
                   ((int)unaff_RDI[0x16] != (int)local_58)) &&
                  ((uVar16 = (int)local_58 * *(int *)(unaff_RDI[0x11] + 0x88),
                   (uVar16 & 0x3fffffff) != 0 && (lVar3 = _IOMallocData(), lVar3 != 0)))) {
            (**(code **)(*unaff_RDI + 0x9f8))(*unaff_RDI,uVar16 * 4);
            *(undefined1 *)((longlong)unaff_RDI + 0x104) = 1;
          }
        }
        (**(code **)(*unaff_RDI + 0xab0))();
        lVar3 = unaff_RDI[0x16];
        unaff_RDI[0x17] = local_50;
        unaff_RDI[0x18] = (longlong)local_48;
        unaff_RDI[0x16] = local_58;
        pOVar12 = local_48;
        (**(code **)(*unaff_RDI + 0x268))(local_48,plVar8);
        (**(code **)(*plVar8 + 0x28))();
        if ((int)unaff_RDI[0x16] != (int)lVar3) {
          (**(code **)(*(longlong *)unaff_RDI[0x11] + 0xa20))();
        }
        if (pOVar17 != (OSCollection *)0x0) {
          (**(code **)(*(longlong *)unaff_RDI[0x11] + 0xb58))();
        }
        (**(code **)(*(longlong *)unaff_RDI[0x11] + 0xba0))();
        uVar11 = 0;
      }
    }
    else {
      pOVar12 = (OSCollection *)&local_40;
      pOVar15 = (OSDictionary *)pOVar17;
      uVar2 = (**(code **)(*(longlong *)unaff_RDI[0x11] + 0x850))(pOVar12,&local_58);
      if (uVar2 == 0) goto LAB_00010935;
      if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
        pOVar12 = (OSCollection *)(longlong)(int)uVar2;
        pOVar15 = (OSDictionary *)((longlong)&MACH_HEADER.magic + 2);
        _kernel_debug(uVar2,4,2,0,(uintptr_t)uVar18,(uintptr_t)uVar19);
      }
      if (uVar2 == 0xe00002c7) {
        pOVar12 = pOVar17;
        uVar2 = (**(code **)(*(longlong *)unaff_RDI[0x11] + 0xaf8))(pOVar17,&local_58);
        if (uVar2 == 0) goto LAB_00010935;
        if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
          pOVar12 = (OSCollection *)(longlong)(int)uVar2;
          _kernel_debug(uVar2,4,4,0,(uintptr_t)uVar18,(uintptr_t)uVar19);
        }
      }
      uVar11 = 0xe00002d8;
      if (uVar2 != 0xe00002d8) {
        _IOLog();
        uVar11 = uVar2;
      }
    }
    (**(code **)(*(longlong *)unaff_RDI[0x11] + 0xa58))();
    plVar8 = (longlong *)OSCollectionIterator::withCollection(pOVar12);
    arg5 = (uintptr_t)uVar19;
    arg4 = (uintptr_t)uVar18;
    if (plVar8 != (longlong *)0x0) {
      while( true ) {
        plVar10 = (longlong *)(**(code **)(*plVar8 + 0x128))();
        arg5 = (uintptr_t)uVar19;
        arg4 = (uintptr_t)uVar18;
        if (plVar10 == (longlong *)0x0) break;
        (**(code **)(*plVar10 + 0xa98))();
      }
      (**(code **)(*plVar8 + 0x28))();
      (**(code **)(*plVar7 + 0x28))();
      puVar6 = (uint *)PTR__kdebug_enable_0001e070;
      goto LAB_00010b08;
    }
  }
  (**(code **)(*plVar7 + 0x28))();
  uVar11 = 0xe00002bd;
  puVar6 = (uint *)PTR__kdebug_enable_0001e070;
LAB_00010b08:
  __os_log_internal("IOAudioStream[%p]::setFormat(%p, %p) returns 0x%lx",0);
  if ((*puVar6 & 0xfffffff7) != 0) {
    _kernel_debug(0,4,uVar11,0,arg4,arg5);
  }
  return uVar11;
}



/* IOAudioStream::addAvailableFormat @ 0x10b72 */

/* IOAudioStream::addAvailableFormat(_IOAudioStreamFormat const*, _IOAudioStreamFormatExtension
   const*, _IOAudioSampleRate const*, _IOAudioSampleRate const*, int (* const*)(void const*, void*,
   unsigned int, unsigned int, _IOAudioStreamFormat const*, IOAudioStream*), unsigned int) */

void IOAudioStream::addAvailableFormat
               (_IOAudioStreamFormat *param_1,_IOAudioStreamFormatExtension *param_2,
               _IOAudioSampleRate *param_3,_IOAudioSampleRate *param_4,
               _func_int_void_ptr_void_ptr_uint_uint__IOAudioStreamFormat_ptr_IOAudioStream_ptr
               *param_5,uint param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  OSDictionary *pOVar9;
  longlong *plVar10;
  longlong *plVar11;
  void *pvVar12;
  _IOAudioSampleRate *p_Var13;
  OSDictionary *pOVar14;
  uint *unaff_RSI;
  longlong *unaff_RDI;
  uint local_res8;
  
  p_Var13 = (_IOAudioSampleRate *)
            CONCAT71((int7)((ulonglong)param_1 >> 8),
                     param_1 == (_IOAudioStreamFormat *)0x0 || unaff_RSI == (uint *)0x0);
  if (param_3 != (_IOAudioSampleRate *)0x0 &&
      (param_1 != (_IOAudioStreamFormat *)0x0 && unaff_RSI != (uint *)0x0)) {
    pOVar9 = (OSDictionary *)param_3;
    lVar5 = _IOMallocTypeVarImpl();
    if (lVar5 != 0) {
      uVar3 = *(uint *)(unaff_RDI + 0x1b);
      if (unaff_RDI[0x19] != 0) {
        if (uVar3 == 0) {
          uVar3 = 0;
        }
        else {
          _memmove(p_Var13,(void *)((ulonglong)uVar3 * 0x48),(size_t)pOVar9);
          uVar3 = *(uint *)(unaff_RDI + 0x1b);
        }
      }
      uVar6 = (ulonglong)uVar3;
      *(undefined8 *)(lVar5 + 0x10 + uVar6 * 0x48) = *(undefined8 *)(unaff_RSI + 4);
      uVar1 = *(undefined8 *)unaff_RSI;
      *(undefined8 *)(lVar5 + 8 + uVar6 * 0x48) = *(undefined8 *)(unaff_RSI + 2);
      *(undefined8 *)(lVar5 + uVar6 * 0x48) = uVar1;
      *(undefined8 *)(lVar5 + 0x18 + (ulonglong)*(uint *)(unaff_RDI + 0x1b) * 0x48) =
           *(undefined8 *)param_1;
      *(undefined8 *)(lVar5 + 0x20 + (ulonglong)*(uint *)(unaff_RDI + 0x1b) * 0x48) =
           *(undefined8 *)param_3;
      if (param_2 == (_IOAudioStreamFormatExtension *)0x0) {
        pvVar12 = (void *)(ulonglong)*(uint *)(unaff_RDI + 0x1b);
        *(undefined4 *)(lVar5 + 0x38 + (longlong)pvVar12 * 0x48) = 0;
        *(undefined4 *)(lVar5 + 0x3c + (longlong)pvVar12 * 0x48) = 1;
        iVar4 = (uint)(*(byte *)((longlong)unaff_RSI + 0xd) >> 3) * *unaff_RSI;
      }
      else {
        pvVar12 = (void *)(ulonglong)*(uint *)(unaff_RDI + 0x1b);
        *(undefined4 *)(lVar5 + 0x38 + (longlong)pvVar12 * 0x48) = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(lVar5 + 0x3c + (longlong)pvVar12 * 0x48) = *(undefined4 *)(param_2 + 8);
        iVar4 = *(int *)(param_2 + 0xc);
      }
      *(int *)(lVar5 + 0x40 + (longlong)pvVar12 * 0x48) = iVar4;
      *(undefined8 *)(lVar5 + 0x28 + (longlong)pvVar12 * 0x48) = 0;
      *(undefined4 *)(lVar5 + 0x30 + (longlong)pvVar12 * 0x48) = 0;
      if (local_res8 != 0 && param_4 != (_IOAudioSampleRate *)0x0) {
        lVar7 = _IOMallocTypeVarImpl();
        pvVar12 = (void *)(ulonglong)*(uint *)(unaff_RDI + 0x1b);
        *(longlong *)(lVar5 + 0x28 + (longlong)pvVar12 * 0x48) = lVar7;
        if (lVar7 != 0) {
          *(uint *)(lVar5 + 0x30 + (longlong)pvVar12 * 0x48) = local_res8;
          _memmove(pvVar12,(void *)((ulonglong)local_res8 << 3),(size_t)pOVar9);
          pvVar12 = (void *)(ulonglong)*(uint *)(unaff_RDI + 0x1b);
        }
      }
      p_Var13 = (_IOAudioSampleRate *)((longlong)pvVar12 * 8);
      unaff_RDI[0x19] = 0;
      _IOFreeTypeVarImpl();
      unaff_RDI[0x19] = lVar5;
      *(int *)(unaff_RDI + 0x1b) = (int)unaff_RDI[0x1b] + 1;
    }
    pOVar14 = (OSDictionary *)0x0;
    plVar8 = (longlong *)
             createDictionaryFromFormat
                       ((_IOAudioStreamFormat *)p_Var13,(_IOAudioStreamFormatExtension *)0x0,pOVar9)
    ;
    if (plVar8 != (longlong *)0x0) {
      pOVar9 = (OSDictionary *)IOAudioEngine::createDictionaryFromSampleRate(p_Var13,pOVar14);
      if (pOVar9 != (OSDictionary *)0x0) {
        pOVar14 = pOVar9;
        (**(code **)(*plVar8 + 0x1c0))();
        (**(code **)(*(longlong *)pOVar9 + 0x28))();
        plVar10 = (longlong *)IOAudioEngine::createDictionaryFromSampleRate(p_Var13,pOVar14);
        if (plVar10 != (longlong *)0x0) {
          plVar2 = (longlong *)unaff_RDI[0x1a];
          (**(code **)(*plVar2 + 0x168))();
          plVar11 = (longlong *)
                    OSMetaClassBase::safeMetaCast
                              ((OSMetaClassBase *)PTR_metaClass_0001e018,(OSMetaClass *)pOVar14);
          if (plVar11 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x1c0))();
            (**(code **)(*plVar11 + 0x1b8))();
            unaff_RDI[0x1a] = (longlong)plVar11;
            (**(code **)(*unaff_RDI + 0x268))();
            (**(code **)(*plVar2 + 0x28))();
            if (*(uint *)(unaff_RDI + 0x1c) < *unaff_RSI) {
              *(uint *)(unaff_RDI + 0x1c) = *unaff_RSI;
            }
          }
          (**(code **)(*plVar10 + 0x28))();
        }
      }
      (**(code **)(*plVar8 + 0x28))();
    }
  }
  return;
}



/* IOAudioStream::addAvailableFormat @ 0x10e88 */

/* IOAudioStream::addAvailableFormat(_IOAudioStreamFormat const*, _IOAudioStreamFormatExtension
   const*, _IOAudioSampleRate const*, _IOAudioSampleRate const*, int (*)(void const*, void*,
   unsigned int, unsigned int, _IOAudioStreamFormat const*, IOAudioStream*)) */

void IOAudioStream::addAvailableFormat
               (_IOAudioStreamFormat *param_1,_IOAudioStreamFormatExtension *param_2,
               _IOAudioSampleRate *param_3,_IOAudioSampleRate *param_4,
               _func_int_void_ptr_void_ptr_uint_uint__IOAudioStreamFormat_ptr_IOAudioStream_ptr
               *param_5)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x868))();
  return;
}



/* IOAudioStream::validateFormat @ 0x10eb2 */

/* IOAudioStream::validateFormat(_IOAudioStreamFormat*, _IOAudioStreamFormatExtension*,
   IOAudioStreamFormatDesc*) */

void IOAudioStream::validateFormat
               (_IOAudioStreamFormat *param_1,_IOAudioStreamFormatExtension *param_2,
               IOAudioStreamFormatDesc *param_3)

{
  undefined8 uVar1;
  longlong *unaff_RDI;
  
  uVar1 = (**(code **)(*(longlong *)unaff_RDI[0x11] + 0xa78))();
                    /* WARNING: Could not recover jumptable at 0x00010efb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x898))(param_1,param_2,uVar1,*(code **)(*unaff_RDI + 0x898));
  return;
}



/* IOAudioStream::setTerminalType @ 0x10efe */

/* IOAudioStream::setTerminalType(unsigned int) */

void IOAudioStream::setTerminalType(uint param_1)

{
  int unaff_ESI;
  longlong *unaff_RDI;
  
  if (unaff_ESI != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010f1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_RDI + 0x280))(0x20,unaff_ESI);
    return;
  }
  return;
}



/* IOAudioStream::mixOutputSamples @ 0x10f24 */

/* IOAudioStream::mixOutputSamples(void const*, void*, unsigned int, unsigned int,
   _IOAudioStreamFormat const*, IOAudioStream*) */

undefined8
IOAudioStream::mixOutputSamples
          (void *param_1,void *param_2,uint param_3,uint param_4,_IOAudioStreamFormat *param_5,
          IOAudioStream *param_6)

{
  undefined4 in_register_0000008c;
  
  _memmove((void *)(ulonglong)((int)param_1 * *(uint *)CONCAT44(in_register_0000008c,param_4)),
           (void *)((ulonglong)param_3 * (ulonglong)*(uint *)CONCAT44(in_register_0000008c,param_4)
                   * 4),param_3);
  return 0;
}



/* IOAudioStream::setSampleLatency @ 0x10f4a */

/* IOAudioStream::setSampleLatency(unsigned int) */

void IOAudioStream::setSampleLatency(uint param_1)

{
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  
  __os_log_internal("+-IOAudioStream[%p]::setSampleLatency(0x%lx)\n",0);
                    /* WARNING: Could not recover jumptable at 0x00010f9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x280))(0x20,unaff_ESI);
  return;
}



/* IOAudioStream::getNumSampleFramesRead @ 0x10f9e */

/* IOAudioStream::getNumSampleFramesRead() */

undefined4 IOAudioStream::getNumSampleFramesRead(void)

{
  longlong unaff_RDI;
  
  return *(undefined4 *)(*(longlong *)(unaff_RDI + 0x148) + 0x10);
}



/* IOAudioStream::setDefaultNumSampleFramesRead @ 0x10fae */

/* IOAudioStream::setDefaultNumSampleFramesRead(unsigned int) */

void IOAudioStream::setDefaultNumSampleFramesRead(uint param_1)

{
  undefined4 unaff_ESI;
  longlong unaff_RDI;
  
  *(undefined4 *)(*(longlong *)(unaff_RDI + 0x148) + 0x10) = unaff_ESI;
  return;
}



/* IOAudioStream::initKeys @ 0x10fbe */

/* IOAudioStream::initKeys() */

void __thiscall IOAudioStream::initKeys(IOAudioStream *this)

{
  if (gNumChannelsKey != 0) {
    return;
  }
  gNumChannelsKey = OSSymbol::withCString((char *)this);
  gSampleFormatKey = OSSymbol::withCString((char *)this);
  gNumericRepresentationKey = OSSymbol::withCString((char *)this);
  gBitDepthKey = OSSymbol::withCString((char *)this);
  gBitWidthKey = OSSymbol::withCString((char *)this);
  gAlignmentKey = OSSymbol::withCString((char *)this);
  gByteOrderKey = OSSymbol::withCString((char *)this);
  gIsMixableKey = OSSymbol::withCString((char *)this);
  gDriverTagKey = OSSymbol::withCString((char *)this);
  gDirectionKey = (undefined *)OSSymbol::withCString((char *)this);
  gMinimumSampleRateKey = OSSymbol::withCString((char *)this);
  gMaximumSampleRateKey = OSSymbol::withCString((char *)this);
  return;
}



/* IOAudioStream::createFormatFromDictionary @ 0x110b4 */

/* IOAudioStream::createFormatFromDictionary(OSDictionary const*, _IOAudioStreamFormat*,
   _IOAudioStreamFormatExtension*) */

undefined **
IOAudioStream::createFormatFromDictionary
          (OSDictionary *param_1,_IOAudioStreamFormat *param_2,
          _IOAudioStreamFormatExtension *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  OSMetaClassBase *pOVar4;
  _IOAudioStreamFormat *p_Var5;
  undefined **ppuVar6;
  undefined **unaff_RSI;
  longlong *unaff_RDI;
  
  if (unaff_RDI == (longlong *)0x0) {
    ppuVar6 = (undefined **)0x0;
  }
  else {
    ppuVar6 = &createFormatFromDictionary(OSDictionary_const*,_IOAudioStreamFormat*,_IOAudioStreamFormatExtension*)
               ::staticFormat;
    if (unaff_RSI != (undefined **)0x0) {
      ppuVar6 = unaff_RSI;
    }
    p_Var5 = param_2;
    if (gNumChannelsKey == 0) {
      initKeys((IOAudioStream *)param_1);
    }
    ppuVar6[2] = (undefined *)0x0;
    ppuVar6[1] = (undefined *)0x0;
    *ppuVar6 = (undefined *)0x0;
    (**(code **)(*unaff_RDI + 0x1f8))();
    pOVar4 = (OSMetaClassBase *)PTR_metaClass_0001e020;
    plVar3 = (longlong *)
             OSMetaClassBase::safeMetaCast
                       ((OSMetaClassBase *)PTR_metaClass_0001e020,(OSMetaClass *)p_Var5);
    if (plVar3 != (longlong *)0x0) {
      pOVar4 = (OSMetaClassBase *)*plVar3;
      uVar2 = (**(code **)(pOVar4 + 0x148))();
      *(undefined4 *)ppuVar6 = uVar2;
    }
    (**(code **)(*unaff_RDI + 0x1f8))();
    plVar3 = (longlong *)OSMetaClassBase::safeMetaCast(pOVar4,(OSMetaClass *)p_Var5);
    if (plVar3 != (longlong *)0x0) {
      pOVar4 = (OSMetaClassBase *)*plVar3;
      uVar2 = (**(code **)(pOVar4 + 0x148))();
      *(undefined4 *)((longlong)ppuVar6 + 4) = uVar2;
    }
    (**(code **)(*unaff_RDI + 0x1f8))();
    plVar3 = (longlong *)OSMetaClassBase::safeMetaCast(pOVar4,(OSMetaClass *)p_Var5);
    if (plVar3 != (longlong *)0x0) {
      pOVar4 = (OSMetaClassBase *)*plVar3;
      uVar2 = (**(code **)(pOVar4 + 0x148))();
      *(undefined4 *)(ppuVar6 + 1) = uVar2;
    }
    (**(code **)(*unaff_RDI + 0x1f8))();
    plVar3 = (longlong *)OSMetaClassBase::safeMetaCast(pOVar4,(OSMetaClass *)p_Var5);
    if (plVar3 != (longlong *)0x0) {
      pOVar4 = (OSMetaClassBase *)*plVar3;
      uVar1 = (**(code **)(pOVar4 + 0x138))();
      *(undefined1 *)((longlong)ppuVar6 + 0xc) = uVar1;
    }
    (**(code **)(*unaff_RDI + 0x1f8))();
    plVar3 = (longlong *)OSMetaClassBase::safeMetaCast(pOVar4,(OSMetaClass *)p_Var5);
    if (plVar3 != (longlong *)0x0) {
      pOVar4 = (OSMetaClassBase *)*plVar3;
      uVar1 = (**(code **)(pOVar4 + 0x138))();
      *(undefined1 *)((longlong)ppuVar6 + 0xd) = uVar1;
    }
    (**(code **)(*unaff_RDI + 0x1f8))();
    plVar3 = (longlong *)OSMetaClassBase::safeMetaCast(pOVar4,(OSMetaClass *)p_Var5);
    if (plVar3 != (longlong *)0x0) {
      pOVar4 = (OSMetaClassBase *)*plVar3;
      uVar1 = (**(code **)(pOVar4 + 0x138))();
      *(undefined1 *)((longlong)ppuVar6 + 0xe) = uVar1;
    }
    (**(code **)(*unaff_RDI + 0x1f8))();
    plVar3 = (longlong *)OSMetaClassBase::safeMetaCast(pOVar4,(OSMetaClass *)p_Var5);
    if (plVar3 != (longlong *)0x0) {
      pOVar4 = (OSMetaClassBase *)*plVar3;
      uVar1 = (**(code **)(pOVar4 + 0x138))();
      *(undefined1 *)((longlong)ppuVar6 + 0xf) = uVar1;
    }
    (**(code **)(*unaff_RDI + 0x1f8))();
    plVar3 = (longlong *)OSMetaClassBase::safeMetaCast(pOVar4,(OSMetaClass *)p_Var5);
    if (plVar3 != (longlong *)0x0) {
      pOVar4 = (OSMetaClassBase *)*plVar3;
      uVar1 = (**(code **)(pOVar4 + 0x138))();
      *(undefined1 *)(ppuVar6 + 2) = uVar1;
    }
    (**(code **)(*unaff_RDI + 0x1f8))();
    plVar3 = (longlong *)OSMetaClassBase::safeMetaCast(pOVar4,(OSMetaClass *)p_Var5);
    if (plVar3 != (longlong *)0x0) {
      pOVar4 = (OSMetaClassBase *)*plVar3;
      uVar2 = (**(code **)(pOVar4 + 0x148))();
      *(undefined4 *)((longlong)ppuVar6 + 0x14) = uVar2;
    }
    if (param_2 != (_IOAudioStreamFormat *)0x0) {
      *(undefined4 *)param_2 = 1;
      (**(code **)(*unaff_RDI + 0x208))();
      plVar3 = (longlong *)OSMetaClassBase::safeMetaCast(pOVar4,(OSMetaClass *)p_Var5);
      if (plVar3 != (longlong *)0x0) {
        pOVar4 = (OSMetaClassBase *)*plVar3;
        uVar2 = (**(code **)(pOVar4 + 0x148))();
        *(undefined4 *)(param_2 + 4) = uVar2;
      }
      (**(code **)(*unaff_RDI + 0x208))();
      plVar3 = (longlong *)OSMetaClassBase::safeMetaCast(pOVar4,(OSMetaClass *)p_Var5);
      if (plVar3 != (longlong *)0x0) {
        pOVar4 = (OSMetaClassBase *)*plVar3;
        uVar2 = (**(code **)(pOVar4 + 0x148))();
        *(undefined4 *)(param_2 + 8) = uVar2;
      }
      (**(code **)(*unaff_RDI + 0x208))();
      plVar3 = (longlong *)OSMetaClassBase::safeMetaCast(pOVar4,(OSMetaClass *)p_Var5);
      if (plVar3 != (longlong *)0x0) {
        uVar2 = (**(code **)(*plVar3 + 0x148))();
        *(undefined4 *)(param_2 + 0xc) = uVar2;
      }
    }
  }
  return ppuVar6;
}



/* IOAudioStream::initWithAudioEngine @ 0x1137c */

/* IOAudioStream::initWithAudioEngine(IOAudioEngine*, _IOAudioStreamDirection, unsigned int, char
   const*, OSDictionary*) */

undefined8
IOAudioStream::initWithAudioEngine
          (IOAudioStream *param_1,
          _func_int_OSObject_ptr_void_ptr_void_ptr_void_ptr_void_ptr *param_2,longlong param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  OSObject *pOVar6;
  IOAudioStream *pIVar7;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  if (gNumChannelsKey == 0) {
    initKeys(param_1);
  }
  if ((unaff_RSI != 0) && (cVar1 = (**(code **)(PTR_vtable_0001e050 + 600))(), cVar1 != '\0')) {
    unaff_RDI[0x11] = unaff_RSI;
    lVar3 = _IOMallocTypeImpl();
    unaff_RDI[0x29] = lVar3;
    if (lVar3 != 0) {
      plVar4 = (longlong *)(**(code **)(*(longlong *)unaff_RDI[0x11] + 0x688))();
      unaff_RDI[0x12] = (longlong)plVar4;
      if (plVar4 != (longlong *)0x0) {
        pOVar6 = (OSObject *)*plVar4;
        (**(code **)(pOVar6 + 0x20))();
        lVar3 = IOCommandGate::commandGate(pOVar6,param_2);
        unaff_RDI[0x13] = lVar3;
        if (lVar3 == 0) {
          return 0;
        }
        lVar3 = _IORecursiveLockAlloc();
        unaff_RDI[0x14] = lVar3;
        if (lVar3 != 0) {
          (**(code **)(*unaff_RDI + 0xb08))();
          *(int *)((longlong)unaff_RDI + 0xdc) = (int)param_1;
          uVar5 = 0x20;
          (**(code **)(*unaff_RDI + 0x280))(0x20,(ulonglong)param_1 & 0xffffffff);
          *(undefined4 *)(unaff_RDI + 0x1c) = 0;
          if (param_3 != 0) {
            (**(code **)(*unaff_RDI + 0x270))();
          }
          lVar3 = OSArray::withCapacity(uVar5);
          unaff_RDI[0x1a] = lVar3;
          if (lVar3 == 0) {
            return 0;
          }
          pIVar7 = (IOAudioStream *)*unaff_RDI;
          (**(code **)(pIVar7 + 0x268))(pIVar7,lVar3);
          uVar2 = IOAudioEngine::getNextStreamID(pIVar7);
          (**(code **)(*unaff_RDI + 0x280))(0x20,uVar2);
          *(undefined1 *)((longlong)unaff_RDI + 0x114) = 1;
          (**(code **)(*unaff_RDI + 0x280))(8,1);
          *(undefined4 *)(unaff_RDI + 0x15) = 0;
          (**(code **)(*unaff_RDI + 0xab8))();
          (**(code **)(*unaff_RDI + 0xae8))();
          unaff_RDI[0x26] = 0;
          unaff_RDI[0x27] = 0;
          unaff_RDI[0x28] = 0;
          unaff_RDI[0x21] = 0;
          *(undefined4 *)(unaff_RDI + 0x22) = 0;
          *(undefined1 *)((longlong)unaff_RDI + 0x104) = 0;
          (**(code **)(*(longlong *)unaff_RDI[0x12] + 0x140))();
          return 1;
        }
      }
    }
  }
  return 0;
}



/* IOAudioStream::free @ 0x1159c */

/* IOAudioStream::free() */

void IOAudioStream::free(void)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *unaff_RDI;
  ulonglong uVar5;
  longlong lVar6;
  
  if ((longlong *)unaff_RDI[0x1a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x1a] + 0x28))();
    unaff_RDI[0x1a] = 0;
  }
  if ((unaff_RDI[0x1f] != 0) && ((*(byte *)((longlong)unaff_RDI + 0x104) & 1) != 0)) {
    _IOFreeData();
    unaff_RDI[0x1f] = 0;
    *(undefined4 *)(unaff_RDI + 0x20) = 0;
  }
  if (unaff_RDI[0x23] != 0) {
    (**(code **)(*unaff_RDI + 0xaa0))();
    (**(code **)(*(longlong *)unaff_RDI[0x23] + 0x28))();
    unaff_RDI[0x23] = 0;
  }
  plVar4 = (longlong *)unaff_RDI[0x13];
  if (plVar4 != (longlong *)0x0) {
    if ((longlong *)unaff_RDI[0x12] != (longlong *)0x0) {
      (**(code **)(*(longlong *)unaff_RDI[0x12] + 0x148))();
      plVar4 = (longlong *)unaff_RDI[0x13];
    }
    (**(code **)(*plVar4 + 0x28))();
    unaff_RDI[0x13] = 0;
  }
  if ((longlong *)unaff_RDI[0x12] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x12] + 0x28))();
    unaff_RDI[0x12] = 0;
  }
  if (unaff_RDI[0x14] != 0) {
    _IORecursiveLockFree();
    unaff_RDI[0x14] = 0;
  }
  if ((unaff_RDI[0x21] != 0) && ((int)unaff_RDI[0x22] != 0)) {
    unaff_RDI[0x21] = 0;
    _IOFreeTypeVarImpl();
    unaff_RDI[0x21] = 0;
    *(undefined4 *)(unaff_RDI + 0x22) = 0;
  }
  if (unaff_RDI[0x19] != 0) {
    uVar2 = *(uint *)(unaff_RDI + 0x1b);
    if (uVar2 != 0) {
      lVar6 = 0x28;
      uVar5 = 0;
      do {
        lVar1 = unaff_RDI[0x19];
        if ((*(longlong *)(lVar1 + lVar6) != 0) &&
           (uVar3 = (ulonglong)*(uint *)(lVar1 + 8 + lVar6), uVar3 != 0)) {
          *(undefined8 *)(lVar1 + lVar6) = 0;
          _IOFreeTypeVarImpl(lVar1,uVar3 << 3);
          uVar2 = *(uint *)(unaff_RDI + 0x1b);
        }
        uVar5 = uVar5 + 1;
        uVar3 = (ulonglong)uVar2;
        lVar6 = lVar6 + 0x48;
      } while (uVar5 < uVar3);
      unaff_RDI[0x19] = 0;
      _IOFreeTypeVarImpl(uVar3 * 8,uVar3 * 0x48);
      unaff_RDI[0x19] = 0;
      *(undefined4 *)(unaff_RDI + 0x1b) = 0;
    }
  }
  if (unaff_RDI[0x29] != 0) {
    unaff_RDI[0x29] = 0;
    _IOFreeTypeImpl();
  }
                    /* WARNING: Could not recover jumptable at 0x000117ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_vtable_0001e050 + 0xa0))();
  return;
}



/* IOAudioStream::stop @ 0x117c0 */

/* IOAudioStream::stop(IOService*) */

void IOAudioStream::stop(IOService *param_1)

{
  longlong *plVar1;
  longlong unaff_RDI;
  
  plVar1 = *(longlong **)(unaff_RDI + 0x98);
  if (plVar1 != (longlong *)0x0) {
    if (*(longlong **)(unaff_RDI + 0x90) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x148))();
      plVar1 = *(longlong **)(unaff_RDI + 0x98);
    }
    (**(code **)(*plVar1 + 0x28))();
    *(undefined8 *)(unaff_RDI + 0x98) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001181a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_vtable_0001e050 + 0x5d8))();
  return;
}



/* IOAudioStream::getWorkLoop @ 0x11820 */

/* IOAudioStream::getWorkLoop() const */

undefined8 IOAudioStream::getWorkLoop(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(unaff_RDI + 0x90);
}



/* IOAudioStream::setProperties @ 0x1182e */

/* IOAudioStream::setProperties(OSObject*) */

undefined4 IOAudioStream::setProperties(OSObject *param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  OSMetaClassBase *pOVar7;
  char *pcVar8;
  OSMetaClassBase *pOVar9;
  OSMetaClass *pOVar10;
  longlong unaff_RSI;
  OSMetaClass *unaff_RDI;
  
  pcVar8 = "+ IOAudioStream[%p]::setProperties(%p)\n";
  pOVar10 = (OSMetaClass *)0x0;
  __os_log_internal();
  uVar2 = 0xe00002c2;
  if ((unaff_RSI != 0) &&
     (plVar3 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)pcVar8,pOVar10),
     plVar3 != (longlong *)0x0)) {
    plVar4 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)pcVar8);
    if (plVar4 == (longlong *)0x0) {
      uVar2 = 0xe00002bc;
    }
    else {
      lVar5 = (**(code **)(*plVar4 + 0x128))();
      if (lVar5 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        pOVar9 = (OSMetaClassBase *)PTR_metaClass_0001e030;
        do {
          plVar6 = (longlong *)OSMetaClassBase::safeMetaCast(pOVar9,pOVar10);
          if ((plVar6 != (longlong *)0x0) &&
             (cVar1 = (**(code **)(*plVar6 + 0x158))(), cVar1 != '\0')) {
            (**(code **)(*plVar3 + 0x1f8))();
            pOVar7 = (OSMetaClassBase *)OSMetaClassBase::safeMetaCast(pOVar9,pOVar10);
            if (pOVar7 != (OSMetaClassBase *)0x0) {
              pOVar10 = unaff_RDI;
              uVar2 = (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x1a0))(pOVar7,unaff_RDI,0,0)
              ;
              pOVar9 = pOVar7;
            }
          }
          lVar5 = (**(code **)(*plVar4 + 0x128))();
        } while (lVar5 != 0);
      }
      (**(code **)(*plVar4 + 0x28))();
    }
  }
  __os_log_internal("- IOAudioStream[%p]::setProperties(%p) returns 0x%lX\n",0,unaff_RDI,unaff_RSI);
  return uVar2;
}



/* IOAudioStream::_setFormatAction @ 0x119c4 */

/* IOAudioStream::_setFormatAction(OSObject*, void*, void*, void*, void*) */

undefined8
IOAudioStream::_setFormatAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  longlong lVar1;
  longlong unaff_RDI;
  undefined8 uVar2;
  
  uVar2 = 0xe00002c2;
  if (unaff_RDI != 0) {
    lVar1 = OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,param_2);
    if (lVar1 != 0) {
      if (*(longlong **)(lVar1 + 0x98) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00011a31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(**(longlong **)(lVar1 + 0x98) + 0x1c8))(param_2);
        return uVar2;
      }
      uVar2 = 0xe00002bc;
    }
  }
  return uVar2;
}



/* IOAudioStream::setDirection @ 0x11a4c */

/* IOAudioStream::setDirection(_IOAudioStreamDirection) */

void IOAudioStream::setDirection(void)

{
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  
  *(undefined4 *)((longlong)unaff_RDI + 0xac) = unaff_ESI;
                    /* WARNING: Could not recover jumptable at 0x00011a6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x280))(8,unaff_ESI);
  return;
}



/* IOAudioStream::getDirection @ 0x11a72 */

/* IOAudioStream::getDirection() */

undefined4 IOAudioStream::getDirection(void)

{
  longlong unaff_RDI;
  
  return *(undefined4 *)(unaff_RDI + 0xac);
}



/* IOAudioStream::setSampleBuffer @ 0x11a7e */

/* IOAudioStream::setSampleBuffer(void*, unsigned int) */

void IOAudioStream::setSampleBuffer(void *param_1,uint param_2)

{
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0xaa8))();
  unaff_RDI[0x1d] = unaff_RSI;
  if (unaff_RSI == 0) {
    *(undefined4 *)(unaff_RDI + 0x1e) = 0;
  }
  else {
    *(uint *)(unaff_RDI + 0x1e) = param_2;
    ___bzero();
  }
                    /* WARNING: Could not recover jumptable at 0x00011ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0xab0))();
  return;
}



/* IOAudioStream::getSampleBuffer @ 0x11ada */

/* IOAudioStream::getSampleBuffer() */

undefined8 IOAudioStream::getSampleBuffer(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(unaff_RDI + 0xe8);
}



/* IOAudioStream::getSampleBufferSize @ 0x11ae8 */

/* IOAudioStream::getSampleBufferSize() */

undefined4 IOAudioStream::getSampleBufferSize(void)

{
  longlong unaff_RDI;
  
  return *(undefined4 *)(unaff_RDI + 0xf0);
}



/* IOAudioStream::setMixBuffer @ 0x11af4 */

/* IOAudioStream::setMixBuffer(void*, unsigned int) */

void IOAudioStream::setMixBuffer(void *param_1,uint param_2)

{
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0xaa8))();
  if ((unaff_RDI[0x1f] != 0) && ((*(byte *)((longlong)unaff_RDI + 0x104) & 1) != 0)) {
    _IOFreeData();
    *(undefined1 *)((longlong)unaff_RDI + 0x104) = 0;
  }
  unaff_RDI[0x1f] = unaff_RSI;
  if (unaff_RSI == 0) {
    *(undefined4 *)(unaff_RDI + 0x20) = 0;
  }
  else {
    *(uint *)(unaff_RDI + 0x20) = param_2;
    ___bzero();
  }
                    /* WARNING: Could not recover jumptable at 0x00011b71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0xab0))();
  return;
}



/* IOAudioStream::getMixBuffer @ 0x11b78 */

/* IOAudioStream::getMixBuffer() */

undefined8 IOAudioStream::getMixBuffer(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(unaff_RDI + 0xf8);
}



/* IOAudioStream::getMixBufferSize @ 0x11b86 */

/* IOAudioStream::getMixBufferSize() */

undefined4 IOAudioStream::getMixBufferSize(void)

{
  longlong unaff_RDI;
  
  return *(undefined4 *)(unaff_RDI + 0x100);
}



/* IOAudioStream::numSampleFramesPerBufferChanged @ 0x11b92 */

/* IOAudioStream::numSampleFramesPerBufferChanged() */

void __thiscall IOAudioStream::numSampleFramesPerBufferChanged(IOAudioStream *this)

{
  longlong *unaff_RDI;
  
  if ((unaff_RDI[0x1f] != 0) && ((*(byte *)((longlong)unaff_RDI + 0x104) & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00011bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_RDI + 0x9f8))(this,0);
    return;
  }
  return;
}



/* IOAudioStream::clearSampleBuffer @ 0x11bbc */

/* IOAudioStream::clearSampleBuffer() */

void IOAudioStream::clearSampleBuffer(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0xaa8))();
  if ((unaff_RDI[0x1d] != 0) && ((int)unaff_RDI[0x1e] != 0)) {
    ___bzero();
  }
  if ((unaff_RDI[0x1f] != 0) && ((int)unaff_RDI[0x20] != 0)) {
    ___bzero();
  }
                    /* WARNING: Could not recover jumptable at 0x00011c12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0xab0))();
  return;
}



/* IOAudioStream::setIOFunction @ 0x11c18 */

/* IOAudioStream::setIOFunction(int (*)(void const*, void*, unsigned int, unsigned int,
   _IOAudioStreamFormat const*, IOAudioStream*)) */

void IOAudioStream::setIOFunction
               (_func_int_void_ptr_void_ptr_uint_uint__IOAudioStreamFormat_ptr_IOAudioStream_ptr
                *param_1)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0xa28))(*unaff_RDI,1);
  return;
}



/* IOAudioStream::setIOFunctionList @ 0x11c3e */

/* IOAudioStream::setIOFunctionList(int (* const*)(void const*, void*, unsigned int, unsigned int,
   _IOAudioStreamFormat const*, IOAudioStream*), unsigned int) */

void __thiscall
IOAudioStream::setIOFunctionList
          (IOAudioStream *this,
          _func_int_void_ptr_void_ptr_uint_uint__IOAudioStreamFormat_ptr_IOAudioStream_ptr *param_1,
          uint param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined7 uVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  int iVar4;
  
  uVar3 = (undefined7)((ulonglong)this >> 8);
  (**(code **)(*unaff_RDI + 0xaa8))((char)this);
  if ((unaff_RDI[0x21] != 0) && ((int)unaff_RDI[0x22] != 0)) {
    unaff_RDI[0x21] = 0;
    _IOFreeTypeVarImpl();
    unaff_RDI[0x21] = 0;
    *(undefined4 *)(unaff_RDI + 0x22) = 0;
  }
  iVar4 = (int)param_1;
  uVar2 = iVar4 == 0 || unaff_RSI == 0;
  if (iVar4 != 0 && unaff_RSI != 0) {
    lVar1 = _IOMallocTypeVarImpl();
    unaff_RDI[0x21] = lVar1;
    if (lVar1 != 0) {
      _memmove((void *)CONCAT71(uVar3,uVar2),(void *)(((ulonglong)param_1 & 0xffffffff) << 3),
               param_2);
      *(int *)(unaff_RDI + 0x22) = iVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00011cf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0xab0))();
  return;
}



/* IOAudioStream::getFormat @ 0x11cf8 */

/* IOAudioStream::getFormat() */

longlong IOAudioStream::getFormat(void)

{
  longlong unaff_RDI;
  
  return unaff_RDI + 0xb0;
}



/* IOAudioStream::setFormatAction @ 0x11d06 */

/* IOAudioStream::setFormatAction(OSObject*, void*, void*, void*, void*) */

undefined8
IOAudioStream::setFormatAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  
  if (unaff_RDI != 0) {
    plVar1 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,param_2);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00011d3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0xa40))(*(code **)(*plVar1 + 0xa40));
      return uVar2;
    }
  }
  return 0xe00002c2;
}



/* IOAudioStream::setFormat @ 0x11d4a */

/* IOAudioStream::setFormat(_IOAudioStreamFormat const*, bool) */

void IOAudioStream::setFormat(_IOAudioStreamFormat *param_1,bool param_2)

{
  undefined7 in_register_00000011;
  longlong *unaff_RDI;
  
                    /* WARNING: Could not recover jumptable at 0x00011d5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x858))(CONCAT71(in_register_00000011,param_2) & 0xffffffff,0);
  return;
}



/* IOAudioStream::setFormat @ 0x11d60 */

/* IOAudioStream::setFormat(OSDictionary*) */

undefined8 IOAudioStream::setFormat(OSDictionary *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  _IOAudioStreamFormatExtension *in_R8;
  undefined8 local_28;
  undefined8 local_20;
  
  if (unaff_RSI != 0) {
    local_20 = 0;
    local_28 = 0;
    lVar1 = createFormatFromDictionary(param_1,(_IOAudioStreamFormat *)&local_28,in_R8);
    if (lVar1 == 0) {
      uVar2 = 0xe00002c2;
    }
    else {
      uVar2 = (**(code **)(*unaff_RDI + 0x860))();
    }
    return uVar2;
  }
  return 0xe00002c2;
}



/* IOAudioStream::setFormat @ 0x11dd2 */

/* IOAudioStream::setFormat(_IOAudioStreamFormat const*, OSDictionary*, bool) */

void IOAudioStream::setFormat(_IOAudioStreamFormat *param_1,OSDictionary *param_2,bool param_3)

{
  longlong *unaff_RDI;
  
                    /* WARNING: Could not recover jumptable at 0x00011de9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x860))(param_2,0,(ulonglong)param_1 & 0xffffffff);
  return;
}



/* IOAudioStream::hardwareFormatChanged @ 0x11dec */

/* IOAudioStream::hardwareFormatChanged(_IOAudioStreamFormat const*) */

void IOAudioStream::hardwareFormatChanged(_IOAudioStreamFormat *param_1)

{
  longlong *unaff_RDI;
  
                    /* WARNING: Could not recover jumptable at 0x00011e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x858))(0,unaff_RDI[0x29]);
  return;
}



/* IOAudioStream::addAvailableFormat @ 0x11e06 */

/* IOAudioStream::addAvailableFormat(_IOAudioStreamFormat const*, _IOAudioSampleRate const*,
   _IOAudioSampleRate const*, int (*)(void const*, void*, unsigned int, unsigned int,
   _IOAudioStreamFormat const*, IOAudioStream*)) */

void IOAudioStream::addAvailableFormat
               (_IOAudioStreamFormat *param_1,_IOAudioSampleRate *param_2,
               _IOAudioSampleRate *param_3,
               _func_int_void_ptr_void_ptr_uint_uint__IOAudioStreamFormat_ptr_IOAudioStream_ptr
               *param_4)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x868))(param_2,0,param_1);
  return;
}



/* IOAudioStream::addAvailableFormat @ 0x11e38 */

/* IOAudioStream::addAvailableFormat(_IOAudioStreamFormat const*, _IOAudioSampleRate const*,
   _IOAudioSampleRate const*, int (* const*)(void const*, void*, unsigned int, unsigned int,
   _IOAudioStreamFormat const*, IOAudioStream*), unsigned int) */

void IOAudioStream::addAvailableFormat
               (_IOAudioStreamFormat *param_1,_IOAudioSampleRate *param_2,
               _IOAudioSampleRate *param_3,
               _func_int_void_ptr_void_ptr_uint_uint__IOAudioStreamFormat_ptr_IOAudioStream_ptr
               *param_4,uint param_5)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x868))(param_2,0,param_1,param_3);
  return;
}



/* IOAudioStream::clearAvailableFormats @ 0x11e62 */

/* IOAudioStream::clearAvailableFormats() */

void __thiscall IOAudioStream::clearAvailableFormats(IOAudioStream *this)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *unaff_RDI;
  
  plVar1 = (longlong *)unaff_RDI[0x1a];
  lVar2 = OSArray::withCapacity((uint)this);
  if (lVar2 != 0) {
    unaff_RDI[0x1a] = lVar2;
    (**(code **)(*unaff_RDI + 0x268))(*unaff_RDI,lVar2);
    (**(code **)(*plVar1 + 0x28))();
    if ((unaff_RDI[0x19] != 0) && ((int)unaff_RDI[0x1b] != 0)) {
      unaff_RDI[0x19] = 0;
      _IOFreeTypeVarImpl();
    }
    unaff_RDI[0x19] = 0;
    *(undefined4 *)(unaff_RDI + 0x1b) = 0;
  }
  return;
}



/* IOAudioStream::validateFormat @ 0x11ef8 */

/* IOAudioStream::validateFormat(_IOAudioStreamFormat*, IOAudioStreamFormatDesc*) */

void IOAudioStream::validateFormat(_IOAudioStreamFormat *param_1,IOAudioStreamFormatDesc *param_2)

{
  longlong *unaff_RDI;
  
                    /* WARNING: Could not recover jumptable at 0x00011f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x878))(param_2,0);
  return;
}



/* IOAudioStream::getStartingChannelID @ 0x11f0e */

/* IOAudioStream::getStartingChannelID() */

undefined4 IOAudioStream::getStartingChannelID(void)

{
  longlong unaff_RDI;
  
  return *(undefined4 *)(unaff_RDI + 0xdc);
}



/* IOAudioStream::getMaxNumChannels @ 0x11f1a */

/* IOAudioStream::getMaxNumChannels() */

undefined4 IOAudioStream::getMaxNumChannels(void)

{
  longlong unaff_RDI;
  
  return *(undefined4 *)(unaff_RDI + 0xe0);
}



/* IOAudioStream::setStartingChannelNumber @ 0x11f26 */

/* IOAudioStream::setStartingChannelNumber(unsigned int) */

void IOAudioStream::setStartingChannelNumber(uint param_1)

{
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  
                    /* WARNING: Could not recover jumptable at 0x00011f43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x280))(0x20,unaff_ESI);
  return;
}



/* IOAudioStream::updateNumClients @ 0x11f46 */

/* IOAudioStream::updateNumClients() */

void IOAudioStream::updateNumClients(void)

{
  longlong *unaff_RDI;
  
                    /* WARNING: Could not recover jumptable at 0x00011f67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x280))(0x20,(int)unaff_RDI[0x15]);
  return;
}



/* IOAudioStream::addClient @ 0x11f6a */

/* IOAudioStream::addClient(IOAudioClientBuffer*) */

undefined4 IOAudioStream::addClient(IOAudioClientBuffer *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  __os_log_internal("+ IOAudioStream[%p]::addClient(%p)\n",0);
  if (unaff_RSI == 0) {
    uVar4 = 0xe00002c2;
    goto LAB_00012022;
  }
  (**(code **)(*unaff_RDI + 0xaa8))();
  lVar3 = *(longlong *)(unaff_RSI + 0x50);
  if (lVar3 == 0 && *(longlong *)(unaff_RSI + 0x48) == 0) {
    if (((unaff_RDI[0x26] == unaff_RSI) || (*(longlong *)(unaff_RSI + 0x58) != 0)) ||
       (lVar3 = unaff_RDI[0x28], lVar3 == unaff_RSI)) {
      lVar3 = 0;
      goto LAB_00011fd7;
    }
    if (lVar3 == 0) {
LAB_000120b0:
      if (((char)unaff_RDI[0x18] == '\0') && ((int)unaff_RDI[0x15] != 0)) {
        iVar2 = (**(code **)(*unaff_RDI + 0x9d8))();
        if (iVar2 != 1) {
          lVar3 = unaff_RDI[0x18];
          lVar1 = unaff_RDI[0x15];
          (**(code **)(*unaff_RDI + 0x9d8))();
          __os_log_internal("   clientBuffer invalid (%d, %d, %d).\n",0,(char)lVar3,(int)lVar1);
          uVar4 = 0xe00002c5;
          goto LAB_0001200e;
        }
      }
      *(int *)(unaff_RDI + 0x15) = (int)unaff_RDI[0x15] + 1;
      (**(code **)(*unaff_RDI + 0xab8))();
      *(longlong *)(unaff_RSI + 0x58) = unaff_RDI[0x28];
      unaff_RDI[0x28] = unaff_RSI;
      iVar2 = (**(code **)(*unaff_RDI + 0x9d8))();
      uVar4 = 0;
      if (iVar2 == 0) {
        uVar5 = 0;
        *(undefined8 *)(unaff_RSI + 0x38) = 0;
        *(undefined8 *)(unaff_RSI + 0x50) = 0;
        *(undefined8 *)(unaff_RSI + 0x48) = 0;
        uVar4 = 0;
        if (((unaff_RDI[0x1f] == 0) && (uVar4 = uVar5, (char)unaff_RDI[0x18] != '\0')) &&
           ((unaff_RDI[0x1d] != 0 &&
            (((int)unaff_RDI[0x1e] != 0 &&
             (uVar6 = (int)unaff_RDI[0x16] * *(int *)(unaff_RDI[0x11] + 0x88),
             (uVar6 & 0x3fffffff) != 0)))))) {
          lVar3 = _IOMallocData();
          if (lVar3 != 0) {
            (**(code **)(*unaff_RDI + 0x9f8))(*unaff_RDI,uVar6 * 4);
            *(undefined1 *)((longlong)unaff_RDI + 0x104) = 1;
          }
        }
      }
    }
    else {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x58);
        if (lVar3 == 0) break;
      } while (lVar3 != unaff_RSI);
      if (lVar3 == 0) goto LAB_000120b0;
      __os_log_internal("   clientBuffer %p is already in the list.\n",0,lVar3);
      uVar4 = 0;
    }
  }
  else {
LAB_00011fd7:
    __os_log_internal("   unexpected clientBuffer values (%p, %p, %p, %p, %p, %p)\n",0,
                      *(longlong *)(unaff_RSI + 0x48),lVar3);
    uVar4 = 0;
  }
LAB_0001200e:
  (**(code **)(*unaff_RDI + 0xab0))();
LAB_00012022:
  __os_log_internal("- IOAudioStream[%p]::addClient(%p) returns 0x%lX\n",0);
  return uVar4;
}



/* IOAudioStream::removeClient @ 0x1220e */

/* IOAudioStream::removeClient(IOAudioClientBuffer*) */

void IOAudioStream::removeClient(IOAudioClientBuffer *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  void *unaff_RBP;
  longlong unaff_RSI;
  longlong lVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  ulong unaff_R14D;
  void *unaff_R15;
  
  __os_log_internal("+ IOAudioStream[%p]::removeClient(%p)\n",0);
  if (unaff_RSI != 0) {
    (**(code **)(*unaff_RDI + 0xaa8))();
    plVar3 = unaff_RDI + 0x28;
    lVar1 = 0;
    do {
      lVar4 = lVar1;
      lVar1 = *plVar3;
      plVar3 = (longlong *)(lVar1 + 0x58);
      if (lVar1 == 0) break;
    } while (lVar1 != unaff_RSI);
    if (lVar1 != 0) {
      plVar5 = (longlong *)(lVar4 + 0x58);
      if (lVar4 == 0) {
        plVar5 = unaff_RDI + 0x28;
      }
      *plVar5 = *plVar3;
      *plVar3 = 0;
      *(int *)(unaff_RDI + 0x15) = (int)unaff_RDI[0x15] + -1;
      (**(code **)(*unaff_RDI + 0xab8))();
    }
    if (((*(longlong *)(unaff_RSI + 0x48) != 0) || (*(longlong *)(unaff_RSI + 0x50) != 0)) ||
       (unaff_RDI[0x26] == unaff_RSI)) {
      iVar2 = (**(code **)(*unaff_RDI + 0x9d8))();
      if (iVar2 == 0) {
        if ((int)unaff_RDI[0x15] == 0) {
          (**(code **)(*unaff_RDI + 0xae8))();
        }
        lVar1 = *(longlong *)(unaff_RSI + 0x48);
        lVar4 = *(longlong *)(unaff_RSI + 0x50);
        if (lVar4 != 0) {
          *(longlong *)(lVar4 + 0x48) = lVar1;
        }
        if (lVar1 != 0) {
          *(longlong *)(lVar1 + 0x50) = lVar4;
        }
        if (unaff_RDI[0x27] == unaff_RSI) {
          unaff_RDI[0x27] = *(longlong *)(unaff_RSI + 0x50);
        }
        if ((unaff_RDI[0x26] == unaff_RSI) && (unaff_RDI[0x26] = lVar1, lVar1 != 0)) {
          (**(code **)(*unaff_RDI + 0xaf0))();
        }
      }
    }
    *(undefined8 *)(unaff_RSI + 0x50) = 0;
    *(undefined8 *)(unaff_RSI + 0x48) = 0;
    *(undefined8 *)(unaff_RSI + 0x58) = 0;
    (**(code **)(*unaff_RDI + 0xab0))();
    safeLogError(0,0,0,0,unaff_R14D,unaff_R15,unaff_RBP);
  }
  __os_log_internal("- IOAudioStream[%p]::removeClient(%p)\n",0);
  return;
}



/* IOAudioStream::getNumClients @ 0x1239e */

/* IOAudioStream::getNumClients() */

undefined4 IOAudioStream::getNumClients(void)

{
  longlong unaff_RDI;
  
  return *(undefined4 *)(unaff_RDI + 0xa8);
}



/* dumpList @ 0x123aa */

/* dumpList(IOAudioClientBuffer*) */

void dumpList(IOAudioClientBuffer *param_1)

{
  longlong unaff_RDI;
  
  for (; unaff_RDI != 0; unaff_RDI = *(longlong *)(unaff_RDI + 0x48)) {
    __os_log_internal("  (%lx,%lx)\n",0,*(undefined4 *)(unaff_RDI + 0x3c),
                      *(undefined4 *)(unaff_RDI + 0x38));
  }
  return;
}



/* validateList @ 0x123fe */

/* validateList(IOAudioClientBuffer*) */

void validateList(IOAudioClientBuffer *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  longlong unaff_RDI;
  
  if (unaff_RDI != 0) {
    lVar2 = *(longlong *)(unaff_RDI + 0x48);
    while (lVar1 = lVar2, lVar1 != 0) {
      if ((*(uint *)(lVar1 + 0x3c) < *(uint *)(unaff_RDI + 0x3c)) ||
         ((*(uint *)(unaff_RDI + 0x3c) == *(uint *)(lVar1 + 0x3c) &&
          (*(uint *)(lVar1 + 0x38) < *(uint *)(unaff_RDI + 0x38))))) {
        pcVar3 = "+-IOAudioStream: ERROR - client buffer list not sorted!\n";
        __os_log_internal("+-IOAudioStream: ERROR - client buffer list not sorted!\n",0);
        dumpList((IOAudioClientBuffer *)pcVar3);
        return;
      }
      unaff_RDI = lVar1;
      lVar2 = *(longlong *)(lVar1 + 0x48);
    }
  }
  return;
}



/* IOAudioStream::readInputSamples @ 0x1246c */

/* IOAudioStream::readInputSamples(IOAudioClientBuffer*, unsigned int) */

undefined8 IOAudioStream::readInputSamples(IOAudioClientBuffer *param_1,uint param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong unaff_RSI;
  longlong unaff_RDI;
  int iVar6;
  ulonglong uVar7;
  int local_34;
  
  if (unaff_RSI == 0) {
    return 0xe00002c2;
  }
  uVar3 = (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0xb48))();
  local_34 = *(int *)(unaff_RSI + 0x30);
  iVar6 = 0;
  if (uVar3 < local_34 + param_2) {
    iVar6 = (param_2 - uVar3) + local_34;
  }
  if ((*(longlong *)(unaff_RDI + 0x108) == 0) || (uVar5 = *(uint *)(unaff_RDI + 0x110), uVar5 == 0))
  {
    local_34 = local_34 - iVar6;
    uVar4 = (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x898))
                      (param_2,*(undefined8 *)(unaff_RSI + 0x10),&local_34);
    *(int *)(*(longlong *)(unaff_RDI + 0x148) + 0x10) = local_34;
    if ((iVar6 != 0) && ((int)uVar4 == 0)) {
      uVar3 = (uVar3 - param_2) * *(int *)(unaff_RDI + 0xb0);
      if (*(char *)(unaff_RDI + 0xc0) == '\0') {
        uVar7 = (ulonglong)(uVar3 * (*(byte *)(unaff_RDI + 0xbd) >> 3));
      }
      else {
        uVar7 = (ulonglong)uVar3 * 4;
      }
      local_34 = iVar6;
      uVar4 = (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x898))
                        (0,*(longlong *)(unaff_RSI + 0x10) + uVar7,&local_34,unaff_RDI + 0xb0);
      piVar1 = (int *)(*(longlong *)(unaff_RDI + 0x148) + 0x10);
      *piVar1 = *piVar1 + local_34;
    }
  }
  else {
    uVar4 = 0xe00002bc;
    uVar7 = 0;
    do {
      pcVar2 = *(code **)(*(longlong *)(unaff_RDI + 0x108) + uVar7 * 8);
      if (pcVar2 != (code *)0x0) {
        uVar4 = (*pcVar2)(*(int *)(unaff_RSI + 0x30) - iVar6,param_2,unaff_RDI + 0xb0);
        if ((int)uVar4 != 0) break;
        uVar5 = *(uint *)(unaff_RDI + 0x110);
        uVar4 = 0;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
    if ((iVar6 != 0) && (uVar3 = *(uint *)(unaff_RDI + 0x110), uVar3 != 0)) {
      uVar7 = 0;
      do {
        pcVar2 = *(code **)(*(longlong *)(unaff_RDI + 0x108) + uVar7 * 8);
        if (pcVar2 != (code *)0x0) {
          uVar4 = (*pcVar2)(iVar6,0,unaff_RDI + 0xb0);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          uVar3 = *(uint *)(unaff_RDI + 0x110);
          uVar4 = 0;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar3);
    }
  }
  return uVar4;
}



/* IOAudioStream::processOutputSamples @ 0x12674 */

/* IOAudioStream::processOutputSamples(IOAudioClientBuffer*, unsigned int, unsigned int, bool) */

int IOAudioStream::processOutputSamples
              (IOAudioClientBuffer *param_1,uint param_2,uint param_3,bool param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong unaff_RSI;
  longlong *unaff_RDI;
  ulonglong *puVar13;
  undefined4 in_register_00000084;
  undefined7 in_register_00000089;
  uint uVar15;
  ulonglong uVar14;
  
  if (unaff_RSI == 0) {
    return -0x1ffffd3e;
  }
  uVar15 = (uint)param_1;
  if ((unaff_RDI[0x1f] == 0) && ((char)unaff_RDI[0x18] != '\0')) {
    __os_log_internal("IOAudioStream::processOutputSamples - Internal Error: No mix buffer\n",0x10,
                      CONCAT44(in_register_00000084,param_3),CONCAT71(in_register_00000089,param_4))
    ;
    _IOLog();
    return -0x1ffffd44;
  }
  uVar6 = (**(code **)(*(longlong *)unaff_RDI[0x11] + 0xb48))();
  uVar2 = *(uint *)(unaff_RSI + 0x3c);
  uVar10 = (ulonglong)uVar2;
  if (uVar2 == 0 && *(uint *)(unaff_RSI + 0x38) == 0) {
    *(uint *)(unaff_RSI + 0x38) = param_2;
LAB_0001271d:
    *(uint *)(unaff_RSI + 0x3c) = uVar15;
  }
  else {
    if (uVar2 != uVar15 || *(uint *)(unaff_RSI + 0x38) != param_2) {
      *(uint *)(unaff_RSI + 0x3c) = uVar15;
      *(uint *)(unaff_RSI + 0x38) = param_2;
    }
    uVar10 = unaff_RDI[0x27];
    if (uVar10 != 0 && uVar10 != unaff_RSI) {
      uVar2 = *(uint *)(uVar10 + 0x3c);
      if (uVar15 + 1 < uVar2) {
        uVar10 = (ulonglong)*(uint *)(uVar10 + 0x38);
      }
      else if ((uVar2 != uVar15 + 1) ||
              (puVar1 = (uint *)(uVar10 + 0x38), uVar10 = (ulonglong)*puVar1, *puVar1 <= param_2))
      goto LAB_00012721;
      uVar15 = uVar2 - ((uint)uVar10 < param_2);
      goto LAB_0001271d;
    }
  }
LAB_00012721:
  uVar2 = *(uint *)((longlong)unaff_RDI + 300);
  if ((uVar2 != 0) || ((int)unaff_RDI[0x25] != 0)) {
    if (uVar15 == uVar2) {
      if (param_2 < *(uint *)(unaff_RDI + 0x25)) {
LAB_00012791:
        (**(code **)(*(longlong *)unaff_RDI[0x11] + 0xad0))(uVar10,param_2);
        unaff_RDI[0x25] = *(longlong *)(unaff_RSI + 0x38);
      }
    }
    else if (uVar15 < uVar2) goto LAB_00012791;
  }
  iVar7 = *(int *)(unaff_RSI + 0x30);
  if ((byte)param_3 == 0) {
LAB_00012827:
    uVar15 = iVar7 + *(int *)(unaff_RSI + 0x38);
    *(uint *)(unaff_RSI + 0x38) = uVar15;
    iVar7 = 0;
    bVar5 = 1;
    if (uVar6 <= uVar15) {
      *(uint *)(unaff_RSI + 0x38) = uVar15 - uVar6;
      *(int *)(unaff_RSI + 0x3c) = *(int *)(unaff_RSI + 0x3c) + 1;
      uVar15 = uVar15 - uVar6;
    }
  }
  else {
    if (iVar7 == 0) {
      iVar7 = 0;
      goto LAB_00012827;
    }
    uVar2 = iVar7 + param_2;
    if (uVar2 < uVar6) {
      uVar15 = uVar2;
      if ((char)unaff_RDI[0x18] == '\0') goto LAB_000129fa;
      if ((int)unaff_RDI[0x15] == 1) {
        iVar7 = (**(code **)(*unaff_RDI + 0x888))(param_2,unaff_RDI[0x1f],iVar7);
      }
      else {
        iVar7 = (**(code **)(*(longlong *)unaff_RDI[0x11] + 0xac0))(param_2,unaff_RDI[0x1f],iVar7);
      }
LAB_000129aa:
      if (iVar7 == 0) goto LAB_000129fa;
      __os_log_internal("IOAudioStream::processOutputSamples - Error: 0x%lx returned from audioEngine->mixOutputSamples\n"
                        ,0x10,(longlong)iVar7);
      _IOLog();
    }
    else {
      if ((char)unaff_RDI[0x18] == '\0') {
        uVar15 = (param_2 - uVar6) + iVar7;
      }
      else {
        lVar9 = 0x888;
        plVar12 = unaff_RDI;
        if ((int)unaff_RDI[0x15] != 1) {
          plVar12 = (longlong *)unaff_RDI[0x11];
          lVar9 = 0xac0;
        }
        iVar8 = (**(code **)(*plVar12 + lVar9))(param_2,unaff_RDI[0x1f],uVar6 - param_2);
        if (iVar8 != 0) {
          _IOLog();
        }
        uVar15 = iVar7 - (uVar6 - param_2);
        if ((char)unaff_RDI[0x18] != '\0') {
          if ((int)unaff_RDI[0x15] == 1) {
            iVar7 = (**(code **)(*unaff_RDI + 0x888))(0,unaff_RDI[0x1f],uVar15,unaff_RDI + 0x16);
          }
          else {
            iVar7 = (**(code **)(*(longlong *)unaff_RDI[0x11] + 0xac0))
                              (0,unaff_RDI[0x1f],uVar15,unaff_RDI + 0x16);
          }
          goto LAB_000129aa;
        }
      }
LAB_000129fa:
      iVar8 = 0;
      iVar7 = 0;
      if ((*(int *)((longlong)unaff_RDI + 300) == 0) && ((int)unaff_RDI[0x25] == 0)) {
        uVar3 = *(uint *)((longlong)unaff_RDI + 0x124);
        iVar7 = iVar8;
        if (uVar3 == 0) {
          uVar11 = *(uint *)(unaff_RSI + 0x3c);
          if ((int)unaff_RDI[0x24] != 0) goto LAB_00012a2c;
        }
        else {
          uVar11 = *(uint *)(unaff_RSI + 0x3c);
LAB_00012a2c:
          if ((uVar3 <= uVar11) &&
             ((uVar11 != uVar3 || (uVar11 = uVar3, *(uint *)(unaff_RDI + 0x24) <= param_2))))
          goto LAB_00012a4c;
        }
        *(uint *)((longlong)unaff_RDI + 0x124) = uVar11;
        *(uint *)(unaff_RDI + 0x24) = param_2;
      }
    }
LAB_00012a4c:
    if (uVar6 <= uVar2) {
      *(int *)(unaff_RSI + 0x3c) = *(int *)(unaff_RSI + 0x3c) + 1;
    }
    *(uint *)(unaff_RSI + 0x38) = uVar15;
    bVar5 = 0;
  }
  lVar9 = *(longlong *)(unaff_RSI + 0x48);
  uVar10 = unaff_RSI;
  if (((lVar9 == 0) && (*(longlong *)(unaff_RSI + 0x50) == 0)) &&
     (uVar14 = unaff_RDI[0x26], uVar14 != unaff_RSI)) {
    if (uVar14 == 0) {
      *(undefined8 *)(unaff_RSI + 0x48) = 0;
      unaff_RDI[0x26] = unaff_RSI;
      goto LAB_00012b42;
    }
    uVar10 = uVar14;
    if ((*(uint *)(uVar14 + 0x3c) < *(uint *)(unaff_RSI + 0x3c)) ||
       ((*(uint *)(unaff_RSI + 0x3c) == *(uint *)(uVar14 + 0x3c) &&
        (*(uint *)(uVar14 + 0x38) < uVar15)))) goto LAB_00012a75;
    *(ulonglong *)(unaff_RSI + 0x48) = uVar14;
    unaff_RDI[0x26] = unaff_RSI;
LAB_00012afb:
    puVar13 = (ulonglong *)(uVar14 + 0x50);
  }
  else {
LAB_00012a75:
    if (*(ulonglong *)(uVar10 + 0x48) != 0) {
      uVar14 = *(ulonglong *)(uVar10 + 0x48);
      do {
        if ((*(uint *)(unaff_RSI + 0x3c) <= *(uint *)(uVar14 + 0x3c)) &&
           ((*(uint *)(unaff_RSI + 0x3c) != *(uint *)(uVar14 + 0x3c) ||
            (uVar15 <= *(uint *)(uVar14 + 0x38))))) break;
        puVar13 = (ulonglong *)(uVar14 + 0x48);
        uVar10 = uVar14;
        uVar14 = *puVar13;
      } while (*puVar13 != 0);
    }
    if (uVar10 == unaff_RSI) goto LAB_00012b4c;
    lVar4 = *(longlong *)(unaff_RSI + 0x50);
    if (lVar4 == 0) {
      if (unaff_RDI[0x26] == unaff_RSI) {
        unaff_RDI[0x26] = lVar9;
      }
    }
    else {
      *(longlong *)(lVar4 + 0x48) = lVar9;
      lVar9 = *(longlong *)(unaff_RSI + 0x48);
    }
    if (lVar9 == 0) {
      if (unaff_RDI[0x27] == unaff_RSI) {
        plVar12 = unaff_RDI + 0x27;
        goto LAB_00012ad4;
      }
    }
    else {
      plVar12 = (longlong *)(lVar9 + 0x50);
LAB_00012ad4:
      *plVar12 = lVar4;
    }
    *(undefined8 *)(unaff_RSI + 0x48) = *(undefined8 *)(uVar10 + 0x48);
    *(ulonglong *)(unaff_RSI + 0x50) = uVar10;
    *(ulonglong *)(uVar10 + 0x48) = unaff_RSI;
    uVar14 = *(ulonglong *)(unaff_RSI + 0x48);
    if (uVar14 != 0) goto LAB_00012afb;
LAB_00012b42:
    puVar13 = (ulonglong *)(unaff_RDI + 0x27);
  }
  *puVar13 = unaff_RSI;
LAB_00012b4c:
  if (((byte)param_3 & bVar5) == 0) {
    if ((char)unaff_RDI[0x18] == '\0') {
      unaff_RDI[0x1f] = *(longlong *)(unaff_RSI + 0x10);
    }
    *(undefined4 *)(unaff_RDI[0x29] + 0x14) = 0;
    (**(code **)(*unaff_RDI + 0xaf0))();
    if ((char)unaff_RDI[0x18] == '\0') {
      unaff_RDI[0x1f] = 0;
    }
    iVar7 = *(int *)(unaff_RDI[0x29] + 0x14);
  }
  return iVar7;
}



/* IOAudioStream::resetClipInfo @ 0x12bcc */

/* IOAudioStream::resetClipInfo() */

void IOAudioStream::resetClipInfo(void)

{
  longlong unaff_RDI;
  
  *(undefined8 *)(unaff_RDI + 0x124) = 0;
  *(undefined4 *)(unaff_RDI + 0x120) = 0;
  *(undefined4 *)(unaff_RDI + 300) = 0;
  return;
}



/* IOAudioStream::clipIfNecessary @ 0x12bec */

/* IOAudioStream::clipIfNecessary() */

void IOAudioStream::clipIfNecessary(void)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong *unaff_RDI;
  
  lVar4 = unaff_RDI[0x26];
  if (lVar4 == 0) {
    return;
  }
  uVar5 = *(uint *)(lVar4 + 0x3c);
  if ((uVar5 == 0) && (*(int *)(lVar4 + 0x38) == 0)) {
    return;
  }
  iVar3 = *(int *)((longlong)unaff_RDI + 300);
  if ((iVar3 == 0) && (iVar3 = 0, (int)unaff_RDI[0x25] == 0)) {
    unaff_RDI[0x25] = unaff_RDI[0x24];
    uVar5 = *(uint *)(lVar4 + 0x3c);
    iVar3 = (int)((ulonglong)unaff_RDI[0x24] >> 0x20);
  }
  if (uVar5 == iVar3 + 1U) {
    uVar5 = *(uint *)(unaff_RDI + 0x25);
    if (uVar5 <= *(uint *)(lVar4 + 0x38)) {
LAB_00012c64:
      lVar2 = unaff_RDI[0x29];
      if (lVar2 != 0) {
        *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
        *(undefined1 *)(lVar2 + 0x30) = 1;
        __os_log_internal("+-IOAudioStream[%p]:: clipIfNecessary() - Error: attempting to clip to a position more than one buffer ahead of last clip position (%lx,%lx)->(%lx,%lx).\n"
                          ,0);
        lVar4 = unaff_RDI[0x26];
        uVar5 = *(uint *)(unaff_RDI + 0x25);
      }
      iVar3 = *(int *)(lVar4 + 0x3c) - (uint)(*(uint *)(lVar4 + 0x38) < uVar5);
      *(int *)((longlong)unaff_RDI + 300) = iVar3;
      lVar2 = unaff_RDI[0x29];
      if (lVar2 != 0) {
        *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
        *(undefined1 *)(lVar2 + 0x30) = 1;
        __os_log_internal("+-IOAudioStream[%p]::safeLogError clipIfNecessary() - adjusting clipped position to (%lx,%lx)\n"
                          ,0);
        lVar4 = unaff_RDI[0x26];
        iVar3 = *(int *)((longlong)unaff_RDI + 300);
      }
    }
  }
  else if (iVar3 + 1U < uVar5) {
    uVar5 = *(uint *)(unaff_RDI + 0x25);
    goto LAB_00012c64;
  }
  if ((*(int *)(lVar4 + 0x3c) + 1 == iVar3) &&
     (uVar5 = *(uint *)(lVar4 + 0x30), iVar3 = (**(code **)(*(longlong *)unaff_RDI[0x11] + 0xb48))()
     , uVar5 < (uint)(iVar3 - (int)unaff_RDI[0x25]))) {
    *(undefined4 *)(unaff_RDI[0x26] + 0x3c) = *(undefined4 *)((longlong)unaff_RDI + 300);
    (**(code **)(*(longlong *)unaff_RDI[0x11] + 0xb48))();
    lVar4 = unaff_RDI[0x29];
    if (lVar4 != 0) {
      *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + 1;
      *(undefined1 *)(lVar4 + 0x30) = 1;
      __os_log_internal("+-IOAudioStream[%p]:: clipIfNecessary() - clip position is off %ld < %ld - %ld \n"
                        ,0);
    }
  }
  if (*(int *)(unaff_RDI[0x26] + 0x3c) == *(int *)((longlong)unaff_RDI + 300)) {
    uVar5 = *(uint *)(unaff_RDI[0x26] + 0x38);
    uVar1 = *(uint *)(unaff_RDI + 0x25);
    if (uVar1 < uVar5) {
      if (((char)unaff_RDI[0x18] == '\0') && (0x7fb < uVar5 - uVar1)) {
        *(undefined4 *)(unaff_RDI[0x29] + 0x14) = 0xe00002e8;
      }
      else {
        (**(code **)(*unaff_RDI + 0xaf8))();
      }
      *(undefined4 *)(unaff_RDI + 0x25) = *(undefined4 *)(unaff_RDI[0x26] + 0x38);
      return;
    }
    if (uVar1 <= uVar5) {
      return;
    }
    lVar4 = unaff_RDI[0x29];
    if (lVar4 == 0) {
      return;
    }
    *(int *)(lVar4 + 0x24) = *(int *)(lVar4 + 0x24) + 1;
    *(undefined1 *)(lVar4 + 0x30) = 1;
    __os_log_internal("+-IOAudioStream[%p]::safeLogError clipIfNecessary() - Error: already clipped to a position (0x%lx,0x%lx) past data to be clipped (0x%lx, 0x%lx) - data ignored.\n"
                      ,0);
    return;
  }
  iVar3 = (**(code **)(*(longlong *)unaff_RDI[0x11] + 0xb48))();
  if (((char)unaff_RDI[0x18] == '\0') && (0x7fb < (uint)(iVar3 - (int)unaff_RDI[0x25]))) {
    *(undefined4 *)(unaff_RDI[0x29] + 0x14) = 0xe00002e8;
  }
  else {
    (**(code **)(*unaff_RDI + 0xaf8))();
  }
  if ((char)unaff_RDI[0x18] == '\0') {
    iVar3 = iVar3 - (int)unaff_RDI[0x25];
    if (0x7fb < (uint)(*(int *)(unaff_RDI[0x26] + 0x38) + iVar3)) {
      *(undefined4 *)(unaff_RDI[0x29] + 0x14) = 0xe00002e8;
      goto LAB_00012f17;
    }
    unaff_RDI[0x1f] =
         unaff_RDI[0x1f] +
         (ulonglong)
         ((uint)(*(byte *)((longlong)unaff_RDI + 0xbd) >> 3) * iVar3 * (int)unaff_RDI[0x16]);
    lVar4 = *unaff_RDI;
  }
  else {
    lVar4 = *unaff_RDI;
  }
  (**(code **)(lVar4 + 0xaf8))();
LAB_00012f17:
  unaff_RDI[0x25] = *(longlong *)(unaff_RDI[0x26] + 0x38);
  return;
}



/* IOAudioStream::clipOutputSamples @ 0x12f64 */

/* IOAudioStream::clipOutputSamples(unsigned int, unsigned int) */

void IOAudioStream::clipOutputSamples(uint param_1,uint param_2)

{
  code *pcVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_ESI;
  longlong unaff_RDI;
  ulonglong uVar5;
  
  if ((*(longlong *)(unaff_RDI + 0xf8) == 0) || (*(longlong *)(unaff_RDI + 0xe8) == 0)) {
    lVar2 = *(longlong *)(unaff_RDI + 0x148);
    if (lVar2 == 0) {
      return;
    }
    *(int *)(lVar2 + 0x28) = *(int *)(lVar2 + 0x28) + 1;
    *(undefined1 *)(lVar2 + 0x30) = 1;
    __os_log_internal("+-IOAudioStream[%p]::safeLogError clipOutputSamples(0x%lx, 0x%lx) - Internal Error: mixBuffer = %p - sampleBuffer = %p\n"
                      ,0);
    return;
  }
  if ((*(longlong *)(unaff_RDI + 0x108) == 0) || (uVar3 = *(uint *)(unaff_RDI + 0x110), uVar3 == 0))
  {
    iVar4 = (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0xac8))
                      (unaff_ESI,*(longlong *)(unaff_RDI + 0xe8),param_2,unaff_RDI + 0xb0);
    if (iVar4 != 0) {
LAB_00013089:
      lVar2 = *(longlong *)(unaff_RDI + 0x148);
      if (lVar2 != 0) {
        *(int *)(lVar2 + 0x2c) = *(int *)(lVar2 + 0x2c) + 1;
        *(undefined1 *)(lVar2 + 0x30) = 1;
        __os_log_internal("+-IOAudioStream[%p]::safeLogError clipOutputSamples(0x%lx, 0x%lx) - clipping function returned error: 0x%lx\n"
                          ,0);
      }
      goto LAB_000130d7;
    }
  }
  else {
    uVar5 = 0;
    do {
      pcVar1 = *(code **)(*(longlong *)(unaff_RDI + 0x108) + uVar5 * 8);
      if (pcVar1 != (code *)0x0) {
        iVar4 = (*pcVar1)(param_2,unaff_ESI,unaff_RDI + 0xb0);
        if (iVar4 != 0) goto LAB_00013089;
        uVar3 = *(uint *)(unaff_RDI + 0x110);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  iVar4 = 0;
LAB_000130d7:
  *(int *)(*(longlong *)(unaff_RDI + 0x148) + 0x14) = iVar4;
  return;
}



/* IOAudioStream::lockStreamForIO @ 0x130f2 */

/* IOAudioStream::lockStreamForIO() */

void IOAudioStream::lockStreamForIO(void)

{
  _IORecursiveLockLock();
  return;
}



/* IOAudioStream::unlockStreamForIO @ 0x13104 */

/* IOAudioStream::unlockStreamForIO() */

void IOAudioStream::unlockStreamForIO(void)

{
  _IORecursiveLockUnlock();
  return;
}



/* IOAudioStream::setStreamAvailable @ 0x13116 */

/* IOAudioStream::setStreamAvailable(bool) */

void IOAudioStream::setStreamAvailable(bool param_1)

{
  byte unaff_SIL;
  longlong *unaff_RDI;
  
  if ((*(byte *)((longlong)unaff_RDI + 0x114) & 1) != unaff_SIL) {
    *(byte *)((longlong)unaff_RDI + 0x114) = unaff_SIL;
    (**(code **)(*unaff_RDI + 0x280))(8,unaff_SIL);
                    /* WARNING: Could not recover jumptable at 0x0001315c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)unaff_RDI[0x11] + 0xa20))();
    return;
  }
  return;
}



/* IOAudioStream::getStreamAvailable @ 0x1316a */

/* IOAudioStream::getStreamAvailable() */

byte IOAudioStream::getStreamAvailable(void)

{
  longlong unaff_RDI;
  
  return *(byte *)(unaff_RDI + 0x114) & 1;
}



/* IOAudioStream::addDefaultAudioControl @ 0x13178 */

/* IOAudioStream::addDefaultAudioControl(IOAudioControl*) */

undefined8 IOAudioStream::addDefaultAudioControl(IOAudioControl *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  uint in_R8D;
  
  if (unaff_RSI == (longlong *)0x0) {
    return 0xe00002c2;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x9b0))();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*unaff_RDI + 0x9d8))();
    if (((iVar1 == 0) && (iVar1 = (**(code **)(*unaff_RSI + 0x9c8))(), iVar1 == 0x696e7074)) ||
       ((iVar1 = (**(code **)(*unaff_RDI + 0x9d8))(), iVar1 == 1 &&
        (iVar1 = (**(code **)(*unaff_RSI + 0x9c8))(), iVar1 == 0x6f757470)))) {
      __os_log_internal("IOAudioStream::addDefaultAudioControl() - Error: invalid audio control - stream direction is opposite of control usage.\n"
                        ,0x10);
    }
    else {
      uVar2 = (**(code **)(*unaff_RSI + 0x9b0))();
      if ((uVar2 == 0) ||
         ((*(uint *)((longlong)unaff_RDI + 0xdc) <= uVar2 &&
          (uVar2 < *(uint *)((longlong)unaff_RDI + 0xdc) + (int)unaff_RDI[0x1c])))) {
        uVar2 = (**(code **)(*unaff_RSI + 0x918))();
        if ((char)uVar2 == '\0') {
          return 0xe00002bc;
        }
        if ((longlong *)unaff_RDI[0x23] == (longlong *)0x0) {
          lVar4 = OSSet::withObjects((OSObject **)(ulonglong)uVar2,1,in_R8D);
          unaff_RDI[0x23] = lVar4;
        }
        else {
          (**(code **)(*(longlong *)unaff_RDI[0x23] + 0x1c0))();
        }
        return 0xe00002c2;
      }
      __os_log_internal("IOAudioStream::addDefaultAudioControl() - Error: audio control channel is not in this stream.\n"
                        ,0x10);
    }
    _IOLog();
    return 0xe00002bc;
  }
                    /* WARNING: Could not recover jumptable at 0x000131c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)unaff_RDI[0x11] + 0xb18))();
  return uVar3;
}



/* IOAudioStream::removeDefaultAudioControls @ 0x132f4 */

/* IOAudioStream::removeDefaultAudioControls() */

void __thiscall IOAudioStream::removeDefaultAudioControls(IOAudioStream *this)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong unaff_RDI;
  
  if (*(longlong *)(unaff_RDI + 0x118) != 0) {
    cVar1 = IOService::isInactive();
    if ((cVar1 == '\0') &&
       (plVar2 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)this),
       plVar2 != (longlong *)0x0)) {
      plVar3 = (longlong *)(**(code **)(*plVar2 + 0x128))();
      while (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x678))();
        lVar4 = (**(code **)(*plVar3 + 0x680))();
        if (lVar4 == unaff_RDI) {
          (**(code **)(*plVar3 + 0x600))();
        }
        plVar3 = (longlong *)(**(code **)(*plVar2 + 0x128))();
      }
      (**(code **)(*plVar2 + 0x28))();
    }
                    /* WARNING: Could not recover jumptable at 0x0001339f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(unaff_RDI + 0x118) + 0x158))();
    return;
  }
  return;
}



/* IOAudioStream::MetaClass::~MetaClass @ 0x133b0 */

/* IOAudioStream::MetaClass::~MetaClass() */

void __thiscall IOAudioStream::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* IOAudioSelectorControl::MetaClass::MetaClass @ 0x133fe */

/* IOAudioSelectorControl::MetaClass::MetaClass() */

void __thiscall IOAudioSelectorControl::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)&section_000000b8.reloff,(char *)&IOAudioControl::gMetaClass,in_R8,
             in_R9D);
  *unaff_RDI = &PTR__MetaClass_00025098;
  return;
}



/* IOAudioSelectorControl::MetaClass::~MetaClass @ 0x13430 */

/* IOAudioSelectorControl::MetaClass::~MetaClass() */

void __thiscall IOAudioSelectorControl::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* IOAudioSelectorControl::IOAudioSelectorControl @ 0x1343a */

/* IOAudioSelectorControl::IOAudioSelectorControl(OSMetaClass const*) */

void __thiscall
IOAudioSelectorControl::IOAudioSelectorControl(IOAudioSelectorControl *this,OSMetaClass *param_1)

{
  undefined8 *unaff_RDI;
  
  IOAudioControl::IOAudioControl((IOAudioControl *)this,param_1);
  *unaff_RDI = &PTR__IOAudioSelectorControl_00024590;
  return;
}



/* IOAudioSelectorControl::IOAudioSelectorControl @ 0x1345a */

/* IOAudioSelectorControl::IOAudioSelectorControl(OSMetaClass const*) */

void __thiscall
IOAudioSelectorControl::IOAudioSelectorControl(IOAudioSelectorControl *this,OSMetaClass *param_1)

{
  undefined8 *unaff_RDI;
  
  IOAudioControl::IOAudioControl((IOAudioControl *)this,param_1);
  *unaff_RDI = &PTR__IOAudioSelectorControl_00024590;
  return;
}



/* IOAudioSelectorControl::~IOAudioSelectorControl @ 0x1347a */

/* IOAudioSelectorControl::~IOAudioSelectorControl() */

void __thiscall IOAudioSelectorControl::~IOAudioSelectorControl(IOAudioSelectorControl *this)

{
  IOAudioControl::~IOAudioControl((IOAudioControl *)this);
  return;
}



/* IOAudioSelectorControl::~IOAudioSelectorControl @ 0x13484 */

/* IOAudioSelectorControl::~IOAudioSelectorControl() */

void __thiscall IOAudioSelectorControl::~IOAudioSelectorControl(IOAudioSelectorControl *this)

{
  IOAudioControl::~IOAudioControl((IOAudioControl *)this);
  return;
}



/* IOAudioSelectorControl::~IOAudioSelectorControl @ 0x1348e */

/* IOAudioSelectorControl::~IOAudioSelectorControl() */

void __thiscall IOAudioSelectorControl::~IOAudioSelectorControl(IOAudioSelectorControl *this)

{
  IOAudioControl::~IOAudioControl((IOAudioControl *)this);
  _OSObject_typed_operator_delete();
  return;
}



/* IOAudioSelectorControl::operator.delete @ 0x134b6 */

/* IOAudioSelectorControl::operator delete(void*, unsigned long) */

void IOAudioSelectorControl::operator_delete(void *param_1,ulong param_2)

{
  _OSObject_typed_operator_delete();
  return;
}



/* IOAudioSelectorControl::getMetaClass @ 0x134ce */

/* IOAudioSelectorControl::getMetaClass() const */

undefined ** IOAudioSelectorControl::getMetaClass(void)

{
  return &gMetaClass;
}



/* IOAudioSelectorControl::MetaClass::MetaClass @ 0x134dc */

/* IOAudioSelectorControl::MetaClass::MetaClass() */

void __thiscall IOAudioSelectorControl::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)&section_000000b8.reloff,(char *)&IOAudioControl::gMetaClass,in_R8,
             in_R9D);
  *unaff_RDI = &PTR__MetaClass_00025098;
  return;
}



/* IOAudioSelectorControl::MetaClass::alloc @ 0x1350e */

/* IOAudioSelectorControl::MetaClass::alloc() const */

undefined8 * IOAudioSelectorControl::MetaClass::alloc(void)

{
  undefined8 *puVar1;
  IOAudioControl *in_RCX;
  OSMetaClass *in_RDX;
  
  puVar1 = (undefined8 *)_OSObject_typed_operator_new();
  IOAudioControl::IOAudioControl(in_RCX,in_RDX);
  *puVar1 = &PTR__IOAudioSelectorControl_00024590;
  OSMetaClass::instanceConstructed();
  return puVar1;
}



/* IOAudioSelectorControl::operator.new @ 0x13556 */

/* IOAudioSelectorControl::operator new(unsigned long) */

void * __thiscall IOAudioSelectorControl::operator_new(IOAudioSelectorControl *this,ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)_OSObject_typed_operator_new();
  return pvVar1;
}



/* IOAudioSelectorControl::IOAudioSelectorControl @ 0x1356a */

/* IOAudioSelectorControl::IOAudioSelectorControl() */

void __thiscall IOAudioSelectorControl::IOAudioSelectorControl(IOAudioSelectorControl *this)

{
  OSMetaClass *in_RDX;
  undefined8 *unaff_RDI;
  
  IOAudioControl::IOAudioControl((IOAudioControl *)this,in_RDX);
  *unaff_RDI = &PTR__IOAudioSelectorControl_00024590;
  OSMetaClass::instanceConstructed();
  return;
}



/* IOAudioSelectorControl::IOAudioSelectorControl @ 0x1359a */

/* IOAudioSelectorControl::IOAudioSelectorControl() */

void __thiscall IOAudioSelectorControl::IOAudioSelectorControl(IOAudioSelectorControl *this)

{
  OSMetaClass *in_RDX;
  undefined8 *unaff_RDI;
  
  IOAudioControl::IOAudioControl((IOAudioControl *)this,in_RDX);
  *unaff_RDI = &PTR__IOAudioSelectorControl_00024590;
  OSMetaClass::instanceConstructed();
  return;
}



/* IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl4 @ 0x135ca */

/* IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl4() */

void __thiscall
IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl4(IOAudioSelectorControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl5 @ 0x135e0 */

/* IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl5() */

void __thiscall
IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl5(IOAudioSelectorControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl6 @ 0x135f6 */

/* IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl6() */

void __thiscall
IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl6(IOAudioSelectorControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl7 @ 0x1360c */

/* IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl7() */

void __thiscall
IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl7(IOAudioSelectorControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl8 @ 0x13622 */

/* IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl8() */

void __thiscall
IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl8(IOAudioSelectorControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl9 @ 0x13638 */

/* IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl9() */

void __thiscall
IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl9(IOAudioSelectorControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl10 @ 0x1364e */

/* IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl10() */

void __thiscall
IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl10(IOAudioSelectorControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl11 @ 0x13664 */

/* IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl11() */

void __thiscall
IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl11(IOAudioSelectorControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl12 @ 0x1367a */

/* IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl12() */

void __thiscall
IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl12(IOAudioSelectorControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl13 @ 0x13690 */

/* IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl13() */

void __thiscall
IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl13(IOAudioSelectorControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl14 @ 0x136a6 */

/* IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl14() */

void __thiscall
IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl14(IOAudioSelectorControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl15 @ 0x136bc */

/* IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl15() */

void __thiscall
IOAudioSelectorControl::_RESERVEDIOAudioSelectorControl15(IOAudioSelectorControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioSelectorControl::createOutputClockSelector @ 0x136d2 */

/* IOAudioSelectorControl::createOutputClockSelector(int, unsigned int, unsigned int, char const*,
   unsigned int) */

longlong *
IOAudioSelectorControl::createOutputClockSelector
          (int param_1,uint param_2,uint param_3,char *param_4,uint param_5)

{
  longlong *plVar1;
  uint in_stack_00000008;
  uint in_stack_00000010;
  
  plVar1 = (longlong *)
           create(param_3,param_1,(char *)0x636c636b,0x6f757470,in_stack_00000008,in_stack_00000010)
  ;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x278))();
  }
  return plVar1;
}



/* IOAudioSelectorControl::create @ 0x1371e */

/* IOAudioSelectorControl::create(int, unsigned int, char const*, unsigned int, unsigned int,
   unsigned int) */

longlong *
IOAudioSelectorControl::create
          (int param_1,uint param_2,char *param_3,uint param_4,uint param_5,uint param_6)

{
  char cVar1;
  longlong *plVar2;
  undefined4 in_register_0000000c;
  IOAudioControl *this;
  undefined4 in_register_00000014;
  OSMetaClass *pOVar3;
  undefined4 unaff_ESI;
  
  this = (IOAudioControl *)CONCAT44(in_register_0000000c,param_1);
  pOVar3 = (OSMetaClass *)CONCAT44(in_register_00000014,param_2);
  plVar2 = (longlong *)_OSObject_typed_operator_new();
  IOAudioControl::IOAudioControl(this,pOVar3);
  *plVar2 = (longlong)&PTR__IOAudioSelectorControl_00024590;
  OSMetaClass::instanceConstructed();
  cVar1 = (**(code **)(*plVar2 + 0xad0))
                    ((OSMetaClass *)CONCAT44(in_register_00000014,param_2),unaff_ESI,param_1,
                     (ulonglong)param_3 & 0xffffffff);
  if (cVar1 == '\0') {
    (**(code **)(*plVar2 + 0x28))();
    plVar2 = (longlong *)0x0;
  }
  return plVar2;
}



/* IOAudioSelectorControl::createInputClockSelector @ 0x137c2 */

/* IOAudioSelectorControl::createInputClockSelector(int, unsigned int, unsigned int, char const*,
   unsigned int) */

longlong *
IOAudioSelectorControl::createInputClockSelector
          (int param_1,uint param_2,uint param_3,char *param_4,uint param_5)

{
  longlong *plVar1;
  uint in_stack_00000008;
  uint in_stack_00000010;
  
  plVar1 = (longlong *)
           create(param_3,param_1,(char *)0x636c636b,0x696e7074,in_stack_00000008,in_stack_00000010)
  ;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x278))();
  }
  return plVar1;
}



/* IOAudioSelectorControl::createOutputSelector @ 0x1380e */

/* IOAudioSelectorControl::createOutputSelector(int, unsigned int, char const*, unsigned int) */

void IOAudioSelectorControl::createOutputSelector
               (int param_1,uint param_2,char *param_3,uint param_4)

{
  uint in_stack_00000028;
  uint in_stack_00000030;
  
  create(param_1,param_2,(char *)0x6f757470,0x6f757470,in_stack_00000028,in_stack_00000030);
  return;
}



/* IOAudioSelectorControl::removeAvailableSelection @ 0x13824 */

/* IOAudioSelectorControl::removeAvailableSelection(int) */

undefined4 __thiscall
IOAudioSelectorControl::removeAvailableSelection(IOAudioSelectorControl *this,int param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int unaff_ESI;
  longlong *unaff_RDI;
  undefined4 uVar7;
  
  plVar1 = (longlong *)unaff_RDI[0x1c];
  plVar4 = (longlong *)OSArray::withArray((OSArray *)this,param_1);
  if (plVar4 == (longlong *)0x0) {
    uVar7 = 0xe00002bd;
  }
  else {
    plVar5 = (longlong *)OSCollectionIterator::withCollection((OSCollection *)this);
    if (plVar5 == (longlong *)0x0) {
      uVar7 = 0xe00002f0;
    }
    else {
      plVar6 = (longlong *)(**(code **)(*plVar5 + 0x128))();
      bVar2 = true;
      while (plVar6 != (longlong *)0x0) {
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x208))();
        if ((plVar6 != (longlong *)0x0) &&
           (iVar3 = (**(code **)(*plVar6 + 0x148))(), iVar3 == unaff_ESI)) {
          (**(code **)(*plVar4 + 0x1d8))();
          bVar2 = false;
          uVar7 = 0;
          goto LAB_0001390b;
        }
        plVar6 = (longlong *)(**(code **)(*plVar5 + 0x128))();
      }
      uVar7 = 0xe00002f0;
LAB_0001390b:
      unaff_RDI[0x1c] = (longlong)plVar4;
      (**(code **)(*unaff_RDI + 0x268))();
      (**(code **)(*plVar1 + 0x28))();
      (**(code **)(*plVar5 + 0x28))();
      if (!bVar2) {
        (**(code **)(*unaff_RDI + 0x850))();
        uVar7 = 0;
      }
    }
  }
  return uVar7;
}



/* IOAudioSelectorControl::replaceAvailableSelection @ 0x13966 */

/* IOAudioSelectorControl::replaceAvailableSelection(int, char const*) */

undefined8 IOAudioSelectorControl::replaceAvailableSelection(int param_1,char *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 in_register_0000000c;
  longlong *unaff_RDI;
  
  if (param_2 == (char *)0x0) {
    uVar2 = 0xe00002c2;
  }
  else {
    lVar1 = OSString::withCString((char *)CONCAT44(in_register_0000000c,param_1));
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001399a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*unaff_RDI + 0xa60))(*(code **)(*unaff_RDI + 0xa60),lVar1);
      return uVar2;
    }
    uVar2 = 0xe00002bd;
  }
  return uVar2;
}



/* IOAudioSelectorControl::replaceAvailableSelection @ 0x139ae */

/* IOAudioSelectorControl::replaceAvailableSelection(int, OSString*) */

undefined8 IOAudioSelectorControl::replaceAvailableSelection(int param_1,OSString *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined4 in_register_0000000c;
  OSCollection *pOVar7;
  int unaff_ESI;
  longlong *unaff_RDI;
  
  pOVar7 = (OSCollection *)CONCAT44(in_register_0000000c,param_1);
  plVar1 = (longlong *)unaff_RDI[0x1c];
  plVar3 = (longlong *)OSArray::withArray((OSArray *)pOVar7,(uint)param_2);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0xe00002bd;
  }
  else {
    plVar4 = (longlong *)OSCollectionIterator::withCollection(pOVar7);
    if (plVar4 != (longlong *)0x0) {
      plVar5 = (longlong *)(**(code **)(*plVar4 + 0x128))();
      while (plVar5 != (longlong *)0x0) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x208))();
        if ((plVar5 != (longlong *)0x0) &&
           (iVar2 = (**(code **)(*plVar5 + 0x148))(), iVar2 == unaff_ESI)) {
          (**(code **)(*plVar3 + 0x1d0))();
          break;
        }
        plVar5 = (longlong *)(**(code **)(*plVar4 + 0x128))();
      }
      unaff_RDI[0x1c] = (longlong)plVar3;
      (**(code **)(*unaff_RDI + 0x268))();
      (**(code **)(*plVar1 + 0x28))();
      (**(code **)(*plVar4 + 0x28))();
    }
    (**(code **)(*unaff_RDI + 0x850))();
    uVar6 = 0;
  }
  return uVar6;
}



/* IOAudioSelectorControl::createInputSelector @ 0x13ac6 */

/* IOAudioSelectorControl::createInputSelector(int, unsigned int, char const*, unsigned int) */

void IOAudioSelectorControl::createInputSelector
               (int param_1,uint param_2,char *param_3,uint param_4)

{
  uint in_stack_00000028;
  uint in_stack_00000030;
  
  create(param_1,param_2,(char *)0x696e7074,0x696e7074,in_stack_00000028,in_stack_00000030);
  return;
}



/* IOAudioSelectorControl::init @ 0x13adc */

/* IOAudioSelectorControl::init(int, unsigned int, char const*, unsigned int, unsigned int, unsigned
   int, OSDictionary*) */

undefined8
IOAudioSelectorControl::init
          (int param_1,uint param_2,char *param_3,uint param_4,uint param_5,uint param_6,
          OSDictionary *param_7)

{
  char cVar1;
  OSObject *pOVar2;
  longlong lVar3;
  undefined4 in_register_0000000c;
  uint unaff_EBX;
  longlong *unaff_RDI;
  uint unaff_R12D;
  OSDictionary *unaff_R13;
  
  pOVar2 = (OSObject *)OSNumber::withNumber(CONCAT44(in_register_0000000c,param_1),param_2);
  if (pOVar2 != (OSObject *)0x0) {
    cVar1 = IOAudioControl::init
                      (param_2,pOVar2,param_1,(char *)((ulonglong)param_3 & 0xffffffff),param_4,
                       unaff_EBX,unaff_R12D,unaff_R13);
    (**(code **)(*(longlong *)pOVar2 + 0x28))();
    if (cVar1 != '\0') {
      lVar3 = OSArray::withCapacity(param_2);
      unaff_RDI[0x1c] = lVar3;
      (**(code **)(*unaff_RDI + 0x268))(*unaff_RDI,lVar3);
      return 1;
    }
  }
  return 0;
}



/* IOAudioSelectorControl::free @ 0x13b92 */

/* IOAudioSelectorControl::free() */

void IOAudioSelectorControl::free(void)

{
  longlong unaff_RDI;
  
  if (*(longlong **)(unaff_RDI + 0xe0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x28))();
    *(undefined8 *)(unaff_RDI + 0xe0) = 0;
  }
  IOAudioControl::free();
  return;
}



/* IOAudioSelectorControl::addAvailableSelection @ 0x13bce */

/* IOAudioSelectorControl::addAvailableSelection(int, char const*) */

undefined8 IOAudioSelectorControl::addAvailableSelection(int param_1,char *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 in_register_0000000c;
  longlong *unaff_RDI;
  
  if (param_2 == (char *)0x0) {
    uVar2 = 0xe00002c2;
  }
  else {
    lVar1 = OSString::withCString((char *)CONCAT44(in_register_0000000c,param_1));
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00013c02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*unaff_RDI + 0xae0))(*(code **)(*unaff_RDI + 0xae0),lVar1);
      return uVar2;
    }
    uVar2 = 0xe00002bd;
  }
  return uVar2;
}



/* IOAudioSelectorControl::addAvailableSelection @ 0x13c16 */

/* IOAudioSelectorControl::addAvailableSelection(int, OSString*) */

undefined8 IOAudioSelectorControl::addAvailableSelection(int param_1,OSString *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *extraout_RAX;
  longlong *plVar3;
  longlong *extraout_RAX_00;
  undefined4 in_register_0000000c;
  uint uVar4;
  OSString *pOVar5;
  longlong *unaff_RDI;
  undefined8 uVar6;
  
  plVar1 = (longlong *)unaff_RDI[0x1c];
  pOVar5 = param_2;
  OSArray::withArray((OSArray *)CONCAT44(in_register_0000000c,param_1),(uint)param_2);
  uVar4 = (uint)pOVar5;
  if (extraout_RAX == (longlong *)0x0) {
    uVar6 = 0xe00002bd;
  }
  else if (param_2 == (OSString *)0x0) {
    uVar6 = 0xe00002c2;
  }
  else {
    cVar2 = (**(code **)(*unaff_RDI + 0xae8))();
    uVar6 = 0xe00002bc;
    if (cVar2 == '\0') {
      plVar3 = (longlong *)OSDictionary::withCapacity(param_1);
      if (plVar3 != (longlong *)0x0) {
        OSNumber::withNumber(CONCAT44(in_register_0000000c,param_1),uVar4);
        if (extraout_RAX_00 == (longlong *)0x0) {
          uVar6 = 0xe00002bc;
        }
        else {
          (**(code **)(*plVar3 + 0x1d0))();
          (**(code **)(*plVar3 + 0x1d0))();
          (**(code **)(*extraout_RAX + 0x1b8))();
          (**(code **)(*extraout_RAX_00 + 0x28))();
          uVar6 = 0;
        }
        unaff_RDI[0x1c] = (longlong)extraout_RAX;
        (**(code **)(*unaff_RDI + 0x268))();
        (**(code **)(*plVar1 + 0x28))();
        (**(code **)(*plVar3 + 0x28))();
        if (extraout_RAX_00 != (longlong *)0x0) {
          (**(code **)(*unaff_RDI + 0x850))();
          uVar6 = 0;
        }
      }
    }
  }
  return uVar6;
}



/* IOAudioSelectorControl::addAvailableSelection @ 0x13d6c */

/* IOAudioSelectorControl::addAvailableSelection(int, OSString*, char const*, OSObject*) */

undefined8
IOAudioSelectorControl::addAvailableSelection
          (int param_1,OSString *param_2,char *param_3,OSObject *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *extraout_RAX;
  longlong *plVar4;
  longlong *extraout_RAX_00;
  undefined4 in_register_0000000c;
  uint uVar5;
  OSString *pOVar6;
  longlong *unaff_RDI;
  undefined8 uVar7;
  
  lVar2 = CONCAT44(in_register_0000000c,param_1);
  plVar1 = (longlong *)unaff_RDI[0x1c];
  pOVar6 = param_2;
  OSArray::withArray((OSArray *)CONCAT44(in_register_0000000c,param_1),(uint)param_2);
  uVar5 = (uint)pOVar6;
  if (extraout_RAX == (longlong *)0x0) {
    uVar7 = 0xe00002bd;
  }
  else if (param_2 == (OSString *)0x0) {
    uVar7 = 0xe00002c2;
  }
  else {
    cVar3 = (**(code **)(*unaff_RDI + 0xae8))();
    uVar7 = 0xe00002bc;
    if (cVar3 == '\0') {
      plVar4 = (longlong *)OSDictionary::withCapacity(param_1);
      if (plVar4 != (longlong *)0x0) {
        OSNumber::withNumber(CONCAT44(in_register_0000000c,param_1),uVar5);
        if (extraout_RAX_00 == (longlong *)0x0) {
          uVar7 = 0xe00002bc;
        }
        else {
          (**(code **)(*plVar4 + 0x1d0))();
          (**(code **)(*plVar4 + 0x1d0))();
          (**(code **)(*extraout_RAX + 0x1b8))();
          (**(code **)(*extraout_RAX_00 + 0x28))();
          uVar7 = 0;
        }
        if (param_3 != (char *)0x0 && lVar2 != 0) {
          (**(code **)(*plVar4 + 0x1d0))();
        }
        unaff_RDI[0x1c] = (longlong)extraout_RAX;
        (**(code **)(*unaff_RDI + 0x268))();
        (**(code **)(*plVar1 + 0x28))();
        (**(code **)(*plVar4 + 0x28))();
        if (extraout_RAX_00 != (longlong *)0x0) {
          (**(code **)(*unaff_RDI + 0x850))();
          uVar7 = 0;
        }
      }
    }
  }
  return uVar7;
}



/* IOAudioSelectorControl::valueExists @ 0x13ef2 */

/* IOAudioSelectorControl::valueExists(int) */

undefined8 IOAudioSelectorControl::valueExists(int param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 in_register_0000000c;
  int unaff_ESI;
  undefined8 uVar4;
  
  plVar2 = (longlong *)
           OSCollectionIterator::withCollection
                     ((OSCollection *)CONCAT44(in_register_0000000c,param_1));
  if (plVar2 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    plVar3 = (longlong *)(**(code **)(*plVar2 + 0x128))();
    while (plVar3 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x208))();
      if ((plVar3 != (longlong *)0x0) &&
         (iVar1 = (**(code **)(*plVar3 + 0x148))(), iVar1 == unaff_ESI)) {
        uVar4 = CONCAT71((uint7)(uint3)((uint)unaff_ESI >> 8),1);
        goto LAB_00013f6e;
      }
      plVar3 = (longlong *)(**(code **)(*plVar2 + 0x128))();
    }
    uVar4 = 0;
LAB_00013f6e:
    (**(code **)(*plVar2 + 0x28))();
  }
  return uVar4;
}



/* IOAudioSelectorControl::validateValue @ 0x13f86 */

/* IOAudioSelectorControl::validateValue(OSObject*) */

undefined8 __thiscall
IOAudioSelectorControl::validateValue(IOAudioSelectorControl *this,OSObject *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *unaff_RDI;
  
  plVar2 = (longlong *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)this,(OSMetaClass *)param_1)
  ;
  if (plVar2 == (longlong *)0x0) {
    uVar3 = 0xe00002c2;
  }
  else {
    uVar3 = IOAudioControl::validateValue((OSObject *)this);
    if ((int)uVar3 == 0) {
      (**(code **)(*plVar2 + 0x148))();
      cVar1 = (**(code **)(*unaff_RDI + 0xae8))();
      uVar3 = 0xe00002f0;
      if (cVar1 != '\0') {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}



/* IOAudioSelectorControl::MetaClass::~MetaClass @ 0x14000 */

/* IOAudioSelectorControl::MetaClass::~MetaClass() */

void __thiscall IOAudioSelectorControl::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* IOAudioToggleControl::MetaClass::MetaClass @ 0x1404e */

/* IOAudioToggleControl::MetaClass::MetaClass() */

void __thiscall IOAudioToggleControl::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)&section_000000b8.offset,(char *)&IOAudioControl::gMetaClass,in_R8,
             in_R9D);
  *unaff_RDI = &PTR__MetaClass_00025c80;
  return;
}



/* IOAudioToggleControl::MetaClass::~MetaClass @ 0x14080 */

/* IOAudioToggleControl::MetaClass::~MetaClass() */

void __thiscall IOAudioToggleControl::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* IOAudioToggleControl::IOAudioToggleControl @ 0x1408a */

/* IOAudioToggleControl::IOAudioToggleControl(OSMetaClass const*) */

void __thiscall
IOAudioToggleControl::IOAudioToggleControl(IOAudioToggleControl *this,OSMetaClass *param_1)

{
  undefined8 *unaff_RDI;
  
  IOAudioControl::IOAudioControl((IOAudioControl *)this,param_1);
  *unaff_RDI = &PTR__IOAudioToggleControl_00025190;
  return;
}



/* IOAudioToggleControl::IOAudioToggleControl @ 0x140aa */

/* IOAudioToggleControl::IOAudioToggleControl(OSMetaClass const*) */

void __thiscall
IOAudioToggleControl::IOAudioToggleControl(IOAudioToggleControl *this,OSMetaClass *param_1)

{
  undefined8 *unaff_RDI;
  
  IOAudioControl::IOAudioControl((IOAudioControl *)this,param_1);
  *unaff_RDI = &PTR__IOAudioToggleControl_00025190;
  return;
}



/* IOAudioToggleControl::~IOAudioToggleControl @ 0x140ca */

/* IOAudioToggleControl::~IOAudioToggleControl() */

void __thiscall IOAudioToggleControl::~IOAudioToggleControl(IOAudioToggleControl *this)

{
  IOAudioControl::~IOAudioControl((IOAudioControl *)this);
  return;
}



/* IOAudioToggleControl::~IOAudioToggleControl @ 0x140d4 */

/* IOAudioToggleControl::~IOAudioToggleControl() */

void __thiscall IOAudioToggleControl::~IOAudioToggleControl(IOAudioToggleControl *this)

{
  IOAudioControl::~IOAudioControl((IOAudioControl *)this);
  return;
}



/* IOAudioToggleControl::~IOAudioToggleControl @ 0x140de */

/* IOAudioToggleControl::~IOAudioToggleControl() */

void __thiscall IOAudioToggleControl::~IOAudioToggleControl(IOAudioToggleControl *this)

{
  IOAudioControl::~IOAudioControl((IOAudioControl *)this);
  _OSObject_typed_operator_delete();
  return;
}



/* IOAudioToggleControl::operator.delete @ 0x14106 */

/* IOAudioToggleControl::operator delete(void*, unsigned long) */

void IOAudioToggleControl::operator_delete(void *param_1,ulong param_2)

{
  _OSObject_typed_operator_delete();
  return;
}



/* IOAudioToggleControl::getMetaClass @ 0x1411e */

/* IOAudioToggleControl::getMetaClass() const */

undefined ** IOAudioToggleControl::getMetaClass(void)

{
  return &gMetaClass;
}



/* IOAudioToggleControl::MetaClass::MetaClass @ 0x1412c */

/* IOAudioToggleControl::MetaClass::MetaClass() */

void __thiscall IOAudioToggleControl::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)&section_000000b8.offset,(char *)&IOAudioControl::gMetaClass,in_R8,
             in_R9D);
  *unaff_RDI = &PTR__MetaClass_00025c80;
  return;
}



/* IOAudioToggleControl::MetaClass::alloc @ 0x1415e */

/* IOAudioToggleControl::MetaClass::alloc() const */

undefined8 * IOAudioToggleControl::MetaClass::alloc(void)

{
  undefined8 *puVar1;
  IOAudioControl *in_RCX;
  OSMetaClass *in_RDX;
  
  puVar1 = (undefined8 *)_OSObject_typed_operator_new();
  IOAudioControl::IOAudioControl(in_RCX,in_RDX);
  *puVar1 = &PTR__IOAudioToggleControl_00025190;
  OSMetaClass::instanceConstructed();
  return puVar1;
}



/* IOAudioToggleControl::operator.new @ 0x141a6 */

/* IOAudioToggleControl::operator new(unsigned long) */

void * __thiscall IOAudioToggleControl::operator_new(IOAudioToggleControl *this,ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)_OSObject_typed_operator_new();
  return pvVar1;
}



/* IOAudioToggleControl::IOAudioToggleControl @ 0x141ba */

/* IOAudioToggleControl::IOAudioToggleControl() */

void __thiscall IOAudioToggleControl::IOAudioToggleControl(IOAudioToggleControl *this)

{
  OSMetaClass *in_RDX;
  undefined8 *unaff_RDI;
  
  IOAudioControl::IOAudioControl((IOAudioControl *)this,in_RDX);
  *unaff_RDI = &PTR__IOAudioToggleControl_00025190;
  OSMetaClass::instanceConstructed();
  return;
}



/* IOAudioToggleControl::IOAudioToggleControl @ 0x141ea */

/* IOAudioToggleControl::IOAudioToggleControl() */

void __thiscall IOAudioToggleControl::IOAudioToggleControl(IOAudioToggleControl *this)

{
  OSMetaClass *in_RDX;
  undefined8 *unaff_RDI;
  
  IOAudioControl::IOAudioControl((IOAudioControl *)this,in_RDX);
  *unaff_RDI = &PTR__IOAudioToggleControl_00025190;
  OSMetaClass::instanceConstructed();
  return;
}



/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl0 @ 0x1421a */

/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl0() */

void __thiscall IOAudioToggleControl::_RESERVEDIOAudioToggleControl0(IOAudioToggleControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl1 @ 0x1422e */

/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl1() */

void __thiscall IOAudioToggleControl::_RESERVEDIOAudioToggleControl1(IOAudioToggleControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl2 @ 0x14244 */

/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl2() */

void __thiscall IOAudioToggleControl::_RESERVEDIOAudioToggleControl2(IOAudioToggleControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl3 @ 0x1425a */

/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl3() */

void __thiscall IOAudioToggleControl::_RESERVEDIOAudioToggleControl3(IOAudioToggleControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl4 @ 0x14270 */

/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl4() */

void __thiscall IOAudioToggleControl::_RESERVEDIOAudioToggleControl4(IOAudioToggleControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl5 @ 0x14286 */

/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl5() */

void __thiscall IOAudioToggleControl::_RESERVEDIOAudioToggleControl5(IOAudioToggleControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl6 @ 0x1429c */

/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl6() */

void __thiscall IOAudioToggleControl::_RESERVEDIOAudioToggleControl6(IOAudioToggleControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl7 @ 0x142b2 */

/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl7() */

void __thiscall IOAudioToggleControl::_RESERVEDIOAudioToggleControl7(IOAudioToggleControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl8 @ 0x142c8 */

/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl8() */

void __thiscall IOAudioToggleControl::_RESERVEDIOAudioToggleControl8(IOAudioToggleControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl9 @ 0x142de */

/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl9() */

void __thiscall IOAudioToggleControl::_RESERVEDIOAudioToggleControl9(IOAudioToggleControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl10 @ 0x142f4 */

/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl10() */

void __thiscall IOAudioToggleControl::_RESERVEDIOAudioToggleControl10(IOAudioToggleControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl11 @ 0x1430a */

/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl11() */

void __thiscall IOAudioToggleControl::_RESERVEDIOAudioToggleControl11(IOAudioToggleControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl12 @ 0x14320 */

/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl12() */

void __thiscall IOAudioToggleControl::_RESERVEDIOAudioToggleControl12(IOAudioToggleControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl13 @ 0x14336 */

/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl13() */

void __thiscall IOAudioToggleControl::_RESERVEDIOAudioToggleControl13(IOAudioToggleControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl14 @ 0x1434c */

/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl14() */

void __thiscall IOAudioToggleControl::_RESERVEDIOAudioToggleControl14(IOAudioToggleControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl15 @ 0x14362 */

/* IOAudioToggleControl::_RESERVEDIOAudioToggleControl15() */

void __thiscall IOAudioToggleControl::_RESERVEDIOAudioToggleControl15(IOAudioToggleControl *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioToggleControl::createPassThruMuteControl @ 0x14378 */

/* IOAudioToggleControl::createPassThruMuteControl(bool, unsigned int, char const*, unsigned int) */

void IOAudioToggleControl::createPassThruMuteControl
               (bool param_1,uint param_2,char *param_3,uint param_4)

{
  uint in_stack_00000028;
  uint in_stack_00000030;
  
  create(param_1,param_2,(char *)0x6d757465,0x70617373,in_stack_00000028,in_stack_00000030);
  return;
}



/* IOAudioToggleControl::create @ 0x1438e */

/* IOAudioToggleControl::create(bool, unsigned int, char const*, unsigned int, unsigned int,
   unsigned int) */

longlong *
IOAudioToggleControl::create
          (bool param_1,uint param_2,char *param_3,uint param_4,uint param_5,uint param_6)

{
  char cVar1;
  longlong *plVar2;
  undefined7 in_register_00000009;
  IOAudioControl *this;
  undefined4 in_register_00000014;
  OSMetaClass *pOVar3;
  undefined4 unaff_ESI;
  
  this = (IOAudioControl *)CONCAT71(in_register_00000009,param_1);
  pOVar3 = (OSMetaClass *)CONCAT44(in_register_00000014,param_2);
  plVar2 = (longlong *)_OSObject_typed_operator_new();
  IOAudioControl::IOAudioControl(this,pOVar3);
  *plVar2 = (longlong)&PTR__IOAudioToggleControl_00025190;
  OSMetaClass::instanceConstructed();
  cVar1 = (**(code **)(*plVar2 + 0xad0))
                    ((OSMetaClass *)CONCAT44(in_register_00000014,param_2),unaff_ESI,
                     CONCAT71(in_register_00000009,param_1) & 0xffffffff,
                     (ulonglong)param_3 & 0xffffffff);
  if (cVar1 == '\0') {
    (**(code **)(*plVar2 + 0x28))();
    plVar2 = (longlong *)0x0;
  }
  return plVar2;
}



/* IOAudioToggleControl::createMuteControl @ 0x14432 */

/* IOAudioToggleControl::createMuteControl(bool, unsigned int, char const*, unsigned int, unsigned
   int) */

void __thiscall
IOAudioToggleControl::createMuteControl
          (IOAudioToggleControl *this,bool param_1,uint param_2,char *param_3,uint param_4,
          uint param_5)

{
  undefined3 in_register_00000011;
  
  create(SUB81(this,0),CONCAT31(in_register_00000011,param_1),(char *)0x6d757465,param_2,param_4,
         param_5);
  return;
}



/* IOAudioToggleControl::init @ 0x14446 */

/* IOAudioToggleControl::init(bool, unsigned int, char const*, unsigned int, unsigned int, unsigned
   int, OSDictionary*) */

undefined4
IOAudioToggleControl::init
          (bool param_1,uint param_2,char *param_3,uint param_4,uint param_5,uint param_6,
          OSDictionary *param_7)

{
  undefined4 uVar1;
  OSObject *pOVar2;
  undefined7 in_register_00000009;
  uint unaff_EBX;
  uint unaff_R12D;
  OSDictionary *unaff_R13;
  
  pOVar2 = (OSObject *)OSNumber::withNumber(CONCAT71(in_register_00000009,param_1),param_2);
  if (pOVar2 == (OSObject *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = IOAudioControl::init
                      (param_2,pOVar2,(uint)CONCAT71(in_register_00000009,param_1),
                       (char *)((ulonglong)param_3 & 0xffffffff),param_4,unaff_EBX,unaff_R12D,
                       unaff_R13);
    (**(code **)(*(longlong *)pOVar2 + 0x28))();
  }
  return uVar1;
}



/* IOAudioToggleControl::MetaClass::~MetaClass @ 0x144cc */

/* IOAudioToggleControl::MetaClass::~MetaClass() */

void __thiscall IOAudioToggleControl::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* UInt64mult @ 0x1451a */

/* UInt64mult(unsigned long long, unsigned long long) */

longlong UInt64mult(ulonglong param_1,ulonglong param_2)

{
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  
  return ((unaff_RSI >> 0x20) * (unaff_RDI & 0xffffffff) +
          (unaff_RDI >> 0x20) * (unaff_RSI & 0xffffffff) << 0x20) +
         (unaff_RSI & 0xffffffff) * (unaff_RDI & 0xffffffff);
}



/* IOAudioTimeIntervalFilter::MetaClass::MetaClass @ 0x1455a */

/* IOAudioTimeIntervalFilter::MetaClass::MetaClass() */

void __thiscall IOAudioTimeIntervalFilter::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)&segment_command_00000020.vmsize,PTR_gMetaClass_0001e028,in_R8,in_R9D);
  *unaff_RDI = &PTR__MetaClass_00025f50;
  return;
}



/* IOAudioTimeIntervalFilter::MetaClass::~MetaClass @ 0x1458c */

/* IOAudioTimeIntervalFilter::MetaClass::~MetaClass() */

void __thiscall IOAudioTimeIntervalFilter::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* IOAudioTimeIntervalFilter::IOAudioTimeIntervalFilter @ 0x14596 */

/* IOAudioTimeIntervalFilter::IOAudioTimeIntervalFilter(OSMetaClass const*) */

void __thiscall
IOAudioTimeIntervalFilter::IOAudioTimeIntervalFilter
          (IOAudioTimeIntervalFilter *this,OSMetaClass *param_1)

{
  undefined8 *unaff_RDI;
  
  OSObject::OSObject((OSObject *)this,param_1);
  *unaff_RDI = &PTR__IOAudioTimeIntervalFilter_00025d78;
  return;
}



/* IOAudioTimeIntervalFilter::~IOAudioTimeIntervalFilter @ 0x145b6 */

/* IOAudioTimeIntervalFilter::~IOAudioTimeIntervalFilter() */

void __thiscall
IOAudioTimeIntervalFilter::~IOAudioTimeIntervalFilter(IOAudioTimeIntervalFilter *this)

{
  OSObject::~OSObject((OSObject *)this);
  return;
}



/* IOAudioTimeIntervalFilter::~IOAudioTimeIntervalFilter @ 0x145c0 */

/* IOAudioTimeIntervalFilter::~IOAudioTimeIntervalFilter() */

void __thiscall
IOAudioTimeIntervalFilter::~IOAudioTimeIntervalFilter(IOAudioTimeIntervalFilter *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* IOAudioTimeIntervalFilter::~IOAudioTimeIntervalFilter @ 0x145c6 */

/* IOAudioTimeIntervalFilter::~IOAudioTimeIntervalFilter() */

void __thiscall
IOAudioTimeIntervalFilter::~IOAudioTimeIntervalFilter(IOAudioTimeIntervalFilter *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* IOAudioTimeIntervalFilter::getMetaClass @ 0x145cc */

/* IOAudioTimeIntervalFilter::getMetaClass() const */

undefined ** IOAudioTimeIntervalFilter::getMetaClass(void)

{
  return &gMetaClass;
}



/* IOAudioTimeIntervalFilter::MetaClass::MetaClass @ 0x145da */

/* IOAudioTimeIntervalFilter::MetaClass::MetaClass() */

void __thiscall IOAudioTimeIntervalFilter::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)&segment_command_00000020.vmsize,PTR_gMetaClass_0001e028,in_R8,in_R9D);
  *unaff_RDI = &PTR__MetaClass_00025f50;
  return;
}



/* IOAudioTimeIntervalFilter::MetaClass::alloc @ 0x1460c */

/* IOAudioTimeIntervalFilter::MetaClass::alloc() const */

undefined8 IOAudioTimeIntervalFilter::MetaClass::alloc(void)

{
  return 0;
}



/* IOAudioTimeIntervalFilter::operator.new @ 0x14614 */

/* IOAudioTimeIntervalFilter::operator new(unsigned long) */

void * __thiscall
IOAudioTimeIntervalFilter::operator_new(IOAudioTimeIntervalFilter *this,ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)_OSObject_typed_operator_new();
  return pvVar1;
}



/* IOAudioTimeIntervalFilter::operator.delete @ 0x14628 */

/* IOAudioTimeIntervalFilter::operator delete(void*, unsigned long) */

void IOAudioTimeIntervalFilter::operator_delete(void *param_1,ulong param_2)

{
  _OSObject_typed_operator_delete();
  return;
}



/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter0 @ 0x14640 */

/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter0() */

void __thiscall
IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter0(IOAudioTimeIntervalFilter *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter1 @ 0x14654 */

/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter1() */

void __thiscall
IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter1(IOAudioTimeIntervalFilter *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter2 @ 0x1466a */

/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter2() */

void __thiscall
IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter2(IOAudioTimeIntervalFilter *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter3 @ 0x14680 */

/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter3() */

void __thiscall
IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter3(IOAudioTimeIntervalFilter *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter4 @ 0x14696 */

/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter4() */

void __thiscall
IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter4(IOAudioTimeIntervalFilter *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter5 @ 0x146ac */

/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter5() */

void __thiscall
IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter5(IOAudioTimeIntervalFilter *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter6 @ 0x146c2 */

/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter6() */

void __thiscall
IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter6(IOAudioTimeIntervalFilter *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter7 @ 0x146d8 */

/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter7() */

void __thiscall
IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter7(IOAudioTimeIntervalFilter *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter8 @ 0x146ee */

/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter8() */

void __thiscall
IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter8(IOAudioTimeIntervalFilter *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter9 @ 0x14704 */

/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter9() */

void __thiscall
IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter9(IOAudioTimeIntervalFilter *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter10 @ 0x1471a */

/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter10() */

void __thiscall
IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter10(IOAudioTimeIntervalFilter *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter11 @ 0x14730 */

/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter11() */

void __thiscall
IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter11(IOAudioTimeIntervalFilter *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter12 @ 0x14746 */

/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter12() */

void __thiscall
IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter12(IOAudioTimeIntervalFilter *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter13 @ 0x1475c */

/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter13() */

void __thiscall
IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter13(IOAudioTimeIntervalFilter *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter14 @ 0x14772 */

/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter14() */

void __thiscall
IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter14(IOAudioTimeIntervalFilter *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter15 @ 0x14788 */

/* IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter15() */

void __thiscall
IOAudioTimeIntervalFilter::_RESERVEDIOAudioTimeIntervalFilter15(IOAudioTimeIntervalFilter *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilter::initFilter @ 0x1479e */

/* IOAudioTimeIntervalFilter::initFilter(unsigned int, unsigned int) */

undefined8 IOAudioTimeIntervalFilter::initFilter(uint param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 unaff_ESI;
  longlong unaff_RDI;
  
  *(undefined4 *)(unaff_RDI + 0x18) = unaff_ESI;
  *(uint *)(unaff_RDI + 0x1c) = param_2 + 1;
  *(undefined4 *)(unaff_RDI + 0x28) = 0;
  *(undefined8 *)(unaff_RDI + 0x30) = 0;
  cVar1 = (**(code **)(PTR_vtable_0001e048 + 0x98))();
  if (cVar1 == '\0') {
LAB_000147f2:
    uVar3 = 1;
  }
  else {
    lVar2 = _IOMallocData();
    *(longlong *)(unaff_RDI + 0x20) = lVar2;
    if (lVar2 != 0) {
      lVar2 = _IOLockAlloc();
      *(longlong *)(unaff_RDI + 0x38) = lVar2;
      if (lVar2 != 0) goto LAB_000147f2;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* IOAudioTimeIntervalFilter::free @ 0x14800 */

/* IOAudioTimeIntervalFilter::free() */

void IOAudioTimeIntervalFilter::free(void)

{
  longlong unaff_RDI;
  
  if (*(longlong *)(unaff_RDI + 0x38) != 0) {
    _IOLockFree();
    *(undefined8 *)(unaff_RDI + 0x38) = 0;
  }
  if (*(longlong *)(unaff_RDI + 0x20) != 0) {
    *(undefined8 *)(unaff_RDI + 0x20) = 0;
    _IOFreeData();
  }
                    /* WARNING: Could not recover jumptable at 0x0001484c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_vtable_0001e048 + 0xa0))();
  return;
}



/* IOAudioTimeIntervalFilter::reInitialiseFilter @ 0x14852 */

/* IOAudioTimeIntervalFilter::reInitialiseFilter(unsigned int, unsigned int) */

undefined8 IOAudioTimeIntervalFilter::reInitialiseFilter(uint param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 in_register_0000000c;
  int unaff_ESI;
  longlong unaff_RDI;
  undefined8 uVar3;
  
  if (*(longlong *)(unaff_RDI + 0x38) == 0) {
    return 0xe00002bc;
  }
  _IOLockLock(CONCAT44(in_register_0000000c,param_1));
  if (unaff_ESI == 0) {
    if (*(ulonglong *)(unaff_RDI + 0x30) < 2) goto LAB_000148b2;
    uVar1 = *(uint *)(unaff_RDI + 0x1c);
    unaff_ESI = *(int *)(*(longlong *)(unaff_RDI + 0x20) +
                        (longlong)(int)(((uVar1 + *(int *)(unaff_RDI + 0x28)) - 1) % uVar1) * 8) -
                *(int *)(*(longlong *)(unaff_RDI + 0x20) +
                        (longlong)(int)(((uVar1 + *(int *)(unaff_RDI + 0x28)) - 2) % uVar1) * 8);
  }
  *(int *)(unaff_RDI + 0x18) = unaff_ESI;
LAB_000148b2:
  *(undefined4 *)(unaff_RDI + 0x28) = 0;
  *(undefined8 *)(unaff_RDI + 0x30) = 0;
  if (*(longlong *)(unaff_RDI + 0x20) != 0) {
    *(undefined8 *)(unaff_RDI + 0x20) = 0;
    _IOFreeData();
    *(undefined8 *)(unaff_RDI + 0x20) = 0;
  }
  *(uint *)(unaff_RDI + 0x1c) = param_2 + 1;
  lVar2 = _IOMallocData();
  *(longlong *)(unaff_RDI + 0x20) = lVar2;
  uVar3 = 0xe00002bc;
  if (lVar2 != 0) {
    uVar3 = 0;
  }
  if (*(longlong *)(unaff_RDI + 0x38) != 0) {
    _IOLockUnlock();
  }
  return uVar3;
}



/* IOAudioTimeIntervalFilter::newTimePosition @ 0x1492c */

/* IOAudioTimeIntervalFilter::newTimePosition(unsigned long long) */

undefined8 IOAudioTimeIntervalFilter::newTimePosition(ulonglong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong unaff_RSI;
  int iVar6;
  longlong *unaff_RDI;
  longlong lVar7;
  int iVar8;
  
  if ((unaff_RDI[7] == 0) || (unaff_RDI[4] == 0)) {
    uVar4 = 0;
  }
  else {
    _IOLockLock();
    if (unaff_RDI[6] == 0) {
      lVar3 = unaff_RDI[4];
      uVar5 = (ulonglong)(int)unaff_RDI[5];
      *(longlong *)(lVar3 + uVar5 * 8) = unaff_RSI;
      uVar1 = *(uint *)((longlong)unaff_RDI + 0x1c);
      iVar6 = uVar1 - 1;
      if (iVar6 != 0) {
        uVar2 = *(uint *)(unaff_RDI + 3);
        lVar7 = unaff_RSI - (ulonglong)uVar2;
        iVar8 = iVar6;
        do {
          uVar5 = (ulonglong)(uint)((int)uVar5 + iVar6) % (ulonglong)uVar1;
          *(longlong *)(lVar3 + (longlong)(int)uVar5 * 8) = lVar7;
          lVar7 = lVar7 - (ulonglong)uVar2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    uVar4 = (**(code **)(*unaff_RDI + 0x1b8))();
    lVar3 = unaff_RDI[5];
    *(undefined8 *)(unaff_RDI[4] + (longlong)(int)lVar3 * 8) = uVar4;
    *(uint *)(unaff_RDI + 5) =
         ((int)lVar3 + *(uint *)((longlong)unaff_RDI + 0x1c) + 1) %
         *(uint *)((longlong)unaff_RDI + 0x1c);
    unaff_RDI[6] = unaff_RDI[6] + 1;
    _IOLockUnlock();
  }
  return uVar4;
}



/* IOAudioTimeIntervalFilter::getMultiIntervalTime @ 0x149de */

/* IOAudioTimeIntervalFilter::getMultiIntervalTime() */

longlong IOAudioTimeIntervalFilter::getMultiIntervalTime(void)

{
  longlong unaff_RDI;
  longlong lVar1;
  
  if ((*(longlong *)(unaff_RDI + 0x38) == 0) || (*(longlong *)(unaff_RDI + 0x20) == 0)) {
    lVar1 = 0;
  }
  else {
    _IOLockLock();
    lVar1 = *(longlong *)
             (*(longlong *)(unaff_RDI + 0x20) +
             (longlong)
             (int)(((*(int *)(unaff_RDI + 0x28) + *(uint *)(unaff_RDI + 0x1c)) - 1) %
                  *(uint *)(unaff_RDI + 0x1c)) * 8) -
            *(longlong *)
             (*(longlong *)(unaff_RDI + 0x20) + (longlong)*(int *)(unaff_RDI + 0x28) * 8);
    _IOLockUnlock();
  }
  return lVar1;
}



/* IOAudioTimeIntervalFilterIIR::MetaClass::MetaClass @ 0x14a32 */

/* IOAudioTimeIntervalFilterIIR::MetaClass::MetaClass() */

void __thiscall IOAudioTimeIntervalFilterIIR::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)&section_00000068,(char *)&IOAudioTimeIntervalFilter::gMetaClass,in_R8,
             in_R9D);
  *unaff_RDI = &PTR__MetaClass_000262b0;
  return;
}



/* IOAudioTimeIntervalFilterIIR::MetaClass::~MetaClass @ 0x14a64 */

/* IOAudioTimeIntervalFilterIIR::MetaClass::~MetaClass() */

void __thiscall IOAudioTimeIntervalFilterIIR::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* IOAudioTimeIntervalFilterIIR::IOAudioTimeIntervalFilterIIR @ 0x14a6e */

/* IOAudioTimeIntervalFilterIIR::IOAudioTimeIntervalFilterIIR(OSMetaClass const*) */

void __thiscall
IOAudioTimeIntervalFilterIIR::IOAudioTimeIntervalFilterIIR
          (IOAudioTimeIntervalFilterIIR *this,OSMetaClass *param_1)

{
  undefined8 *unaff_RDI;
  
  OSObject::OSObject((OSObject *)this,param_1);
  *unaff_RDI = &PTR__IOAudioTimeIntervalFilterIIR_00026048;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  unaff_RDI[10] = 0;
  unaff_RDI[0xb] = 0;
  return;
}



/* IOAudioTimeIntervalFilterIIR::IOAudioTimeIntervalFilterIIR @ 0x14aa0 */

/* IOAudioTimeIntervalFilterIIR::IOAudioTimeIntervalFilterIIR(OSMetaClass const*) */

void __thiscall
IOAudioTimeIntervalFilterIIR::IOAudioTimeIntervalFilterIIR
          (IOAudioTimeIntervalFilterIIR *this,OSMetaClass *param_1)

{
  undefined8 *unaff_RDI;
  
  OSObject::OSObject((OSObject *)this,param_1);
  *unaff_RDI = &PTR__IOAudioTimeIntervalFilterIIR_00026048;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  unaff_RDI[10] = 0;
  unaff_RDI[0xb] = 0;
  return;
}



/* IOAudioTimeIntervalFilterIIR::~IOAudioTimeIntervalFilterIIR @ 0x14ad2 */

/* IOAudioTimeIntervalFilterIIR::~IOAudioTimeIntervalFilterIIR() */

void __thiscall
IOAudioTimeIntervalFilterIIR::~IOAudioTimeIntervalFilterIIR(IOAudioTimeIntervalFilterIIR *this)

{
  OSObject::~OSObject((OSObject *)this);
  return;
}



/* IOAudioTimeIntervalFilterIIR::~IOAudioTimeIntervalFilterIIR @ 0x14adc */

/* IOAudioTimeIntervalFilterIIR::~IOAudioTimeIntervalFilterIIR() */

void __thiscall
IOAudioTimeIntervalFilterIIR::~IOAudioTimeIntervalFilterIIR(IOAudioTimeIntervalFilterIIR *this)

{
  OSObject::~OSObject((OSObject *)this);
  return;
}



/* IOAudioTimeIntervalFilterIIR::~IOAudioTimeIntervalFilterIIR @ 0x14ae6 */

/* IOAudioTimeIntervalFilterIIR::~IOAudioTimeIntervalFilterIIR() */

void __thiscall
IOAudioTimeIntervalFilterIIR::~IOAudioTimeIntervalFilterIIR(IOAudioTimeIntervalFilterIIR *this)

{
  OSObject::~OSObject((OSObject *)this);
  _OSObject_typed_operator_delete();
  return;
}



/* IOAudioTimeIntervalFilterIIR::operator.delete @ 0x14b0e */

/* IOAudioTimeIntervalFilterIIR::operator delete(void*, unsigned long) */

void IOAudioTimeIntervalFilterIIR::operator_delete(void *param_1,ulong param_2)

{
  _OSObject_typed_operator_delete();
  return;
}



/* IOAudioTimeIntervalFilterIIR::getMetaClass @ 0x14b26 */

/* IOAudioTimeIntervalFilterIIR::getMetaClass() const */

undefined ** IOAudioTimeIntervalFilterIIR::getMetaClass(void)

{
  return &gMetaClass;
}



/* IOAudioTimeIntervalFilterIIR::MetaClass::MetaClass @ 0x14b34 */

/* IOAudioTimeIntervalFilterIIR::MetaClass::MetaClass() */

void __thiscall IOAudioTimeIntervalFilterIIR::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)&section_00000068,(char *)&IOAudioTimeIntervalFilter::gMetaClass,in_R8,
             in_R9D);
  *unaff_RDI = &PTR__MetaClass_000262b0;
  return;
}



/* IOAudioTimeIntervalFilterIIR::MetaClass::alloc @ 0x14b66 */

/* IOAudioTimeIntervalFilterIIR::MetaClass::alloc() const */

undefined8 * IOAudioTimeIntervalFilterIIR::MetaClass::alloc(void)

{
  undefined8 *puVar1;
  OSObject *in_RCX;
  OSMetaClass *in_RDX;
  
  puVar1 = (undefined8 *)_OSObject_typed_operator_new();
  OSObject::OSObject(in_RCX,in_RDX);
  *puVar1 = &PTR__IOAudioTimeIntervalFilterIIR_00026048;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  OSMetaClass::instanceConstructed();
  return puVar1;
}



/* IOAudioTimeIntervalFilterIIR::operator.new @ 0x14bc0 */

/* IOAudioTimeIntervalFilterIIR::operator new(unsigned long) */

void * __thiscall
IOAudioTimeIntervalFilterIIR::operator_new(IOAudioTimeIntervalFilterIIR *this,ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)_OSObject_typed_operator_new();
  return pvVar1;
}



/* IOAudioTimeIntervalFilterIIR::IOAudioTimeIntervalFilterIIR @ 0x14bd4 */

/* IOAudioTimeIntervalFilterIIR::IOAudioTimeIntervalFilterIIR() */

void __thiscall
IOAudioTimeIntervalFilterIIR::IOAudioTimeIntervalFilterIIR(IOAudioTimeIntervalFilterIIR *this)

{
  OSMetaClass *in_RDX;
  undefined8 *unaff_RDI;
  
  OSObject::OSObject((OSObject *)this,in_RDX);
  *unaff_RDI = &PTR__IOAudioTimeIntervalFilterIIR_00026048;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  unaff_RDI[10] = 0;
  unaff_RDI[0xb] = 0;
  OSMetaClass::instanceConstructed();
  return;
}



/* IOAudioTimeIntervalFilterIIR::IOAudioTimeIntervalFilterIIR @ 0x14c16 */

/* IOAudioTimeIntervalFilterIIR::IOAudioTimeIntervalFilterIIR() */

void __thiscall
IOAudioTimeIntervalFilterIIR::IOAudioTimeIntervalFilterIIR(IOAudioTimeIntervalFilterIIR *this)

{
  OSMetaClass *in_RDX;
  undefined8 *unaff_RDI;
  
  OSObject::OSObject((OSObject *)this,in_RDX);
  *unaff_RDI = &PTR__IOAudioTimeIntervalFilterIIR_00026048;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  unaff_RDI[10] = 0;
  unaff_RDI[0xb] = 0;
  OSMetaClass::instanceConstructed();
  return;
}



/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR0 @ 0x14c58 */

/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR0() */

void __thiscall
IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR0
          (IOAudioTimeIntervalFilterIIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR1 @ 0x14c6c */

/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR1() */

void __thiscall
IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR1
          (IOAudioTimeIntervalFilterIIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR2 @ 0x14c82 */

/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR2() */

void __thiscall
IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR2
          (IOAudioTimeIntervalFilterIIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR3 @ 0x14c98 */

/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR3() */

void __thiscall
IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR3
          (IOAudioTimeIntervalFilterIIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR4 @ 0x14cae */

/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR4() */

void __thiscall
IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR4
          (IOAudioTimeIntervalFilterIIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR5 @ 0x14cc4 */

/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR5() */

void __thiscall
IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR5
          (IOAudioTimeIntervalFilterIIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR6 @ 0x14cda */

/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR6() */

void __thiscall
IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR6
          (IOAudioTimeIntervalFilterIIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR7 @ 0x14cf0 */

/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR7() */

void __thiscall
IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR7
          (IOAudioTimeIntervalFilterIIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR8 @ 0x14d06 */

/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR8() */

void __thiscall
IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR8
          (IOAudioTimeIntervalFilterIIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR9 @ 0x14d1c */

/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR9() */

void __thiscall
IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR9
          (IOAudioTimeIntervalFilterIIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR10 @ 0x14d32 */

/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR10() */

void __thiscall
IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR10
          (IOAudioTimeIntervalFilterIIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR11 @ 0x14d48 */

/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR11() */

void __thiscall
IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR11
          (IOAudioTimeIntervalFilterIIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR12 @ 0x14d5e */

/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR12() */

void __thiscall
IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR12
          (IOAudioTimeIntervalFilterIIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR13 @ 0x14d74 */

/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR13() */

void __thiscall
IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR13
          (IOAudioTimeIntervalFilterIIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR14 @ 0x14d8a */

/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR14() */

void __thiscall
IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR14
          (IOAudioTimeIntervalFilterIIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR15 @ 0x14da0 */

/* IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR15() */

void __thiscall
IOAudioTimeIntervalFilterIIR::_RESERVEDIOAudioTimeIntervalFilterIIR15
          (IOAudioTimeIntervalFilterIIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterIIR::initFilter @ 0x14db6 */

/* IOAudioTimeIntervalFilterIIR::initFilter(unsigned int, unsigned int, unsigned short) */

void IOAudioTimeIntervalFilterIIR::initFilter(uint param_1,uint param_2,ushort param_3)

{
  char cVar1;
  longlong unaff_RDI;
  
  cVar1 = IOAudioTimeIntervalFilter::initFilter(param_1,param_2);
  if (cVar1 != '\0') {
    *(short *)(unaff_RDI + 0x60) = (short)param_1;
  }
  return;
}



/* IOAudioTimeIntervalFilterIIR::calculateNewTimePosition @ 0x14dd6 */

/* IOAudioTimeIntervalFilterIIR::calculateNewTimePosition(unsigned long long) */

longlong IOAudioTimeIntervalFilterIIR::calculateNewTimePosition(ulonglong param_1)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong unaff_RSI;
  ulonglong uVar9;
  longlong *unaff_RDI;
  longlong lVar10;
  ulonglong uVar11;
  
  uVar8 = (ulonglong)*(uint *)(unaff_RDI + 3);
  uVar1 = *(ushort *)(unaff_RDI + 0xc);
  lVar10 = uVar8 << ((byte)uVar1 & 0x3f);
  uVar11 = unaff_RSI + lVar10;
  if (unaff_RDI[6] != 0) {
    uVar7 = 0;
    uVar8 = uVar11;
    for (uVar3 = (uint)uVar1; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar7 = uVar7 << 1 | uVar8 >> 0x3f;
      uVar8 = uVar8 * 2;
    }
    (**(code **)(*unaff_RDI + 0x248))(uVar7,uVar8);
    uVar3 = (uint)*(ushort *)(unaff_RDI + 0xc);
    uVar8 = 0;
    if (*(ushort *)(unaff_RDI + 0xc) != 0) {
      do {
        uVar8 = uVar8 << 1 | uVar11 >> 0x3f;
        uVar11 = uVar11 * 2;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    (**(code **)(*unaff_RDI + 0x248))
              ((uVar8 - unaff_RDI[9]) - (ulonglong)(uVar11 < (ulonglong)unaff_RDI[8]),
               uVar11 - unaff_RDI[8]);
    uVar11 = unaff_RDI[8] + unaff_RDI[10];
    uVar3 = (uint)*(ushort *)(unaff_RDI + 0xc);
    if (*(ushort *)(unaff_RDI + 0xc) != 0) {
      uVar8 = unaff_RDI[9] + unaff_RDI[0xb] + (ulonglong)(uVar11 < (ulonglong)unaff_RDI[10]);
      do {
        uVar11 = uVar11 >> 1 | uVar8 << 0x3f;
        uVar8 = uVar8 >> 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    goto LAB_00014fba;
  }
  uVar3 = (uint)uVar1;
  uVar7 = uVar11;
  if (uVar1 == 0) {
    uVar5 = uVar11 - uVar8;
    uVar8 = -(ulonglong)(uVar11 < uVar8);
LAB_00014f0a:
    unaff_RDI[9] = uVar8;
    unaff_RDI[8] = uVar5;
    uVar8 = 0;
  }
  else {
    uVar9 = 0;
    uVar4 = uVar3;
    do {
      uVar6 = uVar8;
      uVar9 = uVar9 << 1 | uVar6 >> 0x3f;
      uVar4 = uVar4 - 1;
      uVar8 = uVar6 * 2;
    } while (uVar4 != 0);
    uVar5 = uVar11 + uVar6 * -2;
    uVar8 = -uVar9 - (ulonglong)(uVar11 < uVar6 * 2);
    uVar4 = uVar3;
    if (uVar1 == 0) goto LAB_00014f0a;
    do {
      uVar8 = uVar8 << 1 | uVar5 >> 0x3f;
      uVar5 = uVar5 * 2;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    unaff_RDI[9] = uVar8;
    unaff_RDI[8] = uVar5;
    uVar8 = 0;
    do {
      uVar8 = uVar8 << 1 | uVar7 >> 0x3f;
      uVar7 = uVar7 * 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  (**(code **)(*unaff_RDI + 0x248))(uVar8);
  uVar1 = *(ushort *)(unaff_RDI + 0xc);
  uVar5 = 0;
  uVar8 = (ulonglong)uVar1;
  if (uVar1 != 0) {
    do {
      uVar5 = uVar5 << 1 | uVar11 >> 0x3f;
      uVar11 = uVar11 * 2;
      uVar3 = (int)uVar8 - 1;
      uVar8 = (ulonglong)uVar3;
    } while (uVar3 != 0);
  }
  uVar9 = unaff_RDI[8];
  uVar8 = unaff_RDI[8];
  lVar2 = unaff_RDI[9];
  uVar6 = UInt64mult((ulonglong)uVar1,uVar7);
  uVar3 = (uint)*(ushort *)(unaff_RDI + 0xc);
  if (*(ushort *)(unaff_RDI + 0xc) != 0) {
    do {
      uVar7 = uVar7 << 1 | uVar6 >> 0x3f;
      uVar6 = uVar6 * 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  unaff_RDI[0xb] = uVar7;
  unaff_RDI[10] = uVar6;
  (**(code **)(*unaff_RDI + 0x248))((uVar5 - lVar2) - (ulonglong)(uVar11 < uVar9),uVar11 - uVar8);
  uVar11 = unaff_RDI[8] + unaff_RDI[10];
  uVar3 = (uint)*(ushort *)(unaff_RDI + 0xc);
  if (*(ushort *)(unaff_RDI + 0xc) != 0) {
    uVar8 = unaff_RDI[9] + unaff_RDI[0xb] + (ulonglong)(uVar11 < (ulonglong)unaff_RDI[10]);
    do {
      uVar11 = uVar11 >> 1 | uVar8 << 0x3f;
      uVar8 = uVar8 >> 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
LAB_00014fba:
  return uVar11 - lVar10;
}



/* IOAudioTimeIntervalFilterIIR::IIR @ 0x14fc6 */

/* IOAudioTimeIntervalFilterIIR::IIR(U128*, U128, int) */

void IOAudioTimeIntervalFilterIIR::IIR(ulonglong param_1,ulonglong param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *unaff_RSI;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = *unaff_RSI;
  uVar2 = unaff_RSI[1];
  uVar3 = uVar1;
  uVar4 = uVar2;
  iVar5 = param_3;
  if (param_3 != 0) {
    do {
      uVar3 = uVar3 >> 1 | uVar4 << 0x3f;
      uVar4 = uVar4 >> 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    do {
      param_2 = param_2 >> 1 | param_1 << 0x3f;
      param_1 = param_1 >> 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  unaff_RSI[1] = ((uVar2 - uVar4) - (ulonglong)(uVar1 < uVar3)) + param_1 +
                 (ulonglong)CARRY8(uVar1 - uVar3,param_2);
  *unaff_RSI = (uVar1 - uVar3) + param_2;
  return;
}



/* IOAudioTimeIntervalFilterFIR::MetaClass::MetaClass @ 0x15016 */

/* IOAudioTimeIntervalFilterFIR::MetaClass::MetaClass() */

void __thiscall IOAudioTimeIntervalFilterFIR::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)&section_00000068,(char *)&IOAudioTimeIntervalFilter::gMetaClass,in_R8,
             in_R9D);
  *unaff_RDI = &PTR__MetaClass_00026608;
  return;
}



/* IOAudioTimeIntervalFilterFIR::MetaClass::~MetaClass @ 0x15048 */

/* IOAudioTimeIntervalFilterFIR::MetaClass::~MetaClass() */

void __thiscall IOAudioTimeIntervalFilterFIR::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* IOAudioTimeIntervalFilterFIR::IOAudioTimeIntervalFilterFIR @ 0x15052 */

/* IOAudioTimeIntervalFilterFIR::IOAudioTimeIntervalFilterFIR(OSMetaClass const*) */

void __thiscall
IOAudioTimeIntervalFilterFIR::IOAudioTimeIntervalFilterFIR
          (IOAudioTimeIntervalFilterFIR *this,OSMetaClass *param_1)

{
  undefined8 *unaff_RDI;
  
  OSObject::OSObject((OSObject *)this,param_1);
  *unaff_RDI = &PTR__IOAudioTimeIntervalFilterFIR_000263a8;
  return;
}



/* IOAudioTimeIntervalFilterFIR::IOAudioTimeIntervalFilterFIR @ 0x15072 */

/* IOAudioTimeIntervalFilterFIR::IOAudioTimeIntervalFilterFIR(OSMetaClass const*) */

void __thiscall
IOAudioTimeIntervalFilterFIR::IOAudioTimeIntervalFilterFIR
          (IOAudioTimeIntervalFilterFIR *this,OSMetaClass *param_1)

{
  undefined8 *unaff_RDI;
  
  OSObject::OSObject((OSObject *)this,param_1);
  *unaff_RDI = &PTR__IOAudioTimeIntervalFilterFIR_000263a8;
  return;
}



/* IOAudioTimeIntervalFilterFIR::~IOAudioTimeIntervalFilterFIR @ 0x15092 */

/* IOAudioTimeIntervalFilterFIR::~IOAudioTimeIntervalFilterFIR() */

void __thiscall
IOAudioTimeIntervalFilterFIR::~IOAudioTimeIntervalFilterFIR(IOAudioTimeIntervalFilterFIR *this)

{
  OSObject::~OSObject((OSObject *)this);
  return;
}



/* IOAudioTimeIntervalFilterFIR::~IOAudioTimeIntervalFilterFIR @ 0x1509c */

/* IOAudioTimeIntervalFilterFIR::~IOAudioTimeIntervalFilterFIR() */

void __thiscall
IOAudioTimeIntervalFilterFIR::~IOAudioTimeIntervalFilterFIR(IOAudioTimeIntervalFilterFIR *this)

{
  OSObject::~OSObject((OSObject *)this);
  return;
}



/* IOAudioTimeIntervalFilterFIR::~IOAudioTimeIntervalFilterFIR @ 0x150a6 */

/* IOAudioTimeIntervalFilterFIR::~IOAudioTimeIntervalFilterFIR() */

void __thiscall
IOAudioTimeIntervalFilterFIR::~IOAudioTimeIntervalFilterFIR(IOAudioTimeIntervalFilterFIR *this)

{
  OSObject::~OSObject((OSObject *)this);
  _OSObject_typed_operator_delete();
  return;
}



/* IOAudioTimeIntervalFilterFIR::operator.delete @ 0x150ce */

/* IOAudioTimeIntervalFilterFIR::operator delete(void*, unsigned long) */

void IOAudioTimeIntervalFilterFIR::operator_delete(void *param_1,ulong param_2)

{
  _OSObject_typed_operator_delete();
  return;
}



/* IOAudioTimeIntervalFilterFIR::getMetaClass @ 0x150e6 */

/* IOAudioTimeIntervalFilterFIR::getMetaClass() const */

undefined ** IOAudioTimeIntervalFilterFIR::getMetaClass(void)

{
  return &gMetaClass;
}



/* IOAudioTimeIntervalFilterFIR::MetaClass::MetaClass @ 0x150f4 */

/* IOAudioTimeIntervalFilterFIR::MetaClass::MetaClass() */

void __thiscall IOAudioTimeIntervalFilterFIR::MetaClass::MetaClass(MetaClass *this)

{
  undefined8 *unaff_RDI;
  OSMetaClass *in_R8;
  uint in_R9D;
  
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)&section_00000068,(char *)&IOAudioTimeIntervalFilter::gMetaClass,in_R8,
             in_R9D);
  *unaff_RDI = &PTR__MetaClass_00026608;
  return;
}



/* IOAudioTimeIntervalFilterFIR::MetaClass::alloc @ 0x15126 */

/* IOAudioTimeIntervalFilterFIR::MetaClass::alloc() const */

undefined8 * IOAudioTimeIntervalFilterFIR::MetaClass::alloc(void)

{
  undefined8 *puVar1;
  OSObject *in_RCX;
  OSMetaClass *in_RDX;
  
  puVar1 = (undefined8 *)_OSObject_typed_operator_new();
  OSObject::OSObject(in_RCX,in_RDX);
  *puVar1 = &PTR__IOAudioTimeIntervalFilterFIR_000263a8;
  OSMetaClass::instanceConstructed();
  return puVar1;
}



/* IOAudioTimeIntervalFilterFIR::operator.new @ 0x1516e */

/* IOAudioTimeIntervalFilterFIR::operator new(unsigned long) */

void * __thiscall
IOAudioTimeIntervalFilterFIR::operator_new(IOAudioTimeIntervalFilterFIR *this,ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)_OSObject_typed_operator_new();
  return pvVar1;
}



/* IOAudioTimeIntervalFilterFIR::IOAudioTimeIntervalFilterFIR @ 0x15182 */

/* IOAudioTimeIntervalFilterFIR::IOAudioTimeIntervalFilterFIR() */

void __thiscall
IOAudioTimeIntervalFilterFIR::IOAudioTimeIntervalFilterFIR(IOAudioTimeIntervalFilterFIR *this)

{
  OSMetaClass *in_RDX;
  undefined8 *unaff_RDI;
  
  OSObject::OSObject((OSObject *)this,in_RDX);
  *unaff_RDI = &PTR__IOAudioTimeIntervalFilterFIR_000263a8;
  OSMetaClass::instanceConstructed();
  return;
}



/* IOAudioTimeIntervalFilterFIR::IOAudioTimeIntervalFilterFIR @ 0x151b2 */

/* IOAudioTimeIntervalFilterFIR::IOAudioTimeIntervalFilterFIR() */

void __thiscall
IOAudioTimeIntervalFilterFIR::IOAudioTimeIntervalFilterFIR(IOAudioTimeIntervalFilterFIR *this)

{
  OSMetaClass *in_RDX;
  undefined8 *unaff_RDI;
  
  OSObject::OSObject((OSObject *)this,in_RDX);
  *unaff_RDI = &PTR__IOAudioTimeIntervalFilterFIR_000263a8;
  OSMetaClass::instanceConstructed();
  return;
}



/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR0 @ 0x151e2 */

/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR0() */

void __thiscall
IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR0
          (IOAudioTimeIntervalFilterFIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR1 @ 0x151f6 */

/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR1() */

void __thiscall
IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR1
          (IOAudioTimeIntervalFilterFIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR2 @ 0x1520c */

/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR2() */

void __thiscall
IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR2
          (IOAudioTimeIntervalFilterFIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR3 @ 0x15222 */

/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR3() */

void __thiscall
IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR3
          (IOAudioTimeIntervalFilterFIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR4 @ 0x15238 */

/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR4() */

void __thiscall
IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR4
          (IOAudioTimeIntervalFilterFIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR5 @ 0x1524e */

/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR5() */

void __thiscall
IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR5
          (IOAudioTimeIntervalFilterFIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR6 @ 0x15264 */

/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR6() */

void __thiscall
IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR6
          (IOAudioTimeIntervalFilterFIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR7 @ 0x1527a */

/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR7() */

void __thiscall
IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR7
          (IOAudioTimeIntervalFilterFIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR8 @ 0x15290 */

/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR8() */

void __thiscall
IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR8
          (IOAudioTimeIntervalFilterFIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR9 @ 0x152a6 */

/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR9() */

void __thiscall
IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR9
          (IOAudioTimeIntervalFilterFIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR10 @ 0x152bc */

/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR10() */

void __thiscall
IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR10
          (IOAudioTimeIntervalFilterFIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR11 @ 0x152d2 */

/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR11() */

void __thiscall
IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR11
          (IOAudioTimeIntervalFilterFIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR12 @ 0x152e8 */

/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR12() */

void __thiscall
IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR12
          (IOAudioTimeIntervalFilterFIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR13 @ 0x152fe */

/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR13() */

void __thiscall
IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR13
          (IOAudioTimeIntervalFilterFIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR14 @ 0x15314 */

/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR14() */

void __thiscall
IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR14
          (IOAudioTimeIntervalFilterFIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR15 @ 0x1532a */

/* IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR15() */

void __thiscall
IOAudioTimeIntervalFilterFIR::_RESERVEDIOAudioTimeIntervalFilterFIR15
          (IOAudioTimeIntervalFilterFIR *this)

{
  OSMetaClass::reservedCalled((int)this);
  return;
}



/* IOAudioTimeIntervalFilterFIR::initFilter @ 0x15340 */

/* IOAudioTimeIntervalFilterFIR::initFilter(unsigned int, unsigned int) */

bool IOAudioTimeIntervalFilterFIR::initFilter(uint param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  longlong *unaff_RDI;
  bool bVar3;
  
  bVar3 = false;
  unaff_RDI[10] = 0;
  unaff_RDI[9] = 0;
  *(undefined4 *)(unaff_RDI + 0xb) = 0;
  cVar1 = IOAudioTimeIntervalFilter::initFilter(param_1,param_2);
  if (cVar1 != '\0') {
    *(undefined4 *)(unaff_RDI + 0xb) = 0x21;
    iVar2 = (**(code **)(*unaff_RDI + 0x240))
                      (10,&initFilter(unsigned_int,unsigned_int)::filterCoefficients);
    bVar3 = iVar2 == 0;
    *(undefined4 *)(unaff_RDI + 0xc) = 0;
  }
  return bVar3;
}



/* IOAudioTimeIntervalFilterFIR::setNewFilter @ 0x1539e */

/* IOAudioTimeIntervalFilterFIR::setNewFilter(unsigned int, unsigned long long const*, unsigned int)
    */

undefined8 IOAudioTimeIntervalFilterFIR::setNewFilter(uint param_1,ulonglong *param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined4 in_register_0000000c;
  ulonglong *puVar3;
  uint unaff_ESI;
  longlong *unaff_RDI;
  undefined8 uVar4;
  
  uVar2 = param_1;
  if (unaff_RDI[10] != 0) {
    unaff_RDI[10] = 0;
    _IOFreeData();
    unaff_RDI[10] = 0;
  }
  if (unaff_RDI[9] != 0) {
    unaff_RDI[9] = 0;
    _IOFreeData();
    unaff_RDI[9] = 0;
  }
  if (unaff_RDI[8] != 0) {
    unaff_RDI[8] = 0;
    _IOFreeData();
    unaff_RDI[8] = 0;
  }
  *(uint *)(unaff_RDI + 0xb) = unaff_ESI;
  lVar1 = _IOMallocData();
  unaff_RDI[8] = lVar1;
  uVar4 = 0xe00002bc;
  if (lVar1 != 0) {
    puVar3 = (ulonglong *)((ulonglong)*(uint *)(unaff_RDI + 0xb) << 3);
    if ((ulonglong *)((ulonglong)unaff_ESI * 8) < puVar3) {
      setNewFilter(uVar2,puVar3,param_3);
      uVar4 = IOAudioTimeIntervalFilter::reInitialiseFilter(uVar2,(uint)puVar3);
      *(undefined4 *)((ulonglong *)((ulonglong)unaff_ESI * 8) + 0xc) = 0;
      return uVar4;
    }
    _memmove((void *)CONCAT44(in_register_0000000c,uVar2),puVar3,param_3);
    *(uint *)((longlong)unaff_RDI + 0x5c) = param_1;
    lVar1 = _IOMallocData();
    unaff_RDI[10] = lVar1;
    if (lVar1 != 0) {
      lVar1 = _IOMallocData();
      unaff_RDI[9] = lVar1;
      if (unaff_RDI[10] != 0) {
        (**(code **)(*unaff_RDI + 0x118))();
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}



/* IOAudioTimeIntervalFilterFIR::reInitialiseFilter @ 0x154ae */

/* IOAudioTimeIntervalFilterFIR::reInitialiseFilter(unsigned int, unsigned int) */

void IOAudioTimeIntervalFilterFIR::reInitialiseFilter(uint param_1,uint param_2)

{
  longlong unaff_RDI;
  
  IOAudioTimeIntervalFilter::reInitialiseFilter(param_1,param_2);
  *(undefined4 *)(unaff_RDI + 0x60) = 0;
  return;
}



/* IOAudioTimeIntervalFilterFIR::free @ 0x154ca */

/* IOAudioTimeIntervalFilterFIR::free() */

void IOAudioTimeIntervalFilterFIR::free(void)

{
  longlong unaff_RDI;
  
  if (*(longlong *)(unaff_RDI + 0x50) != 0) {
    *(undefined8 *)(unaff_RDI + 0x50) = 0;
    _IOFreeData();
    *(undefined8 *)(unaff_RDI + 0x50) = 0;
  }
  if (*(longlong *)(unaff_RDI + 0x48) != 0) {
    *(undefined8 *)(unaff_RDI + 0x48) = 0;
    _IOFreeData();
    *(undefined8 *)(unaff_RDI + 0x48) = 0;
  }
  if (*(longlong *)(unaff_RDI + 0x40) != 0) {
    *(undefined8 *)(unaff_RDI + 0x40) = 0;
    _IOFreeData();
    *(undefined8 *)(unaff_RDI + 0x40) = 0;
  }
  IOAudioTimeIntervalFilter::free();
  return;
}



/* IOAudioTimeIntervalFilterFIR::calculateNewTimePosition @ 0x15540 */

/* IOAudioTimeIntervalFilterFIR::calculateNewTimePosition(unsigned long long) */

longlong __thiscall
IOAudioTimeIntervalFilterFIR::calculateNewTimePosition
          (IOAudioTimeIntervalFilterFIR *this,ulonglong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  int iVar6;
  ulonglong uVar7;
  
  if (*(longlong *)(unaff_RDI + 0x30) == 0) {
    if (*(int *)(unaff_RDI + 0x58) != 0) {
      iVar6 = 0;
      uVar7 = 0;
      do {
        lVar3 = UInt64mult((ulonglong)this,param_1);
        this = (IOAudioTimeIntervalFilterFIR *)(unaff_RSI - lVar3);
        uVar1 = *(uint *)(unaff_RDI + 0x58);
        param_1 = (ulonglong)(iVar6 + uVar1) % (ulonglong)uVar1;
        *(IOAudioTimeIntervalFilterFIR **)(*(longlong *)(unaff_RDI + 0x48) + param_1 * 8) = this;
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + -1;
      } while (uVar7 < uVar1);
    }
    lVar3 = FIR((ulonglong *)this,unaff_RSI);
    uVar7 = unaff_RSI - lVar3;
    uVar1 = *(uint *)(unaff_RDI + 0x58);
    if ((ulonglong)uVar1 != 0) {
      uVar2 = *(uint *)(unaff_RDI + 0x18);
      lVar4 = *(longlong *)(unaff_RDI + 0x50);
      this = (IOAudioTimeIntervalFilterFIR *)(ulonglong)uVar1;
      do {
        *(ulonglong *)(lVar4 + ((ulonglong)this % (ulonglong)uVar1) * 8) =
             (ulonglong)(uVar1 >> 1) * (ulonglong)uVar2;
        uVar5 = (int)this - 1;
        this = (IOAudioTimeIntervalFilterFIR *)(ulonglong)uVar5;
      } while (uVar5 != 0);
    }
  }
  else {
    lVar3 = FIR((ulonglong *)this,unaff_RSI);
    uVar7 = unaff_RSI - lVar3;
  }
  lVar4 = FIR((ulonglong *)this,uVar7);
  *(uint *)(unaff_RDI + 0x60) =
       (*(int *)(unaff_RDI + 0x60) + *(uint *)(unaff_RDI + 0x58) + 1) % *(uint *)(unaff_RDI + 0x58);
  return lVar4 + lVar3;
}



/* IOAudioTimeIntervalFilterFIR::FIR @ 0x1561c */

/* IOAudioTimeIntervalFilterFIR::FIR(unsigned long long*, unsigned long long) */

ulonglong IOAudioTimeIntervalFilterFIR::FIR(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  bool bVar7;
  
  *(ulonglong *)(unaff_RSI + (ulonglong)*(uint *)(unaff_RDI + 0x60) * 8) = param_2;
  uVar1 = (ulonglong)*(uint *)(unaff_RDI + 0x58);
  iVar5 = 0;
  if (*(uint *)(unaff_RDI + 0x58) == 0) {
    uVar3 = 0;
    uVar6 = 0;
  }
  else {
    uVar4 = 0;
    uVar6 = 0;
    uVar3 = 0;
    do {
      uVar2 = (ulonglong)(uint)(*(int *)(unaff_RDI + 0x60) + (int)uVar1 + iVar5) % uVar1;
      uVar1 = UInt64mult(uVar1,uVar2);
      bVar7 = CARRY8(uVar6,uVar1);
      uVar6 = uVar6 + uVar1;
      uVar3 = uVar3 + uVar2 + (ulonglong)bVar7;
      uVar4 = uVar4 + 1;
      uVar1 = (ulonglong)*(uint *)(unaff_RDI + 0x58);
      iVar5 = iVar5 + -1;
    } while (uVar4 < uVar1);
  }
  for (iVar5 = *(int *)(unaff_RDI + 0x5c); iVar5 != 0; iVar5 = iVar5 + -1) {
    uVar6 = uVar6 >> 1 | uVar3 << 0x3f;
    uVar3 = uVar3 >> 1;
  }
  return uVar6;
}



/* IOAudioTimeIntervalFilter::MetaClass::~MetaClass @ 0x156b2 */

/* IOAudioTimeIntervalFilter::MetaClass::~MetaClass() */

void __thiscall IOAudioTimeIntervalFilter::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* IOAudioTimeIntervalFilterIIR::MetaClass::~MetaClass @ 0x156bc */

/* IOAudioTimeIntervalFilterIIR::MetaClass::~MetaClass() */

void __thiscall IOAudioTimeIntervalFilterIIR::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* IOAudioTimeIntervalFilterFIR::MetaClass::~MetaClass @ 0x156c6 */

/* IOAudioTimeIntervalFilterFIR::MetaClass::~MetaClass() */

void __thiscall IOAudioTimeIntervalFilterFIR::MetaClass::~MetaClass(MetaClass *this)

{
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return;
}



/* _Float32ToInt8 @ 0x15788 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _Float32ToInt8(undefined8 param_1,uint param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 (*unaff_RSI) [16];
  float *unaff_RDI;
  undefined1 uVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  undefined1 auVar10 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  auVar10 = _DAT_0001dda0;
  if (param_2 < 0x10) {
    if (param_2 != 0) {
      lVar6 = 0;
      do {
        fVar19 = unaff_RDI[lVar6] * 128.0;
        uVar8 = (char)(int)fVar19;
        if (128.0 <= fVar19) {
          uVar8 = 0x7f;
        }
        if (fVar19 <= -128.0) {
          uVar8 = 0x80;
        }
        (*unaff_RSI)[lVar6] = uVar8;
        lVar6 = lVar6 + 1;
      } while (param_2 != (uint)lVar6);
    }
  }
  else {
    fVar19 = DAT_0001dda0._12_4_;
    fVar9 = (float)DAT_0001dda0;
    auVar33._0_4_ = unaff_RDI[0xc] * fVar9;
    fVar11 = DAT_0001dda0._4_4_;
    auVar33._4_4_ = unaff_RDI[0xd] * fVar11;
    fVar12 = DAT_0001dda0._8_4_;
    auVar33._8_4_ = unaff_RDI[0xe] * fVar12;
    auVar33._12_4_ = unaff_RDI[0xf] * fVar19;
    auVar28._0_4_ = unaff_RDI[8] * fVar9;
    auVar28._4_4_ = unaff_RDI[9] * fVar11;
    auVar28._8_4_ = unaff_RDI[10] * fVar12;
    auVar28._12_4_ = unaff_RDI[0xb] * fVar19;
    auVar20._0_4_ = unaff_RDI[4] * fVar9;
    auVar20._4_4_ = unaff_RDI[5] * fVar11;
    auVar20._8_4_ = unaff_RDI[6] * fVar12;
    auVar20._12_4_ = unaff_RDI[7] * fVar19;
    auVar13._0_4_ = *unaff_RDI * fVar9;
    auVar13._4_4_ = unaff_RDI[1] * fVar11;
    auVar13._8_4_ = unaff_RDI[2] * fVar12;
    auVar13._12_4_ = unaff_RDI[3] * fVar19;
    auVar13 = minps(auVar13,_DAT_0001dda0);
    auVar20 = minps(auVar20,_DAT_0001dda0);
    auVar28 = minps(auVar28,_DAT_0001dda0);
    auVar33 = minps(auVar33,_DAT_0001dda0);
    auVar22._0_4_ = (int)auVar13._0_4_;
    auVar22._4_4_ = (int)auVar13._4_4_;
    auVar22._8_4_ = (int)auVar13._8_4_;
    auVar22._12_4_ = (int)auVar13._12_4_;
    auVar35._0_4_ = (int)auVar20._0_4_;
    auVar35._4_4_ = (int)auVar20._4_4_;
    auVar35._8_4_ = (int)auVar20._8_4_;
    auVar35._12_4_ = (int)auVar20._12_4_;
    auVar13 = packssdw(auVar22,auVar35);
    auVar21._0_4_ = (int)auVar28._0_4_;
    auVar21._4_4_ = (int)auVar28._4_4_;
    auVar21._8_4_ = (int)auVar28._8_4_;
    auVar21._12_4_ = (int)auVar28._12_4_;
    auVar29._0_4_ = (int)auVar33._0_4_;
    auVar29._4_4_ = (int)auVar33._4_4_;
    auVar29._8_4_ = (int)auVar33._8_4_;
    auVar29._12_4_ = (int)auVar33._12_4_;
    auVar22 = packssdw(auVar21,auVar29);
    auVar13 = packsswb(auVar13,auVar22);
    *unaff_RSI = auVar13;
    uVar7 = (ulonglong)(param_2 - 0x10);
    for (uVar5 = ((ulonglong)(unaff_RSI + 1) & 0xfffffffffffffff0) - (longlong)unaff_RSI;
        uVar5 < uVar7; uVar5 = uVar5 + 0x10) {
      pfVar1 = unaff_RDI + uVar5;
      pfVar2 = unaff_RDI + uVar5 + 4;
      pfVar3 = unaff_RDI + uVar5 + 8;
      pfVar4 = unaff_RDI + uVar5 + 0xc;
      auVar34._0_4_ = *pfVar4 * fVar9;
      auVar34._4_4_ = pfVar4[1] * fVar11;
      auVar34._8_4_ = pfVar4[2] * fVar12;
      auVar34._12_4_ = pfVar4[3] * fVar19;
      auVar30._0_4_ = *pfVar3 * fVar9;
      auVar30._4_4_ = pfVar3[1] * fVar11;
      auVar30._8_4_ = pfVar3[2] * fVar12;
      auVar30._12_4_ = pfVar3[3] * fVar19;
      auVar23._0_4_ = *pfVar2 * fVar9;
      auVar23._4_4_ = pfVar2[1] * fVar11;
      auVar23._8_4_ = pfVar2[2] * fVar12;
      auVar23._12_4_ = pfVar2[3] * fVar19;
      auVar14._0_4_ = *pfVar1 * fVar9;
      auVar14._4_4_ = pfVar1[1] * fVar11;
      auVar14._8_4_ = pfVar1[2] * fVar12;
      auVar14._12_4_ = pfVar1[3] * fVar19;
      auVar13 = minps(auVar14,auVar10);
      auVar22 = minps(auVar23,auVar10);
      auVar20 = minps(auVar30,auVar10);
      auVar35 = minps(auVar34,auVar10);
      auVar15._0_4_ = (int)auVar13._0_4_;
      auVar15._4_4_ = (int)auVar13._4_4_;
      auVar15._8_4_ = (int)auVar13._8_4_;
      auVar15._12_4_ = (int)auVar13._12_4_;
      auVar24._0_4_ = (int)auVar22._0_4_;
      auVar24._4_4_ = (int)auVar22._4_4_;
      auVar24._8_4_ = (int)auVar22._8_4_;
      auVar24._12_4_ = (int)auVar22._12_4_;
      auVar13 = packssdw(auVar15,auVar24);
      auVar25._0_4_ = (int)auVar20._0_4_;
      auVar25._4_4_ = (int)auVar20._4_4_;
      auVar25._8_4_ = (int)auVar20._8_4_;
      auVar25._12_4_ = (int)auVar20._12_4_;
      auVar31._0_4_ = (int)auVar35._0_4_;
      auVar31._4_4_ = (int)auVar35._4_4_;
      auVar31._8_4_ = (int)auVar35._8_4_;
      auVar31._12_4_ = (int)auVar35._12_4_;
      auVar22 = packssdw(auVar25,auVar31);
      auVar13 = packsswb(auVar13,auVar22);
      *(undefined1 (*) [16])(*unaff_RSI + uVar5) = auVar13;
    }
    pfVar1 = unaff_RDI + uVar7;
    pfVar2 = unaff_RDI + uVar7 + 4;
    pfVar3 = unaff_RDI + uVar7 + 8;
    pfVar4 = unaff_RDI + uVar7 + 0xc;
    auVar36._0_4_ = *pfVar4 * fVar9;
    auVar36._4_4_ = pfVar4[1] * fVar11;
    auVar36._8_4_ = pfVar4[2] * fVar12;
    auVar36._12_4_ = pfVar4[3] * fVar19;
    auVar32._0_4_ = *pfVar3 * fVar9;
    auVar32._4_4_ = pfVar3[1] * fVar11;
    auVar32._8_4_ = pfVar3[2] * fVar12;
    auVar32._12_4_ = pfVar3[3] * fVar19;
    auVar26._0_4_ = *pfVar2 * fVar9;
    auVar26._4_4_ = pfVar2[1] * fVar11;
    auVar26._8_4_ = pfVar2[2] * fVar12;
    auVar26._12_4_ = pfVar2[3] * fVar19;
    auVar16._0_4_ = *pfVar1 * fVar9;
    auVar16._4_4_ = pfVar1[1] * fVar11;
    auVar16._8_4_ = pfVar1[2] * fVar12;
    auVar16._12_4_ = pfVar1[3] * fVar19;
    auVar13 = minps(auVar16,auVar10);
    auVar22 = minps(auVar26,auVar10);
    auVar20 = minps(auVar32,auVar10);
    auVar35 = minps(auVar36,auVar10);
    auVar10._0_4_ = (int)auVar13._0_4_;
    auVar10._4_4_ = (int)auVar13._4_4_;
    auVar10._8_4_ = (int)auVar13._8_4_;
    auVar10._12_4_ = (int)auVar13._12_4_;
    auVar17._0_4_ = (int)auVar22._0_4_;
    auVar17._4_4_ = (int)auVar22._4_4_;
    auVar17._8_4_ = (int)auVar22._8_4_;
    auVar17._12_4_ = (int)auVar22._12_4_;
    auVar10 = packssdw(auVar10,auVar17);
    auVar18._0_4_ = (int)auVar20._0_4_;
    auVar18._4_4_ = (int)auVar20._4_4_;
    auVar18._8_4_ = (int)auVar20._8_4_;
    auVar18._12_4_ = (int)auVar20._12_4_;
    auVar27._0_4_ = (int)auVar35._0_4_;
    auVar27._4_4_ = (int)auVar35._4_4_;
    auVar27._8_4_ = (int)auVar35._8_4_;
    auVar27._12_4_ = (int)auVar35._12_4_;
    auVar13 = packssdw(auVar18,auVar27);
    auVar10 = packsswb(auVar10,auVar13);
    *(undefined1 (*) [16])(*unaff_RSI + uVar7) = auVar10;
  }
  return;
}



/* _Float32ToNativeInt16 @ 0x158ea */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _Float32ToNativeInt16(undefined8 param_1,uint param_2)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 (*unaff_RSI) [16];
  float *unaff_RDI;
  undefined2 uVar6;
  float fVar7;
  float fVar10;
  float fVar11;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  auVar9 = _DAT_0001ddb0;
  if (param_2 < 8) {
    if (param_2 != 0) {
      lVar5 = 0;
      do {
        fVar12 = unaff_RDI[lVar5] * 2.1474836e+09 + 32768.0;
        uVar6 = (undefined2)((uint)(int)fVar12 >> 0x10);
        if (2.1474836e+09 <= fVar12) {
          uVar6 = 0x7fff;
        }
        *(undefined2 *)(*unaff_RSI + lVar5 * 2) = uVar6;
        lVar5 = lVar5 + 1;
      } while (param_2 != (uint)lVar5);
    }
  }
  else {
    fVar12 = DAT_0001ddb0._12_4_;
    fVar7 = (float)DAT_0001ddb0;
    fVar10 = DAT_0001ddb0._4_4_;
    fVar11 = DAT_0001ddb0._8_4_;
    auVar17._0_4_ = unaff_RDI[4] * fVar7 + 0.5;
    auVar17._4_4_ = unaff_RDI[5] * fVar10 + 0.5;
    auVar17._8_4_ = unaff_RDI[6] * fVar11 + 0.5;
    auVar17._12_4_ = unaff_RDI[7] * fVar12 + 0.5;
    auVar13._0_4_ = *unaff_RDI * fVar7 + 0.5;
    auVar13._4_4_ = unaff_RDI[1] * fVar10 + 0.5;
    auVar13._8_4_ = unaff_RDI[2] * fVar11 + 0.5;
    auVar13._12_4_ = unaff_RDI[3] * fVar12 + 0.5;
    auVar13 = minps(auVar13,_DAT_0001ddb0);
    auVar17 = minps(auVar17,_DAT_0001ddb0);
    auVar20._0_4_ = (int)auVar13._0_4_;
    auVar20._4_4_ = (int)auVar13._4_4_;
    auVar20._8_4_ = (int)auVar13._8_4_;
    auVar20._12_4_ = (int)auVar13._12_4_;
    auVar18._0_4_ = (int)auVar17._0_4_;
    auVar18._4_4_ = (int)auVar17._4_4_;
    auVar18._8_4_ = (int)auVar17._8_4_;
    auVar18._12_4_ = (int)auVar17._12_4_;
    auVar13 = packssdw(auVar20,auVar18);
    *unaff_RSI = auVar13;
    uVar4 = (ulonglong)(param_2 - 8);
    for (uVar3 = (longlong)(((ulonglong)(unaff_RSI + 1) & 0xfffffffffffffff0) - (longlong)unaff_RSI)
                 >> 1; uVar3 < uVar4; uVar3 = uVar3 + 8) {
      pfVar1 = unaff_RDI + uVar3;
      pfVar2 = unaff_RDI + uVar3 + 4;
      auVar19._0_4_ = *pfVar2 * fVar7 + 0.5;
      auVar19._4_4_ = pfVar2[1] * fVar10 + 0.5;
      auVar19._8_4_ = pfVar2[2] * fVar11 + 0.5;
      auVar19._12_4_ = pfVar2[3] * fVar12 + 0.5;
      auVar14._0_4_ = *pfVar1 * fVar7 + 0.5;
      auVar14._4_4_ = pfVar1[1] * fVar10 + 0.5;
      auVar14._8_4_ = pfVar1[2] * fVar11 + 0.5;
      auVar14._12_4_ = pfVar1[3] * fVar12 + 0.5;
      auVar13 = minps(auVar14,auVar9);
      auVar20 = minps(auVar19,auVar9);
      auVar15._0_4_ = (int)auVar13._0_4_;
      auVar15._4_4_ = (int)auVar13._4_4_;
      auVar15._8_4_ = (int)auVar13._8_4_;
      auVar15._12_4_ = (int)auVar13._12_4_;
      auVar21._0_4_ = (int)auVar20._0_4_;
      auVar21._4_4_ = (int)auVar20._4_4_;
      auVar21._8_4_ = (int)auVar20._8_4_;
      auVar21._12_4_ = (int)auVar20._12_4_;
      auVar13 = packssdw(auVar15,auVar21);
      *(undefined1 (*) [16])(*unaff_RSI + uVar3 * 2) = auVar13;
    }
    pfVar1 = unaff_RDI + uVar4;
    pfVar2 = unaff_RDI + uVar4 + 4;
    auVar22._0_4_ = *pfVar2 * fVar7 + 0.5;
    auVar22._4_4_ = pfVar2[1] * fVar10 + 0.5;
    auVar22._8_4_ = pfVar2[2] * fVar11 + 0.5;
    auVar22._12_4_ = pfVar2[3] * fVar12 + 0.5;
    auVar16._0_4_ = *pfVar1 * fVar7 + 0.5;
    auVar16._4_4_ = pfVar1[1] * fVar10 + 0.5;
    auVar16._8_4_ = pfVar1[2] * fVar11 + 0.5;
    auVar16._12_4_ = pfVar1[3] * fVar12 + 0.5;
    auVar13 = minps(auVar16,auVar9);
    auVar20 = minps(auVar22,auVar9);
    auVar8._0_4_ = (int)auVar13._0_4_;
    auVar8._4_4_ = (int)auVar13._4_4_;
    auVar8._8_4_ = (int)auVar13._8_4_;
    auVar8._12_4_ = (int)auVar13._12_4_;
    auVar9._4_4_ = (int)auVar20._4_4_;
    auVar9._0_4_ = (int)auVar20._0_4_;
    auVar9._8_4_ = (int)auVar20._8_4_;
    auVar9._12_4_ = (int)auVar20._12_4_;
    auVar9 = packssdw(auVar8,auVar9);
    *(undefined1 (*) [16])(*unaff_RSI + uVar4 * 2) = auVar9;
  }
  return;
}



/* _Float32ToSwapInt16 @ 0x15a14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _Float32ToSwapInt16(undefined8 param_1,uint param_2)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 (*unaff_RSI) [16];
  float *unaff_RDI;
  ushort uVar6;
  float fVar7;
  float fVar10;
  float fVar11;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  auVar9 = _DAT_0001ddb0;
  if (param_2 < 8) {
    if (param_2 != 0) {
      lVar5 = 0;
      do {
        fVar12 = unaff_RDI[lVar5] * 2.1474836e+09 + 32768.0;
        uVar6 = (ushort)((uint)(int)fVar12 >> 0x10);
        if (2.1474836e+09 <= fVar12) {
          uVar6 = 0x7fff;
        }
        *(ushort *)(*unaff_RSI + lVar5 * 2) = uVar6 << 8 | uVar6 >> 8;
        lVar5 = lVar5 + 1;
      } while (param_2 != (uint)lVar5);
    }
  }
  else {
    fVar12 = DAT_0001ddb0._12_4_;
    fVar7 = (float)DAT_0001ddb0;
    fVar10 = DAT_0001ddb0._4_4_;
    fVar11 = DAT_0001ddb0._8_4_;
    auVar15._0_4_ = unaff_RDI[4] * fVar7 + 0.5;
    auVar15._4_4_ = unaff_RDI[5] * fVar10 + 0.5;
    auVar15._8_4_ = unaff_RDI[6] * fVar11 + 0.5;
    auVar15._12_4_ = unaff_RDI[7] * fVar12 + 0.5;
    auVar13._0_4_ = *unaff_RDI * fVar7 + 0.5;
    auVar13._4_4_ = unaff_RDI[1] * fVar10 + 0.5;
    auVar13._8_4_ = unaff_RDI[2] * fVar11 + 0.5;
    auVar13._12_4_ = unaff_RDI[3] * fVar12 + 0.5;
    auVar13 = minps(auVar13,_DAT_0001ddb0);
    auVar15 = minps(auVar15,_DAT_0001ddb0);
    auVar18._0_4_ = (int)auVar13._0_4_;
    auVar18._4_4_ = (int)auVar13._4_4_;
    auVar18._8_4_ = (int)auVar13._8_4_;
    auVar18._12_4_ = (int)auVar13._12_4_;
    auVar16._0_4_ = (int)auVar15._0_4_;
    auVar16._4_4_ = (int)auVar15._4_4_;
    auVar16._8_4_ = (int)auVar15._8_4_;
    auVar16._12_4_ = (int)auVar15._12_4_;
    auVar13 = packssdw(auVar18,auVar16);
    auVar13 = pshufb(auVar13,_DAT_0001ddd0);
    *unaff_RSI = auVar13;
    auVar13 = _DAT_0001ddd0;
    uVar4 = (ulonglong)(param_2 - 8);
    for (uVar3 = (longlong)(((ulonglong)(unaff_RSI + 1) & 0xfffffffffffffff0) - (longlong)unaff_RSI)
                 >> 1; uVar3 < uVar4; uVar3 = uVar3 + 8) {
      pfVar1 = unaff_RDI + uVar3;
      pfVar2 = unaff_RDI + uVar3 + 4;
      auVar21._0_4_ = *pfVar2 * fVar7 + 0.5;
      auVar21._4_4_ = pfVar2[1] * fVar10 + 0.5;
      auVar21._8_4_ = pfVar2[2] * fVar11 + 0.5;
      auVar21._12_4_ = pfVar2[3] * fVar12 + 0.5;
      auVar17._0_4_ = *pfVar1 * fVar7 + 0.5;
      auVar17._4_4_ = pfVar1[1] * fVar10 + 0.5;
      auVar17._8_4_ = pfVar1[2] * fVar11 + 0.5;
      auVar17._12_4_ = pfVar1[3] * fVar12 + 0.5;
      auVar18 = minps(auVar17,auVar9);
      auVar15 = minps(auVar21,auVar9);
      auVar19._0_4_ = (int)auVar18._0_4_;
      auVar19._4_4_ = (int)auVar18._4_4_;
      auVar19._8_4_ = (int)auVar18._8_4_;
      auVar19._12_4_ = (int)auVar18._12_4_;
      auVar22._0_4_ = (int)auVar15._0_4_;
      auVar22._4_4_ = (int)auVar15._4_4_;
      auVar22._8_4_ = (int)auVar15._8_4_;
      auVar22._12_4_ = (int)auVar15._12_4_;
      auVar18 = packssdw(auVar19,auVar22);
      auVar18 = pshufb(auVar18,auVar13);
      *(undefined1 (*) [16])(*unaff_RSI + uVar3 * 2) = auVar18;
    }
    pfVar1 = unaff_RDI + uVar4;
    pfVar2 = unaff_RDI + uVar4 + 4;
    auVar20._0_4_ = *pfVar2 * fVar7 + 0.5;
    auVar20._4_4_ = pfVar2[1] * fVar10 + 0.5;
    auVar20._8_4_ = pfVar2[2] * fVar11 + 0.5;
    auVar20._12_4_ = pfVar2[3] * fVar12 + 0.5;
    auVar14._0_4_ = *pfVar1 * fVar7 + 0.5;
    auVar14._4_4_ = pfVar1[1] * fVar10 + 0.5;
    auVar14._8_4_ = pfVar1[2] * fVar11 + 0.5;
    auVar14._12_4_ = pfVar1[3] * fVar12 + 0.5;
    auVar13 = minps(auVar14,auVar9);
    auVar18 = minps(auVar20,auVar9);
    auVar8._0_4_ = (int)auVar13._0_4_;
    auVar8._4_4_ = (int)auVar13._4_4_;
    auVar8._8_4_ = (int)auVar13._8_4_;
    auVar8._12_4_ = (int)auVar13._12_4_;
    auVar9._4_4_ = (int)auVar18._4_4_;
    auVar9._0_4_ = (int)auVar18._0_4_;
    auVar9._8_4_ = (int)auVar18._8_4_;
    auVar9._12_4_ = (int)auVar18._12_4_;
    auVar9 = packssdw(auVar8,auVar9);
    auVar9 = pshufb(auVar9,_DAT_0001ddd0);
    *(undefined1 (*) [16])(*unaff_RSI + uVar4 * 2) = auVar9;
  }
  return;
}



/* _Float32ToNativeInt24 @ 0x15b69 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _Float32ToNativeInt24(undefined8 param_1,uint param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  int iVar7;
  undefined1 *unaff_RSI;
  longlong unaff_RDI;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  auVar5 = _DAT_0001de30;
  auVar17 = _DAT_0001de20;
  auVar16 = _DAT_0001de10;
  auVar14 = _DAT_0001de00;
  auVar13 = _DAT_0001ddf0;
  if (param_2 < 4) {
    if (param_2 != 0) {
      lVar6 = 0;
      do {
        fVar15 = *(float *)(unaff_RDI + lVar6 * 4) * 2.1474836e+09 + 0.5;
        iVar7 = 0x7fffffff;
        if (fVar15 < 2.1474836e+09) {
          iVar7 = (int)fVar15;
        }
        *unaff_RSI = (char)((uint)iVar7 >> 8);
        unaff_RSI[1] = (char)((uint)iVar7 >> 0x10);
        unaff_RSI[2] = (char)((uint)iVar7 >> 0x18);
        unaff_RSI = unaff_RSI + 3;
        lVar6 = lVar6 + 1;
      } while (param_2 != (uint)lVar6);
    }
  }
  else {
    uVar12 = 0;
    if (0xf < param_2) {
      uVar8 = 0x20;
      uVar9 = 0;
      do {
        pfVar1 = (float *)(unaff_RDI + uVar9 * 4);
        pfVar2 = (float *)(unaff_RDI + 0x10 + uVar9 * 4);
        pfVar3 = (float *)(unaff_RDI + 0x20 + uVar9 * 4);
        pfVar4 = (float *)(unaff_RDI + 0x30 + uVar9 * 4);
        auVar18._0_4_ = *pfVar1 * 2.1474836e+09 + 0.5;
        auVar18._4_4_ = pfVar1[1] * 2.1474836e+09 + 0.5;
        auVar18._8_4_ = pfVar1[2] * 2.1474836e+09 + 0.5;
        auVar18._12_4_ = pfVar1[3] * 2.1474836e+09 + 0.5;
        auVar18 = minps(auVar18,auVar13);
        auVar25._0_4_ = (int)auVar18._0_4_;
        auVar25._4_4_ = (int)auVar18._4_4_;
        auVar25._8_4_ = (int)auVar18._8_4_;
        auVar25._12_4_ = (int)auVar18._12_4_;
        auVar25 = pshufb(auVar25,auVar16);
        auVar21._0_4_ = *pfVar2 * 2.1474836e+09 + 0.5;
        auVar21._4_4_ = pfVar2[1] * 2.1474836e+09 + 0.5;
        auVar21._8_4_ = pfVar2[2] * 2.1474836e+09 + 0.5;
        auVar21._12_4_ = pfVar2[3] * 2.1474836e+09 + 0.5;
        auVar18 = minps(auVar21,auVar13);
        auVar20._0_8_ = CONCAT44((int)auVar18._4_4_,(int)auVar18._0_4_);
        auVar20._8_4_ = (int)auVar18._8_4_;
        auVar20._12_4_ = (int)auVar18._12_4_;
        auVar24._0_4_ = *pfVar3 * 2.1474836e+09 + 0.5;
        auVar24._4_4_ = pfVar3[1] * 2.1474836e+09 + 0.5;
        auVar24._8_4_ = pfVar3[2] * 2.1474836e+09 + 0.5;
        auVar24._12_4_ = pfVar3[3] * 2.1474836e+09 + 0.5;
        auVar18 = minps(auVar24,auVar13);
        auVar19._0_8_ = CONCAT44((int)auVar18._4_4_,(int)auVar18._0_4_);
        auVar19._8_4_ = (int)auVar18._8_4_;
        auVar19._12_4_ = (int)auVar18._12_4_;
        auVar22._0_4_ = *pfVar4 * 2.1474836e+09 + 0.5;
        auVar22._4_4_ = pfVar4[1] * 2.1474836e+09 + 0.5;
        auVar22._8_4_ = pfVar4[2] * 2.1474836e+09 + 0.5;
        auVar22._12_4_ = pfVar4[3] * 2.1474836e+09 + 0.5;
        auVar18 = minps(auVar22,auVar13);
        auVar27._0_4_ = (int)auVar18._0_4_;
        auVar27._4_4_ = (int)auVar18._4_4_;
        auVar27._8_4_ = (int)auVar18._8_4_;
        auVar27._12_4_ = (int)auVar18._12_4_;
        auVar21 = pshufb(auVar27,auVar5);
        auVar23._8_8_ = auVar20._8_8_;
        auVar23._0_8_ = auVar20._0_8_;
        auVar24 = pshufb(auVar23,auVar14);
        auVar26._8_8_ = auVar19._8_8_;
        auVar26._0_8_ = auVar19._0_8_;
        auVar27 = pshufb(auVar26,ZEXT816(0xa09070605030201));
        auVar18 = pshufb(auVar20,ZEXT816(0xf0e0d0b0a090706));
        auVar20 = pshufb(auVar19,auVar17);
        *(undefined1 (*) [16])(unaff_RSI + (uVar8 - 0x20)) = auVar24 | auVar25;
        *(longlong *)(unaff_RSI + (uVar8 - 0x10)) = auVar18._0_8_;
        *(longlong *)((longlong)(unaff_RSI + (uVar8 - 0x10)) + 8) = auVar27._0_8_;
        *(undefined1 (*) [16])(unaff_RSI + uVar8) = auVar20 | auVar21;
        uVar12 = uVar9 + 0x10;
        uVar8 = uVar8 + 0x30;
        uVar11 = uVar9 + 0x1f;
        uVar9 = uVar12;
      } while (uVar11 < param_2);
    }
    auVar14 = _DAT_0001de40;
    auVar13 = _DAT_0001ddf0;
    uVar8 = param_2 - 4;
    if ((uint)uVar12 < uVar8) {
      uVar9 = uVar12 & 0xffffffff;
      uVar10 = (uint)uVar12 * 3;
      do {
        pfVar1 = (float *)(unaff_RDI + uVar9 * 4);
        auVar16._0_4_ = *pfVar1 * 2.1474836e+09 + 0.5;
        auVar16._4_4_ = pfVar1[1] * 2.1474836e+09 + 0.5;
        auVar16._8_4_ = pfVar1[2] * 2.1474836e+09 + 0.5;
        auVar16._12_4_ = pfVar1[3] * 2.1474836e+09 + 0.5;
        auVar16 = minps(auVar16,auVar13);
        auVar17._0_4_ = (int)auVar16._0_4_;
        auVar17._4_4_ = (int)auVar16._4_4_;
        auVar17._8_4_ = (int)auVar16._8_4_;
        auVar17._12_4_ = (int)auVar16._12_4_;
        auVar16 = pshufb(auVar17,auVar14);
        *(longlong *)(unaff_RSI + uVar10) = auVar16._0_8_;
        *(int *)(unaff_RSI + (uVar10 + 8)) = auVar16._8_4_;
        uVar9 = uVar9 + 4;
        uVar10 = uVar10 + 0xc;
      } while (uVar9 < uVar8);
    }
    pfVar1 = (float *)(unaff_RDI + (ulonglong)uVar8 * 4);
    auVar13._0_4_ = *pfVar1 * 2.1474836e+09 + 0.5;
    auVar13._4_4_ = pfVar1[1] * 2.1474836e+09 + 0.5;
    auVar13._8_4_ = pfVar1[2] * 2.1474836e+09 + 0.5;
    auVar13._12_4_ = pfVar1[3] * 2.1474836e+09 + 0.5;
    auVar13 = minps(auVar13,_DAT_0001ddf0);
    auVar14._0_4_ = (int)auVar13._0_4_;
    auVar14._4_4_ = (int)auVar13._4_4_;
    auVar14._8_4_ = (int)auVar13._8_4_;
    auVar14._12_4_ = (int)auVar13._12_4_;
    auVar13 = pshufb(auVar14,_DAT_0001de40);
    *(longlong *)(unaff_RSI + (param_2 * 3 - 0xc)) = auVar13._0_8_;
    *(int *)(unaff_RSI + (param_2 * 3 - 4)) = auVar13._8_4_;
  }
  return;
}



/* _Float32ToSwapInt24 @ 0x15dd3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _Float32ToSwapInt24(undefined8 param_1,uint param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  int iVar7;
  undefined1 *unaff_RSI;
  longlong unaff_RDI;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  auVar5 = _DAT_0001dea0;
  auVar17 = _DAT_0001de90;
  auVar16 = _DAT_0001de80;
  auVar14 = _DAT_0001de70;
  auVar13 = _DAT_0001ddf0;
  if (param_2 < 4) {
    if (param_2 != 0) {
      lVar6 = 0;
      do {
        fVar15 = *(float *)(unaff_RDI + lVar6 * 4) * 2.1474836e+09 + 128.0;
        iVar7 = 0x7fffffff;
        if (fVar15 < 2.1474836e+09) {
          iVar7 = (int)fVar15;
        }
        *unaff_RSI = (char)((uint)iVar7 >> 0x18);
        unaff_RSI[1] = (char)((uint)iVar7 >> 0x10);
        unaff_RSI[2] = (char)((uint)iVar7 >> 8);
        unaff_RSI = unaff_RSI + 3;
        lVar6 = lVar6 + 1;
      } while (param_2 != (uint)lVar6);
    }
  }
  else {
    uVar12 = 0;
    if (0xf < param_2) {
      uVar8 = 0x20;
      uVar9 = 0;
      do {
        pfVar1 = (float *)(unaff_RDI + uVar9 * 4);
        pfVar2 = (float *)(unaff_RDI + 0x10 + uVar9 * 4);
        pfVar3 = (float *)(unaff_RDI + 0x20 + uVar9 * 4);
        pfVar4 = (float *)(unaff_RDI + 0x30 + uVar9 * 4);
        auVar18._0_4_ = *pfVar1 * 2.1474836e+09 + 128.0;
        auVar18._4_4_ = pfVar1[1] * 2.1474836e+09 + 128.0;
        auVar18._8_4_ = pfVar1[2] * 2.1474836e+09 + 128.0;
        auVar18._12_4_ = pfVar1[3] * 2.1474836e+09 + 128.0;
        auVar18 = minps(auVar18,auVar13);
        auVar24._0_4_ = (int)auVar18._0_4_;
        auVar24._4_4_ = (int)auVar18._4_4_;
        auVar24._8_4_ = (int)auVar18._8_4_;
        auVar24._12_4_ = (int)auVar18._12_4_;
        auVar24 = pshufb(auVar24,auVar16);
        auVar21._0_4_ = *pfVar2 * 2.1474836e+09 + 128.0;
        auVar21._4_4_ = pfVar2[1] * 2.1474836e+09 + 128.0;
        auVar21._8_4_ = pfVar2[2] * 2.1474836e+09 + 128.0;
        auVar21._12_4_ = pfVar2[3] * 2.1474836e+09 + 128.0;
        auVar18 = minps(auVar21,auVar13);
        auVar20._0_4_ = (int)auVar18._0_4_;
        auVar20._4_4_ = (int)auVar18._4_4_;
        auVar20._8_4_ = (int)auVar18._8_4_;
        auVar20._12_4_ = (int)auVar18._12_4_;
        auVar23._0_4_ = *pfVar3 * 2.1474836e+09 + 128.0;
        auVar23._4_4_ = pfVar3[1] * 2.1474836e+09 + 128.0;
        auVar23._8_4_ = pfVar3[2] * 2.1474836e+09 + 128.0;
        auVar23._12_4_ = pfVar3[3] * 2.1474836e+09 + 128.0;
        auVar18 = minps(auVar23,auVar13);
        auVar19._0_4_ = (int)auVar18._0_4_;
        auVar19._4_4_ = (int)auVar18._4_4_;
        auVar19._8_4_ = (int)auVar18._8_4_;
        auVar19._12_4_ = (int)auVar18._12_4_;
        auVar22._0_4_ = *pfVar4 * 2.1474836e+09 + 128.0;
        auVar22._4_4_ = pfVar4[1] * 2.1474836e+09 + 128.0;
        auVar22._8_4_ = pfVar4[2] * 2.1474836e+09 + 128.0;
        auVar22._12_4_ = pfVar4[3] * 2.1474836e+09 + 128.0;
        auVar18 = minps(auVar22,auVar13);
        auVar25._0_4_ = (int)auVar18._0_4_;
        auVar25._4_4_ = (int)auVar18._4_4_;
        auVar25._8_4_ = (int)auVar18._8_4_;
        auVar25._12_4_ = (int)auVar18._12_4_;
        auVar21 = pshufb(auVar25,auVar5);
        auVar23 = pshufb(auVar20,auVar14);
        auVar25 = pshufb(auVar19,ZEXT816(0xa0b050607010203));
        auVar18 = pshufb(auVar20,ZEXT816(0xd0e0f090a0b0506));
        auVar20 = pshufb(auVar19,auVar17);
        *(undefined1 (*) [16])(unaff_RSI + (uVar8 - 0x20)) = auVar23 | auVar24;
        *(longlong *)(unaff_RSI + (uVar8 - 0x10)) = auVar18._0_8_;
        *(longlong *)((longlong)(unaff_RSI + (uVar8 - 0x10)) + 8) = auVar25._0_8_;
        *(undefined1 (*) [16])(unaff_RSI + uVar8) = auVar20 | auVar21;
        uVar12 = uVar9 + 0x10;
        uVar8 = uVar8 + 0x30;
        uVar11 = uVar9 + 0x1f;
        uVar9 = uVar12;
      } while (uVar11 < param_2);
    }
    auVar14 = _DAT_0001deb0;
    auVar13 = _DAT_0001ddf0;
    uVar8 = param_2 - 4;
    if ((uint)uVar12 < uVar8) {
      uVar9 = uVar12 & 0xffffffff;
      uVar10 = (uint)uVar12 * 3;
      do {
        pfVar1 = (float *)(unaff_RDI + uVar9 * 4);
        auVar16._0_4_ = *pfVar1 * 2.1474836e+09 + 128.0;
        auVar16._4_4_ = pfVar1[1] * 2.1474836e+09 + 128.0;
        auVar16._8_4_ = pfVar1[2] * 2.1474836e+09 + 128.0;
        auVar16._12_4_ = pfVar1[3] * 2.1474836e+09 + 128.0;
        auVar16 = minps(auVar16,auVar13);
        auVar17._0_4_ = (int)auVar16._0_4_;
        auVar17._4_4_ = (int)auVar16._4_4_;
        auVar17._8_4_ = (int)auVar16._8_4_;
        auVar17._12_4_ = (int)auVar16._12_4_;
        auVar16 = pshufb(auVar17,auVar14);
        *(longlong *)(unaff_RSI + uVar10) = auVar16._0_8_;
        *(int *)(unaff_RSI + (uVar10 + 8)) = auVar16._8_4_;
        uVar9 = uVar9 + 4;
        uVar10 = uVar10 + 0xc;
      } while (uVar9 < uVar8);
    }
    pfVar1 = (float *)(unaff_RDI + (ulonglong)uVar8 * 4);
    auVar13._0_4_ = *pfVar1 * 2.1474836e+09 + 128.0;
    auVar13._4_4_ = pfVar1[1] * 2.1474836e+09 + 128.0;
    auVar13._8_4_ = pfVar1[2] * 2.1474836e+09 + 128.0;
    auVar13._12_4_ = pfVar1[3] * 2.1474836e+09 + 128.0;
    auVar13 = minps(auVar13,_DAT_0001ddf0);
    auVar14._0_4_ = (int)auVar13._0_4_;
    auVar14._4_4_ = (int)auVar13._4_4_;
    auVar14._8_4_ = (int)auVar13._8_4_;
    auVar14._12_4_ = (int)auVar13._12_4_;
    auVar13 = pshufb(auVar14,_DAT_0001deb0);
    *(longlong *)(unaff_RSI + (param_2 * 3 - 0xc)) = auVar13._0_8_;
    *(int *)(unaff_RSI + (param_2 * 3 - 4)) = auVar13._8_4_;
  }
  return;
}



/* _Float32ToNativeInt32 @ 0x16042 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _Float32ToNativeInt32(undefined8 param_1,uint param_2)

{
  float *pfVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int *unaff_RSI;
  float *unaff_RDI;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  
  if (param_2 < 4) {
    if (param_2 != 0) {
      lVar5 = 0;
      do {
        fVar9 = unaff_RDI[lVar5] * 2.1474836e+09 + 0.5;
        iVar6 = (int)fVar9;
        if (2.1474836e+09 <= fVar9) {
          iVar6 = 0x7fffffff;
        }
        unaff_RSI[lVar5] = iVar6;
        lVar5 = lVar5 + 1;
      } while (param_2 != (uint)lVar5);
    }
  }
  else {
    auVar7._0_4_ = *unaff_RDI * 2.1474836e+09 + 0.5;
    auVar7._4_4_ = unaff_RDI[1] * 2.1474836e+09 + 0.5;
    auVar7._8_4_ = unaff_RDI[2] * 2.1474836e+09 + 0.5;
    auVar7._12_4_ = unaff_RDI[3] * 2.1474836e+09 + 0.5;
    auVar7 = minps(auVar7,_DAT_0001ddf0);
    *unaff_RSI = (int)auVar7._0_4_;
    unaff_RSI[1] = (int)auVar7._4_4_;
    unaff_RSI[2] = (int)auVar7._8_4_;
    unaff_RSI[3] = (int)auVar7._12_4_;
    auVar7 = _DAT_0001ddf0;
    uVar4 = (ulonglong)(param_2 - 4);
    for (uVar3 = (longlong)(((ulonglong)(unaff_RSI + 4) & 0xfffffffffffffff0) - (longlong)unaff_RSI)
                 >> 2; uVar3 < uVar4; uVar3 = uVar3 + 4) {
      pfVar1 = unaff_RDI + uVar3;
      auVar10._0_4_ = *pfVar1 * 2.1474836e+09 + 0.5;
      auVar10._4_4_ = pfVar1[1] * 2.1474836e+09 + 0.5;
      auVar10._8_4_ = pfVar1[2] * 2.1474836e+09 + 0.5;
      auVar10._12_4_ = pfVar1[3] * 2.1474836e+09 + 0.5;
      auVar10 = minps(auVar10,auVar7);
      piVar2 = unaff_RSI + uVar3;
      *piVar2 = (int)auVar10._0_4_;
      piVar2[1] = (int)auVar10._4_4_;
      piVar2[2] = (int)auVar10._8_4_;
      piVar2[3] = (int)auVar10._12_4_;
    }
    pfVar1 = unaff_RDI + uVar4;
    auVar8._0_4_ = *pfVar1 * 2.1474836e+09 + 0.5;
    auVar8._4_4_ = pfVar1[1] * 2.1474836e+09 + 0.5;
    auVar8._8_4_ = pfVar1[2] * 2.1474836e+09 + 0.5;
    auVar8._12_4_ = pfVar1[3] * 2.1474836e+09 + 0.5;
    auVar7 = minps(auVar8,_DAT_0001ddf0);
    piVar2 = unaff_RSI + uVar4;
    *piVar2 = (int)auVar7._0_4_;
    piVar2[1] = (int)auVar7._4_4_;
    piVar2[2] = (int)auVar7._8_4_;
    piVar2[3] = (int)auVar7._12_4_;
  }
  return;
}



/* _Float32ToSwapInt32 @ 0x1614d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _Float32ToSwapInt32(undefined8 param_1,uint param_2)

{
  float *pfVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 (*unaff_RSI) [16];
  float *unaff_RDI;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (param_2 < 4) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        fVar10 = unaff_RDI[lVar4] * 2.1474836e+09 + 0.5;
        uVar5 = (uint)fVar10;
        if (2.1474836e+09 <= fVar10) {
          uVar5 = 0x7fffffff;
        }
        *(uint *)(*unaff_RSI + lVar4 * 4) =
             uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
        lVar4 = lVar4 + 1;
      } while (param_2 != (uint)lVar4);
    }
  }
  else {
    auVar6._0_4_ = *unaff_RDI * 2.1474836e+09 + 0.5;
    auVar6._4_4_ = unaff_RDI[1] * 2.1474836e+09 + 0.5;
    auVar6._8_4_ = unaff_RDI[2] * 2.1474836e+09 + 0.5;
    auVar6._12_4_ = unaff_RDI[3] * 2.1474836e+09 + 0.5;
    auVar6 = minps(auVar6,_DAT_0001ddf0);
    auVar7._0_4_ = (int)auVar6._0_4_;
    auVar7._4_4_ = (int)auVar6._4_4_;
    auVar7._8_4_ = (int)auVar6._8_4_;
    auVar7._12_4_ = (int)auVar6._12_4_;
    auVar6 = pshufb(auVar7,_DAT_0001dee0);
    *unaff_RSI = auVar6;
    auVar7 = _DAT_0001dee0;
    auVar6 = _DAT_0001ddf0;
    uVar3 = (ulonglong)(param_2 - 4);
    for (uVar2 = (longlong)(((ulonglong)(unaff_RSI + 1) & 0xfffffffffffffff0) - (longlong)unaff_RSI)
                 >> 2; uVar2 < uVar3; uVar2 = uVar2 + 4) {
      pfVar1 = unaff_RDI + uVar2;
      auVar11._0_4_ = *pfVar1 * 2.1474836e+09 + 0.5;
      auVar11._4_4_ = pfVar1[1] * 2.1474836e+09 + 0.5;
      auVar11._8_4_ = pfVar1[2] * 2.1474836e+09 + 0.5;
      auVar11._12_4_ = pfVar1[3] * 2.1474836e+09 + 0.5;
      auVar11 = minps(auVar11,auVar6);
      auVar12._0_4_ = (int)auVar11._0_4_;
      auVar12._4_4_ = (int)auVar11._4_4_;
      auVar12._8_4_ = (int)auVar11._8_4_;
      auVar12._12_4_ = (int)auVar11._12_4_;
      auVar11 = pshufb(auVar12,auVar7);
      *(undefined1 (*) [16])(*unaff_RSI + uVar2 * 4) = auVar11;
    }
    pfVar1 = unaff_RDI + uVar3;
    auVar8._0_4_ = *pfVar1 * 2.1474836e+09 + 0.5;
    auVar8._4_4_ = pfVar1[1] * 2.1474836e+09 + 0.5;
    auVar8._8_4_ = pfVar1[2] * 2.1474836e+09 + 0.5;
    auVar8._12_4_ = pfVar1[3] * 2.1474836e+09 + 0.5;
    auVar6 = minps(auVar8,_DAT_0001ddf0);
    auVar9._0_4_ = (int)auVar6._0_4_;
    auVar9._4_4_ = (int)auVar6._4_4_;
    auVar9._8_4_ = (int)auVar6._8_4_;
    auVar9._12_4_ = (int)auVar6._12_4_;
    auVar6 = pshufb(auVar9,_DAT_0001dee0);
    *(undefined1 (*) [16])(*unaff_RSI + uVar3 * 4) = auVar6;
  }
  return;
}



/* _Int8ToFloat32 @ 0x1627a */

void _Int8ToFloat32(undefined8 param_1,uint param_2)

{
  float *pfVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 (*unaff_RSI) [16];
  undefined4 *unaff_RDI;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar6 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (param_2 < 0x10) {
    if (param_2 != 0) {
      lVar3 = 0;
      do {
        *(float *)(*unaff_RSI + lVar3 * 4) =
             (float)(int)*(char *)((longlong)unaff_RDI + lVar3) * 0.0078125;
        lVar3 = lVar3 + 1;
      } while (param_2 != (uint)lVar3);
    }
  }
  else {
    auVar5 = pmovsxbd(in_XMM0,*unaff_RDI);
    auVar6 = pmovsxbd(in_XMM1,unaff_RDI[1]);
    auVar7 = pmovsxbd(in_XMM2,unaff_RDI[2]);
    auVar9 = pmovsxbd(in_XMM3,unaff_RDI[3]);
    auVar11._0_4_ = (float)auVar5._0_4_ * 0.0078125;
    auVar11._4_4_ = (float)auVar5._4_4_ * 0.0078125;
    auVar11._8_4_ = (float)auVar5._8_4_ * 0.0078125;
    auVar11._12_4_ = (float)auVar5._12_4_ * 0.0078125;
    auVar5._0_4_ = (float)auVar6._0_4_ * 0.0078125;
    auVar5._4_4_ = (float)auVar6._4_4_ * 0.0078125;
    auVar5._8_4_ = (float)auVar6._8_4_ * 0.0078125;
    auVar5._12_4_ = (float)auVar6._12_4_ * 0.0078125;
    auVar6._0_4_ = (float)auVar7._0_4_ * 0.0078125;
    auVar6._4_4_ = (float)auVar7._4_4_ * 0.0078125;
    auVar6._8_4_ = (float)auVar7._8_4_ * 0.0078125;
    auVar6._12_4_ = (float)auVar7._12_4_ * 0.0078125;
    auVar7._0_4_ = (float)auVar9._0_4_ * 0.0078125;
    auVar7._4_4_ = (float)auVar9._4_4_ * 0.0078125;
    auVar7._8_4_ = (float)auVar9._8_4_ * 0.0078125;
    auVar7._12_4_ = (float)auVar9._12_4_ * 0.0078125;
    unaff_RSI[3] = auVar7;
    unaff_RSI[2] = auVar6;
    unaff_RSI[1] = auVar5;
    *unaff_RSI = auVar11;
    uVar4 = (ulonglong)(param_2 - 0x10);
    for (uVar2 = (longlong)(((ulonglong)(unaff_RSI + 4) & 0xfffffffffffffff0) - (longlong)unaff_RSI)
                 >> 2; uVar2 < uVar4; uVar2 = uVar2 + 0x10) {
      auVar9 = pmovsxbd(auVar5,*(undefined4 *)((longlong)unaff_RDI + uVar2));
      auVar8 = pmovsxbd(auVar6,*(undefined4 *)((longlong)unaff_RDI + uVar2 + 4));
      auVar10 = pmovsxbd(auVar7,*(undefined4 *)((longlong)unaff_RDI + uVar2 + 8));
      auVar12 = pmovsxbd(auVar11,*(undefined4 *)((longlong)unaff_RDI + uVar2 + 0xc));
      auVar5._0_4_ = (float)auVar9._0_4_ * 0.0078125;
      auVar5._4_4_ = (float)auVar9._4_4_ * 0.0078125;
      auVar5._8_4_ = (float)auVar9._8_4_ * 0.0078125;
      auVar5._12_4_ = (float)auVar9._12_4_ * 0.0078125;
      auVar6._0_4_ = (float)auVar8._0_4_ * 0.0078125;
      auVar6._4_4_ = (float)auVar8._4_4_ * 0.0078125;
      auVar6._8_4_ = (float)auVar8._8_4_ * 0.0078125;
      auVar6._12_4_ = (float)auVar8._12_4_ * 0.0078125;
      auVar7._0_4_ = (float)auVar10._0_4_ * 0.0078125;
      auVar7._4_4_ = (float)auVar10._4_4_ * 0.0078125;
      auVar7._8_4_ = (float)auVar10._8_4_ * 0.0078125;
      auVar7._12_4_ = (float)auVar10._12_4_ * 0.0078125;
      auVar11._0_4_ = (float)auVar12._0_4_ * 0.0078125;
      auVar11._4_4_ = (float)auVar12._4_4_ * 0.0078125;
      auVar11._8_4_ = (float)auVar12._8_4_ * 0.0078125;
      auVar11._12_4_ = (float)auVar12._12_4_ * 0.0078125;
      *(undefined1 (*) [16])(unaff_RSI[3] + uVar2 * 4) = auVar11;
      *(undefined1 (*) [16])(unaff_RSI[2] + uVar2 * 4) = auVar7;
      *(undefined1 (*) [16])(unaff_RSI[1] + uVar2 * 4) = auVar6;
      *(undefined1 (*) [16])(*unaff_RSI + uVar2 * 4) = auVar5;
    }
    auVar5 = pmovsxbd(auVar5,*(undefined4 *)((longlong)unaff_RDI + uVar4));
    auVar6 = pmovsxbd(auVar6,*(undefined4 *)((longlong)unaff_RDI + uVar4 + 4));
    auVar7 = pmovsxbd(auVar7,*(undefined4 *)((longlong)unaff_RDI + uVar4 + 8));
    auVar9 = pmovsxbd(auVar11,*(undefined4 *)((longlong)unaff_RDI + uVar4 + 0xc));
    pfVar1 = (float *)(unaff_RSI[3] + uVar4 * 4);
    *pfVar1 = (float)auVar9._0_4_ * 0.0078125;
    pfVar1[1] = (float)auVar9._4_4_ * 0.0078125;
    pfVar1[2] = (float)auVar9._8_4_ * 0.0078125;
    pfVar1[3] = (float)auVar9._12_4_ * 0.0078125;
    pfVar1 = (float *)(unaff_RSI[2] + uVar4 * 4);
    *pfVar1 = (float)auVar7._0_4_ * 0.0078125;
    pfVar1[1] = (float)auVar7._4_4_ * 0.0078125;
    pfVar1[2] = (float)auVar7._8_4_ * 0.0078125;
    pfVar1[3] = (float)auVar7._12_4_ * 0.0078125;
    pfVar1 = (float *)(unaff_RSI[1] + uVar4 * 4);
    *pfVar1 = (float)auVar6._0_4_ * 0.0078125;
    pfVar1[1] = (float)auVar6._4_4_ * 0.0078125;
    pfVar1[2] = (float)auVar6._8_4_ * 0.0078125;
    pfVar1[3] = (float)auVar6._12_4_ * 0.0078125;
    pfVar1 = (float *)(*unaff_RSI + uVar4 * 4);
    *pfVar1 = (float)auVar5._0_4_ * 0.0078125;
    pfVar1[1] = (float)auVar5._4_4_ * 0.0078125;
    pfVar1[2] = (float)auVar5._8_4_ * 0.0078125;
    pfVar1[3] = (float)auVar5._12_4_ * 0.0078125;
  }
  return;
}



/* _NativeInt16ToFloat32 @ 0x163a4 */

void _NativeInt16ToFloat32(undefined8 param_1,uint param_2)

{
  float *pfVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 (*unaff_RSI) [16];
  undefined8 *unaff_RDI;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_2 < 8) {
    if (param_2 != 0) {
      lVar3 = 0;
      do {
        *(float *)(*unaff_RSI + lVar3 * 4) =
             (float)(int)*(short *)((longlong)unaff_RDI + lVar3 * 2) * 3.0517578e-05;
        lVar3 = lVar3 + 1;
      } while (param_2 != (uint)lVar3);
    }
  }
  else {
    auVar5 = pmovsxwd(in_XMM0,*unaff_RDI);
    auVar6 = pmovsxwd(in_XMM1,unaff_RDI[1]);
    auVar7._0_4_ = (float)auVar5._0_4_ * 3.0517578e-05;
    auVar7._4_4_ = (float)auVar5._4_4_ * 3.0517578e-05;
    auVar7._8_4_ = (float)auVar5._8_4_ * 3.0517578e-05;
    auVar7._12_4_ = (float)auVar5._12_4_ * 3.0517578e-05;
    auVar5._0_4_ = (float)auVar6._0_4_ * 3.0517578e-05;
    auVar5._4_4_ = (float)auVar6._4_4_ * 3.0517578e-05;
    auVar5._8_4_ = (float)auVar6._8_4_ * 3.0517578e-05;
    auVar5._12_4_ = (float)auVar6._12_4_ * 3.0517578e-05;
    unaff_RSI[1] = auVar5;
    *unaff_RSI = auVar7;
    uVar4 = (ulonglong)(param_2 - 8);
    for (uVar2 = (longlong)(((ulonglong)(unaff_RSI + 2) & 0xfffffffffffffff0) - (longlong)unaff_RSI)
                 >> 2; uVar2 < uVar4; uVar2 = uVar2 + 8) {
      auVar6 = pmovsxwd(auVar5,*(undefined8 *)((longlong)unaff_RDI + uVar2 * 2));
      auVar8 = pmovsxwd(auVar7,*(undefined8 *)((longlong)unaff_RDI + uVar2 * 2 + 8));
      auVar5._0_4_ = (float)auVar6._0_4_ * 3.0517578e-05;
      auVar5._4_4_ = (float)auVar6._4_4_ * 3.0517578e-05;
      auVar5._8_4_ = (float)auVar6._8_4_ * 3.0517578e-05;
      auVar5._12_4_ = (float)auVar6._12_4_ * 3.0517578e-05;
      auVar7._0_4_ = (float)auVar8._0_4_ * 3.0517578e-05;
      auVar7._4_4_ = (float)auVar8._4_4_ * 3.0517578e-05;
      auVar7._8_4_ = (float)auVar8._8_4_ * 3.0517578e-05;
      auVar7._12_4_ = (float)auVar8._12_4_ * 3.0517578e-05;
      *(undefined1 (*) [16])(unaff_RSI[1] + uVar2 * 4) = auVar7;
      *(undefined1 (*) [16])(*unaff_RSI + uVar2 * 4) = auVar5;
    }
    auVar5 = pmovsxwd(auVar5,*(undefined8 *)((longlong)unaff_RDI + uVar4 * 2));
    auVar6 = pmovsxwd(auVar7,*(undefined8 *)((longlong)unaff_RDI + uVar4 * 2 + 8));
    pfVar1 = (float *)(unaff_RSI[1] + uVar4 * 4);
    *pfVar1 = (float)auVar6._0_4_ * 3.0517578e-05;
    pfVar1[1] = (float)auVar6._4_4_ * 3.0517578e-05;
    pfVar1[2] = (float)auVar6._8_4_ * 3.0517578e-05;
    pfVar1[3] = (float)auVar6._12_4_ * 3.0517578e-05;
    pfVar1 = (float *)(*unaff_RSI + uVar4 * 4);
    *pfVar1 = (float)auVar5._0_4_ * 3.0517578e-05;
    pfVar1[1] = (float)auVar5._4_4_ * 3.0517578e-05;
    pfVar1[2] = (float)auVar5._8_4_ * 3.0517578e-05;
    pfVar1[3] = (float)auVar5._12_4_ * 3.0517578e-05;
  }
  return;
}



/* _SwapInt16ToFloat32 @ 0x16462 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _SwapInt16ToFloat32(undefined8 param_1,uint param_2)

{
  float *pfVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  float *unaff_RSI;
  undefined1 (*unaff_RDI) [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar7 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar8 [16];
  
  if (7 < param_2) {
    auVar5 = pshufb(*unaff_RDI,_DAT_0001ddd0);
    auVar7 = pmovsxwd(in_XMM1,auVar5);
    auVar6._8_4_ = auVar5._8_4_;
    auVar6._12_4_ = auVar5._12_4_;
    auVar6._0_8_ = auVar5._8_8_;
    auVar6 = pmovsxwd(auVar6,auVar6);
    auVar5._0_4_ = (float)auVar6._0_4_ * 3.0517578e-05;
    auVar5._4_4_ = (float)auVar6._4_4_ * 3.0517578e-05;
    auVar5._8_4_ = (float)auVar6._8_4_ * 3.0517578e-05;
    auVar5._12_4_ = (float)auVar6._12_4_ * 3.0517578e-05;
    *unaff_RSI = (float)auVar7._0_4_ * 3.0517578e-05;
    unaff_RSI[1] = (float)auVar7._4_4_ * 3.0517578e-05;
    unaff_RSI[2] = (float)auVar7._8_4_ * 3.0517578e-05;
    unaff_RSI[3] = (float)auVar7._12_4_ * 3.0517578e-05;
    *(undefined1 (*) [16])(unaff_RSI + 4) = auVar5;
    auVar6 = _DAT_0001ddd0;
    uVar4 = (ulonglong)(param_2 - 8);
    for (uVar2 = (longlong)(((ulonglong)(unaff_RSI + 8) & 0xfffffffffffffff0) - (longlong)unaff_RSI)
                 >> 2; uVar2 < uVar4; uVar2 = uVar2 + 8) {
      auVar5 = pshufb(*(undefined1 (*) [16])(*unaff_RDI + uVar2 * 2),auVar6);
      auVar8 = pmovsxwd(in_XMM3,auVar5);
      auVar7._8_4_ = auVar5._8_4_;
      auVar7._12_4_ = auVar5._12_4_;
      auVar7._0_8_ = auVar5._8_8_;
      auVar7 = pmovsxwd(auVar7,auVar7);
      auVar5._0_4_ = (float)auVar7._0_4_ * 3.0517578e-05;
      auVar5._4_4_ = (float)auVar7._4_4_ * 3.0517578e-05;
      auVar5._8_4_ = (float)auVar7._8_4_ * 3.0517578e-05;
      auVar5._12_4_ = (float)auVar7._12_4_ * 3.0517578e-05;
      in_XMM3._0_4_ = (float)auVar8._0_4_ * 3.0517578e-05;
      in_XMM3._4_4_ = (float)auVar8._4_4_ * 3.0517578e-05;
      in_XMM3._8_4_ = (float)auVar8._8_4_ * 3.0517578e-05;
      in_XMM3._12_4_ = (float)auVar8._12_4_ * 3.0517578e-05;
      *(undefined1 (*) [16])(unaff_RSI + uVar2) = in_XMM3;
      *(undefined1 (*) [16])(unaff_RSI + uVar2 + 4) = auVar5;
    }
    auVar6 = pshufb(*(undefined1 (*) [16])(*unaff_RDI + uVar4 * 2),_DAT_0001ddd0);
    auVar7 = pmovsxwd(auVar5,auVar6);
    auVar8._8_4_ = auVar6._8_4_;
    auVar8._12_4_ = auVar6._12_4_;
    auVar8._0_8_ = auVar6._8_8_;
    auVar5 = pmovsxwd(auVar8,auVar8);
    pfVar1 = unaff_RSI + uVar4;
    *pfVar1 = (float)auVar7._0_4_ * 3.0517578e-05;
    pfVar1[1] = (float)auVar7._4_4_ * 3.0517578e-05;
    pfVar1[2] = (float)auVar7._8_4_ * 3.0517578e-05;
    pfVar1[3] = (float)auVar7._12_4_ * 3.0517578e-05;
    pfVar1 = unaff_RSI + uVar4 + 4;
    *pfVar1 = (float)auVar5._0_4_ * 3.0517578e-05;
    pfVar1[1] = (float)auVar5._4_4_ * 3.0517578e-05;
    pfVar1[2] = (float)auVar5._8_4_ * 3.0517578e-05;
    pfVar1[3] = (float)auVar5._12_4_ * 3.0517578e-05;
    return;
  }
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      unaff_RSI[lVar3] =
           (float)(int)(short)(*(ushort *)(*unaff_RDI + lVar3 * 2) << 8 |
                              *(ushort *)(*unaff_RDI + lVar3 * 2) >> 8) * 3.0517578e-05;
      lVar3 = lVar3 + 1;
    } while (param_2 != (uint)lVar3);
  }
  return;
}



/* _NativeInt24ToFloat32 @ 0x16562 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _NativeInt24ToFloat32(undefined8 param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  float *unaff_RSI;
  undefined1 (*unaff_RDI) [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  auVar4 = _DAT_0001df10;
  uVar7 = 0;
  if (0x11 < param_2) {
    uVar7 = 0x11;
    do {
      auVar8 = *unaff_RDI;
      puVar1 = *unaff_RDI;
      pauVar2 = unaff_RDI + 1;
      pauVar3 = unaff_RDI + 2;
      unaff_RDI = unaff_RDI + 3;
      auVar8 = pshufb(auVar8,auVar4);
      auVar9 = pshufb(*(undefined1 (*) [16])(puVar1 + 0xc),auVar4);
      auVar10 = pshufb(*(undefined1 (*) [16])(*pauVar2 + 8),auVar4);
      auVar11 = pshufb(*(undefined1 (*) [16])(*pauVar3 + 4),auVar4);
      *unaff_RSI = (float)auVar8._0_4_ * 4.656613e-10;
      unaff_RSI[1] = (float)auVar8._4_4_ * 4.656613e-10;
      unaff_RSI[2] = (float)auVar8._8_4_ * 4.656613e-10;
      unaff_RSI[3] = (float)auVar8._12_4_ * 4.656613e-10;
      unaff_RSI[4] = (float)auVar9._0_4_ * 4.656613e-10;
      unaff_RSI[5] = (float)auVar9._4_4_ * 4.656613e-10;
      unaff_RSI[6] = (float)auVar9._8_4_ * 4.656613e-10;
      unaff_RSI[7] = (float)auVar9._12_4_ * 4.656613e-10;
      unaff_RSI[8] = (float)auVar10._0_4_ * 4.656613e-10;
      unaff_RSI[9] = (float)auVar10._4_4_ * 4.656613e-10;
      unaff_RSI[10] = (float)auVar10._8_4_ * 4.656613e-10;
      unaff_RSI[0xb] = (float)auVar10._12_4_ * 4.656613e-10;
      unaff_RSI[0xc] = (float)auVar11._0_4_ * 4.656613e-10;
      unaff_RSI[0xd] = (float)auVar11._4_4_ * 4.656613e-10;
      unaff_RSI[0xe] = (float)auVar11._8_4_ * 4.656613e-10;
      unaff_RSI[0xf] = (float)auVar11._12_4_ * 4.656613e-10;
      unaff_RSI = unaff_RSI + 0x10;
      uVar7 = uVar7 + 0x10;
    } while (uVar7 < param_2);
    uVar7 = (param_2 - 0x12 & 0xfffffff0) + 0x10;
  }
  auVar4 = _DAT_0001df10;
  uVar5 = uVar7 + 5;
  while (uVar5 < param_2) {
    auVar8 = pshufb(*unaff_RDI,auVar4);
    unaff_RDI = (undefined1 (*) [16])(*unaff_RDI + 0xc);
    *unaff_RSI = (float)auVar8._0_4_ * 4.656613e-10;
    unaff_RSI[1] = (float)auVar8._4_4_ * 4.656613e-10;
    unaff_RSI[2] = (float)auVar8._8_4_ * 4.656613e-10;
    unaff_RSI[3] = (float)auVar8._12_4_ * 4.656613e-10;
    unaff_RSI = unaff_RSI + 4;
    uVar5 = uVar7 + 9;
    uVar7 = uVar7 + 4;
  }
  if (uVar7 < param_2) {
    lVar6 = 0;
    do {
      unaff_RSI[lVar6] =
           (float)(int)((uint)(byte)(*unaff_RDI)[2] << 0x18 | (uint)*(ushort *)*unaff_RDI << 8) *
           4.656613e-10;
      lVar6 = lVar6 + 1;
      unaff_RDI = (undefined1 (*) [16])(*unaff_RDI + 3);
    } while (param_2 - uVar7 != (int)lVar6);
  }
  return;
}



/* _SwapInt24ToFloat32 @ 0x16665 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _SwapInt24ToFloat32(undefined8 param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  float *unaff_RSI;
  undefined1 (*unaff_RDI) [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  auVar4 = _DAT_0001df30;
  uVar7 = 0;
  if (0x11 < param_2) {
    uVar7 = 0x11;
    do {
      auVar8 = *unaff_RDI;
      puVar1 = *unaff_RDI;
      pauVar2 = unaff_RDI + 1;
      pauVar3 = unaff_RDI + 2;
      unaff_RDI = unaff_RDI + 3;
      auVar8 = pshufb(auVar8,auVar4);
      auVar9 = pshufb(*(undefined1 (*) [16])(puVar1 + 0xc),auVar4);
      auVar10 = pshufb(*(undefined1 (*) [16])(*pauVar2 + 8),auVar4);
      auVar11 = pshufb(*(undefined1 (*) [16])(*pauVar3 + 4),auVar4);
      *unaff_RSI = (float)auVar8._0_4_ * 4.656613e-10;
      unaff_RSI[1] = (float)auVar8._4_4_ * 4.656613e-10;
      unaff_RSI[2] = (float)auVar8._8_4_ * 4.656613e-10;
      unaff_RSI[3] = (float)auVar8._12_4_ * 4.656613e-10;
      unaff_RSI[4] = (float)auVar9._0_4_ * 4.656613e-10;
      unaff_RSI[5] = (float)auVar9._4_4_ * 4.656613e-10;
      unaff_RSI[6] = (float)auVar9._8_4_ * 4.656613e-10;
      unaff_RSI[7] = (float)auVar9._12_4_ * 4.656613e-10;
      unaff_RSI[8] = (float)auVar10._0_4_ * 4.656613e-10;
      unaff_RSI[9] = (float)auVar10._4_4_ * 4.656613e-10;
      unaff_RSI[10] = (float)auVar10._8_4_ * 4.656613e-10;
      unaff_RSI[0xb] = (float)auVar10._12_4_ * 4.656613e-10;
      unaff_RSI[0xc] = (float)auVar11._0_4_ * 4.656613e-10;
      unaff_RSI[0xd] = (float)auVar11._4_4_ * 4.656613e-10;
      unaff_RSI[0xe] = (float)auVar11._8_4_ * 4.656613e-10;
      unaff_RSI[0xf] = (float)auVar11._12_4_ * 4.656613e-10;
      unaff_RSI = unaff_RSI + 0x10;
      uVar7 = uVar7 + 0x10;
    } while (uVar7 < param_2);
    uVar7 = (param_2 - 0x12 & 0xfffffff0) + 0x10;
  }
  auVar4 = _DAT_0001df30;
  uVar5 = uVar7 + 5;
  while (uVar5 < param_2) {
    auVar8 = pshufb(*unaff_RDI,auVar4);
    unaff_RDI = (undefined1 (*) [16])(*unaff_RDI + 0xc);
    *unaff_RSI = (float)auVar8._0_4_ * 4.656613e-10;
    unaff_RSI[1] = (float)auVar8._4_4_ * 4.656613e-10;
    unaff_RSI[2] = (float)auVar8._8_4_ * 4.656613e-10;
    unaff_RSI[3] = (float)auVar8._12_4_ * 4.656613e-10;
    unaff_RSI = unaff_RSI + 4;
    uVar5 = uVar7 + 9;
    uVar7 = uVar7 + 4;
  }
  if (uVar7 < param_2) {
    lVar6 = 0;
    do {
      unaff_RSI[lVar6] =
           (float)(int)(((uint)(byte)(*unaff_RDI)[2] |
                        (uint)(byte)(*unaff_RDI)[1] << 8 | (uint)(byte)(*unaff_RDI)[0] << 0x10) << 8
                       ) * 4.656613e-10;
      lVar6 = lVar6 + 1;
      unaff_RDI = (undefined1 (*) [16])(*unaff_RDI + 3);
    } while (param_2 - uVar7 != (int)lVar6);
  }
  return;
}



/* _NativeInt32ToFloat32 @ 0x16771 */

void _NativeInt32ToFloat32(undefined8 param_1,uint param_2)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  float *unaff_RSI;
  int *unaff_RDI;
  
  if (3 < param_2) {
    iVar3 = unaff_RDI[1];
    iVar4 = unaff_RDI[2];
    iVar5 = unaff_RDI[3];
    *unaff_RSI = (float)*unaff_RDI * 4.656613e-10;
    unaff_RSI[1] = (float)iVar3 * 4.656613e-10;
    unaff_RSI[2] = (float)iVar4 * 4.656613e-10;
    unaff_RSI[3] = (float)iVar5 * 4.656613e-10;
    uVar8 = (ulonglong)(param_2 - 4);
    for (uVar6 = (longlong)(((ulonglong)(unaff_RSI + 4) & 0xfffffffffffffff0) - (longlong)unaff_RSI)
                 >> 2; uVar6 < uVar8; uVar6 = uVar6 + 4) {
      piVar1 = unaff_RDI + uVar6;
      iVar3 = piVar1[1];
      iVar4 = piVar1[2];
      iVar5 = piVar1[3];
      pfVar2 = unaff_RSI + uVar6;
      *pfVar2 = (float)*piVar1 * 4.656613e-10;
      pfVar2[1] = (float)iVar3 * 4.656613e-10;
      pfVar2[2] = (float)iVar4 * 4.656613e-10;
      pfVar2[3] = (float)iVar5 * 4.656613e-10;
    }
    piVar1 = unaff_RDI + uVar8;
    iVar3 = piVar1[1];
    iVar4 = piVar1[2];
    iVar5 = piVar1[3];
    pfVar2 = unaff_RSI + uVar8;
    *pfVar2 = (float)*piVar1 * 4.656613e-10;
    pfVar2[1] = (float)iVar3 * 4.656613e-10;
    pfVar2[2] = (float)iVar4 * 4.656613e-10;
    pfVar2[3] = (float)iVar5 * 4.656613e-10;
    return;
  }
  if (param_2 != 0) {
    lVar7 = 0;
    do {
      unaff_RSI[lVar7] = (float)unaff_RDI[lVar7] * 4.656613e-10;
      lVar7 = lVar7 + 1;
    } while (param_2 != (uint)lVar7);
  }
  return;
}



/* _SwapInt32ToFloat32 @ 0x167fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _SwapInt32ToFloat32(undefined8 param_1,uint param_2)

{
  float *pfVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  float *unaff_RSI;
  undefined1 (*unaff_RDI) [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (3 < param_2) {
    auVar6 = pshufb(*unaff_RDI,_DAT_0001dee0);
    *unaff_RSI = (float)auVar6._0_4_ * 4.656613e-10;
    unaff_RSI[1] = (float)auVar6._4_4_ * 4.656613e-10;
    unaff_RSI[2] = (float)auVar6._8_4_ * 4.656613e-10;
    unaff_RSI[3] = (float)auVar6._12_4_ * 4.656613e-10;
    auVar6 = _DAT_0001dee0;
    uVar5 = (ulonglong)(param_2 - 4);
    for (uVar3 = (longlong)(((ulonglong)(unaff_RSI + 4) & 0xfffffffffffffff0) - (longlong)unaff_RSI)
                 >> 2; uVar3 < uVar5; uVar3 = uVar3 + 4) {
      auVar7 = pshufb(*(undefined1 (*) [16])(*unaff_RDI + uVar3 * 4),auVar6);
      pfVar1 = unaff_RSI + uVar3;
      *pfVar1 = (float)auVar7._0_4_ * 4.656613e-10;
      pfVar1[1] = (float)auVar7._4_4_ * 4.656613e-10;
      pfVar1[2] = (float)auVar7._8_4_ * 4.656613e-10;
      pfVar1[3] = (float)auVar7._12_4_ * 4.656613e-10;
    }
    auVar6 = pshufb(*(undefined1 (*) [16])(*unaff_RDI + uVar5 * 4),_DAT_0001dee0);
    pfVar1 = unaff_RSI + uVar5;
    *pfVar1 = (float)auVar6._0_4_ * 4.656613e-10;
    pfVar1[1] = (float)auVar6._4_4_ * 4.656613e-10;
    pfVar1[2] = (float)auVar6._8_4_ * 4.656613e-10;
    pfVar1[3] = (float)auVar6._12_4_ * 4.656613e-10;
    return;
  }
  if (param_2 != 0) {
    lVar4 = 0;
    do {
      uVar2 = *(uint *)(*unaff_RDI + lVar4 * 4);
      unaff_RSI[lVar4] =
           (float)(int)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                       uVar2 << 0x18) * 4.656613e-10;
      lVar4 = lVar4 + 1;
    } while (param_2 != (uint)lVar4);
  }
  return;
}



/* _memcpy_16B @ 0x168c0 */

void _memcpy_16B(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined1 (*unaff_RSI) [16];
  undefined1 (*pauVar4) [16];
  undefined1 (*unaff_RDI) [16];
  undefined1 (*pauVar5) [16];
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (0x4f < param_2) {
    uVar1 = *(undefined8 *)(*unaff_RSI + 8);
    pauVar5 = (undefined1 (*) [16])((ulonglong)(unaff_RDI + 1) & 0xfffffffffffffff0);
    pauVar4 = (undefined1 (*) [16])((longlong)unaff_RSI + ((longlong)pauVar5 - (longlong)unaff_RDI))
    ;
    param_2 = param_2 - ((longlong)pauVar5 - (longlong)unaff_RDI);
    auVar7 = *pauVar4;
    *(undefined8 *)*unaff_RDI = *(undefined8 *)*unaff_RSI;
    *(undefined8 *)(*unaff_RDI + 8) = uVar1;
    auVar8 = pauVar4[1];
    auVar9 = pauVar4[2];
    auVar10 = pauVar4[3];
    unaff_RSI = pauVar4 + 4;
    uVar3 = param_2 - 0x80;
    if (0x7f < param_2 && uVar3 != 0) {
      if (((ulonglong)unaff_RSI & 0xf) == 0) {
        do {
          *pauVar5 = auVar7;
          pauVar5[1] = auVar8;
          pauVar5[2] = auVar9;
          pauVar5[3] = auVar10;
          pauVar5 = pauVar5 + 4;
          auVar7 = movntdqa(auVar7,*unaff_RSI);
          auVar8 = movntdqa(auVar8,unaff_RSI[1]);
          auVar9 = movntdqa(auVar9,unaff_RSI[2]);
          auVar10 = movntdqa(auVar10,unaff_RSI[3]);
          unaff_RSI = unaff_RSI + 4;
          bVar6 = 0x3f < uVar3;
          uVar3 = uVar3 - 0x40;
        } while (bVar6 && uVar3 != 0);
      }
      else {
        do {
          *pauVar5 = auVar7;
          pauVar5[1] = auVar8;
          pauVar5[2] = auVar9;
          pauVar5[3] = auVar10;
          pauVar5 = pauVar5 + 4;
          auVar7 = *unaff_RSI;
          auVar8 = unaff_RSI[1];
          auVar9 = unaff_RSI[2];
          auVar10 = unaff_RSI[3];
          unaff_RSI = unaff_RSI + 4;
          bVar6 = 0x3f < uVar3;
          uVar3 = uVar3 - 0x40;
        } while (bVar6 && uVar3 != 0);
      }
    }
    *pauVar5 = auVar7;
    pauVar5[1] = auVar8;
    pauVar5[2] = auVar9;
    pauVar5[3] = auVar10;
    unaff_RDI = pauVar5 + 4;
    param_2 = uVar3 + 0x40;
    if (uVar3 + 0x40 == 0) {
      return;
    }
  }
  while (7 < param_2) {
    puVar2 = *unaff_RSI;
    unaff_RSI = (undefined1 (*) [16])(*unaff_RSI + 8);
    *(undefined8 *)*unaff_RDI = *(undefined8 *)puVar2;
    unaff_RDI = (undefined1 (*) [16])(*unaff_RDI + 8);
    param_2 = param_2 - 8;
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    puVar2 = *unaff_RSI;
    unaff_RSI = (undefined1 (*) [16])(*unaff_RSI + 1);
    (*unaff_RDI)[0] = *puVar2;
    unaff_RDI = (undefined1 (*) [16])(*unaff_RDI + 1);
  }
  return;
}



/* IOAudioEngine::mixOutputSamples @ 0x16a60 */

/* IOAudioEngine::mixOutputSamples(void const*, void*, unsigned int, unsigned int,
   _IOAudioStreamFormat const*, IOAudioStream*) */

undefined8
IOAudioEngine::mixOutputSamples
          (void *param_1,void *param_2,uint param_3,uint param_4,_IOAudioStreamFormat *param_5,
          IOAudioStream *param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong unaff_RSI;
  ulonglong uVar3;
  uint uVar4;
  undefined4 in_register_0000008c;
  ulonglong uVar5;
  
  uVar2 = 0xe00002c2;
  if (param_2 != (void *)0x0 && unaff_RSI != 0) {
    uVar4 = param_3 * *(int *)CONCAT44(in_register_0000008c,param_4);
    if (uVar4 == 0) {
      return 0;
    }
    uVar3 = (ulonglong)(uint)(*(int *)CONCAT44(in_register_0000008c,param_4) * (int)param_1);
    uVar2 = 0;
    if (uVar4 < 4) {
      uVar5 = 0;
    }
    else {
      lVar1 = uVar3 * 4 + 0xc;
      uVar5 = 0;
      do {
        *(float *)((longlong)param_2 + uVar5 * 4 + uVar3 * 4) =
             *(float *)(unaff_RSI + uVar5 * 4) +
             *(float *)((longlong)param_2 + uVar5 * 4 + uVar3 * 4);
        *(float *)((longlong)param_2 + uVar5 * 4 + uVar3 * 4 + 4) =
             *(float *)(unaff_RSI + 4 + uVar5 * 4) +
             *(float *)((longlong)param_2 + uVar5 * 4 + uVar3 * 4 + 4);
        *(float *)((longlong)param_2 + uVar5 * 4 + uVar3 * 4 + 8) =
             *(float *)(unaff_RSI + 8 + uVar5 * 4) +
             *(float *)((longlong)param_2 + uVar5 * 4 + uVar3 * 4 + 8);
        *(float *)((longlong)param_2 + uVar5 * 4 + lVar1) =
             *(float *)(unaff_RSI + 0xc + uVar5 * 4) +
             *(float *)((longlong)param_2 + uVar5 * 4 + lVar1);
        uVar5 = uVar5 + 4;
      } while ((uVar4 & 0xfffffffc) != uVar5);
    }
    if ((ulonglong)(uVar4 & 3) != 0) {
      lVar1 = uVar3 * 4 + uVar5 * 4;
      uVar2 = 0;
      uVar3 = 0;
      do {
        *(float *)((longlong)param_2 + uVar3 * 4 + lVar1) =
             *(float *)(unaff_RSI + uVar5 * 4 + uVar3 * 4) +
             *(float *)((longlong)param_2 + uVar3 * 4 + lVar1);
        uVar3 = uVar3 + 1;
      } while ((uVar4 & 3) != uVar3);
    }
  }
  return uVar2;
}



/* IOAudioEngine::init @ 0x16b5a */

/* IOAudioEngine::init(OSDictionary*) */

undefined8 IOAudioEngine::init(OSDictionary *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  _func_void_OSObject_ptr_IOTimerEventSource_ptr *unaff_RSI;
  longlong *unaff_RDI;
  
  __os_log_internal("+ IOAudioEngine[%p]::init(%p)\n",0);
  if (unaff_RSI == (_func_void_OSObject_ptr_IOTimerEventSource_ptr *)0x0) {
    uVar6 = 0x1a780;
    unaff_RSI = (_func_void_OSObject_ptr_IOTimerEventSource_ptr *)0x0;
    __os_log_internal("  properties(%p) == NULL\n",0);
  }
  else {
    (**(code **)(*(longlong *)unaff_RSI + 0x168))();
    uVar6 = 0x1a750;
    __os_log_internal("  Make copy of properties(%p) != pDict(%p)\n",0);
  }
  cVar1 = (**(code **)(PTR_vtable_0001e050 + 600))();
  if (cVar1 != '\0') {
    *(undefined1 *)((longlong)unaff_RDI + 0x10c) = 1;
    *(undefined8 *)((longlong)unaff_RDI + 0x8c) = 0;
    *(undefined4 *)((longlong)unaff_RDI + 0x94) = 4;
    *(undefined1 *)((longlong)unaff_RDI + 0xa4) = 0;
    *(undefined4 *)(unaff_RDI + 0x20) = 0;
    puVar2 = (undefined4 *)_IOMallocTypeImpl();
    unaff_RDI[0x22] = (longlong)puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined8 *)(puVar2 + 6) = 0;
      puVar2[8] = 10;
      *(undefined8 *)(puVar2 + 10) = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      *(undefined1 *)(puVar2 + 0xf) = 0;
      *(char **)(puVar2 + 0x12) =
           "OAudioEngineUserClient::registerNotificationPort() - ERROR: invalid notification type specified - no notifications will be sent.\n"
      ;
      *(nlist **)(puVar2 + 0x14) = &nlist_00030d40;
      uVar3 = IOBufferMemoryDescriptor::withOptions
                        (uVar6,(ulong)*(undefined8 *)PTR__page_size_0001e078,(ulong)unaff_RSI);
      *(undefined8 *)(unaff_RDI[0x22] + 8) = uVar3;
      lVar4 = IOWorkLoop::workLoop();
      lVar5 = unaff_RDI[0x22];
      *(longlong *)(lVar5 + 0x40) = lVar4;
      if (lVar4 != 0) {
        lVar4 = IOTimerEventSource::timerEventSource
                          ((uint)lVar5,(OSObject *)timerCallback,unaff_RSI);
        lVar5 = unaff_RDI[0x22];
        *(longlong *)(lVar5 + 0x58) = lVar4;
        if ((lVar4 != 0) && (*(longlong **)(lVar5 + 8) != (longlong *)0x0)) {
          lVar4 = (**(code **)(**(longlong **)(lVar5 + 8) + 0x2e0))();
          uVar6 = (uint)lVar5;
          unaff_RDI[0x16] = lVar4;
          if (lVar4 != 0) {
            uVar3 = 0;
            lVar5 = OSOrderedSet::withCapacity
                              (uVar6,(_func_int_OSMetaClassBase_ptr_OSMetaClassBase_ptr_void_ptr *)
                                     0x0,unaff_RSI);
            unaff_RDI[0x1c] = lVar5;
            if (lVar5 != 0) {
              uVar3 = 0;
              lVar5 = OSOrderedSet::withCapacity
                                (uVar6,(_func_int_OSMetaClassBase_ptr_OSMetaClassBase_ptr_void_ptr *
                                       )0x0,unaff_RSI);
              unaff_RDI[0x1a] = lVar5;
              if (lVar5 != 0) {
                (**(code **)(*unaff_RDI + 0x890))();
                *(undefined4 *)(unaff_RDI + 0x1d) = 0;
                *(undefined4 *)(unaff_RDI + 0x1b) = 0;
                uVar3 = 0;
                (**(code **)(*unaff_RDI + 0xb78))();
                lVar5 = OSSet::withCapacity(uVar6);
                unaff_RDI[0x1e] = lVar5;
                if (lVar5 != 0) {
                  ___bzero();
                  *(undefined4 *)unaff_RDI[0x16] = 2;
                  (**(code **)(*unaff_RDI + 0xb50))();
                  (**(code **)(*unaff_RDI + 0x280))(0x20,1);
                  uVar3 = 1;
                }
              }
            }
            goto LAB_00016de4;
          }
        }
      }
    }
  }
  uVar3 = 0;
LAB_00016de4:
  __os_log_internal("- IOAudioEngine[%p]::init(%p)\n",0);
  return uVar3;
}



/* IOAudioEngineUserClient::safeRegisterClientBuffer @ 0x16e1c */

/* IOAudioEngineUserClient::safeRegisterClientBuffer(unsigned int, void*, unsigned int, unsigned
   int) */

int IOAudioEngineUserClient::safeRegisterClientBuffer
              (uint param_1,void *param_2,uint param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  char *this;
  uint uVar3;
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  undefined4 in_register_0000008c;
  
  __os_log_internal("IOAudioEngineUserClient::safeRegisterClientBuffer deprecated for 32 bit %p \n",
                    0,param_2,CONCAT44(in_register_0000008c,param_4));
  this = "+ IOAudioEngineUserClient::safeRegisterClientBuffer32 %p \n";
  uVar3 = 0;
  __os_log_internal("+ IOAudioEngineUserClient::safeRegisterClientBuffer32 %p \n",0,param_2);
  if (unaff_RDI[0x1b] == 0) {
    iVar1 = -0x1ffffd44;
  }
  else {
    lVar2 = IOAudioEngine::getStreamForID((IOAudioEngine *)this,uVar3);
    if (lVar2 == 0) {
      __os_log_internal("no stream associated with audioStreamIndex 0x%lx \n",0,unaff_ESI);
      iVar1 = -0x1ffffd3e;
    }
    else {
      iVar1 = (**(code **)(*unaff_RDI + 0xad0))(param_1,param_2,param_3);
    }
  }
  __os_log_internal("- IOAudioEngineUserClient::safeRegisterClientBuffer32 %p returns 0x%lX\n",0,
                    param_2,(longlong)iVar1);
  return iVar1;
}



/* IOAudioEngineUserClient::safeRegisterClientBuffer64 @ 0x16f1c */

/* IOAudioEngineUserClient::safeRegisterClientBuffer64(unsigned int, unsigned long long*, unsigned
   int, unsigned int) */

int IOAudioEngineUserClient::safeRegisterClientBuffer64
              (uint param_1,ulonglong *param_2,uint param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  char *this;
  uint uVar3;
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  undefined4 in_register_0000008c;
  
  this = "+ IOAudioEngineUserClient::safeRegisterClientBuffer64 %p \n";
  uVar3 = 0;
  __os_log_internal("+ IOAudioEngineUserClient::safeRegisterClientBuffer64 %p \n",0,param_2,
                    CONCAT44(in_register_0000008c,param_4));
  if (unaff_RDI[0x1b] == 0) {
    iVar1 = -0x1ffffd44;
  }
  else {
    lVar2 = IOAudioEngine::getStreamForID((IOAudioEngine *)this,uVar3);
    if (lVar2 == 0) {
      __os_log_internal("  no stream associated with audioStreamIndex 0x%lx \n",0,unaff_ESI);
      iVar1 = -0x1ffffd3e;
    }
    else {
      iVar1 = (**(code **)(*unaff_RDI + 0x998))(param_1,*param_2,param_3);
    }
  }
  __os_log_internal("- IOAudioEngineUserClient::safeRegisterClientBuffer64  returns 0x%lX\n",0,
                    (longlong)iVar1);
  return iVar1;
}



/* IOAudioEngineUserClient::clientMemoryForType @ 0x16ff6 */

/* IOAudioEngineUserClient::clientMemoryForType(unsigned int, unsigned int*, IOMemoryDescriptor**)
    */

undefined4
IOAudioEngineUserClient::clientMemoryForType
          (uint param_1,uint *param_2,IOMemoryDescriptor **param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 in_register_0000000c;
  int unaff_ESI;
  longlong unaff_RDI;
  undefined4 uVar3;
  
  __os_log_internal("+ IOAudioEngineUserClient[%p]::clientMemoryForType(0x%lx, 0x%lx, %p)\n",0);
  uVar3 = 0xe00002bc;
  if (*(longlong **)(unaff_RDI + 0xd8) != (longlong *)0x0) {
    if (unaff_ESI == 0) {
      lVar1 = 0x858;
    }
    else if (unaff_ESI == 4) {
      lVar1 = 0x870;
    }
    else {
      if (unaff_ESI != 3) goto LAB_0001709b;
      lVar1 = 0x868;
    }
    plVar2 = (longlong *)(**(code **)(**(longlong **)(unaff_RDI + 0xd8) + lVar1))();
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
      *(longlong **)CONCAT44(in_register_0000000c,param_1) = plVar2;
      *param_2 = 0x1000;
      uVar3 = 0;
    }
  }
LAB_0001709b:
  __os_log_internal("- IOAudioEngineUserClient[%p]::clientMemoryForType(0x%lx, 0x%lx, %p) returns 0x%lX\n"
                    ,0);
  return uVar3;
}



/* IOAudioEngineUserClient::externalMethod @ 0x170e6 */

/* IOAudioEngineUserClient::externalMethod(unsigned int, IOExternalMethodArguments*,
   IOExternalMethodDispatch*, OSObject*, void*) */

int IOAudioEngineUserClient::externalMethod
              (uint param_1,IOExternalMethodArguments *param_2,IOExternalMethodDispatch *param_3,
              OSObject *param_4,void *param_5)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 in_register_0000000c;
  task *ptVar4;
  char *pcVar5;
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  
  __os_log_internal("+ IOAudioEngineUserClient::externalMethod, selector=0x%x,   arg0 0x%llX, arg1 0x%llx, arg2 0x%llx arg3 0x%llx \n"
                    ,0,unaff_ESI,**(undefined8 **)(param_2 + 0x20));
  ptVar4 = (task *)(ulonglong)*(uint *)(param_2 + 0x60);
  pcVar5 = (char *)0x0;
  __os_log_internal("  scalarInputCount=0x%x  structureInputSize 0x%x, scalarOutputCount 0x%x, structureOutputSize 0x%x \n"
                    ,0,*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x38));
  _current_task();
  plVar3 = (longlong *)IOUserClient::copyClientEntitlement(ptVar4,pcVar5);
  iVar2 = -0x1ffffd3f;
  if ((plVar3 == (longlong *)0x0) ||
     (plVar3 != (longlong *)**(longlong **)PTR__kOSBooleanTrue_0001e068)) goto LAB_00017341;
  switch(unaff_ESI) {
  case 0:
    if (3 < *(uint *)(param_2 + 0x28)) {
      lVar1 = *(longlong *)(param_2 + 0x20);
      iVar2 = (**(code **)(*unaff_RDI + 0x9a0))
                        (*(undefined4 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 8),
                         *(undefined4 *)(lVar1 + 0x18));
      goto LAB_00017341;
    }
    __os_log_internal("  kIOAudioEngineCallRegisterClientBuffer: invalid input argument count %d. Need at least 4.\n"
                      ,0);
    break;
  case 1:
    if (1 < *(uint *)(param_2 + 0x28)) {
      iVar2 = (**(code **)(*unaff_RDI + 0x9a8))
                        (&switchD_000171ce::switchdataD_00017384,
                         *(undefined4 *)(*(longlong *)(param_2 + 0x20) + 8));
      goto LAB_00017341;
    }
    __os_log_internal("  kIOAudioEngineCallUnregisterClientBuffer: invalid input argument count %d. Need at least 2.\n"
                      ,0);
    break;
  case 2:
    if (*(int *)(param_2 + 0x50) != 0) {
      iVar2 = (**(code **)(*unaff_RDI + 0xaf0))();
      goto LAB_00017341;
    }
    __os_log_internal("  kIOAudioEngineCallGetConnectionID: invalid output argument count %d. Need at least 1.\n"
                      ,0,0);
    break;
  case 3:
    iVar2 = (**(code **)(*unaff_RDI + 0xaf8))();
    goto LAB_00017341;
  case 4:
    iVar2 = (**(code **)(*unaff_RDI + 0xb00))();
    goto LAB_00017341;
  case 5:
    if (2 < *(uint *)(param_2 + 0x28)) {
      iVar2 = (**(code **)(*unaff_RDI + 0x970))
                        (*(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x10),
                         *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 8));
      goto LAB_00017341;
    }
    __os_log_internal("  kIOAudioEngineCallGetNearestStartTime: invalid input argument count %d. Need at least 3.\n"
                      ,0);
    break;
  default:
    iVar2 = (**(code **)(PTR_vtable_0001e040 + 0x860))
                      (CONCAT44(in_register_0000000c,param_1),param_2,param_3,param_4);
    goto LAB_00017341;
  }
  iVar2 = -0x1ffffd3e;
LAB_00017341:
  __os_log_internal("- IOAudioEngineUserClient::externalMethod returns 0x%lX\n",0,(longlong)iVar2);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))();
  }
  return iVar2;
}



/* IOAudioEngineUserClient::performClientIO @ 0x1739e */

/* IOAudioEngineUserClient::performClientIO(unsigned int, unsigned int, bool, unsigned int, unsigned
   int, unsigned int) */

uintptr_t IOAudioEngineUserClient::performClientIO
                    (uint param_1,uint param_2,bool param_3,uint param_4,uint param_5,uint param_6)

{
  char cVar1;
  int iVar2;
  uintptr_t arg2;
  longlong lVar3;
  uint unaff_ESI;
  longlong *unaff_RDI;
  undefined7 in_register_00000081;
  uintptr_t unaff_R12D;
  uintptr_t unaff_R13D;
  uintptr_t local_res8;
  
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug((uint32_t)CONCAT71(in_register_00000081,param_3),param_2,local_res8,0,unaff_R12D,
                  unaff_R13D);
  }
  if (unaff_RDI[0x1b] == 0) {
    arg2 = 0xe00002bc;
  }
  else {
    cVar1 = IOService::isInactive();
    if (cVar1 == '\0') {
      (**(code **)(*unaff_RDI + 0xa90))();
      cVar1 = (**(code **)(*unaff_RDI + 0xab8))();
      arg2 = 0xe00002d7;
      if ((cVar1 != '\0') &&
         (iVar2 = (**(code **)(*(longlong *)unaff_RDI[0x1b] + 0xa70))(), iVar2 == 1)) {
        lVar3 = *(longlong *)(unaff_RDI[0x1b] + 0xb0);
        if ((lVar3 != 0) && ((*(int *)(lVar3 + 4) != 0 || (*(longlong *)(lVar3 + 8) != 0)))) {
          if (unaff_ESI < *(uint *)(unaff_RDI[0x1b] + 0x88)) {
            lVar3 = (**(code **)(*unaff_RDI + 0xae0))();
            if (lVar3 == 0) {
              arg2 = 0;
            }
            else if ((char)param_1 == '\0') {
              arg2 = (**(code **)(*unaff_RDI + 0xa78))(lVar3,param_2,param_4);
            }
            else {
              arg2 = (**(code **)(*unaff_RDI + 0xa80))();
            }
          }
          else {
            arg2 = 0xe00002c2;
          }
        }
      }
      (**(code **)(*unaff_RDI + 0xa98))();
    }
    else {
      arg2 = 0xe00002c0;
    }
  }
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug(0,0,arg2,0,unaff_R12D,unaff_R13D);
  }
  return arg2;
}



/* IOAudioEngineUserClient::performClientOutput @ 0x17566 */

/* IOAudioEngineUserClient::performClientOutput(unsigned int, unsigned int, IOAudioClientBufferSet*,
   unsigned int, unsigned int) */

ulonglong IOAudioEngineUserClient::performClientOutput
                    (uint param_1,uint param_2,IOAudioClientBufferSet *param_3,uint param_4,
                    uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 in_register_0000000c;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 unaff_RSI;
  uint uVar12;
  longlong unaff_RDI;
  longlong lVar13;
  uint uVar14;
  uint *puVar15;
  undefined8 local_80;
  uintptr_t in_stack_ffffffffffffff88;
  ulonglong uVar16;
  uintptr_t in_stack_ffffffffffffff90;
  uint *local_38;
  
  lVar8 = CONCAT44(in_register_0000000c,param_1);
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug(param_1,param_2,param_4,0,in_stack_ffffffffffffff88,in_stack_ffffffffffffff90);
  }
  plVar11 = *(longlong **)(unaff_RDI + 0xd8);
  if (plVar11 == (longlong *)0x0) {
    uVar10 = 0xe00002bc;
    goto LAB_00017756;
  }
  uVar10 = 0xe00002ee;
  if ((param_2 < *(uint *)(plVar11[0x16] + 4)) || (*(int *)(plVar11[0x16] + 4) + 5U < param_2))
  goto LAB_00017756;
  *(ulonglong *)(lVar8 + 0x38) = (ulonglong)param_4 | (longlong)param_3 << 0x20;
  lVar13 = *(longlong *)(lVar8 + 0x18);
  if (lVar13 == 0) {
    uVar10 = 0;
    goto LAB_00017756;
  }
  in_stack_ffffffffffffff90 = 0;
  puVar15 = *(uint **)(lVar13 + 0x60);
  if ((puVar15 == (uint *)0x0) || (*(int *)(*(longlong *)(unaff_RDI + 0x228) + 8) == 0)) {
    if (puVar15 != (uint *)0x0) goto LAB_00017667;
    puVar6 = (uint *)(lVar13 + 0x30);
    puVar15 = (uint *)0x0;
  }
  else {
    uVar14 = *puVar15;
    in_stack_ffffffffffffff90 =
         uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
    puVar15 = (uint *)&stack0xffffffffffffff90;
LAB_00017667:
    puVar6 = puVar15 + 1;
  }
  uVar14 = *puVar6;
  uVar2 = (**(code **)(*plVar11 + 0xb48))();
  uVar12 = uVar14 + (int)unaff_RSI;
  uVar3 = uVar2;
  if (uVar12 < uVar2) {
    uVar3 = 0;
  }
  uVar2 = (param_2 + 1) - (uint)(uVar12 < uVar2);
  puVar9 = (ulonglong *)(lVar8 + 0x28);
  if ((*(uint *)(lVar8 + 0x2c) < uVar2) ||
     ((uVar10 = 0xe00002ee, uVar2 == *(uint *)(lVar8 + 0x2c) && (*(uint *)puVar9 <= uVar12 - uVar3))
     )) {
    local_80 = 0;
    lVar13 = *(longlong *)(lVar8 + 0x18);
    if (lVar13 == 0) {
      uVar16 = 0;
LAB_00017719:
      *(uint *)(lVar8 + 0x28) = uVar12 - uVar3;
      *(uint *)(lVar8 + 0x2c) = uVar2;
      uVar14 = (**(code **)(**(longlong **)(unaff_RDI + 0xd8) + 0xaf0))(puVar9,uVar14,&local_80);
      uVar10 = (ulonglong)uVar14;
      if (uVar14 == 0) {
        IOAudioClientBufferSet::setWatchdogTimeout(puVar9);
        uVar10 = uVar16;
      }
    }
    else {
      plVar11 = *(longlong **)(lVar13 + 8);
      (**(code **)(*plVar11 + 0xaa8))();
      uVar7 = *(uint *)(lVar13 + 0x30);
      if (uVar14 <= uVar7) {
        uVar16 = 0;
        do {
          local_38 = (uint *)(lVar13 + 0x30);
          if (puVar15 != (uint *)0x0) {
            *local_38 = uVar14;
            uVar4 = *puVar15;
            lVar5 = (**(code **)(**(longlong **)(lVar13 + 0x18) + 0x1c8))();
            in_stack_ffffffffffffff88 = (uintptr_t)uVar16;
            if (((lVar5 - 0x10U < (ulonglong)uVar4) || (puVar15[2] < *puVar15)) ||
               (puVar15[2] < puVar15[3])) break;
          }
          if (((*(int *)(*(longlong *)(unaff_RDI + 0x228) + 8) != 0) &&
              (*(longlong *)(lVar13 + 0x10) != 0)) &&
             ((lVar5 = (**(code **)(*plVar11 + 0xa30))(), *(char *)(lVar5 + 0x10) != '\0' &&
              ((*(int *)(lVar5 + 4) == 0x6c70636d &&
               (uVar4 = *(int *)(lVar13 + 0x34) * *local_38, uVar4 != 0)))))) {
            lVar5 = *(longlong *)(lVar13 + 0x10);
            uVar10 = 0;
            do {
              uVar1 = *(uint *)(lVar5 + uVar10 * 4);
              *(uint *)(lVar5 + uVar10 * 4) =
                   uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
              uVar10 = uVar10 + 1;
            } while (uVar4 != uVar10);
          }
          uVar4 = (**(code **)(*plVar11 + 0xad8))(param_2,unaff_RSI,1);
          *local_38 = uVar7;
          (**(code **)(*plVar11 + 0xab0))();
          in_stack_ffffffffffffff88 = (uintptr_t)uVar16;
          uVar16 = uVar16 & 0xffffffff;
          if (uVar4 != 0) {
            uVar16 = (ulonglong)uVar4;
          }
          lVar13 = *(longlong *)(lVar13 + 0x70);
          if (lVar13 == 0) goto LAB_00017719;
          puVar15 = *(uint **)(lVar13 + 0x60);
          if ((puVar15 == (uint *)0x0) || (*(int *)(*(longlong *)(unaff_RDI + 0x228) + 8) == 0)) {
            if (puVar15 == (uint *)0x0) {
              uVar14 = *(uint *)(lVar13 + 0x30);
              puVar15 = (uint *)0x0;
            }
            else {
              uVar14 = puVar15[1];
            }
          }
          else {
            uVar14 = *puVar15;
            in_stack_ffffffffffffff90 =
                 uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18
            ;
            uVar14 = puVar15[1];
            uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                     uVar14 << 0x18;
            puVar15 = (uint *)&stack0xffffffffffffff90;
          }
          plVar11 = *(longlong **)(lVar13 + 8);
          (**(code **)(*plVar11 + 0xaa8))();
          in_stack_ffffffffffffff88 = (uintptr_t)uVar16;
          uVar7 = *(uint *)(lVar13 + 0x30);
        } while (uVar14 <= uVar7);
      }
      (**(code **)(*plVar11 + 0xab0))();
      uVar10 = 0xe00002c2;
    }
  }
LAB_00017756:
  if ((*(uint *)PTR__kdebug_enable_0001e070 & 0xfffffff7) != 0) {
    _kernel_debug(0,0,(uintptr_t)uVar10,0,in_stack_ffffffffffffff88,in_stack_ffffffffffffff90);
  }
  return uVar10;
}



/* IOAudioTimeIntervalFilterFIR::setNewFilter @ 0x17960 */

/* IOAudioTimeIntervalFilterFIR::setNewFilter(unsigned int, unsigned long long const*, unsigned int)
   [clone .cold.1] */

void IOAudioTimeIntervalFilterFIR::setNewFilter(uint param_1,ulonglong *param_2,uint param_3)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* <EXTERNAL>::_IOFreeData @ 0x6c000 */

/* WARNING: Control flow encountered bad instruction data */

void _IOFreeData(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_IOFreeTypeImpl @ 0x6c100 */

/* WARNING: Control flow encountered bad instruction data */

void _IOFreeTypeImpl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_IOFreeTypeVarImpl @ 0x6c200 */

/* WARNING: Control flow encountered bad instruction data */

void _IOFreeTypeVarImpl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_IOLockAlloc @ 0x6c300 */

/* WARNING: Control flow encountered bad instruction data */

void _IOLockAlloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_IOLockFree @ 0x6c400 */

/* WARNING: Control flow encountered bad instruction data */

void _IOLockFree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_IOLockLock @ 0x6c500 */

/* WARNING: Control flow encountered bad instruction data */

void _IOLockLock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_IOLockUnlock @ 0x6c600 */

/* WARNING: Control flow encountered bad instruction data */

void _IOLockUnlock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_IOLog @ 0x6c700 */

/* WARNING: Control flow encountered bad instruction data */

void _IOLog(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_IOMallocData @ 0x6c800 */

/* WARNING: Control flow encountered bad instruction data */

void _IOMallocData(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_IOMallocTypeImpl @ 0x6c900 */

/* WARNING: Control flow encountered bad instruction data */

void _IOMallocTypeImpl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_IOMallocTypeVarImpl @ 0x6ca00 */

/* WARNING: Control flow encountered bad instruction data */

void _IOMallocTypeVarImpl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_IOMallocZeroData @ 0x6cb00 */

/* WARNING: Control flow encountered bad instruction data */

void _IOMallocZeroData(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_IORecursiveLockAlloc @ 0x6cc00 */

/* WARNING: Control flow encountered bad instruction data */

void _IORecursiveLockAlloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_IORecursiveLockFree @ 0x6cd00 */

/* WARNING: Control flow encountered bad instruction data */

void _IORecursiveLockFree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_IORecursiveLockLock @ 0x6ce00 */

/* WARNING: Control flow encountered bad instruction data */

void _IORecursiveLockLock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_IORecursiveLockUnlock @ 0x6cf00 */

/* WARNING: Control flow encountered bad instruction data */

void _IORecursiveLockUnlock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_OSObject_typed_operator_delete @ 0x6d000 */

/* WARNING: Control flow encountered bad instruction data */

void _OSObject_typed_operator_delete(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_OSObject_typed_operator_new @ 0x6d100 */

/* WARNING: Control flow encountered bad instruction data */

void _OSObject_typed_operator_new(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOWorkLoop::workLoop @ 0x6d200 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void IOWorkLoop::workLoop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSMetaClass::_RESERVEDOSMetaClass0 @ 0x6d300 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSMetaClass::_RESERVEDOSMetaClass0() */

void OSMetaClass::_RESERVEDOSMetaClass0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSMetaClass::_RESERVEDOSMetaClass1 @ 0x6d400 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSMetaClass::_RESERVEDOSMetaClass1() */

void OSMetaClass::_RESERVEDOSMetaClass1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSMetaClass::_RESERVEDOSMetaClass2 @ 0x6d500 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSMetaClass::_RESERVEDOSMetaClass2() */

void OSMetaClass::_RESERVEDOSMetaClass2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSMetaClass::_RESERVEDOSMetaClass3 @ 0x6d600 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSMetaClass::_RESERVEDOSMetaClass3() */

void OSMetaClass::_RESERVEDOSMetaClass3(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSMetaClass::_RESERVEDOSMetaClass4 @ 0x6d700 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSMetaClass::_RESERVEDOSMetaClass4() */

void OSMetaClass::_RESERVEDOSMetaClass4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSMetaClass::_RESERVEDOSMetaClass5 @ 0x6d800 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSMetaClass::_RESERVEDOSMetaClass5() */

void OSMetaClass::_RESERVEDOSMetaClass5(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSMetaClass::_RESERVEDOSMetaClass6 @ 0x6d900 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSMetaClass::_RESERVEDOSMetaClass6() */

void OSMetaClass::_RESERVEDOSMetaClass6(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSMetaClass::_RESERVEDOSMetaClass7 @ 0x6da00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSMetaClass::_RESERVEDOSMetaClass7() */

void OSMetaClass::_RESERVEDOSMetaClass7(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSMetaClass::OSMetaClass @ 0x6db00 */

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
OSMetaClass::OSMetaClass(OSMetaClass *this,char *param_1,OSMetaClass *param_2,uint param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSMetaClass::~OSMetaClass @ 0x6dc00 */

/* WARNING: Control flow encountered bad instruction data */
/* OSMetaClass::~OSMetaClass() */

void __thiscall OSMetaClass::~OSMetaClass(OSMetaClass *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::getService @ 0x6de00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::getService() */

void IOUserClient::getService(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::initWithTask @ 0x6df00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::initWithTask(task*, void*, unsigned int) */

void IOUserClient::initWithTask(task *param_1,void *param_2,uint param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::initWithTask @ 0x6e000 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::initWithTask(task*, void*, unsigned int, OSDictionary*) */

void IOUserClient::initWithTask(task *param_1,void *param_2,uint param_3,OSDictionary *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::connectClient @ 0x6e100 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::connectClient(IOUserClient*) */

void IOUserClient::connectClient(IOUserClient *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::externalMethod @ 0x6e200 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::externalMethod(unsigned int, IOExternalMethodArguments*, IOExternalMethodDispatch*,
   OSObject*, void*) */

void IOUserClient::externalMethod
               (uint param_1,IOExternalMethodArguments *param_2,IOExternalMethodDispatch *param_3,
               OSObject *param_4,void *param_5)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::clientMemoryForType @ 0x6e300 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::clientMemoryForType(unsigned int, unsigned int*, IOMemoryDescriptor**) */

void IOUserClient::clientMemoryForType(uint param_1,uint *param_2,IOMemoryDescriptor **param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::exportObjectToClient @ 0x6e400 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::exportObjectToClient(task*, OSObject*, OSObject**) */

void IOUserClient::exportObjectToClient(task *param_1,OSObject *param_2,OSObject **param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::copyClientEntitlement @ 0x6e500 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void IOUserClient::copyClientEntitlement(task *param_1,char *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::_RESERVEDIOUserClient0 @ 0x6e600 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::_RESERVEDIOUserClient0() */

void IOUserClient::_RESERVEDIOUserClient0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::_RESERVEDIOUserClient1 @ 0x6e700 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::_RESERVEDIOUserClient1() */

void IOUserClient::_RESERVEDIOUserClient1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::_RESERVEDIOUserClient2 @ 0x6e800 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::_RESERVEDIOUserClient2() */

void IOUserClient::_RESERVEDIOUserClient2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::_RESERVEDIOUserClient3 @ 0x6e900 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::_RESERVEDIOUserClient3() */

void IOUserClient::_RESERVEDIOUserClient3(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::_RESERVEDIOUserClient4 @ 0x6ea00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::_RESERVEDIOUserClient4() */

void IOUserClient::_RESERVEDIOUserClient4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::_RESERVEDIOUserClient5 @ 0x6eb00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::_RESERVEDIOUserClient5() */

void IOUserClient::_RESERVEDIOUserClient5(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::_RESERVEDIOUserClient6 @ 0x6ec00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::_RESERVEDIOUserClient6() */

void IOUserClient::_RESERVEDIOUserClient6(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::_RESERVEDIOUserClient7 @ 0x6ed00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::_RESERVEDIOUserClient7() */

void IOUserClient::_RESERVEDIOUserClient7(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::_RESERVEDIOUserClient8 @ 0x6ee00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::_RESERVEDIOUserClient8() */

void IOUserClient::_RESERVEDIOUserClient8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::_RESERVEDIOUserClient9 @ 0x6ef00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::_RESERVEDIOUserClient9() */

void IOUserClient::_RESERVEDIOUserClient9(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::_RESERVEDIOUserClient10 @ 0x6f000 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::_RESERVEDIOUserClient10() */

void IOUserClient::_RESERVEDIOUserClient10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::_RESERVEDIOUserClient11 @ 0x6f100 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::_RESERVEDIOUserClient11() */

void IOUserClient::_RESERVEDIOUserClient11(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::_RESERVEDIOUserClient12 @ 0x6f200 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::_RESERVEDIOUserClient12() */

void IOUserClient::_RESERVEDIOUserClient12(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::_RESERVEDIOUserClient13 @ 0x6f300 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::_RESERVEDIOUserClient13() */

void IOUserClient::_RESERVEDIOUserClient13(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::_RESERVEDIOUserClient14 @ 0x6f400 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::_RESERVEDIOUserClient14() */

void IOUserClient::_RESERVEDIOUserClient14(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::_RESERVEDIOUserClient15 @ 0x6f500 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::_RESERVEDIOUserClient15() */

void IOUserClient::_RESERVEDIOUserClient15(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::getExternalTrapForIndex @ 0x6f600 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::getExternalTrapForIndex(unsigned int) */

void IOUserClient::getExternalTrapForIndex(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::getNotificationSemaphore @ 0x6f700 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::getNotificationSemaphore(unsigned int, semaphore**) */

void IOUserClient::getNotificationSemaphore(uint param_1,semaphore **param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::getTargetAndTrapForIndex @ 0x6f800 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::getTargetAndTrapForIndex(IOService**, unsigned int) */

void IOUserClient::getTargetAndTrapForIndex(IOService **param_1,uint param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::registerNotificationPort @ 0x6f900 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::registerNotificationPort(ipc_port*, unsigned int, unsigned long long) */

void IOUserClient::registerNotificationPort(ipc_port *param_1,uint param_2,ulonglong param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::getExternalMethodForIndex @ 0x6fa00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::getExternalMethodForIndex(unsigned int) */

void IOUserClient::getExternalMethodForIndex(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::getTargetAndMethodForIndex @ 0x6fb00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::getTargetAndMethodForIndex(IOService**, unsigned int) */

void IOUserClient::getTargetAndMethodForIndex(IOService **param_1,uint param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::getExternalAsyncMethodForIndex @ 0x6fc00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::getExternalAsyncMethodForIndex(unsigned int) */

void IOUserClient::getExternalAsyncMethodForIndex(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::getAsyncTargetAndMethodForIndex @ 0x6fd00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::getAsyncTargetAndMethodForIndex(IOService**, unsigned int) */

void IOUserClient::getAsyncTargetAndMethodForIndex(IOService **param_1,uint param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::init @ 0x6fe00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::init(OSDictionary*) */

void IOUserClient::init(OSDictionary *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::init @ 0x6ff00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOUserClient::init() */

void IOUserClient::init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::Dispatch @ 0x70000 */

/* WARNING: Control flow encountered bad instruction data */
/* IOUserClient::Dispatch(IORPC) */

void IOUserClient::Dispatch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::IOUserClient @ 0x70100 */

/* WARNING: Control flow encountered bad instruction data */

void __thiscall IOUserClient::IOUserClient(IOUserClient *this,OSMetaClass *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOUserClient::~IOUserClient @ 0x70200 */

/* WARNING: Control flow encountered bad instruction data */
/* IOUserClient::~IOUserClient() */

void __thiscall IOUserClient::~IOUserClient(IOUserClient *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSDictionary::withObjects @ 0x70300 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void OSDictionary::withObjects(OSObject **param_1,OSSymbol **param_2,uint param_3,uint param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSDictionary::withCapacity @ 0x70400 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void OSDictionary::withCapacity(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSOrderedSet::withCapacity @ 0x70600 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void OSOrderedSet::withCapacity
               (uint param_1,_func_int_OSMetaClassBase_ptr_OSMetaClassBase_ptr_void_ptr *param_2,
               void *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOCommandGate::commandGate @ 0x70700 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void IOCommandGate::commandGate
               (OSObject *param_1,
               _func_int_OSObject_ptr_void_ptr_void_ptr_void_ptr_void_ptr *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::detachAbove @ 0x70800 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::detachAbove(IORegistryPlane const*) */

void IORegistryEntry::detachAbove(IORegistryPlane *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::setLocation @ 0x70900 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::setLocation(OSSymbol const*, IORegistryPlane const*) */

void IORegistryEntry::setLocation(OSSymbol *param_1,IORegistryPlane *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::setLocation @ 0x70a00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::setLocation(char const*, IORegistryPlane const*) */

void IORegistryEntry::setLocation(char *param_1,IORegistryPlane *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::setProperty @ 0x70b00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::setProperty(OSString const*, OSObject*) */

void IORegistryEntry::setProperty(OSString *param_1,OSObject *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::setProperty @ 0x70c00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::setProperty(OSSymbol const*, OSObject*) */

void IORegistryEntry::setProperty(OSSymbol *param_1,OSObject *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::setProperty @ 0x70d00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::setProperty(char const*, OSObject*) */

void IORegistryEntry::setProperty(char *param_1,OSObject *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::setProperty @ 0x70e00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::setProperty(char const*, void*, unsigned int) */

void IORegistryEntry::setProperty(char *param_1,void *param_2,uint param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::setProperty @ 0x70f00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::setProperty(char const*, char const*) */

void IORegistryEntry::setProperty(char *param_1,char *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::setProperty @ 0x71000 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::setProperty(char const*, bool) */

void IORegistryEntry::setProperty(char *param_1,bool param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::setProperty @ 0x71100 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::setProperty(char const*, unsigned long long, unsigned int) */

void IORegistryEntry::setProperty(char *param_1,ulonglong param_2,uint param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::attachToChild @ 0x71200 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::attachToChild(IORegistryEntry*, IORegistryPlane const*) */

void IORegistryEntry::attachToChild(IORegistryEntry *param_1,IORegistryPlane *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::childFromPath @ 0x71300 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::childFromPath(char const*, IORegistryPlane const*, char*, int*) */

void IORegistryEntry::childFromPath
               (char *param_1,IORegistryPlane *param_2,char *param_3,int *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::setProperties @ 0x71400 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::setProperties(OSObject*) */

void IORegistryEntry::setProperties(OSObject *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::attachToParent @ 0x71500 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::attachToParent(IORegistryEntry*, IORegistryPlane const*) */

void IORegistryEntry::attachToParent(IORegistryEntry *param_1,IORegistryPlane *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::removeProperty @ 0x71600 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::removeProperty(OSString const*) */

void IORegistryEntry::removeProperty(OSString *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::removeProperty @ 0x71700 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::removeProperty(OSSymbol const*) */

void IORegistryEntry::removeProperty(OSSymbol *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::removeProperty @ 0x71800 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::removeProperty(char const*) */

void IORegistryEntry::removeProperty(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::detachFromChild @ 0x71900 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::detachFromChild(IORegistryEntry*, IORegistryPlane const*) */

void IORegistryEntry::detachFromChild(IORegistryEntry *param_1,IORegistryPlane *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::detachFromParent @ 0x71a00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::detachFromParent(IORegistryEntry*, IORegistryPlane const*) */

void IORegistryEntry::detachFromParent(IORegistryEntry *param_1,IORegistryPlane *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::setPropertyTable @ 0x71b00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::setPropertyTable(OSDictionary*) */

void IORegistryEntry::setPropertyTable(OSDictionary *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::runPropertyAction @ 0x71c00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::runPropertyAction(int (*)(OSObject*, void*, void*, void*, void*), OSObject*,
   void*, void*, void*, void*) */

void IORegistryEntry::runPropertyAction
               (_func_int_OSObject_ptr_void_ptr_void_ptr_void_ptr_void_ptr *param_1,
               OSObject *param_2,void *param_3,void *param_4,void *param_5,void *param_6)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry0 @ 0x71d00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry0() */

void IORegistryEntry::_RESERVEDIORegistryEntry0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry1 @ 0x71e00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry1() */

void IORegistryEntry::_RESERVEDIORegistryEntry1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry2 @ 0x71f00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry2() */

void IORegistryEntry::_RESERVEDIORegistryEntry2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry3 @ 0x72000 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry3() */

void IORegistryEntry::_RESERVEDIORegistryEntry3(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry4 @ 0x72100 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry4() */

void IORegistryEntry::_RESERVEDIORegistryEntry4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry5 @ 0x72200 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry5() */

void IORegistryEntry::_RESERVEDIORegistryEntry5(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry6 @ 0x72300 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry6() */

void IORegistryEntry::_RESERVEDIORegistryEntry6(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry7 @ 0x72400 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry7() */

void IORegistryEntry::_RESERVEDIORegistryEntry7(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry8 @ 0x72500 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry8() */

void IORegistryEntry::_RESERVEDIORegistryEntry8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry9 @ 0x72600 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry9() */

void IORegistryEntry::_RESERVEDIORegistryEntry9(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry10 @ 0x72700 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry10() */

void IORegistryEntry::_RESERVEDIORegistryEntry10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry11 @ 0x72800 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry11() */

void IORegistryEntry::_RESERVEDIORegistryEntry11(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry12 @ 0x72900 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry12() */

void IORegistryEntry::_RESERVEDIORegistryEntry12(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry13 @ 0x72a00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry13() */

void IORegistryEntry::_RESERVEDIORegistryEntry13(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry14 @ 0x72b00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry14() */

void IORegistryEntry::_RESERVEDIORegistryEntry14(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry15 @ 0x72c00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry15() */

void IORegistryEntry::_RESERVEDIORegistryEntry15(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry16 @ 0x72d00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry16() */

void IORegistryEntry::_RESERVEDIORegistryEntry16(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry17 @ 0x72e00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry17() */

void IORegistryEntry::_RESERVEDIORegistryEntry17(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry18 @ 0x72f00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry18() */

void IORegistryEntry::_RESERVEDIORegistryEntry18(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry19 @ 0x73000 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry19() */

void IORegistryEntry::_RESERVEDIORegistryEntry19(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry20 @ 0x73100 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry20() */

void IORegistryEntry::_RESERVEDIORegistryEntry20(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry21 @ 0x73200 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry21() */

void IORegistryEntry::_RESERVEDIORegistryEntry21(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry22 @ 0x73300 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry22() */

void IORegistryEntry::_RESERVEDIORegistryEntry22(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry23 @ 0x73400 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry23() */

void IORegistryEntry::_RESERVEDIORegistryEntry23(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry24 @ 0x73500 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry24() */

void IORegistryEntry::_RESERVEDIORegistryEntry24(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry25 @ 0x73600 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry25() */

void IORegistryEntry::_RESERVEDIORegistryEntry25(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry26 @ 0x73700 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry26() */

void IORegistryEntry::_RESERVEDIORegistryEntry26(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry27 @ 0x73800 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry27() */

void IORegistryEntry::_RESERVEDIORegistryEntry27(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry28 @ 0x73900 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry28() */

void IORegistryEntry::_RESERVEDIORegistryEntry28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry29 @ 0x73a00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry29() */

void IORegistryEntry::_RESERVEDIORegistryEntry29(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry30 @ 0x73b00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry30() */

void IORegistryEntry::_RESERVEDIORegistryEntry30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::_RESERVEDIORegistryEntry31 @ 0x73c00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::_RESERVEDIORegistryEntry31() */

void IORegistryEntry::_RESERVEDIORegistryEntry31(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::setName @ 0x73d00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::setName(OSSymbol const*, IORegistryPlane const*) */

void IORegistryEntry::setName(OSSymbol *param_1,IORegistryPlane *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::setName @ 0x73e00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::setName(char const*, IORegistryPlane const*) */

void IORegistryEntry::setName(char *param_1,IORegistryPlane *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::detachAll @ 0x73f00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::detachAll(IORegistryPlane const*) */

void IORegistryEntry::detachAll(IORegistryPlane *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSMetaClassBase::safeMetaCast @ 0x74000 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void OSMetaClassBase::safeMetaCast(OSMetaClassBase *param_1,OSMetaClass *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSMetaClassBase::_RESERVEDOSMetaClassBase4 @ 0x74100 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSMetaClassBase::_RESERVEDOSMetaClassBase4() */

void OSMetaClassBase::_RESERVEDOSMetaClassBase4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSMetaClassBase::_RESERVEDOSMetaClassBase5 @ 0x74200 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSMetaClassBase::_RESERVEDOSMetaClassBase5() */

void OSMetaClassBase::_RESERVEDOSMetaClassBase5(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSMetaClassBase::_RESERVEDOSMetaClassBase6 @ 0x74300 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSMetaClassBase::_RESERVEDOSMetaClassBase6() */

void OSMetaClassBase::_RESERVEDOSMetaClassBase6(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSMetaClassBase::_RESERVEDOSMetaClassBase7 @ 0x74400 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSMetaClassBase::_RESERVEDOSMetaClassBase7() */

void OSMetaClassBase::_RESERVEDOSMetaClassBase7(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSMetaClassBase::Dispatch @ 0x74500 */

/* WARNING: Control flow encountered bad instruction data */
/* OSMetaClassBase::Dispatch(IORPC) */

void OSMetaClassBase::Dispatch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOMemoryDescriptor::withAddressRange @ 0x74600 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void IOMemoryDescriptor::withAddressRange
               (ulonglong param_1,ulonglong param_2,uint param_3,task *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOTimerEventSource::timerEventSource @ 0x74700 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void IOTimerEventSource::timerEventSource
               (OSObject *param_1,_func_void_OSObject_ptr_IOTimerEventSource_ptr *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOTimerEventSource::timerEventSource @ 0x74800 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void IOTimerEventSource::timerEventSource
               (uint param_1,OSObject *param_2,
               _func_void_OSObject_ptr_IOTimerEventSource_ptr *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSCollectionIterator::withCollection @ 0x74900 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void OSCollectionIterator::withCollection(OSCollection *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOBufferMemoryDescriptor::withOptions @ 0x74a00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void IOBufferMemoryDescriptor::withOptions(uint param_1,ulong param_2,ulong param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSSet::withObjects @ 0x74b00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void OSSet::withObjects(OSObject **param_1,uint param_2,uint param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSSet::withCapacity @ 0x74c00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void OSSet::withCapacity(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSArray::withCapacity @ 0x74e00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void OSArray::withCapacity(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSArray::withArray @ 0x75000 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void OSArray::withArray(OSArray *param_1,uint param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSNumber::withNumber @ 0x75100 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void OSNumber::withNumber(ulonglong param_1,uint param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSObject::_RESERVEDOSObject0 @ 0x75400 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSObject::_RESERVEDOSObject0() */

void OSObject::_RESERVEDOSObject0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSObject::_RESERVEDOSObject1 @ 0x75500 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSObject::_RESERVEDOSObject1() */

void OSObject::_RESERVEDOSObject1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSObject::_RESERVEDOSObject2 @ 0x75600 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSObject::_RESERVEDOSObject2() */

void OSObject::_RESERVEDOSObject2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSObject::_RESERVEDOSObject3 @ 0x75700 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSObject::_RESERVEDOSObject3() */

void OSObject::_RESERVEDOSObject3(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSObject::_RESERVEDOSObject4 @ 0x75800 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSObject::_RESERVEDOSObject4() */

void OSObject::_RESERVEDOSObject4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSObject::_RESERVEDOSObject5 @ 0x75900 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSObject::_RESERVEDOSObject5() */

void OSObject::_RESERVEDOSObject5(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSObject::_RESERVEDOSObject6 @ 0x75a00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSObject::_RESERVEDOSObject6() */

void OSObject::_RESERVEDOSObject6(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSObject::_RESERVEDOSObject7 @ 0x75b00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSObject::_RESERVEDOSObject7() */

void OSObject::_RESERVEDOSObject7(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSObject::_RESERVEDOSObject8 @ 0x75c00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSObject::_RESERVEDOSObject8() */

void OSObject::_RESERVEDOSObject8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSObject::_RESERVEDOSObject9 @ 0x75d00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSObject::_RESERVEDOSObject9() */

void OSObject::_RESERVEDOSObject9(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSObject::_RESERVEDOSObject10 @ 0x75e00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSObject::_RESERVEDOSObject10() */

void OSObject::_RESERVEDOSObject10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSObject::_RESERVEDOSObject11 @ 0x75f00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSObject::_RESERVEDOSObject11() */

void OSObject::_RESERVEDOSObject11(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSObject::_RESERVEDOSObject12 @ 0x76000 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSObject::_RESERVEDOSObject12() */

void OSObject::_RESERVEDOSObject12(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSObject::_RESERVEDOSObject13 @ 0x76100 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSObject::_RESERVEDOSObject13() */

void OSObject::_RESERVEDOSObject13(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSObject::_RESERVEDOSObject14 @ 0x76200 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSObject::_RESERVEDOSObject14() */

void OSObject::_RESERVEDOSObject14(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSObject::_RESERVEDOSObject15 @ 0x76300 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSObject::_RESERVEDOSObject15() */

void OSObject::_RESERVEDOSObject15(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSObject::free @ 0x76400 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSObject::free() */

void OSObject::free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSObject::init @ 0x76500 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSObject::init() */

void OSObject::init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSObject::Dispatch @ 0x76600 */

/* WARNING: Control flow encountered bad instruction data */
/* OSObject::Dispatch(IORPC) */

void OSObject::Dispatch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSObject::OSObject @ 0x76700 */

/* WARNING: Control flow encountered bad instruction data */

void __thiscall OSObject::OSObject(OSObject *this,OSMetaClass *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSObject::~OSObject @ 0x76800 */

/* WARNING: Control flow encountered bad instruction data */
/* OSObject::~OSObject() */

void __thiscall OSObject::~OSObject(OSObject *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSString::withCString @ 0x76900 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void OSString::withCString(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSSymbol::withCString @ 0x76a00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void OSSymbol::withCString(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::adjustBusy @ 0x76c00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::adjustBusy(int) */

void IOService::adjustBusy(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::handleOpen @ 0x76e00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::handleOpen(IOService*, unsigned int, void*) */

void IOService::handleOpen(IOService *param_1,uint param_2,void *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::joinPMtree @ 0x76f00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::joinPMtree(IOService*) */

void IOService::joinPMtree(IOService *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::handleClose @ 0x77000 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::handleClose(IOService*, unsigned int) */

void IOService::handleClose(IOService *param_1,uint param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::didTerminate @ 0x77100 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::didTerminate(IOService*, unsigned int, bool*) */

void IOService::didTerminate(IOService *param_1,uint param_2,bool *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::getBusyState @ 0x77200 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::getBusyState() */

void IOService::getBusyState(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::getResources @ 0x77300 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::getResources() */

void IOService::getResources(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::requestProbe @ 0x77400 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::requestProbe(unsigned int) */

void IOService::requestProbe(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::tellChangeUp @ 0x77500 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::tellChangeUp(unsigned long) */

void IOService::tellChangeUp(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::updateReport @ 0x77600 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::updateReport(IOReportChannelList*, unsigned int, void*, void*) */

void IOService::updateReport(IOReportChannelList *param_1,uint param_2,void *param_3,void *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::addPowerChild @ 0x77700 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::addPowerChild(IOService*) */

void IOService::addPowerChild(IOService *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::askChangeDown @ 0x77800 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::askChangeDown(unsigned long) */

void IOService::askChangeDown(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::matchLocation @ 0x77900 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::matchLocation(IOService*) */

void IOService::matchLocation(IOService *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::messageClient @ 0x77a00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::messageClient(unsigned int, OSObject*, void*, unsigned long) */

void IOService::messageClient(uint param_1,OSObject *param_2,void *param_3,ulong param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::newUserClient @ 0x77b00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::newUserClient(task*, void*, unsigned int, OSDictionary*, IOUserClient**) */

void IOService::newUserClient
               (task *param_1,void *param_2,uint param_3,OSDictionary *param_4,
               IOUserClient **param_5)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::newUserClient @ 0x77c00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::newUserClient(task*, void*, unsigned int, IOUserClient**) */

void IOService::newUserClient(task *param_1,void *param_2,uint param_3,IOUserClient **param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::setPowerState @ 0x77d00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::setPowerState(unsigned long, IOService*) */

void IOService::setPowerState(ulong param_1,IOService *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::willTerminate @ 0x77e00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::willTerminate(IOService*, unsigned int) */

void IOService::willTerminate(IOService *param_1,uint param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::activityTickle @ 0x77f00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::activityTickle(unsigned long, unsigned long) */

void IOService::activityTickle(ulong param_1,ulong param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::applyToClients @ 0x78000 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::applyToClients(void (*)(IOService*, void*), void*) */

void IOService::applyToClients(_func_void_IOService_ptr_void_ptr *param_1,void *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::causeInterrupt @ 0x78100 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::causeInterrupt(int) */

void IOService::causeInterrupt(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::messageClients @ 0x78200 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::messageClients(unsigned int, void*, unsigned long) */

void IOService::messageClients(uint param_1,void *param_2,ulong param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::tellChangeDown @ 0x78300 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::tellChangeDown(unsigned long) */

void IOService::tellChangeDown(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::compareProperty @ 0x78400 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::compareProperty(OSDictionary*, OSString const*) */

void IOService::compareProperty(OSDictionary *param_1,OSString *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::compareProperty @ 0x78500 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::compareProperty(OSDictionary*, char const*) */

void IOService::compareProperty(OSDictionary *param_1,char *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::configureReport @ 0x78600 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::configureReport(IOReportChannelList*, unsigned int, void*, void*) */

void IOService::configureReport
               (IOReportChannelList *param_1,uint param_2,void *param_3,void *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::enableInterrupt @ 0x78700 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::enableInterrupt(int) */

void IOService::enableInterrupt(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::errnoFromReturn @ 0x78800 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::errnoFromReturn(int) */

void IOService::errnoFromReturn(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::getDeviceMemory @ 0x78900 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::getDeviceMemory() */

void IOService::getDeviceMemory(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::nextIdleTimeout @ 0x78a00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::nextIdleTimeout(unsigned long long, unsigned long long, unsigned int) */

void IOService::nextIdleTimeout(ulonglong param_1,ulonglong param_2,uint param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::powerChangeDone @ 0x78b00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::powerChangeDone(unsigned long) */

void IOService::powerChangeDone(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::registerService @ 0x78c00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::registerService(unsigned int) */

void IOService::registerService(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::setDeviceMemory @ 0x78d00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::setDeviceMemory(OSArray*) */

void IOService::setDeviceMemory(OSArray *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::terminateClient @ 0x78e00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::terminateClient(IOService*, unsigned int) */

void IOService::terminateClient(IOService *param_1,uint param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::allowPowerChange @ 0x78f00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::allowPowerChange(unsigned long) */

void IOService::allowPowerChange(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::applyToProviders @ 0x79000 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::applyToProviders(void (*)(IOService*, void*), void*) */

void IOService::applyToProviders(_func_void_IOService_ptr_void_ptr *param_1,void *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::disableInterrupt @ 0x79100 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::disableInterrupt(int) */

void IOService::disableInterrupt(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::getInterruptType @ 0x79200 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::getInterruptType(int, int*) */

void IOService::getInterruptType(int param_1,int *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::registerInterest @ 0x79300 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::registerInterest(OSSymbol const*, int (*)(void*, void*, unsigned int, IOService*,
   void*, unsigned long), void*, void*) */

void IOService::registerInterest
               (OSSymbol *param_1,
               _func_int_void_ptr_void_ptr_uint_IOService_ptr_void_ptr_ulong *param_2,void *param_3,
               void *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::removePowerChild @ 0x79400 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::removePowerChild(IOPowerConnection*) */

void IOService::removePowerChild(IOPowerConnection *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::requestTerminate @ 0x79500 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::requestTerminate(IOService*, unsigned int) */

void IOService::requestTerminate(IOService *param_1,uint param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::stringFromReturn @ 0x79600 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::stringFromReturn(int) */

void IOService::stringFromReturn(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::tellNoChangeDown @ 0x79700 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::tellNoChangeDown(unsigned long) */

void IOService::tellNoChangeDown(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::addNeededResource @ 0x79800 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::addNeededResource(char const*) */

void IOService::addNeededResource(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::applyToInterested @ 0x79900 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::applyToInterested(OSSymbol const*, void (*)(OSObject*, void*), void*) */

void IOService::applyToInterested
               (OSSymbol *param_1,_func_void_OSObject_ptr_void_ptr *param_2,void *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::cancelPowerChange @ 0x79a00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::cancelPowerChange(unsigned long) */

void IOService::cancelPowerChange(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::compareProperties @ 0x79b00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::compareProperties(OSDictionary*, OSCollection*) */

void IOService::compareProperties(OSDictionary *param_1,OSCollection *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::getAggressiveness @ 0x79c00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::getAggressiveness(unsigned long, unsigned long*) */

void IOService::getAggressiveness(ulong param_1,ulong *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::registerInterrupt @ 0x79d00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::registerInterrupt(int, OSObject*, void (*)(OSObject*, void*, IOService*, int), void*)
    */

void IOService::registerInterrupt
               (int param_1,OSObject *param_2,
               _func_void_OSObject_ptr_void_ptr_IOService_ptr_int *param_3,void *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::setAggressiveness @ 0x79e00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::setAggressiveness(unsigned long, unsigned long) */

void IOService::setAggressiveness(ulong param_1,ulong param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::changePowerStateTo @ 0x79f00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void IOService::changePowerStateTo(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::lockForArbitration @ 0x7a000 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::lockForArbitration(bool) */

void IOService::lockForArbitration(bool param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::matchPropertyTable @ 0x7a100 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::matchPropertyTable(OSDictionary*) */

void IOService::matchPropertyTable(OSDictionary *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::matchPropertyTable @ 0x7a200 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::matchPropertyTable(OSDictionary*, int*) */

void IOService::matchPropertyTable(OSDictionary *param_1,int *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::setIdleTimerPeriod @ 0x7a300 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::setIdleTimerPeriod(unsigned long) */

void IOService::setIdleTimerPeriod(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::systemWillShutdown @ 0x7a400 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::systemWillShutdown(unsigned int) */

void IOService::systemWillShutdown(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService2 @ 0x7a500 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService2() */

void IOService::_RESERVEDIOService2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService3 @ 0x7a600 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService3() */

void IOService::_RESERVEDIOService3(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService4 @ 0x7a700 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService4() */

void IOService::_RESERVEDIOService4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService5 @ 0x7a800 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService5() */

void IOService::_RESERVEDIOService5(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService6 @ 0x7a900 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService6() */

void IOService::_RESERVEDIOService6(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService7 @ 0x7aa00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService7() */

void IOService::_RESERVEDIOService7(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService8 @ 0x7ab00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService8() */

void IOService::_RESERVEDIOService8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService9 @ 0x7ac00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService9() */

void IOService::_RESERVEDIOService9(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::registerPowerDriver @ 0x7ad00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::registerPowerDriver(IOService*, IOPMPowerState*, unsigned long) */

void IOService::registerPowerDriver(IOService *param_1,IOPMPowerState *param_2,ulong param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::unregisterInterrupt @ 0x7ae00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::unregisterInterrupt(int) */

void IOService::unregisterInterrupt(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService10 @ 0x7af00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService10() */

void IOService::_RESERVEDIOService10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService11 @ 0x7b000 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService11() */

void IOService::_RESERVEDIOService11(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService12 @ 0x7b100 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService12() */

void IOService::_RESERVEDIOService12(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService13 @ 0x7b200 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService13() */

void IOService::_RESERVEDIOService13(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService14 @ 0x7b300 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService14() */

void IOService::_RESERVEDIOService14(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService15 @ 0x7b400 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService15() */

void IOService::_RESERVEDIOService15(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService16 @ 0x7b500 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService16() */

void IOService::_RESERVEDIOService16(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService17 @ 0x7b600 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService17() */

void IOService::_RESERVEDIOService17(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService18 @ 0x7b700 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService18() */

void IOService::_RESERVEDIOService18(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService19 @ 0x7b800 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService19() */

void IOService::_RESERVEDIOService19(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService20 @ 0x7b900 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService20() */

void IOService::_RESERVEDIOService20(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService21 @ 0x7ba00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService21() */

void IOService::_RESERVEDIOService21(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService22 @ 0x7bb00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService22() */

void IOService::_RESERVEDIOService22(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService23 @ 0x7bc00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService23() */

void IOService::_RESERVEDIOService23(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService24 @ 0x7bd00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService24() */

void IOService::_RESERVEDIOService24(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService25 @ 0x7be00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService25() */

void IOService::_RESERVEDIOService25(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService26 @ 0x7bf00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService26() */

void IOService::_RESERVEDIOService26(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService27 @ 0x7c000 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService27() */

void IOService::_RESERVEDIOService27(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService28 @ 0x7c100 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService28() */

void IOService::_RESERVEDIOService28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService29 @ 0x7c200 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService29() */

void IOService::_RESERVEDIOService29(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService30 @ 0x7c300 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService30() */

void IOService::_RESERVEDIOService30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService31 @ 0x7c400 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService31() */

void IOService::_RESERVEDIOService31(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService32 @ 0x7c500 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService32() */

void IOService::_RESERVEDIOService32(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService33 @ 0x7c600 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService33() */

void IOService::_RESERVEDIOService33(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService34 @ 0x7c700 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService34() */

void IOService::_RESERVEDIOService34(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService35 @ 0x7c800 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService35() */

void IOService::_RESERVEDIOService35(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService36 @ 0x7c900 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService36() */

void IOService::_RESERVEDIOService36(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService37 @ 0x7ca00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService37() */

void IOService::_RESERVEDIOService37(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService38 @ 0x7cb00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService38() */

void IOService::_RESERVEDIOService38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService39 @ 0x7cc00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService39() */

void IOService::_RESERVEDIOService39(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService40 @ 0x7cd00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService40() */

void IOService::_RESERVEDIOService40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService41 @ 0x7ce00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService41() */

void IOService::_RESERVEDIOService41(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService42 @ 0x7cf00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService42() */

void IOService::_RESERVEDIOService42(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService43 @ 0x7d000 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService43() */

void IOService::_RESERVEDIOService43(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService44 @ 0x7d100 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService44() */

void IOService::_RESERVEDIOService44(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService45 @ 0x7d200 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService45() */

void IOService::_RESERVEDIOService45(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService46 @ 0x7d300 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService46() */

void IOService::_RESERVEDIOService46(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::_RESERVEDIOService47 @ 0x7d400 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::_RESERVEDIOService47() */

void IOService::_RESERVEDIOService47(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::callPlatformFunction @ 0x7d500 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::callPlatformFunction(OSSymbol const*, bool, void*, void*, void*, void*) */

void IOService::callPlatformFunction
               (OSSymbol *param_1,bool param_2,void *param_3,void *param_4,void *param_5,
               void *param_6)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::callPlatformFunction @ 0x7d600 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::callPlatformFunction(char const*, bool, void*, void*, void*, void*) */

void IOService::callPlatformFunction
               (char *param_1,bool param_2,void *param_3,void *param_4,void *param_5,void *param_6)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::getDeviceMemoryCount @ 0x7d700 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::getDeviceMemoryCount() */

void IOService::getDeviceMemoryCount(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::unlockForArbitration @ 0x7d800 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::unlockForArbitration() */

void IOService::unlockForArbitration(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::powerStateDidChangeTo @ 0x7d900 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::powerStateDidChangeTo(unsigned long, unsigned long, IOService*) */

void IOService::powerStateDidChangeTo(ulong param_1,ulong param_2,IOService *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::copyClientWithCategory @ 0x7da00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::copyClientWithCategory(OSSymbol const*) */

void IOService::copyClientWithCategory(OSSymbol *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::powerStateWillChangeTo @ 0x7db00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::powerStateWillChangeTo(unsigned long, unsigned long, IOService*) */

void IOService::powerStateWillChangeTo(ulong param_1,ulong param_2,IOService *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::acknowledgeNotification @ 0x7dc00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::acknowledgeNotification(void*, unsigned int) */

void IOService::acknowledgeNotification(void *param_1,uint param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::requestPowerDomainState @ 0x7dd00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::requestPowerDomainState(unsigned long, IOPowerConnection*, unsigned long) */

void IOService::requestPowerDomainState(ulong param_1,IOPowerConnection *param_2,ulong param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::acknowledgeSetPowerState @ 0x7de00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void IOService::acknowledgeSetPowerState(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::getDeviceMemoryWithIndex @ 0x7df00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::getDeviceMemoryWithIndex(unsigned int) */

void IOService::getDeviceMemoryWithIndex(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::mapDeviceMemoryWithIndex @ 0x7e000 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::mapDeviceMemoryWithIndex(unsigned int, unsigned int) */

void IOService::mapDeviceMemoryWithIndex(uint param_1,uint param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::powerStateForDomainState @ 0x7e100 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::powerStateForDomainState(unsigned long) */

void IOService::powerStateForDomainState(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::maxCapabilityForDomainState @ 0x7e200 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::maxCapabilityForDomainState(unsigned long) */

void IOService::maxCapabilityForDomainState(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::initialPowerStateForDomainState @ 0x7e300 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::initialPowerStateForDomainState(unsigned long) */

void IOService::initialPowerStateForDomainState(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::init @ 0x7e400 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::init(OSDictionary*) */

void IOService::init(OSDictionary *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::init @ 0x7e500 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::init(IORegistryEntry*, IORegistryPlane const*) */

void IOService::init(IORegistryEntry *param_1,IORegistryPlane *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::open @ 0x7e600 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::open(IOService*, unsigned int, void*) */

void IOService::open(IOService *param_1,uint param_2,void *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::stop @ 0x7e700 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::stop(IOService*) */

void IOService::stop(IOService *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::close @ 0x7e800 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::close(IOService*, unsigned int) */

void IOService::close(IOService *param_1,uint param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::probe @ 0x7e900 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::probe(IOService*, int*) */

void IOService::probe(IOService *param_1,int *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::start @ 0x7ea00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::start(IOService*) */

void IOService::start(IOService *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::PMinit @ 0x7eb00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::PMinit() */

void IOService::PMinit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::PMstop @ 0x7ec00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::PMstop() */

void IOService::PMstop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::attach @ 0x7ed00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::attach(IOService*) */

void IOService::attach(IOService *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::detach @ 0x7ee00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::detach(IOService*) */

void IOService::detach(IOService *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::message @ 0x7ef00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::message(unsigned int, IOService*, void*) */

void IOService::message(uint param_1,IOService *param_2,void *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::Dispatch @ 0x7f000 */

/* WARNING: Control flow encountered bad instruction data */
/* IOService::Dispatch(IORPC) */

void IOService::Dispatch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::finalize @ 0x7f100 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::finalize(unsigned int) */

void IOService::finalize(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::terminate @ 0x7f200 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::terminate(unsigned int) */

void IOService::terminate(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::IOService @ 0x7f300 */

/* WARNING: Control flow encountered bad instruction data */

void __thiscall IOService::IOService(IOService *this,OSMetaClass *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::~IOService @ 0x7f400 */

/* WARNING: Control flow encountered bad instruction data */
/* IOService::~IOService() */

void __thiscall IOService::~IOService(IOService *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSMetaClass::getClassName @ 0x7f500 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void OSMetaClass::getClassName(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSMetaClass::getMetaClass @ 0x7f600 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSMetaClass::getMetaClass() const */

void OSMetaClass::getMetaClass(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSMetaClass::taggedRetain @ 0x7f700 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSMetaClass::taggedRetain(void const*) const */

void OSMetaClass::taggedRetain(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSMetaClass::taggedRelease @ 0x7f800 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSMetaClass::taggedRelease(void const*) const */

void OSMetaClass::taggedRelease(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSMetaClass::taggedRelease @ 0x7f900 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSMetaClass::taggedRelease(void const*, int) const */

void OSMetaClass::taggedRelease(void *param_1,int param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSMetaClass::getRetainCount @ 0x7fa00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSMetaClass::getRetainCount() const */

void OSMetaClass::getRetainCount(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSMetaClass::reservedCalled @ 0x7fb00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSMetaClass::reservedCalled(int) const */

void OSMetaClass::reservedCalled(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSMetaClass::instanceConstructed @ 0x7fc00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void OSMetaClass::instanceConstructed(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSMetaClass::retain @ 0x7fd00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSMetaClass::retain() const */

void OSMetaClass::retain(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSMetaClass::release @ 0x7fe00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSMetaClass::release(int) const */

void OSMetaClass::release(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSMetaClass::release @ 0x7ff00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSMetaClass::release() const */

void OSMetaClass::release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSMetaClass::serialize @ 0x80000 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSMetaClass::serialize(OSSerialize*) const */

void OSMetaClass::serialize(OSSerialize *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::compareName @ 0x80100 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::compareName(OSString*, OSString**) const */

void IORegistryEntry::compareName(OSString *param_1,OSString **param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::getLocation @ 0x80200 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::getLocation(IORegistryPlane const*) const */

void IORegistryEntry::getLocation(IORegistryPlane *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::getProperty @ 0x80300 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::getProperty(OSString const*) const */

void IORegistryEntry::getProperty(OSString *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::getProperty @ 0x80400 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::getProperty(OSString const*, IORegistryPlane const*, unsigned int) const */

void IORegistryEntry::getProperty(OSString *param_1,IORegistryPlane *param_2,uint param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::getProperty @ 0x80500 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::getProperty(OSSymbol const*) const */

void IORegistryEntry::getProperty(OSSymbol *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::getProperty @ 0x80600 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::getProperty(OSSymbol const*, IORegistryPlane const*, unsigned int) const */

void IORegistryEntry::getProperty(OSSymbol *param_1,IORegistryPlane *param_2,uint param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::getProperty @ 0x80700 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::getProperty(char const*) const */

void IORegistryEntry::getProperty(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::getProperty @ 0x80800 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::getProperty(char const*, IORegistryPlane const*, unsigned int) const */

void IORegistryEntry::getProperty(char *param_1,IORegistryPlane *param_2,uint param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::compareNames @ 0x80900 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::compareNames(OSObject*, OSString**) const */

void IORegistryEntry::compareNames(OSObject *param_1,OSString **param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::copyLocation @ 0x80a00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::copyLocation(IORegistryPlane const*) const */

void IORegistryEntry::copyLocation(IORegistryPlane *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::copyProperty @ 0x80b00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::copyProperty(OSString const*) const */

void IORegistryEntry::copyProperty(OSString *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::copyProperty @ 0x80c00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::copyProperty(OSString const*, IORegistryPlane const*, unsigned int) const */

void IORegistryEntry::copyProperty(OSString *param_1,IORegistryPlane *param_2,uint param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::copyProperty @ 0x80d00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::copyProperty(OSSymbol const*) const */

void IORegistryEntry::copyProperty(OSSymbol *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::copyProperty @ 0x80e00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::copyProperty(OSSymbol const*, IORegistryPlane const*, unsigned int) const */

void IORegistryEntry::copyProperty(OSSymbol *param_1,IORegistryPlane *param_2,uint param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::copyProperty @ 0x80f00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::copyProperty(char const*) const */

void IORegistryEntry::copyProperty(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::copyProperty @ 0x81000 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::copyProperty(char const*, IORegistryPlane const*, unsigned int) const */

void IORegistryEntry::copyProperty(char *param_1,IORegistryPlane *param_2,uint param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::getChildEntry @ 0x81100 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::getChildEntry(IORegistryPlane const*) const */

void IORegistryEntry::getChildEntry(IORegistryPlane *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::applyToParents @ 0x81200 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::applyToParents(void (*)(IORegistryEntry*, void*), void*, IORegistryPlane const*)
   const */

void IORegistryEntry::applyToParents
               (_func_void_IORegistryEntry_ptr_void_ptr *param_1,void *param_2,
               IORegistryPlane *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::copyChildEntry @ 0x81300 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::copyChildEntry(IORegistryPlane const*) const */

void IORegistryEntry::copyChildEntry(IORegistryPlane *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::getParentEntry @ 0x81400 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::getParentEntry(IORegistryPlane const*) const */

void IORegistryEntry::getParentEntry(IORegistryPlane *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::applyToChildren @ 0x81500 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::applyToChildren(void (*)(IORegistryEntry*, void*), void*, IORegistryPlane
   const*) const */

void IORegistryEntry::applyToChildren
               (_func_void_IORegistryEntry_ptr_void_ptr *param_1,void *param_2,
               IORegistryPlane *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::copyParentEntry @ 0x81600 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::copyParentEntry(IORegistryPlane const*) const */

void IORegistryEntry::copyParentEntry(IORegistryPlane *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::getChildIterator @ 0x81700 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::getChildIterator(IORegistryPlane const*) const */

void IORegistryEntry::getChildIterator(IORegistryPlane *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::getPathComponent @ 0x81800 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::getPathComponent(char*, int*, IORegistryPlane const*) const */

void IORegistryEntry::getPathComponent(char *param_1,int *param_2,IORegistryPlane *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::getParentIterator @ 0x81900 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::getParentIterator(IORegistryPlane const*) const */

void IORegistryEntry::getParentIterator(IORegistryPlane *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::dictionaryWithProperties @ 0x81a00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::dictionaryWithProperties() const */

void IORegistryEntry::dictionaryWithProperties(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::getName @ 0x81b00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::getName(IORegistryPlane const*) const */

void IORegistryEntry::getName(IORegistryPlane *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::getPath @ 0x81c00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::getPath(char*, int*, IORegistryPlane const*) const */

void IORegistryEntry::getPath(char *param_1,int *param_2,IORegistryPlane *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::inPlane @ 0x81d00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::inPlane(IORegistryPlane const*) const */

void IORegistryEntry::inPlane(IORegistryPlane *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::isChild @ 0x81e00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::isChild(IORegistryEntry*, IORegistryPlane const*, bool) const */

void IORegistryEntry::isChild(IORegistryEntry *param_1,IORegistryPlane *param_2,bool param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::copyName @ 0x81f00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::copyName(IORegistryPlane const*) const */

void IORegistryEntry::copyName(IORegistryPlane *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::getDepth @ 0x82000 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::getDepth(IORegistryPlane const*) const */

void IORegistryEntry::getDepth(IORegistryPlane *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IORegistryEntry::isParent @ 0x82100 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IORegistryEntry::isParent(IORegistryEntry*, IORegistryPlane const*, bool) const */

void IORegistryEntry::isParent(IORegistryEntry *param_1,IORegistryPlane *param_2,bool param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSMetaClassBase::isEqualTo @ 0x82200 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSMetaClassBase::isEqualTo(OSMetaClassBase const*) const */

void OSMetaClassBase::isEqualTo(OSMetaClassBase *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSObject::taggedRetain @ 0x82300 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSObject::taggedRetain(void const*) const */

void OSObject::taggedRetain(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSObject::taggedRelease @ 0x82400 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSObject::taggedRelease(void const*) const */

void OSObject::taggedRelease(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSObject::taggedRelease @ 0x82500 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSObject::taggedRelease(void const*, int) const */

void OSObject::taggedRelease(void *param_1,int param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSObject::getRetainCount @ 0x82600 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSObject::getRetainCount() const */

void OSObject::getRetainCount(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSObject::retain @ 0x82700 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSObject::retain() const */

void OSObject::retain(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSObject::release @ 0x82800 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSObject::release(int) const */

void OSObject::release(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSObject::release @ 0x82900 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void OSObject::release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::OSObject::serialize @ 0x82a00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OSObject::serialize(OSSerialize*) const */

void OSObject::serialize(OSSerialize *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::isInactive @ 0x82b00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void IOService::isInactive(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::getProvider @ 0x82c00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::getProvider() const */

void IOService::getProvider(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::getWorkLoop @ 0x82d00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::getWorkLoop() const */

void IOService::getWorkLoop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::handleIsOpen @ 0x82e00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::handleIsOpen(IOService const*) const */

void IOService::handleIsOpen(IOService *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::getClientIterator @ 0x82f00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::getClientIterator() const */

void IOService::getClientIterator(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::getProviderIterator @ 0x83000 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::getProviderIterator() const */

void IOService::getProviderIterator(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::serializeProperties @ 0x83100 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::serializeProperties(OSSerialize*) const */

void IOService::serializeProperties(OSSerialize *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::getOpenClientIterator @ 0x83200 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::getOpenClientIterator() const */

void IOService::getOpenClientIterator(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::getOpenProviderIterator @ 0x83300 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::getOpenProviderIterator() const */

void IOService::getOpenProviderIterator(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::isOpen @ 0x83400 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::isOpen(IOService const*) const */

void IOService::isOpen(IOService *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::getState @ 0x83500 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::getState() const */

void IOService::getState(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::IOService::getClient @ 0x83600 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IOService::getClient() const */

void IOService::getClient(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::___bzero @ 0x83a00 */

/* WARNING: Control flow encountered bad instruction data */

void ___bzero(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::___stack_chk_fail @ 0x83c00 */

/* WARNING: Control flow encountered bad instruction data */

void ___stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::___strncat_chk @ 0x83e00 */

/* WARNING: Control flow encountered bad instruction data */

void ___strncat_chk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::___strncpy_chk @ 0x83f00 */

/* WARNING: Control flow encountered bad instruction data */

void ___strncpy_chk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::__os_log_internal @ 0x84100 */

/* WARNING: Control flow encountered bad instruction data */

void __os_log_internal(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_absolutetime_to_nanoseconds @ 0x84200 */

/* WARNING: Control flow encountered bad instruction data */

void _absolutetime_to_nanoseconds(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_clock_get_uptime @ 0x84300 */

/* WARNING: Control flow encountered bad instruction data */

void _clock_get_uptime(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_clock_interval_to_deadline @ 0x84400 */

/* WARNING: Control flow encountered bad instruction data */

void _clock_interval_to_deadline(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_current_task @ 0x84500 */

/* WARNING: Control flow encountered bad instruction data */

void _current_task(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_kernel_debug @ 0x84800 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _kernel_debug(uint32_t debugid,uintptr_t arg1,uintptr_t arg2,uintptr_t arg3,uintptr_t arg4,
                  uintptr_t arg5)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_mach_absolute_time @ 0x84900 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint64_t _mach_absolute_time(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_mach_msg_send_from_kernel_proper @ 0x84a00 */

/* WARNING: Control flow encountered bad instruction data */

void _mach_msg_send_from_kernel_proper(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_memmove @ 0x84b00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _memmove(void *param_1,void *param_2,size_t param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_nanoseconds_to_absolutetime @ 0x84c00 */

/* WARNING: Control flow encountered bad instruction data */

void _nanoseconds_to_absolutetime(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_read_random @ 0x84e00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _read_random(void *buffer,u_int numBytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_snprintf @ 0x84f00 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _snprintf(char *param_1,size_t param_2,char *param_3,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_strlen @ 0x85000 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t _strlen(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_thread_call_allocate @ 0x85100 */

/* WARNING: Control flow encountered bad instruction data */

void _thread_call_allocate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_thread_call_cancel @ 0x85200 */

/* WARNING: Control flow encountered bad instruction data */

void _thread_call_cancel(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_thread_call_enter1_delayed @ 0x85300 */

/* WARNING: Control flow encountered bad instruction data */

void _thread_call_enter1_delayed(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_thread_call_free @ 0x85400 */

/* WARNING: Control flow encountered bad instruction data */

void _thread_call_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* <EXTERNAL>::_thread_policy_set @ 0x85500 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_thread_policy_set(thread_act_t thread,thread_policy_flavor_t flavor,thread_policy_t policy_info,
                  mach_msg_type_number_t policy_infoCnt)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



