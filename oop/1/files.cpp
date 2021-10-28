#include <iostream>
#include <fstream> // pentru a folosi ifstream/ ofstream in citirea/ scrierea de fisiere text

using namespace std;

//int main() {
//    // in data1.in  avem un sir de n numere intregi
//    // pe prima linia este valoarea lui n
//    // pe urmatoarea linie sunt cele n valori
//
//    // citim vectorul, dupa care vom afisa maximul
//    /*
//5
//-2 100 32 42 101
//     */
//
//    // TODO deschidem fisierul dat ca argument, pentru input (ifstream)
//    ifstream fin("../data/data1.in"); // fisierele sunt cautate in cmake-build-debug, deci prima data punem ../ ca sa mearga in directorul parinte
//
//    int v[50], n, max;
//    fin>>n;
//    max = 0;
//    for(int i = 0; i < n; i++) {
//        fin>>v[i];
//        if(max < v[i]){
//            max = v[i];
//        }
//    }
//    fin.close(); // pt a inchide fisierul dupa ce am terminat citirea
//
//    // TODO deschidem fisierul dat ca argument, pentru output (ofstream)
//    ofstream fout("../data/data1.out");
//    fout<<max; // output inside the new file
//    fout.close(); // save the file
//
//    return 0;
//}
