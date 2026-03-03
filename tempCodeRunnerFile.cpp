//Library
#include <iostream>
using namespace std;
//Deklarasi Global
    float a,t;

//Implementasi Prosedur & Fungsi
void Input(){

cout << "alas : ";
cin >> a;
cout << "tinggi : ";
cin >> t;
}

float LuasSegitiga(){
    return a*t*1/2;
}

void Output(){
    cout <<"Luas = " << LuasSegitiga();
}

int main()
{
    Input();
    Output();
}