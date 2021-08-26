#include<bits/stdc++.h>
using namespace std;
int exponential(int n,int r){
	int result=1;
	for(int i=0;i<r;++i) result*=n;
	return result;
	}
void formbase2to10(string s){
	int result=0;
	int l=s.length();
	for(int i=0;i<l;++i){
		if(s[i]=='1') result+=exponential(2,l-i-1);
		}
		cout<<result;
	}
int main(){ 
	string s;
	cin>>s;
	formbase2to10(s);
	}	
///-----------------------
#include <iostream>
#include <string>
using namespace std;
int main()
{
   string binaire;
   cin >> binaire;
   int nombre = 0;
   for (unsigned int chiffre = 0; chiffre < binaire.length(); chiffre++)
      nombre = nombre * 2 + binaire[chiffre] - '0';
   cout << nombre << '\n';
   return 0;
}
