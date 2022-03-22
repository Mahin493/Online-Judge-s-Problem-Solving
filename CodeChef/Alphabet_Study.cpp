#include<iostream>
using namespace std;

int main(){

   string word;
   cin>>word;

   int alphabet[26]={0};
   int length=(int)word.size(); //word string length

   for(int i=0;i<length;i++){

      char x=word[i];
      int ascivalue=int(x); //converted char to int(equivalent ascii value)
      ascivalue=ascivalue-97; //getting index number
      alphabet[ascivalue]=1; //if word is present set it 1


   }
   int numberofwords;
   cin>>numberofwords;

   for(int i=0;i<numberofwords;i++){

      int flag=0; //no of characters not present in string word
      string inputs;
      cin>>inputs;

      for(int j=0;j<inputs.size();j++){
        char S=inputs[j];

        int values=int(S);
        values=values-97;
        if(alphabet[values]==0){
         flag++;
        }

        else
            flag=flag;


      }

      if(flag>0){
         cout<<"No"<<endl;

      }
      else
         cout<<"Yes"<<endl;
   }




}
