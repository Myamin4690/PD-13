#include<fstream>
using namespace std;
main(){
    string line="Welcome to uet";
    fstream newfile;
    newfile.open("TextFile.txt",ios::out);
    newfile<<line;
    newfile.close();
}
