
define(QueueMakroImpl,
Queue_$1::Queue_$1()
{
   _size = 0;
}

int Queue_$1::insert($1* value)
{
   //pfc.fstr("Queue::insert").pr();
   //this.print();

   if( _size < 2000000000 )
   {
      var QueueElement_$1* qe = new QueueElement_$1;
      qe.value = value;

      if(endQueue != NULL)
      {
         endQueue.next = qe;
         endQueue = qe;
      }
      else
      {
         endQueue = qe;
         startQueue = qe;
      }
      
      _size++;
      return 1;
   }
   return 0;
}

int Queue_$1::remove(&$1* value)
{
   if( startQueue != NULL )
   {
       value = startQueue.value;
       _size = _size - 1;
       if(endQueue == startQueue)
       {
           endQueue = NULL;
           startQueue = NULL;
       }
       else 
       {
           //var QueueElement_$1* qe = startQueue;
           //startQueue = qe.next;
           startQueue = startQueue.next;
       }
       return 1;
   }
   value = NULL;
   return 0;
}

int Queue_$1::size()
{
   return _size;
}

void Queue_$1::print()
{
   var QueueElement_$1* qe = startQueue;
   while(qe != NULL )
   {
      //inline_cpp[[ printf("%lli ",(long long)qe._theObject); ]]
      //pfc.fstr("$ ").sa(qe.value).prNoLF();//das geht nicht immer
      qe = qe.next;
   } 
   pfc.fstr("").pr();
}


void Queue_$1::unitTest()
{
    var PrintfClass pfc2;
    var Queue_String_16 q;

    var String_16* s = new String_16("katze");
    q.insert(s);

    s = new String_16("maus");
    q.insert(s);

    s = new String_16("hund");
    q.insert(s);

    var String_16* sRet;
    if(q.remove(sRet) != 1)
    {
        pfc2.fstr("Queue::unitTest() fehlgeschlagen 1").pr();
        return;
    }

    if(sRet.equals("katze") == 0)
    {
        pfc2.fstr("Queue::unitTest() fehlgeschlagen 2").pr();
        return;
    }

    if(q.remove(sRet) != 1)
    {
        pfc2.fstr("Queue::unitTest() fehlgeschlagen 3").pr();
        return;
    }

    if(sRet.equals("maus") == 0)
    {
        pfc2.fstr("Queue::unitTest() fehlgeschlagen 4").pr();
        return;
    }
    if(q.remove(sRet) != 1)
    {
        pfc2.fstr("Queue::unitTest() fehlgeschlagen 5").pr();
        return;
    }

    if(sRet.equals("hund") == 0)
    {
        pfc2.fstr("Queue::unitTest() fehlgeschlagen 6").pr();
        return;
    }
    if(q.remove(sRet) != 0)
    {
        pfc2.fstr("Queue::unitTest() fehlgeschlagen 7").pr();
        return;
    }

    s = new String_16("milch");
    q.insert(s);
    if(q.remove(sRet) == 0)
    {
        pfc2.fstr("Queue::unitTest() fehlgeschlagen 8").pr();
        return;
    }
    if(sRet.equals("milch") == 0)
    {
        pfc2.fstr("Queue::unitTest() fehlgeschlagen 9").pr();
        return;
    }
    

})

QueueMakroImpl(String_16)
   
