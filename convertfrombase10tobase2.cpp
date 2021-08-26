#include<bits/stdc++.h>

using namespace std;
void from10baseto2(int n){
	string s="";
	while(n>0){
	  
	   s=(char)((n%2)+48)+s;
	   n/=2;
		}
	if(s.length()==0) cout<<0;	
	else cout<<s;	
	}
int main(){
	int n;
	cin>>n;
	from10baseto2(n);
	}
///-------------------------------
#include <iostream>
using namespace std;
int main()
{
   int nombre;
   cin >> nombre;
   
   int puissanceDe2 = 2;
   while (puissanceDe2 <= nombre)
      puissanceDe2 = puissanceDe2 * 2;
   puissanceDe2 = puissanceDe2 / 2;
     
   while (puissanceDe2 > 0)
   {
      if (puissanceDe2 <= nombre)
      {
         cout << "1";
         nombre = nombre - puissanceDe2;
      }
      else
         cout << "0";
      puissanceDe2 = puissanceDe2 / 2;
   }
}
///-------------Or by a recursive program:
#include <iostream>
using namespace std;
void afficherBinaire(int nombre)
{
   if (nombre > 1)
      afficherBinaire(nombre / 2);
   cout << nombre % 2;
}
int main()
{
   int nombre;
   cin >> nombre;
   afficherBinaire(nombre);
}
///-------------------or by an iterative program with an array 
#include <iostream>
using namespace std;
const int MAX_CHIFFRES = 32;
 
int main()
{
   int nombre;
   cin >> nombre;
   int chiffresBinaires[MAX_CHIFFRES];
   int iChiffres = 0;
   do
   {
      chiffresBinaires[iChiffres] = nombre % 2;
      nombre /= 2;
      iChiffres++;
   }
   while (nombre != 0);
   while (iChiffres > 0)
   {
      iChiffres--;
      cout << chiffresBinaires[iChiffres];
   }
}
