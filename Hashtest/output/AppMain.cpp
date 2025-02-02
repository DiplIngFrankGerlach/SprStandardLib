#include "stdafx.h"
#include "header_AppMain.ai.h"

int Main::main(char* stackStartPtr){
   char SPR_stack_dummy_var;
   SPHT_String_16_String_16 ht;
   String_16 schluessel;
   String_16 wert;
   {//begin of SPR for statement
   int i;i=0;
   while(i<1000000){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      schluessel.clear(stackStartPtr);
      SPRStackArrayConcrete<char,16> spr_StringScratch0;strcpy(spr_StringScratch0._array,"Schluessel_Nr_");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      schluessel.append(stackStartPtr,spr_StringScratch0);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      schluessel.append(stackStartPtr,i);
      SPRStackArrayConcrete<char,23> spr_StringScratch1;strcpy(spr_StringScratch1._array,"_11111111111111111111");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      schluessel.append(stackStartPtr,spr_StringScratch1);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      wert.clear(stackStartPtr);
      SPRStackArrayConcrete<char,10> spr_StringScratch2;strcpy(spr_StringScratch2._array,"Wert_Nr_");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      wert.append(stackStartPtr,spr_StringScratch2);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      wert.append(stackStartPtr,i);
      SPRStackArrayConcrete<char,28> spr_StringScratch3;strcpy(spr_StringScratch3._array,"abcdefghijklmnopqrstuvwxyz");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      wert.append(stackStartPtr,spr_StringScratch3);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ht.insert(stackStartPtr,schluessel,wert);
      i++;
      
   
   }
   }//end of SPR for statement
   SPRStackArrayConcrete<char,42> spr_StringScratch4;strcpy(spr_StringScratch4._array,"Schluessel_Nr_17777_11111111111111111111");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   schluessel.assign(stackStartPtr,spr_StringScratch4);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   wert.clear(stackStartPtr);
   PrintfClass pfc;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(ht.search(stackStartPtr,schluessel,wert)==1){
      SPRStackArrayConcrete<char,12> spr_StringScratch5;strcpy(spr_StringScratch5._array,"wert ist $");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch5).sa(stackStartPtr,wert).pr(stackStartPtr);
      
   }
   return 1;
   
   
} //End Of Method

