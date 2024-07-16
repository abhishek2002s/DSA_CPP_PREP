#include<bits/stdc++.h>
using namespace std;

// Q6. Check the  given number is Prime  or not

int main(){
    int n;
    cout<<"Enter the number :-> ";
    cin>>n;

int cnt =0;

for(int i =1;i*i<=sqrt(n);i++){
    if(n%i == 0){
        cnt++;
        if((n/i) != i){
            cnt++;
        }
    }
}


if(cnt == 2){
    cout<<"Prime number is "<<n;
}
else {
    cout<<"not a prime number";
}

}