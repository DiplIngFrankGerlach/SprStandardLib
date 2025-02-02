#include "stdafx.h"
#include "header_StringUnitTest.ai.h"

void StringUnitTest::run(char* stackStartPtr){
   char SPR_stack_dummy_var;
   PrintfClass pfc;
   if(1==1){
      SPRStackArrayConcrete<char,4> spr_StringScratch0;strcpy(spr_StringScratch0._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch0);
      SPRStackArrayConcrete<char,4> spr_StringScratch1;strcpy(spr_StringScratch1._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,spr_StringScratch1);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.append(stackStartPtr,s2);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,6> spr_StringScratch2;strcpy(spr_StringScratch2._array,"aaaa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,4> spr_StringScratch3;strcpy(spr_StringScratch3._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=4)||(s1.equals(stackStartPtr,spr_StringScratch2)!=1)||(s1.equals(stackStartPtr,spr_StringScratch3)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch4;strcpy(spr_StringScratch4._array,"String unittest fail # 1");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch4).pr(stackStartPtr);
         
      }
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.clear(stackStartPtr);
      SPRStackArrayConcrete<char,21> spr_StringScratch5;strcpy(spr_StringScratch5._array,"hurzlipurzligiraffe");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.append(stackStartPtr,spr_StringScratch5);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.append(stackStartPtr,s2);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratch6;strcpy(spr_StringScratch6._array,"hurzlipurzligiraffeaa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,4> spr_StringScratch7;strcpy(spr_StringScratch7._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=21)||(s1.equals(stackStartPtr,spr_StringScratch6)!=1)||(s1.equals(stackStartPtr,spr_StringScratch7)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch8;strcpy(spr_StringScratch8._array,"String unittest fail # 2");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch8).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,4> spr_StringScratch9;strcpy(spr_StringScratch9._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch9);
      String_16 s2;
      SPRStackArrayConcrete<char,21> spr_StringScratcha;strcpy(spr_StringScratcha._array,"hurzlipurzligiraffe");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s2.append(stackStartPtr,spr_StringScratcha);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s2.append(stackStartPtr,s1);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratchb;strcpy(spr_StringScratchb._array,"hurzlipurzligiraffeaa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,4> spr_StringScratchc;strcpy(spr_StringScratchc._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s2.length(stackStartPtr)!=21)||(s2.equals(stackStartPtr,spr_StringScratchb)!=1)||(s2.equals(stackStartPtr,spr_StringScratchc)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratchd;strcpy(spr_StringScratchd._array,"String unittest fail # 3");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratchd).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,3> spr_StringScratche;strcpy(spr_StringScratche._array,"a");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratche);
      SPRStackArrayConcrete<char,3> spr_StringScratchf;strcpy(spr_StringScratchf._array,"b");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,spr_StringScratchf);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,13> spr_StringScratch10;strcpy(spr_StringScratch10._array,"abbbbbbbbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch11;strcpy(spr_StringScratch11._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=11)||(s1.equals(stackStartPtr,spr_StringScratch10)!=1)||(s1.equals(stackStartPtr,spr_StringScratch11)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch12;strcpy(spr_StringScratch12._array,"String unittest fail # 4");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch12).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,3> spr_StringScratch13;strcpy(spr_StringScratch13._array,"a");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch13);
      SPRStackArrayConcrete<char,4> spr_StringScratch14;strcpy(spr_StringScratch14._array,"cc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,spr_StringScratch14);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratch15;strcpy(spr_StringScratch15._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch16;strcpy(spr_StringScratch16._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=21)||(s1.equals(stackStartPtr,spr_StringScratch15)!=1)||(s1.equals(stackStartPtr,spr_StringScratch16)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch17;strcpy(spr_StringScratch17._array,"String unittest fail # 5");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch17).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,3> spr_StringScratch18;strcpy(spr_StringScratch18._array,"a");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch18);
      SPRStackArrayConcrete<char,4> spr_StringScratch19;strcpy(spr_StringScratch19._array,"cc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,spr_StringScratch19);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratch1a;strcpy(spr_StringScratch1a._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch1b;strcpy(spr_StringScratch1b._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=21)||(s1.equals(stackStartPtr,spr_StringScratch1a)!=1)||(s1.equals(stackStartPtr,spr_StringScratch1b)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch1c;strcpy(spr_StringScratch1c._array,"String unittest fail # 5");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch1c).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,23> spr_StringScratch1d;strcpy(spr_StringScratch1d._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch1d);
      SPRStackArrayConcrete<char,4> spr_StringScratch1e;strcpy(spr_StringScratch1e._array,"cc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,spr_StringScratch1e);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,43> spr_StringScratch1f;strcpy(spr_StringScratch1f._array,"acccccccccccccccccccccccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch20;strcpy(spr_StringScratch20._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=41)||(s1.equals(stackStartPtr,spr_StringScratch1f)!=1)||(s1.equals(stackStartPtr,spr_StringScratch20)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch21;strcpy(spr_StringScratch21._array,"String unittest fail # 7");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch21).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,23> spr_StringScratch22;strcpy(spr_StringScratch22._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch22);
      SPRStackArrayConcrete<char,23> spr_StringScratch23;strcpy(spr_StringScratch23._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,spr_StringScratch23);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      int expLength;expLength=10*21+21;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch24;strcpy(spr_StringScratch24._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=expLength)||(s1.equals(stackStartPtr,spr_StringScratch24)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch25;strcpy(spr_StringScratch25._array,"String unittest fail # 8");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch25).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      String_16 ext;
      SPRStackArrayConcrete<char,14> spr_StringScratch26;strcpy(spr_StringScratch26._array,"/home/x.docx");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 filename(stackStartPtr,spr_StringScratch26);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.rightOf(stackStartPtr,'/',ext);
      SPRStackArrayConcrete<char,8> spr_StringScratch27;strcpy(spr_StringScratch27._array,"x.docx");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(ext.compare(stackStartPtr,spr_StringScratch27)!=1){
         SPRStackArrayConcrete<char,27> spr_StringScratch28;strcpy(spr_StringScratch28._array,"String unittest fail # 88");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch28).pr(stackStartPtr);
         
      }
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.rightOf(stackStartPtr,'.',ext);
      SPRStackArrayConcrete<char,6> spr_StringScratch29;strcpy(spr_StringScratch29._array,"docx");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(ext.compare(stackStartPtr,spr_StringScratch29)!=1){
         SPRStackArrayConcrete<char,29> spr_StringScratch2a;strcpy(spr_StringScratch2a._array,"String unittest fail # 88.2");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch2a).pr(stackStartPtr);
         
      }
      SPRStackArrayConcrete<char,15> spr_StringScratch2b;strcpy(spr_StringScratch2b._array,"/tmp/abc.html");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.assign(stackStartPtr,spr_StringScratch2b);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.rightOf(stackStartPtr,'.',ext);
      SPRStackArrayConcrete<char,6> spr_StringScratch2c;strcpy(spr_StringScratch2c._array,"html");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(ext.compare(stackStartPtr,spr_StringScratch2c)!=1){
         SPRStackArrayConcrete<char,29> spr_StringScratch2d;strcpy(spr_StringScratch2d._array,"String unittest fail # 88.3");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch2d).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      String_16 s;
      SPRStackArrayConcrete<char,5> spr_StringScratch2e;strcpy(spr_StringScratch2e._array,"abc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s.append(stackStartPtr,spr_StringScratch2e);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s.ensureCapacity(stackStartPtr,300);
      int i;
      {//begin of SPR for statement
      i=0;
      while(i<26){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s.append(stackStartPtr,((char)(i+(((int)'a')))));
         i++;
         
      
      }
      }//end of SPR for statement
      SPRStackArrayConcrete<char,31> spr_StringScratch2f;strcpy(spr_StringScratch2f._array,"abcabcdefghijklmnopqrstuvwxyz");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(s.equals(stackStartPtr,spr_StringScratch2f)!=1){
         SPRStackArrayConcrete<char,34> spr_StringScratch30;strcpy(spr_StringScratch30._array,"Testcase ensureCapacity() failed");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch30).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,18> spr_StringScratch31;strcpy(spr_StringScratch31._array,"1234567890123456");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s(stackStartPtr,spr_StringScratch31);
      String_16 s2;
      int i;
      {//begin of SPR for statement
      i=0;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      while(i<s.length(stackStartPtr)){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s2.append(stackStartPtr,s.getAt(stackStartPtr,i));
         i++;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(s.equals(stackStartPtr,s2)!=1){
         SPRStackArrayConcrete<char,30> spr_StringScratch32;strcpy(spr_StringScratch32._array,"Testcase append(char) failed");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch32).pr(stackStartPtr);
         
      }
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s.append(stackStartPtr,'a');
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s.append(stackStartPtr,'b');
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s.append(stackStartPtr,'c');
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s2.clear(stackStartPtr);
      {//begin of SPR for statement
      i=0;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      while(i<s.length(stackStartPtr)){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s2.append(stackStartPtr,s.getAt(stackStartPtr,i));
         i++;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(s.equals(stackStartPtr,s2)!=1){
         SPRStackArrayConcrete<char,30> spr_StringScratch33;strcpy(spr_StringScratch33._array,"Testcase append(char) failed");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch33).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      String_16 s1;
      SPRStackArrayConcrete<char,2> spr_StringScratch34;strcpy(spr_StringScratch34._array,"");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(s1.equals(stackStartPtr,spr_StringScratch34)!=1){
         SPRStackArrayConcrete<char,36> spr_StringScratch35;strcpy(spr_StringScratch35._array,"Testcase String constructor failed");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch35).pr(stackStartPtr);
         
      }
      SPRStackArrayConcrete<char,44> spr_StringScratch36;strcpy(spr_StringScratch36._array,"Walther von der Vogelweide war ein Dichter");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.assign(stackStartPtr,spr_StringScratch36);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,s1);
      SPRStackArrayConcrete<char,44> spr_StringScratch37;strcpy(spr_StringScratch37._array,"Walther von der Vogelweide war ein Dichter");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(s1.equals(stackStartPtr,spr_StringScratch37)!=1){
         SPRStackArrayConcrete<char,38> spr_StringScratch38;strcpy(spr_StringScratch38._array,"Testcase String constructor 2 failed");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch38).pr(stackStartPtr);
         
      }
      
   }
   
   
} //End Of Method

