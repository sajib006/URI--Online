#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c,x,x1,x2,y,z;
    cin>>a;
    cin>>b;
    cin>>c;
    y=2*a;
        z=(b*b)-(4*a*c);

    x=sqrt(z);
    x1=(-b+x);
    x2=(-b-x);
    if(a==0 || z<0){
        cout<<"Impossivel calcular"<<endl;
    }
    else{
    cout<<"R1 = "<<fixed<<setprecision(5)<<x1/y<<endl;
    cout<<"R2 = "<<fixed<<setprecision(5)<<x2/y<<endl;
    }
return 0;
}
