#define _OZ000100000200049aP_H_


#define OZClassPart0001000002fffffd_0_in_0001000002000499 1
#define OZClassPart0001000002fffffe_0_in_0001000002000499 1
#define OZClassPart0001000002000499_0_in_0001000002000499 0
#define OZClassPart0000000000000000_0_in_0000000000000000 999

typedef struct OZ000100000200049aPart_Rec {
  OZ_AllocateInfoRec alloc_info;

  /* protected (pointer) */

  /* protected (data) */
  unsigned int ozDefaultCapacity;
  unsigned int ozExpansionFactor;
  unsigned int ozExpansionIncrement;

  /* protected (zero) */
} OZ000100000200049aPart_Rec, *OZ000100000200049aPart;

#ifdef OZ_ObjectPart_Collection_OIDAsKey_0__
#undef OZ_ObjectPart_Collection_OIDAsKey_0__
#endif
#define OZ_ObjectPart_Collection_OIDAsKey_0__ OZ000100000200049aPart

#endif _OZ000100000200049aP_H_