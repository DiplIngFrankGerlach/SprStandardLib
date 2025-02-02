#include "stdafx.h"
#include "header_AppMain.ai.h"

int Main::main(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUnitTest::run(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   StringUtil::UnitTest(stackStartPtr);
   return 1;
   
   
} //End Of Method

