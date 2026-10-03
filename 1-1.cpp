#include <bits/stdc++.h>
using namespace std;

int main() {
double amount ;
char premium ;
cout<<"enter amount:";
cin>>amount>>premium;
cout<<amount<<endl;

if(amount<2000){
amount=amount;
}
else if(amount<5000){
  amount=amount*0.9;  
}
 else if(amount<10000){
  amount=amount*0.8;  
}
else{
   amount=amount*0.7;  
}
 
cout<<amount<<endl;
if (premium=='y'||premium=='Y'){
    amount=amount*0.95;
}
cout<<"final amount: "<<amount<<endl;
    
  
}
