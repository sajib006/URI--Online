#include<bits/stdc++.h>
using namespace std;
int main(){
    float x,z,t,h;
    cin>>x;
    int y,j;
    y=(int)x;
    z=y;
    cout<<y<<endl;
    cout<<y/100<<" nota(s) de R$ 100.00"<<endl;
    y=y%100;
    cout<<y/50<<" nota(s) de R$ 50.00"<<endl;
    y=y%50;
    cout<<y/20<<" nota(s) de R$ 100.00"<<endl;
    y=y%20;
    cout<<y/10<<" nota(s) de R$ 100.00"<<endl;
    y=y%10;
    cout<<y/5<<" nota(s) de R$ 100.00"<<endl;
    y=y%5;
    cout<<y/2<<" nota(s) de R$ 100.00"<<endl;
    y=y%2;
    cout<<y/1<<" nota(s) de R$ 100.00"<<endl;

    t=x-z;
    h=t*100;
    j=(int)h;



        cout<<t<<endl;
    cout<<j/50<<" nota(s) de R$ 100.00"<<endl;
    y=y%100;
    cout<<y/50<<" nota(s) de R$ 50.00"<<endl;
    y=y%50;
    cout<<y/20<<" nota(s) de R$ 100.00"<<endl;
    y=y%20;
    cout<<y/10<<" nota(s) de R$ 100.00"<<endl;
    y=y%10;
    cout<<y/5<<" nota(s) de R$ 100.00"<<endl;
    y=y%5;
    cout<<y/2<<" nota(s) de R$ 100.00"<<endl;
    y=y%2;
    cout<<y/1<<" nota(s) de R$ 100.00"<<endl;








return 0;
}
