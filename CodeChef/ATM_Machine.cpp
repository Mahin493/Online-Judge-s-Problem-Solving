#include<iostream>
using namespace std;
int main(){

    float Acbalance;
    int Wamount;
    cin>>Wamount;
    cin>>Acbalance;
    float rem_balance;

    if(Wamount%5==0){

           if(Wamount<Acbalance && ((Wamount+0.5)<=Acbalance)){
             rem_balance=Acbalance-Wamount-(0.5);
            cout<<rem_balance<<endl;

           }
          else{
            cout<<Acbalance<<endl;
          }



    }


    else{
        cout<<Acbalance<<endl;
    }

}
