# Bases
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
cin.tie(0);	
   int startBase,nbdigit,nbinteger,result=0;
   cin>>startBase>>nbdigit;
   for(int i=0;i<nbdigit;++i){
	   cin>>nbinteger;
     result*=startBase;
     result+=nbinteger;	   
	   }
	   cout<<result;
	   return 0;
	
	} 
///---------------------------------------------------
#include<bits/stdc++.h>

using namespace std;
int exponential(int n,int r){
	int result=1;
	for(int i=0;i<r;++i) result*=n;
	return result;
	}
int convertTo10FormAnyBase(int n,int startBase,int exp){
 int result=0;
 result+=n*exponential(startBase,exp);
 return result;
	}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);	
   int startBase,nbdigit,nbinteger,result=0;
   cin>>startBase>>nbdigit;
   for(int i=0;i<nbdigit;++i){
	   cin>>nbinteger;
	 result+=convertTo10FormAnyBase(nbinteger,startBase,nbdigit-i-1);
	   }
	   cout<<result;
	   return 0;
	}
