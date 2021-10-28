#include <iostream>
#include <cmath>

using namespace std;

/*
matrice?

{
 {1,2,3},
 {3,2,0},
 {7,8,9}
 }
 */

//int main() {
//    int a[10][10] = {
//            {1, 2, 3},
//            {3, 2, 0},
//            {7, 8, 9},
////            {0,0,7}
//    }, n = 3;
//    // TODO se spune ca matricea este patratica daca n=m unde
//    //      n = numar linii, m = numar coloane
//
//    // afisare
//    for (int i = 0; i < n; i++) {
////        cout << a[i] << ' ';
//        // a[i] este vector, deci il putem parcurge:
//        for (int j = 0; j < n; j++) {
//            cout << a[i][j] << " ";
//        }
//        cout << endl;
//
//
//    }
//
//
////    // citire
////    cin >> n; // pentru matrice patratica
////    for (int i = 0; i < n; ++i) {
////        for (int j = 0; j < n; ++j) {
////            cin >> a[i][j];
////        }
////    }
////
////    // citire matrice nepatratica
////    int n, m, a[10][10];
////    cin >> n >> m; // pentru matrice patratica
////    for (int i = 0; i < n; ++i) {
////        for (int j = 0; j < m; ++j) {
////            cin >> a[i][j];
////        }
////    }
//
//
//}



//int main() {
//    int a[10][10] = {
//            {1, 2, 3,4},
//            {3, 2, 0,5},
//            {7, 8, 9,4},
//    }, n = 3, m=4, nrOrdine,sum,prod;
//
//    // folosim i pentru linie, j pentru coloana
//    cout<<"Sumele de pe linii pare: ";
//    for(int i=0;i<n;i++){
//        nrOrdine = i + 1; // pe pozitia 0 avem prima linie, pe 1 a doua linie ..
//        //          iar nr de ordine raspunde la intrebarea 'a cata linie'
//        if(nrOrdine%2==0){
//            sum=0;
//            for(int j=0;j<m;j++){
//                sum+=a[i][j];
//            }
//            cout<<sum<<" ";
//        }
//    }
//    cout<<endl;
//    cout<<"Produsele de pe coloanele impare : ";
//    for(int j=0;j<m;j++){
//        nrOrdine=j+1;
//        if(nrOrdine%2==1){
//            prod=1;
//            for(int i=0;i<n;i++){
//                prod*=a[i][j];
//            }
//            cout<<prod<<" ";
//        }
//    }
//}

// 2
//int main(){
//    int a[10][10]={
//            {1,2,3},
//            {3,4,5},
//            {5,6,7}  // rezultatul va fi 3 (nr ordine), deoarece 7 se afla pe linia de indice 2
//    },n=3;
//
//    // pe d.p. avem linie egala cu coloana
//    // adica sunt elementele a[i][i]
//
//    // parcurgem d.p.
//    int max,linieMax;
//    max=0;
//    for(int i=0;i<n;i++){
//        if(a[i][i]>max){
//            max=a[i][i];
//            linieMax = i+1; // daca acum maximul are pt linie indicele i, atunci nr. de ordine este i+1
//        }
//        cout<<a[i][i]<<" ";
//    }
//}


// 3
//int main() {
//    int n = 10, a[10][10];
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (i == j) {
//                a[i][j] = 0;
//            } else if (i < j) {
//                a[i][j] = 2;
//            } else {
//                a[i][j] = 1;
//            }
//        }
//    }
//
//    // afisam matricea a
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            cout << a[i][j] << " ";
//        }
//        cout << endl;
//    }
//}

// 5
// in loc sa calculam suma pe linii (precum la 1) vom calcula cate nr. pare sunt pe fiecare linie

//int main(){
//    int n=3,a[10][10]={
//            {1,2,130},
//            {4,150,6},
//            {7,8,900}
//    },cnt, max, maxLinie;
//
//    max = 0;
//    for(int i=0;i<n;i++){
//        cnt=0;
//        for (int j = 0; j < n; ++j) {
//            if(a[i][j]%2==0) {
//                cnt++;
//            }
//        }
//        if (cnt > max) {
//            max = cnt;
//            maxLinie = i + 1;
//        }
//    }
//    cout<<maxLinie<<" ";
//}

// 4

//int main() {
//    /*
//2 3    5 6     7 9
//3 4  + 1 1  =  4 5
//4 9    0 0     4 9
//
//transpusa = o matrice in care liniile si coloanele sunt luate invers, adica linia devine coloana si coloana devine linie
//
//     */
//
//    int a[10][10] = {
//            {2, 3},
//            {3, 4},
//            {4, 9}
//    }, b[10][10] = {
//            {5, 6},
//            {1, 1},
//            {0, 0}
//    }, s[10][10], t[10][10], n = 3, m = 2;
//
//    // suma:
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            s[i][j] = a[i][j] + b[i][j];
//        }
//    }
//    // transpusa
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            t[j][i] = s[i][j];
//        }
//    }
//
//    // afisare transpusa:
//    for (int i = 0; i < m; ++i) {
//        for (int j = 0; j < n; ++j) {
//            cout << t[i][j] << ' ';
//        }
//        cout << endl;
//    }
//}

// 1,2, 3, 5, 6,
// la 4 poti sa mai cauti si pe net alte informatii

// la Python they may also teach data structures in Python, like lists, strings, tuples, dicts (dictionaries)
////1
//int main(){
//    int n=3, a[10][10]={
//            {1,2,3},
//            {4,5,6},
//            {7,8,9}
//    },sum,nrOrdine,prod;
//    for(int i=0;i<n;i++) {
//        nrOrdine = i+1;
//            if(nrOrdine%2==0){
//                sum=0;
//                for (int j = 0; j < n; j++) {
//                sum+=a[i][j];
//            }
//                cout<<sum<<" ";
//        }
//    }
//
//    //produs pe linii impare
//    for (int i = 0; i < n; i++) {
//        nrOrdine=i+1;
//        if(nrOrdine%2==1){
//            prod=1;
//            for (int j = 0; j < n; j++) {
//                prod*=a[i][j];
//            }
//            cout<<prod<<" ";
//        }
//    }
//}
//2
//int main(){
//    int n=3, a[10][10]={       //elemetul maxim si linia pe care este situat
//            {1,2,3},
//            {4,5,6},
//            {7,8,9}
//    },max,maxLen;
//    max=0;
//    for (int i = 0; i < n; i++) {
//            if (a[i][i] > max) {
//                max = a[i][i];
//                maxLen = i + 1;
//            }
//            cout <<a[i][i]<<" ";
//    }
//}
////3
//int main(){
//    int n=3, a[10][10];
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (i == j) {
//                a[i][j] = 0;
//            } else if (i < j) {
//                a[i][j] = 2;
//            } else {
//                a[i][j] = 1;
//            }
//        }
//    }
//       for (int i = 0; i < n; i++) {
//           for (int j = 0; j < n; j++) {
//               cout << a[i][j] << " ";
//           }
//           cout << endl;
//       }
//}
////4
//int main(){
//    int a[10][10] = {
//            {2, 3},
//            {3, 4},
//            {4, 9}
//    }, b[10][10] = {
//            {5, 6},
//            {1, 1},
//            {0, 0}
//    }, s[10][10], t[10][10], n = 3, m = 2;
//
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            s[i][j]=a[i][j]+b[i][j];
//        }
//    }
//    for(int i=0;i<n;i++) {
//        for (int j = 0; j < m; j++) {
//            t[i][j] = s[i][j];
//        }
//    }
//
//        for(int i=0;i<n;i++) {
//            for (int j = 0; j < m; j++) {
//                cout << t[i][j] << " ";
//            }
//            cout << endl;
//        }
//}
////5
//int main(){
//    int n=3,a[10][10]={
//            {1,2,130},
//            {4,150,6},
//            {7,8,900}
//    },cnt, max, maxLinie;
//    max=0;
//    for(int i=0;i<n;i++){
//        cnt=0;
//        for(int j=0;j<n;j++){
//            if(a[i][j]%2==0){
//                cnt++;
//            }
//        }
//        if(cnt>max){
//            max=cnt;
//            maxLinie=i+1;
//        }
//    }
//    cout<<maxLinie<<" ";
//}

//6
//int main(){
//    int n=3,m=3, a[10][10]={
//            {2,2,135},
//            {3,150,6},
//            {7,8,900},
//    }, max,linieMax,cnt;
//
//    max=0;
//    for(int i=0;i<n;i++){
//        cnt=0;
//        for(int j=0;j<n;j++) {
//            if(a[i][j]% a[i][0]==0) {
//                cnt++;
//            }
//        }
//        if(cnt>max){
//            max=cnt;
//            linieMax=i+1;
//        }
//    }
//    cout<<linieMax<<" ";
//}

// 7

// cmmdc  (gcd in EN)
// algoritm de baza pt calcului lui (Prin scaderi repetate)
// cmmdc dintre 3 numere este cmmdc dintre cmmdc dintre primele doua, si ultimul

// gcd(a,b,c) de fapt este gcd(gcd(a,b), c)
// pentru un vector, initial cmmdc va fi v[0], si pt i=1..n-1 vom face cmmdc = gcd(cmmdc, v[i])

// v:  4 8 2     initial cmmdc este 4 (v[0])
//              apoi cmmdc = gcd(cmmdc, v[1]) = gcd(4,8) = 4
//              apoi cmmdc = gcd(cmmdc, v[2]) = gcd(4, 2) = 2

int gcd(int a, int b) {
    // whiteboard or white mind?
    // a  b
    // 24 36  cel mic ramane la fel, dar din cel mare il scazi pe cel min
    // 24 12
    // 12 12
    //  sunt egale? Atunci am gasit cmmdc :D
//    a = b = 2; // si a si b vor fi egale cu 2
    while (a != b) {
        if (b > a) {
            b -= a;
        } else { // deoarece suntem in while si a!=b conform conditiei, else insemna exact ca a > b
            a -= b;
        }
    }
    return a;
}

//int main() {
//    int n = 3, a[10][10] = {
//            {2, 4,   135},
//            {3, 160, 15},
//            {7, 6,   30}
//    }, cmmdc;
////    cout << gcd(2,3) << endl;
////    cout << gcd(6,11) << endl;
////    cout << gcd(24,36) << endl;
////
//
//// gcd face cmmdc al doua numere
//// v:  4 8 2     initial cmmdc este 4 (v[0])
////              apoi cmmdc = gcd(cmmdc, v[1]) = gcd(4,8) = 4
////              apoi cmmdc = gcd(cmmdc, v[2]) = gcd(4, 2) = 2
//    for (int j = 0; j < n; j++) {
//        cmmdc = a[0][j];
//        for (int i = 1; i < n; i++) {
//            cmmdc = gcd(cmmdc, a[i][j]);
//        }
//        cout << cmmdc << " "; // print(cmmdc, ' ')
//        /*
//         * cout << name << " are " << age << " de ani.";   print(f'{name} are {age} de ani.')
//         */
//    }
//}

// functie care interschimba doua coloane intr-o matrice

void swapColumn(int n, int m, int a[10][10], int i, int j) { // dimensiunea, toata matricea, linia si coloana
    //swap(a[0][i], a[0][j]); // am interschimbat pe prima linie elementele de pe coloane
    for (int k = 0; k < n; k++) {
        swap(a[k][i], a[k][j]);
    }
}

//
//int main() {
//    int n = 3, m = 4, a[10][10] = {
//            {2,  4, 13, 2},
//            {3,  1, 60, 13},
//            {16, 7, 30, 2}
//    };
//    for (int i = 0; i < n; i++) {
//        for (int j = i + 1; j < m; j++) {
//            if (a[0][i] < a[0][j]) {
//                swapColumn(n, m, a, i, j);
//            }
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            cout << a[i][j] << " ";
//        }
//        cout<<endl;
//    }
//}
int permutaCircular(int n, int m, int a[10][10], int j) {
    int primul;
    primul = a[0][j];
    for (int i = 0; i < n - 1; i++) {
        a[i][j] = a[i + 1][j];
    }
    a[n - 1][j] = primul;
}

//int main() {
//    int n = 3, m = 4, a[10][10] = {
//            {2,  4, 13, 2},
//            {3,  1, 60, 13},
//            {16, 7, 30, 2}
//    };
//
//    for (int j = 0; j < m; j++) {
//        permutaCircular(n, m, a,j);
//    }
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            cout << a[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//}

// 14
//int main(){
//    int n=4,a[10][10]={
//            {1,2,3,4},
//            {2,1,2,3},
//            {3,2,1,2},
//            {4,3,2,1}
//    },sum1,sum2;
//
//    sum1=0; // suma elementelor imediat deasupra d.p.
//    sum2=0;
//    for(int i=0;i<n-1;i++){
//        sum1+=a[i][i+1];
//        sum2+=a[i+1][i];
//    }
//    cout<<sum1+sum2;
//}

//
//int main() {
//    int n = 3, m = 4, a[10][10] = {
//            {2,  4, 13, 2},
//            {3,  4, 60, 4},
//            {16, 4, 30, 4}
//    }, cnt, cntMax, x;
//
//    cntMax = 0;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//
//            cnt = 0; // vom numara de cate ori apare a[i][j] in matrice
//            for (int i2 = 0; i2 < n; ++i2) {
//                for (int j2 = 0; j2 < m; ++j2) {
//                    if (a[i][j] == a[i2][j2]) {
//                        cnt++;
//                    }
//                }
//            }
//            if (cnt > cntMax) {
//                cntMax = cnt;
//                x = a[i][j];
//            }
//        }
//    }
//    cout << x << " apare de " << cntMax << " ori";
//}

// 11, 12,13
// 8  poti incepe cu lucrurile mai de baza, precum sa sortezi o linie, si abia apoi sa sortezi doar liniile pare
//  apoi toata cerinta
//  Vezi ca am mai facut asta pe vectori :)
// 15,16

////8
//int main(){
//int n=3,m=4,a[10][10]={
//        {2,4,13,2},
//        {24,1,6,12},
//        {16,7,30,2}
//};
//  for(int i=0;i<n;i++){
//      if(a[i][i]%2==0){
//
//      }
//
//  }
//
//}

////11
//int main(){
//    int n=3,a[10][10]={ //ce mai mare divizor comun a lui 27 si 12
//            {1,6,0},
//            {9,1,6},
//            {9,9,1}
//    },sum1,sum2;
//    sum1=0;
//    sum2=0;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (i < j) {
//                sum1 += a[i][j];
//            } else if (i > j) {
//                sum2 += a[i][j];
//            }
//        }
//    }
//            // cout<<sum1<<" "<<sum2;
//            while (sum1 != sum2) {
//                if (sum1 > sum2) {
//                    sum1= sum1 - sum2;
//                } else {
//                    sum2= sum2 - sum1;
//                }
//
//            }
//            cout << sum1<<" ";
//        }

////12
//int sumaLinie(int n, int a[10][10], int i) {
//    int sum = 0;
//    for (int j = 0; j < n; j++) {
//        sum += a[i][j];
//    }
//    return sum;
//}
//
//int sumColoana(int n, int a[10][10], int j) {
//    int sum = 0;
//    for (int i = 0; i < n; i++) {
//        sum += a[i][j];
//    }
//    return sum;
//}

//int main() { //suma elemetelor pe de linii si coloane egala
//    int n = 3, a[10][10] = {
//            {3, 3, 6},
//            {4, 7, 1},
//            {5, 4, 5}
//
//    };
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (sumaLinie(n, a, i) == sumColoana(n, a, j)) {
//                cout << a[i][j] << " ";
//            }
//        }
//    }
//}

//int minimLinie(int n, int a[10][10], int i) {
//    int minim = a[i][0];  // cand nu stii cat de mari pot fi numrele (minimul trebuie sa fie initializat cu o
//    //                  valoare cat mai mare), initializezi cu prima valoare
//
//    for (int j = 0; j < n; j++) {
//        if (a[i][j] < minim) {
//            minim = a[i][j];
//        }
//    }
//    return minim;
//}
//
//int maximColoana(int n, int a[10][10], int j) {
//    int maxim = a[0][j];
//    for (int i = 0; i < n; i++) {
//        if (a[i][j] > maxim) {
//            maxim = a[i][j];
//        }
//    }
//    return maxim;
//    return maxim;
//}

//int main(){
//    int n = 3, a[10][10] = {
//            {1, 2, 0},
//            {4, 3, 7},
//            {5, 1, 5}
//
//    };
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (a[i][j]== maximColoana(n,a,j) && minimLinie(n,a,i)==a[i][j]) {
//                cout << a[i][j] << " ";
//            }
//        }
//    }
//}

// 8  poti incepe cu lucrurile mai de baza, precum sa sortezi o linie, si abia apoi sa sortezi doar liniile pare
//  apoi toata cerinta
//  Vezi ca am mai facut asta pe vectori :)
// 15,16

//8
//int main() {
//    int n = 3, m = 4, a[10][10] = {
//            {2,  4, 13, 2},
//            {24, 1, 6,  12},
//            {16, 7, 30, 2}
//    }, nrOrdine;
//    for (int i = 0; i < n; i++) {
//        nrOrdine = i + 1;
//        if (nrOrdine % 2 == 0) {
//
//            // sortam a[i] :)
//            for(int j=0;j<m;j++){
//                for(int k=j+1;k<m;k++){
//                    if(a[i][j]%2==0 && a[i][k]%2==0 && a[i][j] > a[i][k]){
//                        swap(a[i][j],a[i][k]);
//                    }
//                }
//            }
//
//        }
//    }
//    for(int j=0;j<n;j++) {
//        for (int k = 0; k < m; k++) {
//            cout << a[j][k] << " ";
//        }
//        cout << endl;
//    }
//
//}

//int main() {
//    int n = 3, a[10][10] = {
//            {2, 4, 3},
//            {3, 4, 6},
//            {1, 4, 3}
//    }, v[100], k; // in v vom calcula multimea ceruta a numerelor de pe margine (rama)
//
//    k = 0;
//    // prima linie:
//    for (int j = 0; j < n - 1; ++j) {
//        v[k] = a[0][j];
//        k++;
//    }
//    // ultima coloana:
//    for (int i = 0; i < n - 1; i++) {
//        v[k] = a[i][n - 1];
//        k++;
//    }
//    // ultima linie:
//    for (int j = n - 2; j >= 0; j--) {
//        v[k] = a[n - 1][j];
//        k++;
//    }
//    //prima coloana:
//    for (int i = n - 2; i >= 0; i--) {
//        v[k] = a[i][0];
//        k++;
//    }
//
//    // eficient si usor este sa le sortam
//    for (int i = 0; i < k; i++) {
//        for (int j = i + 1; j < k; j++) {
//            if (v[i] > v[j]) {
//                swap(v[i], v[j]);
//            }
//        }
//    }
//    // iar la afisare sa avem grija sa nu afisam duplicatele (care vor fi adiacente)
//
//    for (int i = 0; i < k - 1; i++) {
//        if(v[i]!=v[i+1]) {
//            cout << v[i] << " ";
//        }
//    }
//    cout<<v[k-1];
//
//}

//// 19
//int main() {
//    int n = 3, m = 4, a[10][10], k;
//    char s[100] = "ABCDabcdAaBb";
//
////    for (int i = 0; i < n * m; i++) {
////        cout << s[i] << "=" << (int) s[i] << ' ';
////    }
//
//    k = 0;
//    // in s avem n*m caractere. Noi parcurgem matricea a cu n linii m coloane (deci tot cu n*m element)
//    //  si punem pe s[k] in pozitia curenta, deci s[0] va fi in a[0][0], s[1] in a[0][1]
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            a[i][j] = s[k];
//            k++;
//        }
//    }
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            cout << a[i][j] << ' ';
//        }
//        cout << endl;
//    }
//
//}



// 15, 16, 20, 21, 23
//int main(){
//    int n=4, a[10][10]={
//            {1,2,3,4},
//            {2,1,2,3},
//            {3,2,1,2},
//            {4,3,2,1}
//    },sum1,sum2;
//    sum1=0;
//    sum2=0;
//    for(int i=0;i<n;i++){
//        sum1+=a[i][i- 1];
//        sum2+=a[i+1][i];
//    }
//    cout<<sum1+sum2;
//
//}
//16
//int main(){
//    int n=3,a[10][10]={
//            {3,5,7},
//            {20,10,3},
//            {2,5,5},
//    }, m;
//    m = n; // initial este patratica
//    for(int i=0;i<n;i++){
//        // daca a[i][0] este 0, stergem aceasta linie, prin a copie cu o pozitia mai sus, fiecare linie de dupa aceasta (dupa=dedesubtul ei)
//        if(a[i][0]%10==0){ //daca primul element din fiecare coloana incepe cu un numar divizibil cu 10 atunci sterg linia
//            for(int k=i; k<n-1; k++) {
//               for (int j = 0; j < n; j++) {
//                    a[k][j] = a[k + 1][j];               //nu stiu;
//                }
//            }
//            m--; // dar mai scadem din linii, deci ramane cu m linii
//        }
//    }
//    // am ramas cu o matrice de dimensiune m x n (m linii, n coloane)
//    for(int i=0;i<m;i++) {
//        for(int j=0;j<n;j++){
//            cout<<a[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//}
//21
//int liniaAreElementeEgale ( int n,int m, int a[10][10], int i){
//        for(int j = 0; j<m; j++){
//            if(a[i][j] != a[i][0]){
//                return false;
//            }
//        }
//        return true;
//    }

//int main(){
//   int n=5,m=3, a[10][10]={
//           {7,6,3},
//           {4,4,4},
//           {3,8,3},
//           {6,6,6},
//           {4,5,6}};
//
//   int cnt = 0;
//   bool suntToateEgale;
//   for(int i = 0; i < n; i++) {
////       suntToateEgale = true;
////       for(int j = 0; j < n; j++) {
////           if( a[i][j] != a[i][0]) { // nu avem toate elementele egale pe linia i
////               suntToateEgale = false; // asta e, trecem la linia urmatoare
////           }
////       }
////       // daca toate sunt egale suntTOateEgale a ramas true
////       if (suntToateEgale == true) {
////           cnt++;
////       }
//       if (liniaAreElementeEgale(n,m,a, i)) {
//           cnt++;
//       }
//   }
//    cout<<cnt<<" "<<endl;
//};

//}
////22
//int main(){
//
//}

/*
cum numaram in baza 2 comparativ cu baza 10:
0 1 10 11 100
0 1  2  3   4  ...

Cum obtinem valoarea in baza 10 a unui numar din baza 2?
E.g.  ni se da 100 si noi trebuie sa afisam pe 4, cat este nr. in baza 10

 Regula este simpla:
 ultimul 0 ne spune daca apare sau nu o unitate  in "suma cifrelor"
 penultimul daca apare sau nu 2 in "suma cifrelor"
 antepenultimule ..   apare sau n 4  in "suma cifrelor"

 100 in baza 10 este 1 * 4 + 0*2 + 0*1  (produse cifre*putere_de_2)
 similar cum 231 in baza 10 este   2*100 + 3*10 + 1*1

0011 => 0*8 + 0*4 + 1*2 + 1*1
cele "din dreapta" sunt puterile lui 2, adica 1,2,4,8,16,32 etc
   asta inseamna "in baza 2", ca folosim puteri ale lui 2
 */

//int main() {
//    int n = 4, m = 5, a[10][10] = {
//            {0, 0, 1, 1},
//            {1, 0, 0, 1},
//            {1, 1, 1, 0},
//            {0, 1, 0, 1},
//            {0, 0, 0, 0}}, suma ,p;
//
//    for (int i = 0; i < m; i++) {
//        suma = 0;
//        p = 1;
//        for (int j = n-1; j >= 0; j--) {
//            suma += a[i][j] * p;
//            p *= 2;
//        }
//        cout<<suma<<" ";
//    }
//}
//23
//int main() {
//    int n = 5, a[10][10] = {
//            {0, 1, 1, 1, 0},
//            {2, 0, 1, 0, 3},
//            {2, 2, 0, 3, 3},
//            {2, 0, 4, 0, 3},
//            {0, 4, 4, 4, 0}
//    }, suma1, suma2, suma3, suma4;
//
//
//
//
////
////    // luam i pt jumate din d.p.
////    suma1 = 0;
////    for(int i = 0; i < n / 2; i++) {
////        // luam j pt jumatate din d.s.
////        //  adica i+j < n-1
////        j = i+1;
////        while (i+j < n-1) {
////            suma1 += a[i][j];
////            j++;
////        }
////        // sau ne putem gandi ca daca incepem de pe pozitia 1, mergem pana pe pozitia n-2
////        for(int j = i+1; j < n-1-j; j++) {
////            suma += a[i][j];
////    }
//
//    // V2, mai eficient si sper usor de inteles:
//    // parcurgem intreaga matrice si in functie de i si j din prezent,
//    //  stim in care dintre zone este a[i][j]
//
//    // un element este deasupra d.p. daca i < j
//    // un element este dedesubtul d.p. daca i > j
//    // un element este deasupra d.s. daca i+j < n-1
//    // un element este dedesubtul d.s. daca i+j > n-1
//    suma1 = 0;
//    suma2 = 0;
//    suma3 = 0;
//    suma4 = 0;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            //zona 1
//            if (i < j && i + j < n - 1) {
//                suma1 += a[i][j];
//            }
//
//            if (i > j && i + j < n - 1) {
//                suma2 += a[i][j];
//            }
//            if (i < j && i + j > n - 1) {
//                suma3 += a[i][j];
//            }
//
//            if (i > j && i + j > n - 1) {
//                suma4 += a[i][j];
//            }
//        }
//    }
//    cout << suma1 << " " << suma2 << " " << suma3 << " " << suma4;
//}
//24
//int main() {
//    int n = 4, m = 4, a[10][10] = {
//            {0, 9, 1, 4},
//            {9, 2, 1, 1},
//            {3, 5, 4, 7},
//            {0, 0, 2, 3}
//    }, sum, num, p;
//
//    sum = 0;
//    for (int i = 0; i < n; i++) {
//        num = 0;
//        p = 1;
//        for (
//                int j = n - 1;
//                j >= 0; j--) {
//            num += a[i][j] *
//                   p;
//            p *= 10;
//        }
//        sum += num;
//    }
//    cout << sum << endl;
//    // calculam oglinditul
//    int inv = 0;
//    while (sum != 0) {
//        inv = inv*10 + sum % 10;
//        sum /= 10;
//    }
//    // parcurgem si afisam cifrele
//    while (inv != 0) {
//        cout << inv % 10 << ',';
//        inv /= 10;
//    }
//}

// Tema: 26, 27, 28, 29

//int linie(int m, int a[10][10], int i) {
//
//    for (int j = 0; j < m; j++) {
//        int cnt = 0;
//        if (a[i][j] == a[i + i][j]) {
//            cnt++;
//        }
//        return cnt;
//    }
//}
//int main() {
//    int n = 4, m = 5 , a[10][10] = {
//            {5, 2, 8, 4, 5},
//            {8, 5, 9, 5, 5},
//            {7, 9, 7, 2, 2},
//            {6, 8, 6, 1, 6},
//    };
//    for(int i = 0; i < n; i++){
//        for (int j = 0; j < m; j++) {
//            int cnt = 0;
//            if (a[i][j] == a[i + i][j]) {
//                cnt++;
//            }
//    }
//
//    }
//
//}