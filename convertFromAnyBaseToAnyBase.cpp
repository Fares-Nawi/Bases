# Bases
///----------------------my solution
#include<bits/stdc++.h>

using namespace std;
int exp(int base,int ex){
	int result=1;
	for(int i=0;i<ex;++i) result*=base;
	return result; 
	}
int convertto10(int a,int base,int ex){
   int result=0;
   result+=a*exp(base,ex);
		return result;
	}
void convertfrom10toendbase(int n,int base){
    if(base>n){
		 cout<<n%base<<" ";
		 return;
		 }
    convertfrom10toendbase(n/base,base);
    cout<<n%base<<" ";
	}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
int startbase,endbase,nbdigit,nb=0,a;
string s;
cin>>startbase>>endbase>>nbdigit;
cin.ignore();
  for(int i=0;i<nbdigit;++i){
     cin>>a;
     nb*=startbase;
     nb+=a;
     
	  }
	 convertfrom10toendbase(nb,endbase);
	  
return 0;	
	}
///------------------------------------------------
#include <iostream>
using namespace std;
int lireEntier(int base,int nbChiffres)
{
   int nombre = 0;
   for (int iChiffres = 0; iChiffres < nbChiffres; iChiffres++)
   {
      int chiffre;
      cin >> chiffre;
      nombre = nombre * base + chiffre;
   }
   return nombre;
}
void afficherEntier(int nombre,int base)
{
   static const int MAX_CHIFFRES = 31;
   int chiffres[MAX_CHIFFRES];
   int nbChiffres = 0;
   while ((nombre > 0) ||  (nbChiffres == 0))
   {
      chiffres[nbChiffres] = nombre % base;
      nombre /= base;
      nbChiffres++;
   }
   while (nbChiffres > 0)
   {
      nbChiffres--;
      cout << chiffres[nbChiffres] << " ";
   }
}
int main()
{
   int baseSource,baseCible,nbChiffres;
   cin >> baseSource >> baseCible >> nbChiffres;
   afficherEntier( lireEntier( baseSource, nbChiffres ), baseCible );
}
///-----------------------------------------------recursion solution
	#include <iostream>
using namespace std;
int lireEntier(){
	int a;
	cin>>a;
	return a;
	}
int lireNombre(int nombre,int base,int nbChiffres){
   if( nbChiffres==0)
      return nombre;
   else
      return lireNombre(nombre * base + lireEntier(), base, nbChiffres - 1);
  }
void afficherNombre(int nombre,int base){
   if (nombre >= base)  afficherNombre(nombre / base,base);
   cout<<nombre%base;
}
int main()
{
   int baseSource,baseCible,nbChiffres;
   cin >> baseSource >> baseCible >> nbChiffres;
   afficherNombre( lireNombre( 0,baseSource, nbChiffres ), baseCible );
}
