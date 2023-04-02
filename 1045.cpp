#include<bits/stdc++.h>
using namespace std;
int main(){
    double A,B,C,X,Y,p,a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b&&a>c){
        A=a;
        B=b;
        C=c;
    }
    if(b>a && b>c){
        A=b;
        B=a;
        C=c;
    }
    if(c>a&&c>b){
        A=c;
        B=b;
        C=a;
    }
    X=(B*B)+(C*C);
    Y=A*A;
    p=B+C;
    if(A>=p){
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }

        if(Y==X){
        cout<<"TRIANGULO RETANGULO"<<endl;
    }

        if(Y>X){
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }

        if(Y<X){
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    }

        if(A==B&&B==C){
        cout<<"TRIANGULO EQUILATERO"<<endl;
    }

        if(A==B && A!=C || B==C &&B!=A|| A==C&& A!=B){
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }
return 0;
}
