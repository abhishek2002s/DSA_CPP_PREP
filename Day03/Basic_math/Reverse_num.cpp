#include<bits/stdc++.h>
using namespace std;

// Q2. print the reverse of a given number

int main(){
    int n;
    cout<<"Enter the number :-> ";
    cin>>n;

    int rev = 0;
    while( n >0){
        int ld = n %10;
        rev= rev*10 + ld;
        n = n/10;
    }

    cout<<"Reverse of a number is "<<rev;
}