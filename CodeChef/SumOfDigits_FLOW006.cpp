#include<iostream>
#include<sstream>
using namespace std;

int main(){

 /*  ----------normal way----
   int num,sum=0,temp;
   cin>>num;
   //temp=num;

   while(num>0){
         temp=num%10;
         sum+=temp;
         num=num/10;


   }
    cout<<sum;

  */

    int N;
    cin>>N;

    while(N--){
      int num;
      cin>>num;
      ostringstream str1;
      str1<<num;
      string arraynum=str1.str();

      //'5677'
      int length=arraynum.length();
      int sum=0;
      for(int i=0;i<length;i++){
         char cval=arraynum[i];
         int val=cval;
         val=val-48;

         sum=sum+val;

      }

      cout<<sum<<endl;

    }






}
