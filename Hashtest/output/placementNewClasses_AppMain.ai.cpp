#include "header_AppMain.ai.h"
void* SPHT_Entry_String_16_String_16::operator new(size_t objectSize,void* place){
   SPHT_Entry_String_16_String_16* obj=(SPHT_Entry_String_16_String_16*)place;    String_16::operator new(sizeof(String_16),(char*)&(obj->key));   SPRSmartPtr<SPHT_Entry_String_16_String_16>::operator new(sizeof(SPRSmartPtr<SPHT_Entry_String_16_String_16>),(char*)&(obj->next));   String_16::operator new(sizeof(String_16),(char*)&(obj->value));  return obj; 
} 
void SPHT_Entry_String_16_String_16::destroy_sappeur_internal(){delete this;}
void* Main::operator new(size_t objectSize,void* place){
   Main* obj=(Main*)place;   return obj; 
} 
void Main::destroy_sappeur_internal(){delete this;}
void* SPHT_String_16_String_16::operator new(size_t objectSize,void* place){
   SPHT_String_16_String_16* obj=(SPHT_String_16_String_16*)place;    SPRSmartPtr<SPRArray<SPHT_Entry_String_16_String_16> >::operator new(sizeof(SPRSmartPtr<SPRArray<SPHT_Entry_String_16_String_16> >),(char*)&(obj->_elements));   SPRSmartPtr<SPHT_Entry_String_16_String_16>::operator new(sizeof(SPRSmartPtr<SPHT_Entry_String_16_String_16>),(char*)&(obj->iterator_next));  return obj; 
} 
void SPHT_String_16_String_16::destroy_sappeur_internal(){delete this;}

