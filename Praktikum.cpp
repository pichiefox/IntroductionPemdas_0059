//Library
#include <iostream>
using namespace std;
//Deklarasi Global
    float p,l;

//Implementasi Prosedur & Fungsi
void Input(){

cout << "Masukan Panjang : ";
cin >> p;
cout << "Masukkan Lebar : ";
cin >> l;
}

float LuasPersegi(){
    return p*l;
}

void Output(){
    cout <<"Luas = " << LuasSegitiga();
}

//Program Utama
int main()
{//start
    Input();
    Output();
}//selesai