#include "header_System.ai.h"
void* AlphabeticSorter::operator new(size_t objectSize,void* place){
   AlphabeticSorter* obj=(AlphabeticSorter*)place;    SPRStackArrayConcrete<AlphaEntry,36>::operator new(sizeof(SPRStackArrayConcrete<AlphaEntry,36>),(char*)&(obj->_alphabet),36);  return obj; 
} 
void AlphabeticSorter::destroy_sappeur_internal(){delete this;}
void* HexPrinter::operator new(size_t objectSize,void* place){
   HexPrinter* obj=(HexPrinter*)place;   return obj; 
} 
void HexPrinter::destroy_sappeur_internal(){delete this;}
void* AlphaEntry::operator new(size_t objectSize,void* place){
   AlphaEntry* obj=(AlphaEntry*)place;   return obj; 
} 
void AlphaEntry::destroy_sappeur_internal(){delete this;}
void* SPRGeneratedStartThread_ThreadInfo(void* iThreadParam){
ThreadLocalStorageList* tlsList=::new ThreadLocalStorageList;
tlsList->_entryCount = 0;
tlsList->addRef();
char dummyStackVar;
char* stackStartPtr=&dummyStackVar;
tlsList->_stackStartPtr=stackStartPtr;
pthread_setspecific(__spr_tls,tlsList);
ThreadInfo* tp=(ThreadInfo*)iThreadParam;
try{
tp->threadMain(stackStartPtr);
}
catch(const char* exc){
   printf("thread stopped after exception %s",exc);
}
tp->release();
tlsList->release();
return 0;
}
void* ThreadInfo::operator new(size_t objectSize,void* place){
   ThreadInfo* obj=(ThreadInfo*)place;   return obj; 
} 
void ThreadInfo::destroy_sappeur_internal(){delete this;}
void* ThreadLocalStorageEntry::operator new(size_t objectSize,void* place){
   ThreadLocalStorageEntry* obj=(ThreadLocalStorageEntry*)place;   return obj; 
} 
void ThreadLocalStorageEntry::destroy_sappeur_internal(){delete this;}
void* SPRGeneratedStartThread_MTSuperClass(void* iThreadParam){
ThreadLocalStorageList* tlsList=::new ThreadLocalStorageList;
tlsList->_entryCount = 0;
tlsList->addRef();
char dummyStackVar;
char* stackStartPtr=&dummyStackVar;
tlsList->_stackStartPtr=stackStartPtr;
pthread_setspecific(__spr_tls,tlsList);
MTSuperClass* tp=(MTSuperClass*)iThreadParam;
try{
tp->threadMain(stackStartPtr);
}
catch(const char* exc){
   printf("thread stopped after exception %s",exc);
}
tp->release();
tlsList->release();
return 0;
}
void* MTSuperClass::operator new(size_t objectSize,void* place){
   MTSuperClass* obj=(MTSuperClass*)place;   return obj; 
} 
void MTSuperClass::destroy_sappeur_internal(){delete this;}
void* Hashtable4_Hashable4_KeyType4::operator new(size_t objectSize,void* place){
   Hashtable4_Hashable4_KeyType4* obj=(Hashtable4_Hashable4_KeyType4*)place;    SPRSmartPtr<SPRArray<SPRSmartPtr<Hashable4> > >::operator new(sizeof(SPRSmartPtr<SPRArray<SPRSmartPtr<Hashable4> > >),(char*)&(obj->_elements));  return obj; 
} 
void Hashtable4_Hashable4_KeyType4::destroy_sappeur_internal(){delete this;}
void* KeyType4::operator new(size_t objectSize,void* place){
   KeyType4* obj=(KeyType4*)place;    String_16::operator new(sizeof(String_16),(char*)&(obj->_vornameNamename));  return obj; 
} 
void KeyType4::destroy_sappeur_internal(){delete this;}
void* SystemTime::operator new(size_t objectSize,void* place){
   SystemTime* obj=(SystemTime*)place;   return obj; 
} 
void SystemTime::destroy_sappeur_internal(){delete this;}
void* PrintfClass::operator new(size_t objectSize,void* place){
   PrintfClass* obj=(PrintfClass*)place;    String_16::operator new(sizeof(String_16),(char*)&(obj->_fstr));   String_128::operator new(sizeof(String_128),(char*)&(obj->_outBuf));  return obj; 
} 
void PrintfClass::destroy_sappeur_internal(){delete this;}
void* test556661::operator new(size_t objectSize,void* place){
   test556661* obj=(test556661*)place;   return obj; 
} 
void test556661::destroy_sappeur_internal(){delete this;}
void* Benutzer_Umschalter::operator new(size_t objectSize,void* place){
   Benutzer_Umschalter* obj=(Benutzer_Umschalter*)place;   return obj; 
} 
void Benutzer_Umschalter::destroy_sappeur_internal(){delete this;}
void* SystemConstants::operator new(size_t objectSize,void* place){
   SystemConstants* obj=(SystemConstants*)place;   return obj; 
} 
void SystemConstants::destroy_sappeur_internal(){delete this;}
void* SPRGeneratedStartThread_MutexInfo(void* iThreadParam){
ThreadLocalStorageList* tlsList=::new ThreadLocalStorageList;
tlsList->_entryCount = 0;
tlsList->addRef();
char dummyStackVar;
char* stackStartPtr=&dummyStackVar;
tlsList->_stackStartPtr=stackStartPtr;
pthread_setspecific(__spr_tls,tlsList);
MutexInfo* tp=(MutexInfo*)iThreadParam;
try{
tp->threadMain(stackStartPtr);
}
catch(const char* exc){
   printf("thread stopped after exception %s",exc);
}
tp->release();
tlsList->release();
return 0;
}
void* MutexInfo::operator new(size_t objectSize,void* place){
   MutexInfo* obj=(MutexInfo*)place;   return obj; 
} 
void MutexInfo::destroy_sappeur_internal(){delete this;}
void* Input::operator new(size_t objectSize,void* place){
   Input* obj=(Input*)place;   return obj; 
} 
void Input::destroy_sappeur_internal(){delete this;}
void* SPRGeneratedStartThread_SemaphoreInfo(void* iThreadParam){
ThreadLocalStorageList* tlsList=::new ThreadLocalStorageList;
tlsList->_entryCount = 0;
tlsList->addRef();
char dummyStackVar;
char* stackStartPtr=&dummyStackVar;
tlsList->_stackStartPtr=stackStartPtr;
pthread_setspecific(__spr_tls,tlsList);
SemaphoreInfo* tp=(SemaphoreInfo*)iThreadParam;
try{
tp->threadMain(stackStartPtr);
}
catch(const char* exc){
   printf("thread stopped after exception %s",exc);
}
tp->release();
tlsList->release();
return 0;
}
void* SemaphoreInfo::operator new(size_t objectSize,void* place){
   SemaphoreInfo* obj=(SemaphoreInfo*)place;   return obj; 
} 
void SemaphoreInfo::destroy_sappeur_internal(){delete this;}
void* Mutex::operator new(size_t objectSize,void* place){
   Mutex* obj=(Mutex*)place;    SPRSmartPtr<MutexInfo>::operator new(sizeof(SPRSmartPtr<MutexInfo>),(char*)&(obj->_mi));  return obj; 
} 
void Mutex::destroy_sappeur_internal(){delete this;}
void* NullPtrClassSappeurInternal::operator new(size_t objectSize,void* place){
   NullPtrClassSappeurInternal* obj=(NullPtrClassSappeurInternal*)place;   return obj; 
} 
void NullPtrClassSappeurInternal::destroy_sappeur_internal(){delete this;}
void* SPRFile::operator new(size_t objectSize,void* place){
   SPRFile* obj=(SPRFile*)place;   return obj; 
} 
void SPRFile::destroy_sappeur_internal(){delete this;}
void* CommandlineArgs::operator new(size_t objectSize,void* place){
   CommandlineArgs* obj=(CommandlineArgs*)place;   return obj; 
} 
void CommandlineArgs::destroy_sappeur_internal(){delete this;}
void* ThreadLocalStorage::operator new(size_t objectSize,void* place){
   ThreadLocalStorage* obj=(ThreadLocalStorage*)place;    SPRStackArrayConcrete<SPRSmartPtr<ThreadLocalStorageEntry>,1000 >::operator new(sizeof(SPRStackArrayConcrete<SPRSmartPtr<ThreadLocalStorageEntry>,1000 >),(char*)&(obj->_entries),1000);  return obj; 
} 
void ThreadLocalStorage::destroy_sappeur_internal(){delete this;}
void* SystemControl::operator new(size_t objectSize,void* place){
   SystemControl* obj=(SystemControl*)place;   return obj; 
} 
void SystemControl::destroy_sappeur_internal(){delete this;}
void* MultiThreadAdmin::operator new(size_t objectSize,void* place){
   MultiThreadAdmin* obj=(MultiThreadAdmin*)place;   return obj; 
} 
void MultiThreadAdmin::destroy_sappeur_internal(){delete this;}
void* Semaphore::operator new(size_t objectSize,void* place){
   Semaphore* obj=(Semaphore*)place;    SPRSmartPtr<SemaphoreInfo>::operator new(sizeof(SPRSmartPtr<SemaphoreInfo>),(char*)&(obj->_si));  return obj; 
} 
void Semaphore::destroy_sappeur_internal(){delete this;}
void* ThreadLocalStorageList::operator new(size_t objectSize,void* place){
   ThreadLocalStorageList* obj=(ThreadLocalStorageList*)place;    SPRStackArrayConcrete<SPRSmartPtr<ThreadLocalStorageEntry>,1000 >::operator new(sizeof(SPRStackArrayConcrete<SPRSmartPtr<ThreadLocalStorageEntry>,1000 >),(char*)&(obj->_entries),1000);  return obj; 
} 
void ThreadLocalStorageList::destroy_sappeur_internal(){delete this;}
void* Hashable4::operator new(size_t objectSize,void* place){
   Hashable4* obj=(Hashable4*)place;    String_16::operator new(sizeof(String_16),(char*)&(obj->_Vorname));   String_16::operator new(sizeof(String_16),(char*)&(obj->_Ort));   String_16::operator new(sizeof(String_16),(char*)&(obj->_Nachname));   String_16::operator new(sizeof(String_16),(char*)&(obj->_Strasse));  return obj; 
} 
void Hashable4::destroy_sappeur_internal(){delete this;}

