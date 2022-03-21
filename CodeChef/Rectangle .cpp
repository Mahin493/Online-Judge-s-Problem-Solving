#include<iostream>
using namespace std;

int main(){

int range;

cin>>range;
for(int i=0;i<range;i++){

   int a,b,c,d;
   cin>>a>>b>>c>>d;

   if((a==c &&b==d)||(a==d &&b==c)||(a==b&&c==d)){
      cout<<"YES"<<endl;
   }
   else
      cout<<"NO"<<endl;
}


}


