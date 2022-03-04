#include<bits/stdc++.h>
using namespace std;

  
int main() {
  
  int a,b1,b2,b3; 

  cin>>a;

  b1=a/1000;     
  a=a%1000;       

  b2=a/500;      
  a=a%500;        

  b3=a/100;       
  
   
  cout<<"1000 :"<<b1<<"\n"; 
  cout<<"500 :"<<b2<<"\n"; 
  cout<<"100 :"<<b3<<"\n"; 

}