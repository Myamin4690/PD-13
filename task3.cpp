#include<iostream>
#include<fstream>
using namespace std;
void getBirthdayCake(string names[],int ages[]);
void storeBirthdayCake(string names[],int ages[]);
int main(){
    string names[5];
    int ages[5];
    getBirthdayCake(names,ages);
    storeBirthdayCake(names,ages);

}
void getBirthdayCake(string names[],int ages[])
{
    for(int idx=0;idx<2;idx++)
    {
        cout<<"Enter Name:"<<endl;
        cin>>names[idx];
          cout<<"Enter Age:"<<endl;
        cin>>ages[idx];
    }
}
void storeBirthdayCake(string names[],int ages[])
{
    fstream file;
    file.open("data.txt",ios::out);
    for(int idx=0;idx<2;idx++){
        file<<names[idx];
        file<<ages[idx];
        file<<"\n";
        if(ages[idx]%2==0){
            cout<<"#"<<ages[idx]<<"HB"<<names[idx]<<"!"<<ages[idx]<<"#"<<endl;
        }
        else{
            cout<<"*"<<ages[idx]<<"HB"<<names[idx]<<"!"<<ages[idx]<<"*"<<endl;
        }       
    }
    file.close();
}