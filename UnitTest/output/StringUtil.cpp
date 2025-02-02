#include "stdafx.h"
#include "header_StringUtil.ai.h"

void StringUtil::trim(char* stackStartPtr,String_16& eingabe,String_16& ausgabe){
   char SPR_stack_dummy_var;
   ZKNuetzlich zkn;
   int links;links=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int el;el=eingabe.length(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   char z;z=eingabe.getAt(stackStartPtr,links);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ausgabe.clear(stackStartPtr);
   if(el==0){
      return ;
      
   }
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while((links<el)&&(zkn.istLeerzeichen(stackStartPtr,z)==1)){
      links++;
      if(links<el){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         z=eingabe.getAt(stackStartPtr,links);
         
      }
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   };
   int rechts;rechts=el-1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   z=eingabe.getAt(stackStartPtr,rechts);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while((rechts>links)&&(zkn.istLeerzeichen(stackStartPtr,z)==1)){
      rechts=rechts-1;
      if(rechts>links){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         z=eingabe.getAt(stackStartPtr,rechts);
         
      }
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   };
   if((links>=0)&&(links<=rechts)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      eingabe.subString(stackStartPtr,ausgabe,links,rechts);
      
   }
   
   
} //End Of Method

void StringUtil::gross(char* stackStartPtr,char c,char& ausgabe){
   char SPR_stack_dummy_var;
   switch(c){
      case 'a':case 'b':case 'c':case 'd':case 'e':case 'f':case 'g':case 'h':case 'i':case 'j':case 'k':case 'l':case 'm':case 'n':case 'o':case 'p':case 'q':case 'r':case 's':case 't':case 'u':case 'v':case 'w':case 'x':case 'y':case 'z':{
         int n;n=((int)c);
         n=n-((int)'a');
         n=n+((int)'A');
         ausgabe=((char)n);
         
      };break;
      
      default:{
         ausgabe=c;
         
      };
      
   }
   
   
} //End Of Method

void StringUtil::vergleichGK(char* stackStartPtr,String_16& s1,String_16& s2,int& ergebnis){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(s1.length(stackStartPtr)!=s2.length(stackStartPtr)){
      ergebnis=-1;
      return ;
      
   }
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int l;l=s1.length(stackStartPtr);
   {//begin of SPR for statement
   int i;i=0;
   while(i<l){
      char g1;
      char g2;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      StringUtil::gross(stackStartPtr,s1.getAt(stackStartPtr,i),g1);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      StringUtil::gross(stackStartPtr,s2.getAt(stackStartPtr,i),g2);
      if(g1!=g2){
         ergebnis=-1;
         return ;
         
      }
      i++;
      
   
   }
   }//end of SPR for statement
   ergebnis=1;
   
   
} //End Of Method

void StringUtil::appendDouble(char* stackStartPtr,double x,String_16& ausgabe,int anzStellen){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,31> puffer;
   
          snprintf(puffer._array,30,"%f",x); 
       
   {//begin of SPR for statement
   int i;i=0;
          int spr_intScratch0;spr_intScratch0=i;chck_accs0(puffer,spr_intScratch0,2)
   while((i<anzStellen)&&(puffer._array[spr_intScratch0]!='\0')){
             int spr_intScratch2;spr_intScratch2=i;chck_accs0(puffer,spr_intScratch2,4)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ausgabe.append(stackStartPtr,puffer._array[spr_intScratch2]);
      i++;
      spr_intScratch0=i;chck_accs0(puffer,spr_intScratch0,2)
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void StringUtil::UnitTest(char* stackStartPtr){
   char SPR_stack_dummy_var;
   PrintfClass pfc;
   SPRStackArrayConcrete<char,12> spr_StringScratch4;strcpy(spr_StringScratch4._array,"   123    ");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   String_16 s(stackStartPtr,spr_StringScratch4);
   String_16 sZiel;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::trim(stackStartPtr,s,sZiel);
   SPRStackArrayConcrete<char,5> spr_StringScratch5;strcpy(spr_StringScratch5._array,"123");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sZiel.equals(stackStartPtr,spr_StringScratch5)!=1){
      SPRStackArrayConcrete<char,33> spr_StringScratch6;strcpy(spr_StringScratch6._array,"StringUtil::UnitTest() Fehler 1");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch6).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,5> spr_StringScratch7;strcpy(spr_StringScratch7._array,"456");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratch7);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sZiel.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::trim(stackStartPtr,s,sZiel);
   SPRStackArrayConcrete<char,5> spr_StringScratch8;strcpy(spr_StringScratch8._array,"456");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sZiel.equals(stackStartPtr,spr_StringScratch8)!=1){
      SPRStackArrayConcrete<char,33> spr_StringScratch9;strcpy(spr_StringScratch9._array,"StringUtil::UnitTest() Fehler 2");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch9).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,42> spr_StringScratcha;strcpy(spr_StringScratcha._array,"                              a         ");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratcha);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sZiel.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::trim(stackStartPtr,s,sZiel);
   SPRStackArrayConcrete<char,3> spr_StringScratchb;strcpy(spr_StringScratchb._array,"a");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sZiel.equals(stackStartPtr,spr_StringScratchb)!=1){
      SPRStackArrayConcrete<char,33> spr_StringScratchc;strcpy(spr_StringScratchc._array,"StringUtil::UnitTest() Fehler 3");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchc).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,12> spr_StringScratchd;strcpy(spr_StringScratchd._array,"Z         ");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratchd);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sZiel.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::trim(stackStartPtr,s,sZiel);
   SPRStackArrayConcrete<char,3> spr_StringScratche;strcpy(spr_StringScratche._array,"Z");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sZiel.equals(stackStartPtr,spr_StringScratche)!=1){
      SPRStackArrayConcrete<char,33> spr_StringScratchf;strcpy(spr_StringScratchf._array,"StringUtil::UnitTest() Fehler 4");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchf).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,3> spr_StringScratch10;strcpy(spr_StringScratch10._array,"P");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratch10);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sZiel.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::trim(stackStartPtr,s,sZiel);
   SPRStackArrayConcrete<char,3> spr_StringScratch11;strcpy(spr_StringScratch11._array,"P");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sZiel.equals(stackStartPtr,spr_StringScratch11)!=1){
      SPRStackArrayConcrete<char,33> spr_StringScratch12;strcpy(spr_StringScratch12._array,"StringUtil::UnitTest() Fehler 5");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch12).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,12> spr_StringScratch13;strcpy(spr_StringScratch13._array,"Zafelstein");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratch13);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sZiel.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::trim(stackStartPtr,s,sZiel);
   SPRStackArrayConcrete<char,12> spr_StringScratch14;strcpy(spr_StringScratch14._array,"Zafelstein");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sZiel.equals(stackStartPtr,spr_StringScratch14)!=1){
      SPRStackArrayConcrete<char,33> spr_StringScratch15;strcpy(spr_StringScratch15._array,"StringUtil::UnitTest() Fehler 6");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch15).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,46> spr_StringScratch16;strcpy(spr_StringScratch16._array,"          Zafelstein                  11    ");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratch16);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sZiel.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::trim(stackStartPtr,s,sZiel);
   SPRStackArrayConcrete<char,32> spr_StringScratch17;strcpy(spr_StringScratch17._array,"Zafelstein                  11");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sZiel.equals(stackStartPtr,spr_StringScratch17)!=1){
      SPRStackArrayConcrete<char,33> spr_StringScratch18;strcpy(spr_StringScratch18._array,"StringUtil::UnitTest() Fehler 7");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch18).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,2> spr_StringScratch19;strcpy(spr_StringScratch19._array,"");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratch19);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sZiel.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::trim(stackStartPtr,s,sZiel);
   SPRStackArrayConcrete<char,2> spr_StringScratch1a;strcpy(spr_StringScratch1a._array,"");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sZiel.equals(stackStartPtr,spr_StringScratch1a)!=1){
      SPRStackArrayConcrete<char,33> spr_StringScratch1b;strcpy(spr_StringScratch1b._array,"StringUtil::UnitTest() Fehler 8");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch1b).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,3> spr_StringScratch1c;strcpy(spr_StringScratch1c._array,"T");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratch1c);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sZiel.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::trim(stackStartPtr,s,sZiel);
   SPRStackArrayConcrete<char,3> spr_StringScratch1d;strcpy(spr_StringScratch1d._array,"T");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(sZiel.equals(stackStartPtr,spr_StringScratch1d)!=1){
      SPRStackArrayConcrete<char,33> spr_StringScratch1e;strcpy(spr_StringScratch1e._array,"StringUtil::UnitTest() Fehler 8");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch1e).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,8> spr_StringScratch1f;strcpy(spr_StringScratch1f._array,"walter");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   String_16 sk(stackStartPtr,spr_StringScratch1f);
   SPRStackArrayConcrete<char,8> spr_StringScratch20;strcpy(spr_StringScratch20._array,"WalTER");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   String_16 sg(stackStartPtr,spr_StringScratch20);
   int ergebnis;ergebnis=-1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::vergleichGK(stackStartPtr,sk,sg,ergebnis);
   if(ergebnis!=1){
      SPRStackArrayConcrete<char,33> spr_StringScratch21;strcpy(spr_StringScratch21._array,"StringUtil::UnitTest() Fehler 9");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch21).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,8> spr_StringScratch22;strcpy(spr_StringScratch22._array,"W4lter");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sg.assign(stackStartPtr,spr_StringScratch22);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::vergleichGK(stackStartPtr,sk,sg,ergebnis);
   if(ergebnis!=-1){
      SPRStackArrayConcrete<char,34> spr_StringScratch23;strcpy(spr_StringScratch23._array,"StringUtil::UnitTest() Fehler 10");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch23).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,8> spr_StringScratch24;strcpy(spr_StringScratch24._array,"Walter");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sg.assign(stackStartPtr,spr_StringScratch24);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::vergleichGK(stackStartPtr,sk,sg,ergebnis);
   if(ergebnis!=1){
      SPRStackArrayConcrete<char,34> spr_StringScratch25;strcpy(spr_StringScratch25._array,"StringUtil::UnitTest() Fehler 11");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch25).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,74> spr_StringScratch26;strcpy(spr_StringScratch26._array,"11111111111111111111111111111111111111111111111111111111111111111111WELT");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sg.assign(stackStartPtr,spr_StringScratch26);
   SPRStackArrayConcrete<char,74> spr_StringScratch27;strcpy(spr_StringScratch27._array,"11111111111111111111111111111111111111111111111111111111111111111111welt");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   sk.assign(stackStartPtr,spr_StringScratch27);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::vergleichGK(stackStartPtr,sk,sg,ergebnis);
   if(ergebnis!=1){
      SPRStackArrayConcrete<char,34> spr_StringScratch28;strcpy(spr_StringScratch28._array,"StringUtil::UnitTest() Fehler 12");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch28).pr(stackStartPtr);
      return ;
      
   }
   SPRStackArrayConcrete<char,38> spr_StringScratch29;strcpy(spr_StringScratch29._array,"StringUtil::UnitTest() Erfolgreich !");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch29).pr(stackStartPtr);
   
   
} //End Of Method

