#include<bits/stdc++.h>
using namespace std;

  
int main() {

  int a,max,min; 
  int n,sum=0;
  cin>>n;
               
  for (int i=0;i<n;i++){   
    cin>>a;
    sum+=a;
    
    if (i==0){
      max=a;
      min=a;
    }
    
    if (max<a){
      max=a;
    }eles{
      min=a;
    }
   
  }
  
  cout<<max<<"\n";  
  cout<<min<<"\n";  
  cout<<sum/n<<"\n"; 

}