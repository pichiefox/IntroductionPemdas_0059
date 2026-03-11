#include <iostream>
using namespace std;

float berat,tinggi;

void inputData()
{
    cout << "--- Selamat Datang Mahasiswa Kelas B 2025---" << endl;
    cout << "Masukkan Berat Badan (kg): ";
    cin >>berat;
    cout << "Masukkan Tinggi Badan (m): ";
    cin >>tinggi;
}

float hitungBMI (float a, float b)
{
    return a/(b*b);   
}

string statusBMI (float bmi)
{
    if (bmi < 18.5)
        return "Berat badan kurang";
    else if (bmi < 25)
        return "Berat badan kelebihan";
    else
        return "Obesitas";
}