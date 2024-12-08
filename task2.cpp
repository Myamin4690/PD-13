#include<iostream>
#include<fstream>
using namespace std;
void intputNames(string names[]);
void storesNames(string names[]);
int main(){
    string names[5];
    intputNames(names);
    storesNames(names);
}
void intputNames(string names[])
{
    for(int idx=0;idx<5;idx++)
    {
        cout<<"Enter Name:";
        cin>>names[idx];
    }
}
void storesNames(string names[])
{
    fstream file;
    file.open("data.txt",ios::out);
    for(int idx=0;idx<5;idx++){
        file<<names[idx];
        file<<"\n";
        cout<<names[idx]<<endl;
    }
    file.close();
    
}