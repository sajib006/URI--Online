#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    float x,y,z,t,m;
    cin>>a;
    cin>>b;
    cin>>x;
    cin>>c;
    cin>>d;
    cin>>y;
    z=b*x;
    t=d*y;
    m=z+t;
    cout<<"VALOR A PAGAR: "<<fixed<<setprecision(2)<<m<<endl;

    return 0;
}

