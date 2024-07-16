#include<bits/stdc++.h>
using namespace std;

// Q1 print the number of digit in a number

int main(){
    int n;
    cout<<"Enter the number :-> ";
    cin>>n;

    int count =0;

    while(n>0){
        count += 1;
        n = n/10;
    }

    cout<<"Tne number of dgit in a number is :-> "<<count;

    return 0;
}