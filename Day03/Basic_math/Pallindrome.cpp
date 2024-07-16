#include<bits/stdc++.h>
using namespace std;

// Q3. Check the  given number is pallindrome or not

int main(){
    int n;
    cout<<"Enter the number :-> ";
    cin>>n;

int dup = n;
    int rev = 0;
    while( n >0){
        int ld = n %10;
        rev= rev*10 + ld;
        n = n/10;
    }

if(rev == dup){

    cout<<"number is pallindrome";
}
else{
    cout<<"Not a pallindrome number";
}
}