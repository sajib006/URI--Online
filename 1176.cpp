#include<bits/stdc++.h>
using namespace std;
int main(){
    int M,i,n;
    cin>>M;
    int a[M];
    for(i=1;i<=M;i++){
            cin>>a[i];
            if(a[i]!=0){
    cout<<"Fib("<<a[i]<<") = "<<a[i]-1<<endl;
    }
    if(a[i]==0){
            cout<<"Fib("<<a[i]<<") = "<<a[i]<<endl;

    }
}


return 0;
}
