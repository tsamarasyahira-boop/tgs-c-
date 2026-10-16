
#include <iostream>
using namespace std;

int main() 
{
    
    string nama;
    string ulang;
    do{
    cout<<"masukkan nama:";
    cin >>nama;
    cout<<"namamu adalah:";
    cout<<nama <<endl;
    cout<<"pakah anda mau mengulang. tekan y atau Y" <<endl;
    cin>>ulang;
    }
    while(ulang=="y"|| ulang=="Y");
    return 0;
    system("pause");
}
