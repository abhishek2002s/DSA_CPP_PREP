#include<bits/stdc++.h>
using namespace std;

// Q4. Check the  given number is armstrong  or not

int main(){
    int n;
    cout<<"Enter the number :-> ";
    cin>>n;

int dup = n;
    int sum = 0;
    while( n >0){
        int ld = n %10;
        sum= sum + pow(ld,3);
        n = n/10;
    }

if(sum == dup){

    cout<<"number is armstrong ";
}
else{
    cout<<"Not a armstrong number";
}
}