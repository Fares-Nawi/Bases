# Bases
///-----------------------------------------using recursion
#include<bits/stdc++.h>
using namespace std;
void convertFromBase10ToAnyBase(int n,int comingbase,int count){
	if(comingbase>n) cout<<count<<'\n';
	else convertFromBase10ToAnyBase(n/comingbase,comingbase,count++);
	cout<<n%comingbase<<" ";
	}
int main(){
	ios_base::sync_with_stdio(false);
cin.tie(0);	
   int n,comingbase,count=1;
    cin>>n>>comingbase;
  convertFromBase10ToAnyBase(n,comingbase,count);
	}
///--------------------------------------------
#include<bits/stdc++.h>
using namespace std;
const int max=31;
int main(){
	ios_base::sync_with_stdio(false);
cin.tie(0);	
   int n,comingbase,count=0;
   int t[max];
    cin>>n>>comingbase;
    do{
		
	 t[count]=n%comingbase;
     	   n/=comingbase;
     	   count++;
	   }while(n>0);
	   cout<<count<<'\n';
	   for(int i=count-1;i>=0;--i) cout<<t[i]<<" ";
	   return 0;
	
	} 
