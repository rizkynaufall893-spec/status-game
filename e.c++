#include <iostream>
#include <string>
using namespace std;

void tampilkanStatus(string nama,int level,int hp,bool isAlive) {
cout<<"=========================="<<endl;
    cout<<"STATUS KARAKTER GAME"<<endl;
cout<<"=========================="<<endl;
    cout<<"Nama   : "<<nama<<endl;
    cout<<"Level  : "<<level<<endl;
    cout<<"HP     : "<<hp<<"/100"<<endl;
    if (isAlive) {
        cout << "Status : HIDUP (SIAP BERTARUNG)" << endl;
    } else {
        cout << "Status : TUMBANG (RESPAWN)" << endl;
        cout<<"=========================="<<endl;
    }
}

int main(){
    string nama;
    int level,hp,statusInput;
    bool isAlive;
        cout<<"INPUT KARAKTER 1"<<endl;
    cout<<"Masukkan Nama User  : ";
    cin>>nama;
    cout<<"Masukkan Level User :";
    cin>>level;
    cout<<"Masukkan HP User    :";
    cin>>hp;
    cout << "Status Hidup (1 = HIDUP / 0 = TUMBANG): ";
    cin >> statusInput;
    isAlive = (statusInput == 1);
    tampilkanStatus(nama,level,hp,isAlive);
    cout<<"=========================="<<endl;
        cout<<"INPUT KARAKTER 2"<<endl;
    cout<<"Masukkan Nama User  : ";
    cin>>nama;
    cout<<"Masukkan Level User :";
    cin>>level;
    cout<<"Masukkan HP User    :";
    cin>>hp;
    cout << "Status Hidup (1 = HIDUP / 0 = TUMBANG): ";
    cin >> statusInput;
    isAlive = (statusInput == 1);
    tampilkanStatus(nama,level,hp,isAlive);
}
