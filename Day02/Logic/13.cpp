#include<bits/stdc++.h>
using namespace std;

//pattern 13

int main(){
    int n;
    cin>>n;
 int sum =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<sum+1<<" ";
            sum++;
        }
        cout<<endl;
    }
}