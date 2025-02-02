
define(WachsendesFeld_IMPL,

   WachsendesFeld_$1::WachsendesFeld_$1()
   {
      _anzGueltig = 0;
      _feld = new $1*[1];
   }

   void WachsendesFeld_$1::dazu($1* nlk)
   {
       if( _anzGueltig == _feld.sz )
       {
           if( _anzGueltig < 1000000000 )
           {
              var *$1* feldNeu[] = new $1*[(_anzGueltig*2)+1];
              var int i;
              for(i=0; i < _feld.sz; i++)
              {
                  feldNeu[i] = _feld[i];
              }
              _feld = feldNeu;
           }
           else
           {
               var PrintfClass pfc;
               pfc.fstr("WachsendesFeld groesser als 1000000000 Eintraege. Beende Programm").pr();
               inline_cpp[[ exit(-1); ]]
           }
       }
       _feld[_anzGueltig] = nlk;
       _anzGueltig++;
   }

   int WachsendesFeld_$1::groesse()
   {
       return _anzGueltig;
   }

   void WachsendesFeld_$1::gebe(int stelle,&$1* nl)
   {  
      nl = _feld[stelle];
   }
 
   void WachsendesFeld_$1::gebeUndWachse(int stelle,&$1* nl)
   {  
      var int i;
      for(i=_anzGueltig - 1;i < stelle; i++)
      {
         var $1* nln = new $1;
         this.dazu(nln);
      }
      nl = _feld[stelle];
   }

   void WachsendesFeld_$1::loesche()
   {
      _anzGueltig = 0;
   }

)

WachsendesFeld_IMPL(String_16)

WachsendesFeld_IMPL(JSON_Wert)

