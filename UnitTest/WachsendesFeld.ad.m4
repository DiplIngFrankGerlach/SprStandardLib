
define(WachsendesFeld,

class WachsendesFeld_$1
{
   *$1* _feld[];
   int _anzGueltig;
methods:

   WachsendesFeld_$1();

   int groesse(); 

   void gebe(int stelle,&$1* nl);
   void gebeUndWachse(int stelle,&$1* nl);

   void dazu($1* nlk);
   
   void loesche();
};
)

WachsendesFeld(String_16)

WachsendesFeld(JSON_Wert)

