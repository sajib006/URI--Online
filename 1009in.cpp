
#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>

using namespace std;
int main(){

    ofstream outClientFile("employee.txt",ios::out);

    if(!outClientFile){
        cerr<<"File code not be opened"<<endl;
        exit(EXIT_FAILURE);
    }
    cout<<"Enter the account, name, and balance."<<endl;
    cout<<"Enter end-of-file to end input.\n?";

    string name;
    double balance,val;

    cin>>name;
    outClientFile<<name<<endl;
            cin>>balance>>val;

        outClientFile<<balance<<endl<<val<<endl;

return 0;
}
