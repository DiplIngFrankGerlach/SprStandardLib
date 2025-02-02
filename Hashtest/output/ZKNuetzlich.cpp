#include "stdafx.h"
#include "header_ZKNuetzlich.ai.h"

int ZKNuetzlich::istLeerzeichen(char* stackStartPtr,char c){
   char SPR_stack_dummy_var;
   switch(((int)c)){
      case 32:case 9:case 10:case 13:{
         return 1;
         
      };break;
      
      default:{
         return 0;
         
      };
      
   }
   return 0;
   
   
} //End Of Method

int ZKNuetzlich::istZiffer(char* stackStartPtr,char z){
   char SPR_stack_dummy_var;
   switch(z){
      case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
         return 1;
         
      };break;
      
      
   }
   return 0;
   
   
} //End Of Method

void ZKNuetzlich::wandle(char* stackStartPtr,longlong zahl,int basis,String_16& ziel){
   char SPR_stack_dummy_var;
   longlong llNull;llNull=((longlong)0);
   int istNegativ;istNegativ=0;
   if(zahl<llNull){
      zahl=zahl*((longlong)-1);
      istNegativ=1;
      
   }
   if(basis>36){
      SPRStackArrayConcrete<char,13> spr_StringScratch0;strcpy(spr_StringScratch0._array,"BasisTooBig");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ziel.append(stackStartPtr,spr_StringScratch0);
      return ;
      
   }
   if(zahl<llNull){
      SPRStackArrayConcrete<char,8> spr_StringScratch1;strcpy(spr_StringScratch1._array,"tooBig");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ziel.append(stackStartPtr,spr_StringScratch1);
      return ;
      
   }
   int z0;z0=((int)'0');
   int zA;zA=((int)'A');
   SPRStackArrayConcrete<char,66> puffer;
   int stelle;stelle=0;
   if((stelle==0)&&(zahl==llNull)){
             int spr_intScratch2;spr_intScratch2=0;chck_accs0(puffer,spr_intScratch2,4)
      puffer._array[spr_intScratch2]='0';
      stelle++;
      
   }
   while(zahl>llNull){
      int ziffer;ziffer=((int)zahl%basis);
      if(ziffer<10){
                int spr_intScratch4;spr_intScratch4=stelle;chck_accs0(puffer,spr_intScratch4,6)
         puffer._array[spr_intScratch4]=((char)(ziffer+z0));
         
      }
      else
      {
             int spr_intScratch6;spr_intScratch6=stelle;chck_accs0(puffer,spr_intScratch6,8)
         puffer._array[spr_intScratch6]=((char)((ziffer-10)+zA));
         }
      zahl=zahl/basis;
      stelle++;
      
   };
   if(istNegativ){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ziel.append(stackStartPtr,'-');
      
   }
   {//begin of SPR for statement
   int i;i=stelle-1;
   while(i>=0){
             int spr_intScratch8;spr_intScratch8=i;chck_accs0(puffer,spr_intScratch8,10)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ziel.append(stackStartPtr,puffer._array[spr_intScratch8]);
      i=i-1;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void ZKNuetzlich::appendInAnfz(char* stackStartPtr,String_16& zk,int x){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   zk.append(stackStartPtr,'"');
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   zk.append(stackStartPtr,x);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   zk.append(stackStartPtr,'"');
   
   
} //End Of Method

void ZKNuetzlich::UnitTest(char* stackStartPtr,int& ergebnisUT){
   char SPR_stack_dummy_var;
   PrintfClass pfc;
   SPRStackArrayConcrete<char,17> spr_StringScratcha;strcpy(spr_StringScratcha._array,"123444443232222");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   String_16 s(stackStartPtr,spr_StringScratcha);
   longlong ergebnis;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ZKNuetzlich::strNachLonglong(stackStartPtr,s,ergebnis);
   longlong vergleich;
   vergleich=((longlong)123444);
   vergleich=vergleich*1000000000;
   vergleich=vergleich+443232222;
   if(ergebnis!=vergleich){
      SPRStackArrayConcrete<char,34> spr_StringScratchb;strcpy(spr_StringScratchb._array,"ZKNuetzlich::UnitTest() 1 failed");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchb).pr(stackStartPtr);
      ergebnisUT=-1;
      return ;
      
   }
   SPRStackArrayConcrete<char,3> spr_StringScratchc;strcpy(spr_StringScratchc._array,"1");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratchc);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ZKNuetzlich::strNachLonglong(stackStartPtr,s,ergebnis);
   vergleich=((longlong)1);
   if(ergebnis!=vergleich){
      SPRStackArrayConcrete<char,34> spr_StringScratchd;strcpy(spr_StringScratchd._array,"ZKNuetzlich::UnitTest() 2 failed");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchd).pr(stackStartPtr);
      ergebnisUT=-1;
      return ;
      
   }
   SPRStackArrayConcrete<char,15> spr_StringScratche;strcpy(spr_StringScratche._array,"1000000000000");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s.assign(stackStartPtr,spr_StringScratche);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ZKNuetzlich::strNachLonglong(stackStartPtr,s,ergebnis);
   vergleich=((longlong)1000000000);
   vergleich=vergleich*1000;
   if(ergebnis!=vergleich){
      SPRStackArrayConcrete<char,34> spr_StringScratchf;strcpy(spr_StringScratchf._array,"ZKNuetzlich::UnitTest() 3 failed");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchf).pr(stackStartPtr);
      ergebnisUT=-1;
      return ;
      
   }
   SPRStackArrayConcrete<char,35> spr_StringScratch10;strcpy(spr_StringScratch10._array,"ZKNuetzlich::UnitTest erfolgreich");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch10).pr(stackStartPtr);
   ergebnisUT=1;
   
   
} //End Of Method

void ZKNuetzlich::strNachLonglong(char* stackStartPtr,String_16& eingabe,longlong& ausgabe){
   char SPR_stack_dummy_var;
   ausgabe=((longlong)0);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int egLm1;egLm1=eingabe.length(stackStartPtr)-1;
   {//begin of SPR for statement
   int i;i=0;
   while(i<=egLm1){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char zeichen;zeichen=eingabe.getAt(stackStartPtr,i);
      ausgabe=ausgabe+((int)zeichen)-((int)'0');
      if(i<egLm1){
         ausgabe=ausgabe*10;
         
      }
      i++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

