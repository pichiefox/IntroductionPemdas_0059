//Library
#include <iostream>
using namespace std;
//Deklarasi Global
    float a,t;

//Implementasi Prosedur & Fungsi
void Input(){

cout << "bagidua"
cin >> b;
cout << "alas : ";
cin >> a;
cout << "tinggi : ";
cin >> t;
}

float LuasSegitiga(){
    return b*a*t;
}

void Output(){
    cout <<"Luas = " << LuasSegitiga();
}

int main()
{
    Input();
    Output();
}