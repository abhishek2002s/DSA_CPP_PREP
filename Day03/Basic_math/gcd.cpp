#include<bits/stdc++.h>
using namespace std;

// Q7. Find the  given number's gcd

int main(){
    int n1,n2;
      cout<<"Enter the number 1 ->";
      cin>>n1;
      cout<<"Enter the numbre 2 ->";
      cin>>n2;

      while(n1>0 && n2>0){
        if(n1>n2){
            n1 = n1%n2;
        }
        else{
            n2 = n2%n1;
        }
      }

      if(n1==0){
        cout<<"The gcd of a ("<<n1<<","<<n2<<")"<<n2;
      }
      else{
        cout<<"The gcd of a ("<<n1<<","<<n2<<") "<<n1;
      }

}