#include<bits/stdc++.h>
using namespace std;

//pattern 12

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        //number
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        //space
        for(int j=0;j<2*n-2*i-2;j++){
            cout<<" ";
        }
        //number
        for(int j=i;j>=0;j--){
            cout<<j+1;
        }

        cout<<endl;
    }
}