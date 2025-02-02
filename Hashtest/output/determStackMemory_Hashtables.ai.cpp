#include "header_Hashtables.ai.h"
#include "mapping.h"

#include "sizeofAlle.h"

void bestimmeMaximaleStackGroesse_Hashtables_ai() //SPR_BESTIMME_MAXIMALE_STACK_GROESSE_FUNKTION
{
   __systemRuntime->updateMaxStackConsumedPerCall(SPR_MIN_STACK_MEMORY_CONSUMPTION);
   __systemRuntime->updateMaxStackConsumedPerCall(SPR_MIN_STACK_MEMORY_CONSUMPTION);
   __systemRuntime->updateMaxStackConsumedPerCall(SPR_MIN_STACK_MEMORY_CONSUMPTION);
   __systemRuntime->updateMaxStackConsumedPerCall(SPR_MIN_STACK_MEMORY_CONSUMPTION);
   __systemRuntime->updateMaxStackConsumedPerCall(SPR_MIN_STACK_MEMORY_CONSUMPTION);
   __systemRuntime->updateMaxStackConsumedPerCall(SPR_MIN_STACK_MEMORY_CONSUMPTION);
   __systemRuntime->updateMaxStackConsumedPerCall(8+SPR_MIN_STACK_MEMORY_CONSUMPTION+SPR_MAX2(SPR_SIZEOF_String_16__constructorABargsRS,sizeof(SPRSmartPtr<SPHT_Entry_String_16_String_16 >),SPR_SIZEOF_String_16__constructorABargsRS));
   __systemRuntime->updateMaxStackConsumedPerCall(8+SPR_MIN_STACK_MEMORY_CONSUMPTION+SPR_MAX1(sizeof(SPRSmartPtr<SPHT_Entry_String_16_String_16 >),sizeof(SPRSmartPtr<SPHT_Entry_String_16_String_16 >)));
   __systemRuntime->updateMaxStackConsumedPerCall(8);
   __systemRuntime->updateMaxStackConsumedPerCall(8);
   __systemRuntime->updateMaxStackConsumedPerCall(8+sizeof(Assigner_String_16)+sizeof(Assigner_String_16)+sizeof(int));
   __systemRuntime->updateMaxStackConsumedPerCall(8);
   __systemRuntime->updateMaxStackConsumedPerCall(8+sizeof(Hash_String_16)+sizeof(Compare_String_16)+sizeof(Assigner_String_16)+sizeof(Assigner_String_16)+sizeof(int)+sizeof(int)+sizeof(int)+sizeof(SPRSmartPtr<SPHT_Entry_String_16_String_16>)+sizeof(int));
   __systemRuntime->updateMaxStackConsumedPerCall(8+sizeof(Hash_String_16)+sizeof(Compare_String_16)+sizeof(Assigner_String_16)+sizeof(Assigner_String_16)+sizeof(int)+sizeof(int)+sizeof(int)+sizeof(SPRSmartPtr<SPHT_Entry_String_16_String_16>));
   __systemRuntime->updateMaxStackConsumedPerCall(8+sizeof(int)+sizeof(int)+sizeof(int)+sizeof(SPRSmartPtr<SPRArray<SPHT_Entry_String_16_String_16> >)+sizeof(String_16)+sizeof(String_16));
   __systemRuntime->updateMaxStackConsumedPerCall(8+sizeof(Hash_String_16)+sizeof(Compare_String_16)+sizeof(Assigner_String_16)+sizeof(Assigner_String_16)+sizeof(int)+sizeof(int)+sizeof(int)+sizeof(SPRSmartPtr<SPHT_Entry_String_16_String_16>)+sizeof(SPRSmartPtr<SPHT_Entry_String_16_String_16>)+sizeof(SPRSmartPtr<SPHT_Entry_String_16_String_16>));
}

