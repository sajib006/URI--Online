#include<bits/stdc++.h>
using namespace std;
int main(){
    int M,N,i,sum=0;
    cin>>M;
    cin>>N;
    if(N>0 && M>0 && N>M){
    for(i=M;i<=N;i++){
        sum=sum+i;
        cout<<i<<" ";
    }
    cout<<"Sum="<<sum<<endl;
    }
    if(N>0 && M>0 && N<M){
    for(i=N;i<=M;i++){
        sum=sum+i;
        cout<<i<<" ";
    }
    cout<<"Sum="<<sum<<endl;
    }

return 0;
}
