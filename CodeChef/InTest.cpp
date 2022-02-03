#include<iostream>
using namespace std;

int main(){

   int number,k,total=0;
   cin>>number>>k;
   long long int ti;
   for(int i=0;i<number;i++){
      cin>>ti;
      if(ti%k==0){
         total++;
      }
      else
         total=total;
   }
   cout<<total<<endl;
}

