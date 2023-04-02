
#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<cstdlib>

using namespace std;

void outputLine(const string &, double, double);

int main(){
    ifstream inclientFile("employee.txt", ios::in);

    if(!inclientFile){
        cerr<<"file could not be opend"<<endl;
        exit(EXIT_FAILURE);
    }

    string name;
    double blance,val;

    cout<<left<<setw(10)<<"TOTAL = R$ "<<fixed<<showpoint;
    inclientFile>>name>>blance>>val;

        outputLine(name, blance, val);



}

void outputLine(const string &name, double blance, double val){
     double sum,b,s;
     b=val/100;
     s=b*15;
        sum=blance+s;

    cout<<setprecision(2)<<right<<sum<<endl;
}
