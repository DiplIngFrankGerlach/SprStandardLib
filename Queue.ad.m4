
define(QueueMakro,

class QueueElement_$1
{
   $1* value;

   QueueElement_$1* next;
methods:
}; 


class Queue_$1
{
   QueueElement_$1* startQueue;
   QueueElement_$1* endQueue;
   int _size;
   PrintfClass pfc;
methods:
   Queue_$1();

   int insert($1* value);

   int remove(&$1* value); 

   int size();

   void print();

   static void unitTest();
   
};)

QueueMakro(String_16)


