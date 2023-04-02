#include<bits/stdc++.h>
using namespace std;
int main(){
    float z,y;
    int x,t;
    cin>>x;
    cin>>t;
    y=(float)t;
    cout<<"Total: R$ ";
    if(x==1){
        z=4.00*y;
            cout<<fixed <<setprecision(2) <<z<<endl;

    }
    if(x==2){
        z=4.50*y;
            cout<<fixed <<setprecision(2) <<z<<endl;

    }
    if(x==3){
        z=5.00*y;
            cout<<fixed <<setprecision(2) <<z<<endl;

    }
    if(x==4){
        z=2.00*y;
            cout<<fixed <<setprecision(2) <<z<<endl;

    }
    if(x==5){
        z=1.50*y;
            cout<<fixed <<setprecision(2) <<z<<endl;

    }
return 0;
}
