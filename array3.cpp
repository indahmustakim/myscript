#include <iostream>

using namespace std;

int main()
{
    char nama[100][100];
    int nilai[100];
    int no;

    cout<<"masukkan jumlah mahasiswa: ";
    cin>>no;
    
    //input data
    for (int i=1;i<=no;i++){
    cout<<"masukkan nama mahasiswa: ";
        cin>>nama[i];
        cout<<"masukkan nilai mahasiswa: ";
        cin>>nilai[i];
        }
        
    //menampilkan data
    cout<<"tampilkan data"<<endl;
    for (int a=1;a<=no;a++){
        cout<<"nama: "<<nama[a]<<" dengan nilai: "<<nilai[a]<<endl;
        }

    return 0;
}
