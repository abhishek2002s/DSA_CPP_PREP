#include<bits/stdc++.h>
using namespace std;

//patter 19

int main(){
    int n;
    cin>>n;
  for(int i=0;i<n;i++){
   //star
   for(int j=1;j<=n-i;j++){
    cout<<"*";
   }
   //spaces

   for(int j=0;j<2*i;j++){
    cout<<" ";
   }

   //star
      for(int j=1;j<=n-i;j++){
    cout<<"*";
   } 
   cout<<endl;
  }

  for(int i=0;i<n;i++){
   //star
   for(int j=1;j<=i;j++){
    cout<<"*";
   }
   //spaces

   for(int j=0;j<2*n-2*i;j++){
    cout<<" ";
   }

   //star
      for(int j=1;j<=i;j++){
    cout<<"*";
   } 
   cout<<endl;
  }
    return 0;
} 