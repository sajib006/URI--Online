#include<bits/stdc++.h>
using namespace std;
int main(){
    int A,B,c,d;
    cin>>A;
    B=A/365;
    c=(A%365)/30;
    d=(A%365)%30;
    cout<<B<<" ano(s)"<<endl;
    cout<<c<<" mes(es)"<<endl;
    cout<<d<<" dia(s)"<<endl;
return 0;
}
