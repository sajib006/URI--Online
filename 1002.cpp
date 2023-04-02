#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,x,y,n,m,z,v;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    if(a<c){
    x=(a*60)+b;
    y=(c*60)+d;
    n=y-x;
    cout<<n<<endl;
    }
    else{
       m=24+c;
       x=(a*60)+b;
       y=(m*60)+d;
       n=y-x;
           cout<<n<<endl;
    }


return 0;
}

