#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,x,y,n,m,z,v,i,j,k,l,t,r;
    cin>>a>>b>>c>>d>>x>>y>>n>>m;
    if(a>x){
        x=x+24;
    }
    z=(a*24);
    v=(z*3600)+(b*3600)+(c*60)+d;
    i=(x*24);
    j=(x*3600)+(y*3600)+(n*60)+m;
    k=v-j;
    l=k/3600;
    r=l%24;
    l=l/24;
    t=r/
    cout<<n<<v<<i<<j<<endl;

return 0;
}
