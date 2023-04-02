
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,x,y;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    if(a<c){
        if(b<=d){
            x=c-a;
            y=d-b;
        }
        if(b>d){
            x=(c-a)-1;
            y=60+(d-b);
        }
    }

    if(a>=c){
        if(b=d){
            x=(24+a)-c;
            y=d-b;
        }
        if(b<d){
            x=0;
            y=d-b;
        }

       if(b>d){
        x=(23+a)-c;
        y=60+(d-b);
       }
    }

    cout<<"O JOGO DUROU "<<x<<" HORA(S) E ";
    cout<<y<<" MINUTO(S)"<<endl;

return 0;
}
