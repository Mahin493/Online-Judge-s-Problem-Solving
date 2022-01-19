#include<iostream>
#include<cstring>
using namespace std;
int main(){
 int n;
 cin>>n;

 for(int i=0;i<n;i++){

   char s1[51];
   char s2[51];
   cin>>s1;
   cin>>s2;

   int l1=strlen(s1),l2=strlen(s2);
   int l=l1+l2;
   char concated[l];
   int j=0,k=0,index=0;

   while(j<l1&& k<l2){
      concated[index++]=s1[j++];
      concated[index++]=s2[k++];



   }

   while(j<l1){
      concated[index++]=s1[j++];
   }

   while(k<l2){
      concated[index++]=s2[k++];
   }

     for(int m=0;m<index;m++){
      cout<<concated[index];
     }
   cout<<endl;

 }






}
