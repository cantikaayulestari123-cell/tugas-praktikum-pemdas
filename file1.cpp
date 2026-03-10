#include <iostream>
#include <string>
using namespace std;

//Fungsi untuk menghitung nilai BMI
double hitungBMI(double berat,double tinggi) {
    return berat / (tinggi * tinggi);
}

// Fungsi untuk menentukan status BMI
string statusBMI(double bmi) {
    if (bmi < 18.5) {
        return "Berat Badan Kurang" ;
    }else if (bmi < 25) {
        return "Berat Badan Normal" ;
    }else if (bmi < 30) {
        return "Berat Badan Kelebihan";
    }else {
        return "Obesitas" ;
    }
}

// Prosedur untuk input data
void inputData(double &berat, double &tinggi) {
    
}