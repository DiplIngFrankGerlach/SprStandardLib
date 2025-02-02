//###############################################################
//# Leistungsvergleich C++
//#
//################################################################

#include <unordered_map>
#include <string>
#include <iostream>


using namespace std;

int main(void)
{
   unordered_map<string,string> ht;

   string schluessel;
   string wert;
   for(int i=0; i < 1000000; i++)
   {
       schluessel.clear();
       schluessel.append("Schluessel_Nr_");
       schluessel += std::to_string(i);
       schluessel.append("_11111111111111111111");

       wert.clear();
       wert.append("Wert_Nr_");
       wert += std::to_string(i);
       wert.append("_abcdefghikjlnopqrstuvwxyz");

       ht[schluessel] = wert;
   }

   schluessel.assign("Schluessel_Nr_17777_11111111111111111111");

   cout << ht[schluessel] << endl;



}
