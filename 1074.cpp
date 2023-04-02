#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,i,j;
    cin>>a;
    for(j=1;j<=a;j++){
        cin>>i;
  //  }
  //  for(j=1;j<=a;j++){
        if(i%2==0){
            if(i<0){
                cout<<"EVEN NEGATIVE"<<endl;
            }
            if(i>0){
                cout<<"EVEN POSITIVE"<<endl;

            }
        }
        if(i%2!=0){
            if(i<0){
                cout<<"ODD NEGATIVE"<<endl;

            }
            if(i>0){
                cout<<"ODD POSITIVE"<<endl;

            }
        }
        if(i==0){
            cout<<"NULL"<<endl;
        }
    }

    return 0;
}


