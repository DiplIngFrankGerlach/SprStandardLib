#include "header_AppMain.ai.h"
void* StringUnitTest::operator new(size_t objectSize,void* place){
   StringUnitTest* obj=(StringUnitTest*)place;   return obj; 
} 
void StringUnitTest::destroy_sappeur_internal(){delete this;}
void* Main::operator new(size_t objectSize,void* place){
   Main* obj=(Main*)place;   return obj; 
} 
void Main::destroy_sappeur_internal(){delete this;}

