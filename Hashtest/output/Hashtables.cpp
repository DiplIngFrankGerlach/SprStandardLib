#include "stdafx.h"
#include "header_Hashtables.ai.h"

SPHT_Entry_String_16_String_16::SPHT_Entry_String_16_String_16(){
   char* stackStartPtr=gebeStackStartPointer();char SPR_stack_dummy_var;
   is_used=0;
   
   
} //End Of Method

SPHT_String_16_String_16::SPHT_String_16_String_16(){
   char* stackStartPtr=gebeStackStartPointer();char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->clear(stackStartPtr);
   
   
} //End Of Method

void SPHT_String_16_String_16::resetIterator(char* stackStartPtr){
   char SPR_stack_dummy_var;
   iterator_pos=0;
   iterator_next=0U;
   
   
} //End Of Method

void SPHT_String_16_String_16::clear(char* stackStartPtr){
   char SPR_stack_dummy_var;
   numberOfEntries=0;
   int spr_intScratch0;
   spr_intScratch0=3;
   if(spr_intScratch0<0)throw "invalid size requested for heap allocation";
   _elements=new(spr_intScratch0) SPRArray<SPHT_Entry_String_16_String_16>(spr_intScratch0)
   ;
   
   
} //End Of Method

int SPHT_String_16_String_16::nextElem(char* stackStartPtr,String_16& key,String_16& value){
   char SPR_stack_dummy_var;
   Assigner_String_16 ak;
   Assigner_String_16 av;
   if(iterator_next!=0U){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,key,iterator_next._theObject->key);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,value,iterator_next._theObject->value);
      iterator_next=iterator_next._theObject->next;
      
   }
   else
   {
   int found;found=0;
      while((iterator_pos<_elements._theObject->_sz)&&(found==0)){
                int spr_intScratch1;spr_intScratch1=iterator_pos;chck_accs_p0(_elements,spr_intScratch1,3)
         if(_elements._theObject->_array[spr_intScratch1].is_used==0){
            iterator_pos++;
            
         }
         else
         {
         found=1;
            }
         
      };
      if(iterator_pos==_elements._theObject->_sz){
         return 0;
         
      }
             int spr_intScratch3;spr_intScratch3=iterator_pos;chck_accs_p0(_elements,spr_intScratch3,5)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,key,_elements._theObject->_array[spr_intScratch3].key);
             int spr_intScratch5;spr_intScratch5=iterator_pos;chck_accs_p0(_elements,spr_intScratch5,7)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch5].value);
             int spr_intScratch7;spr_intScratch7=iterator_pos;chck_accs_p0(_elements,spr_intScratch7,9)
      iterator_next=_elements._theObject->_array[spr_intScratch7].next;
      iterator_pos++;
      }
   return 1;
   
   
} //End Of Method

int SPHT_String_16_String_16::size(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return numberOfEntries;
   
   
} //End Of Method

void SPHT_String_16_String_16::insertInternally(char* stackStartPtr,SPRSmartPtr<SPRArray<SPHT_Entry_String_16_String_16> > bins,String_16& key,String_16& value){
   char SPR_stack_dummy_var;
   Hash_String_16 hac;
   Compare_String_16 coac;
   Assigner_String_16 ak;
   Assigner_String_16 av;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int hc;hc=hac.hash(stackStartPtr,key);
   int m1;m1=-1;
   if(hc<0){
      hc=hc*m1;
      
   }
   int pos;pos=hc%bins._theObject->_sz;
          int spr_intScratch9;spr_intScratch9=pos;chck_accs_p0(bins,spr_intScratch9,11)
          int spr_intScratchb;spr_intScratchb=pos;chck_accs_p0(bins,spr_intScratchb,13)
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if((bins._theObject->_array[spr_intScratch9].is_used!=0)&&(coac.compare(stackStartPtr,bins._theObject->_array[spr_intScratchb].key,key)==0)){
             int spr_intScratchd;spr_intScratchd=pos;chck_accs_p0(bins,spr_intScratchd,15)
      SPRSmartPtr<SPHT_Entry_String_16_String_16> entry;entry=bins._theObject->_array[spr_intScratchd].next;
      if(entry==0U){
                int spr_intScratchf;spr_intScratchf=pos;chck_accs_p0(bins,spr_intScratchf,17)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         bins._theObject->_array[spr_intScratchf].next=::new SPHT_Entry_String_16_String_16;
                int spr_intScratch11;spr_intScratch11=pos;chck_accs_p0(bins,spr_intScratch11,19)
         bins._theObject->_array[spr_intScratch11].next._theObject->is_used=1;
                int spr_intScratch13;spr_intScratch13=pos;chck_accs_p0(bins,spr_intScratch13,21)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch13].next._theObject->key,key);
                int spr_intScratch15;spr_intScratch15=pos;chck_accs_p0(bins,spr_intScratch15,23)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch15].next._theObject->value,value);
         
      }
      else
      {
      int inserted;inserted=0;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         while((inserted==0)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==0)){
            if(entry._theObject->next==0U){
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               entry._theObject->next=::new SPHT_Entry_String_16_String_16;
               entry._theObject->next._theObject->is_used=1;
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               ak.assign(stackStartPtr,entry._theObject->next._theObject->key,key);
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               av.assign(stackStartPtr,entry._theObject->next._theObject->value,value);
               inserted=1;
               
            }
            else
            {
            entry=entry._theObject->next;
               }
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            
         };
         if(inserted==0){
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ak.assign(stackStartPtr,entry._theObject->key,key);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            av.assign(stackStartPtr,entry._theObject->value,value);
            
         }
         }
      
   }
   else
   {
          int spr_intScratch17;spr_intScratch17=pos;chck_accs_p0(bins,spr_intScratch17,25)
      bins._theObject->_array[spr_intScratch17].is_used=1;
             int spr_intScratch19;spr_intScratch19=pos;chck_accs_p0(bins,spr_intScratch19,27)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ak.assign(stackStartPtr,bins._theObject->_array[spr_intScratch19].key,key);
             int spr_intScratch1b;spr_intScratch1b=pos;chck_accs_p0(bins,spr_intScratch1b,29)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      av.assign(stackStartPtr,bins._theObject->_array[spr_intScratch1b].value,value);
      }
   
   
} //End Of Method

int SPHT_String_16_String_16::search(char* stackStartPtr,String_16& key,String_16& value){
   char SPR_stack_dummy_var;
   Hash_String_16 hac;
   Compare_String_16 coac;
   Assigner_String_16 ak;
   Assigner_String_16 av;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int hc;hc=hac.hash(stackStartPtr,key);
   int m1;m1=-1;
   if(hc<0){
      hc=hc*m1;
      
   }
   int pos;pos=hc%_elements._theObject->_sz;
          int spr_intScratch1d;spr_intScratch1d=pos;chck_accs_p0(_elements,spr_intScratch1d,31)
   if(_elements._theObject->_array[spr_intScratch1d].is_used==1){
             int spr_intScratch1f;spr_intScratch1f=pos;chck_accs_p0(_elements,spr_intScratch1f,33)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,key,_elements._theObject->_array[spr_intScratch1f].key)==1){
                int spr_intScratch21;spr_intScratch21=pos;chck_accs_p0(_elements,spr_intScratch21,35)
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         av.assign(stackStartPtr,value,_elements._theObject->_array[spr_intScratch21].value);
         return 1;
         
      }
      else
      {
             int spr_intScratch23;spr_intScratch23=pos;chck_accs_p0(_elements,spr_intScratch23,37)
         SPRSmartPtr<SPHT_Entry_String_16_String_16> entry;entry=_elements._theObject->_array[spr_intScratch23].next;
         while(entry!=0U){
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if(coac.compare(stackStartPtr,entry._theObject->key,key)==1){
               if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
               av.assign(stackStartPtr,value,entry._theObject->value);
               return 1;
               
            }
            entry=entry._theObject->next;
            
         };
         return 0;
         }
      
   }
   return 0;
   
   
} //End Of Method

void SPHT_String_16_String_16::insert(char* stackStartPtr,String_16& key,String_16& value){
   char SPR_stack_dummy_var;
   if(numberOfEntries<200000000){
      int nep1;nep1=numberOfEntries+1;
      int limit;limit=((_elements._theObject->_sz*7)/10);
      if(nep1>limit){
         int newCap;newCap=(_elements._theObject->_sz+1)*2;
         int spr_intScratch25;
         spr_intScratch25=newCap;
         if(spr_intScratch25<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<SPHT_Entry_String_16_String_16> > newElements;newElements=new(spr_intScratch25) SPRArray<SPHT_Entry_String_16_String_16>(spr_intScratch25)
         ;
         String_16 key2;
         String_16 value2;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->resetIterator(stackStartPtr);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         while(this->nextElem(stackStartPtr,key2,value2)){
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            this->insertInternally(stackStartPtr,newElements,key2,value2);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            
         };
         _elements=newElements;
         
      }
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->insertInternally(stackStartPtr,_elements,key,value);
      numberOfEntries++;
      
   }
   
   
} //End Of Method

void SPHT_String_16_String_16::del(char* stackStartPtr,String_16& key){
   char SPR_stack_dummy_var;
   Hash_String_16 hac;
   Compare_String_16 coac;
   Assigner_String_16 ak;
   Assigner_String_16 av;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int hc;hc=hac.hash(stackStartPtr,key);
   int m1;m1=-1;
   if(hc<0){
      hc=hc*m1;
      
   }
   int pos;pos=hc%_elements._theObject->_sz;
          int spr_intScratch26;spr_intScratch26=pos;chck_accs_p0(_elements,spr_intScratch26,40)
   if(_elements._theObject->_array[spr_intScratch26].is_used==1){
             int spr_intScratch28;spr_intScratch28=pos;chck_accs_p0(_elements,spr_intScratch28,42)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(coac.compare(stackStartPtr,_elements._theObject->_array[spr_intScratch28].key,key)==0){
                int spr_intScratch2a;spr_intScratch2a=pos;chck_accs_p0(_elements,spr_intScratch2a,44)
         SPRSmartPtr<SPHT_Entry_String_16_String_16> entry;entry=_elements._theObject->_array[spr_intScratch2a].next;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if((entry!=0U)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==1)){
                   int spr_intScratch2c;spr_intScratch2c=pos;chck_accs_p0(_elements,spr_intScratch2c,46)
            _elements._theObject->_array[spr_intScratch2c].next=entry._theObject->next;
            numberOfEntries=numberOfEntries-1;
            
         }
         else
         {
         SPRSmartPtr<SPHT_Entry_String_16_String_16> previousEntry;
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            do{
               previousEntry=entry;
               entry=entry._theObject->next;
               
            }
            while((entry!=0U)&&(coac.compare(stackStartPtr,entry._theObject->key,key)==0));
            if(entry!=0U){
               previousEntry._theObject->next=entry._theObject->next;
               numberOfEntries=numberOfEntries-1;
               
            }
            }
         
      }
      else
      {
             int spr_intScratch2e;spr_intScratch2e=pos;chck_accs_p0(_elements,spr_intScratch2e,48)
         if(_elements._theObject->_array[spr_intScratch2e].next!=0U){
                   int spr_intScratch30;spr_intScratch30=pos;chck_accs_p0(_elements,spr_intScratch30,50)
            SPRSmartPtr<SPHT_Entry_String_16_String_16> entryNext;entryNext=_elements._theObject->_array[spr_intScratch30].next;
                   int spr_intScratch32;spr_intScratch32=pos;chck_accs_p0(_elements,spr_intScratch32,52)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            ak.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch32].key,entryNext._theObject->key);
                   int spr_intScratch34;spr_intScratch34=pos;chck_accs_p0(_elements,spr_intScratch34,54)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            av.assign(stackStartPtr,_elements._theObject->_array[spr_intScratch34].value,entryNext._theObject->value);
                   int spr_intScratch36;spr_intScratch36=pos;chck_accs_p0(_elements,spr_intScratch36,56)
            _elements._theObject->_array[spr_intScratch36].next=entryNext._theObject->next;
            
         }
         else
         {
                int spr_intScratch38;spr_intScratch38=pos;chck_accs_p0(_elements,spr_intScratch38,58)
            _elements._theObject->_array[spr_intScratch38].is_used=0;
            }
         numberOfEntries=numberOfEntries-1;
         }
      
   }
   
   
} //End Of Method

