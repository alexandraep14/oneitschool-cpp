#include <iostream>
#include <cmath>

using namespace std;

//1
//int main() {
//    int n, note[50], cntFail; // note=array, variabila care poate retine 50 de valori
////    cin >> note[0]; // prima nota
////    cin >> note[1]; // a doua nota
////    cin >> note[2]; // a treia nota
//    // daca notele citite ar fi 10 8 7
//    // |10| 8 | 7 |  |  |  |    <--- valorile din array
//    //   0  1   2   3  4  5     <--- indicii
//    // 0..49 sunt pozitiile/indicii posibile/posibili :DD
//
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        cin >> note[i];
//    }
////    //Cum vom afisa vectorul citit?
////    for(int i=0;i<n;i++){
////        cout<<note[i]<<" ";
////    }
////    cout<<endl;
///*
//12
//7 5 4 10 10 9 7 4 7 6 2 9
//
//*/
//    // a)
//    cntFail = 0;
//    for (int i = 0; i < n; i++) {
//        if (note[i] < 5) {
//            cntFail++;
//        }
//    }
//    cout << cntFail << endl;
//
//    // b)
//    float sum, cntPass, mA;
//    sum = 0;
//    cntPass = 0;
//    for (int i = 0; i < n; i++) {
//        if (note[i] >= 5) {
//            sum += note[i];
//            cntPass += 1;
//        }
//    }
//    mA = sum / cntPass;
//    cout << mA;
//
//    ///  c si d pt acasa
//};

// 2
//int main(){
//    int n,a[500],cnt,max;
//    // citim sirul
//    cin>>n;
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//    }
//    // gasim maximul
//    max=0;
//    for(int i =0;i<n;i++){
//        if(max<a[i]){
//            max=a[i];
//        }
//    }
//
//
//    // numaram de cate ori apare valoarea maxima
//    cnt=0;
//    for(int i =0;i<n;i++){ // 9 10 2 7 10
//        if(max==a[i]){
//            cnt++;
//        }
//    }
//    cout<<max<<" "<<cnt;
//}

// 3, pozitia ultimului element, daca avem n elemente, este n-1

// 4
//int main(){
//    int n;
//    float a[100];
//    cin>>n;
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//    }
//    for(int i=0;i<n;i++){
//        a[i]=round(a[i]);
//    }
////    for(int i=0;i<n;i++){
////        cout<<a[i]<<" ";
////    }
//    for(int i=n-1; i>=0;i--){
//        cout<<a[i]<<" ";
//    }
//}
//6
//int main(){
//    int n,a[10],num1,num2,lastD;
//    cin>>n;
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//    }
//
//    num1=0;
//    for(int i=0;i<n;i++) {
//        num1=num1*10+a[i];
//    }
//
//    num2=0;
//    for(int i=n-1;i>=0;i--) {
//        num2=num2*10+a[i];
//    }
//    cout<<num1+num2;
//}


// Tema
//1,3, 5, 7, 8, 9 :) 9 e cu zambet

//int main() {
//    int n, a[50], cntFail, maxNota;
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
////a)
//    cntFail = 0;
//    for (int i = 0; i < n; i++) {
//        if (a[i] < 5) {
//            cntFail++;
//        }
//    }
//        cout << "Note mai mici decat 5 = " << cntFail << endl;
////b)
//        float sum, mA, cnt;
//        sum = 0;
//        cnt = 0;
//        for (int i = 0; i < n; i++) {
//            if (a[i] > 5) {
//                sum += a[i];
//                cnt++;
//            }
//        }
//        mA = sum / cnt;
//        cout << "MA a notelor peste 5 = " << mA<<endl;
////c)
//        int cntDe7;
//        cntDe7 = 0;
//        for (int i = 0; i < n; i++) {
//            if (a[i] == 7) {
//                cntDe7++;
//            }
//        }
//        cout << "Note de 7 = " << cntDe7<<endl;
////d)
//        maxNota = 0;
//        for (int i = 0; i < n; i++) {
//            if (maxNota < a[i]) {
//                maxNota = a[i];
//            }
//        }
//        cout << "Cea mai mare nota " << maxNota;
//    }
//2
//int main(){
//    int n,a[500],maX,cnt;
//    cin>>n;
//    for(int i=0; i<n; i++){
//        cin>>a[i];
//    }
//    cnt=0;
//    maX=0;
//    for(int i=0; i<n; i++){
//        if(maX<a[i]){
//            maX=a[i];
//            cnt++;
//        }
//    }
//    cout<<"Numarul maxim este "<<maX<<endl;
//    cout<<"Apare in cadrul sirului de "<<cnt<<" ori";
//}
//3
//int main(){
//    int n,a[100],cnt,max;
//    cin>>n;
//    for(int i=0; i<n; i++){
//        cin>>a[i];
//    }
//    cnt=0;
//    for(int i=0; i<n-1; i++) {
//        if (a[i] % a[n - 1] == 0) {
//            cnt++;
//        }
//    }
//    cout<<cnt;
//}

////4
//int main(){
//    int n;
//    float a[50];
//    cin>>n;
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//    }
//    for(int i=0; i<n; i++){
//        a[i]=round(a[i]);
//    }
//    for(int i=n-1; i>=0; i--){
//        cout<<a[i]<<" ";
//    }
//}


// // 5 de discutat
//int main() {
//    // keyring :)
//    int n, suma = 0;
//    cout << "introdu marimea vectorului v[n]=";
//    cin >> n;
//    int v[n];
//    for (int i = 0; i < n; i++) {
//        cout << "introdu elementul v[" << i << "]=";
//        cin >> v[i];
//    }
//    for (int i = 0; i < n; i++) {
//        if (i % 2 == 0 && v[i] % 2 == 0) {
//            suma += v[i];
//        }
//    }
//    cout << "suma elementelor pare de pe pozitiile impare este: " << suma << endl;
//    return 0;
//}


//6
//int main(){
//    int n,a[10],num1,num2;
//    cin>>n;
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//    }
//
//    num1=0;
//    for(int i=0;i<n;i++) {
//        num1 = num1 * 10 + a[i];
//    }
//
//    num2=0;
//    for(int i=n-1;i>=0;i--){
//        num2=num2*10+a[i];
//    }
//
//    cout<<num1<<"+"<<num2<<"="<<num1+num2;
//} // nu inteleg ce e gresit



//7
//int main(){
//    int n,a[100],sum,mA,cnt;
//   // float mA;
//    cin>>n;
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//    }
//    sum=0;
//    cnt=0;
//    for(int i=0;i<n;i++){
//        if(a[i]!=0){
//            sum += a[i];
//            cnt++;
//        }
//    }
//    mA = sum / cnt;
//    for(int i=0;i<n;i++){
//        if(a[i]==0){
//            a[i] = mA;
//        }
//    }
//
////    char s[200];
////    string s2;       // indici de la 0, de aceea ne obisnuim si noi cu asta
////    vector<int> v;  //
//
//    for (int i = 0; i < n; ++i) {
//        cout << a[i] << ' ';
//    }
//}


//8
//int main(){
//    int n,a[100];
//    cin>>n;
//    for(int i=1;i<=n;i++){
//        cin>>a[i];
//    }
//    for(int i=1;i<=n;i++){
//        cout<<a[i]<<" 0 ";
//    }
//}


//  // 9
//int main() {
//    /*
//6
//2.32 4.34 9.2 1.0 4.05 2.45
//     */
//    int n;
//    float a[10], copy;
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
////    // var. 1
////    for (int i = 0; i < n / 2; i++) {
////        int j = n - 1 - i; // elemntul egal departat fata de mijloc al lui i
////        if (floor(a[i]) == floor(a[j])) {
////            cout << a[i] << ' ' << a[j] << endl;
////        }
////    }
//    // var. 2
//    int i, j;
//    i = 0;
//    j = n - 1; // indicele ultimului din cele n elemente citite :)
//    while (i < j) {
//        if (floor(a[i]) == floor(a[j])) {
//            cout << a[i] << ' ' << a[j] << endl;
//        }
//        i++;
//        j--;
//    }
//}


// sortare ->
//
//int main() {
//    int v[100] = {3, 22, 8, 12, 4, 5}, n = 6;
//
//    // selection sort without keeping the minimum value (not the most efficient)
//    for (int i = 0; i < n; ++i) {
//        for (int j = i + 1; j < n; ++j) {
//            if (v[i] > v[j]) { // daca sunt in ordinea gresita
//                // swap(v[i], v[j]);
//                int aux = v[i];
//                v[i] = v[j];
//                v[j] = aux;
//            }
//        }
//    }
//    // selection sort without keeping the minimum value (not the most efficient)
//    // TODO diferenta importanta este ca in loc sa dam swap de fiecare data, cautam cel mai
//    //  mic elemenet de pe pozitiile j mai mari de i
//    for (int i = 0; i < n; ++i) {
//        int pmin = i;
//        for (int j = i + 1; j < n; ++j) {
//            if (v[j] < v[pmin]) { // daca sunt in ordinea gresita
//                pmin = j;2
//            }
//        }
//        // TODO interschimbarea este intre elementul de pe pozitia i si cel mai mic element din dreap
//        // swap(v[i], v[j]);
//        int aux = v[i];
//        v[i] = v[pmin];
//        v[pmin] = aux;
//    }
//}

//int main() {
//    int a,b;
//    a = 3;
//    b = 2;
//    swap(a,b);
//    cout << a << " " << b << endl;

////10
//int main() {
//    int v[100] = {3 , 0 , 7 ,0 ,4 , 5}, n = 6;
//
//    // selection sort without keeping the minimum value (not the most efficient)
//    for (int i = 0; i < n; ++i) {
//        for (int j = i + 1; j < n; ++j) {
//            if (v[i]!=0 && v[j] != 0 && v[i] < v[j]) { // daca sunt in ordinea gresita
//                swap(v[i], v[j]);
//            }
//        }
//    }
//    for( int i =0; i<n;i++){
//        cout<<v[i]<<" ";
//    }
//}


////12

int count(char v[100], int n, char item) {
    // calculam de cate ori apare item in vectorul v:
    int cnt = 0;
    for (int j = 0; j < n; j++) {
        if (v[j] == item) {
            cnt++;
        }
    }
    return cnt;
}

//int main() {
//    char v[100] = "cjrjrlrotr", max, item;
//    int n = 10, maxCnt=0, cnt;
//
//    for(int i=0;i<n;i++){
//        item = v[i];
//        // numaram de care ori apare item in vector
//        // mda? :)
//        cnt = count(v, n, v[i]);
//        // verificam daca item apare de mai multe ori decat maximul
//        if (cnt>maxCnt){
//            maxCnt=cnt;
//            max = item; // noi am demonstrat ca item apare de
//            //  cele mai multe ori de pana acum
//        }
//    }
//    cout<<max<<" "<<maxCnt;
//}

//// 11
//int main() {
//    int n = 5, v[100] = {3, 4, 3, 3, 8}, primul;
//
//    primul = v[0];
//    for (int i = 0; i < n; i++) {
//        // daca elementul este egal cu primul, il stergem din vector
//        if (v[i] == primul) {
//            for (int j = i; j < n - 1; j++) {
//                v[j] = v[j + 1];
//            }
//            n--;
//            i--;
//        }
//    }
//
//    for (int i = 0; i < n; ++i) { // 5 elemente au ramas
//        cout << v[i] << ' ';
//    }
//
////    int n2=6, v2[100] = {1,2,3,4,5,6};
////    // in loc sa ai 1,2,3,4,5,6 pe indicii 0,1,2,3,4,5    va rezulta 1,3,4,5,6 pe indicii 0,1,2,3,4
////    // sa stergi al doilea element inseamna ca afisand vectorul, afisezi doar 1,3,4,5,6
////
////    v2[1] = v2[2];
////    v2[2] = v2[3];
////    v2[3] = v2[4];
////    v2[4] = v2[5];
////    n2--;
////    for (int i = 0; i < n2; ++i) { // 5 elemente au ramas
////        cout << v2[i] << ' ';
////    }
//
//}

////13
//int main(){
//    float v[100]={  2.32,  -4.34,  -9.2,   1.0, };
//    //              0     1         2       3       4
//    int n=4;
//
//    for(int i=0 ;i<n;i++){
//        if(v[i]<0){
//            // eliberam pozitia lui v[i] prin a muta (shifta) mai la dreapta elementele de dupa v[i]
//            for(int j=n-1;j>=i;j--) {
//                v[j + 1] = v[j];
//            }
//            v[i] = 0;
//            // mai modificam si n, si i
//            n++;
//            i++;
//
//        }
//    }
//
//    for(int i=0;i<n;i++){
//        cout<<v[i]<<" ";
//    }
//
//}

// 14, 15 (si aici este util sa sortezi :).), 16
// 17 (pentru a face asta in mod usor :) e necesar sa sortam vectorul, eventual chiar il transformi in multime, ca la 15
//  Multime? Set in EN    {1,8,2}  este multime,    {8,2,1, 2,3} nu este, deoarece 2 se repeta
// 19

//10
//int main(){
//    int n=6,v[100]={3,0,7,0,4,5};
//
//    for(int i=0;i<n;i++){
//        for(int j=i+1;j<n;j++){
//            if(v[i]!=0 && v[j]!=0 && v[i]<v[j]){
//                swap(v[i],v[j]);
//            }
//        }
//    }
//    for(int i=0;i<n;i++){
//        cout<<v[i]<<" ";
//    }
//}

//11
//int main(){
//    int n=5,v[100]={3,4,3,3,8};
//
//    int primul=v[0];
//    for(int i=0;i<n;i++){
//        if(v[i]==primul) {
//            for (int j = i; j < n - 1; j++) {
//                v[j] = v[j + 1];
//            }
//            n--;
//            i--;
//        }
//    }
//    for(int i=0;i<n;i++){
//        cout<<v[i]<<" ";
//    }
//}
//12
//int main() {
//    char v[100] = "adgdbdd", max, item;
//    int n = 7, maxCnt = 0, cnt = 0;
//
//    for (int i = 0; i < n; i++) {
//        item = v[i];
//        for (int j = 0; j < n; j++) {
//            if (v[j] == item) {
//                cnt++;
//                if (maxCnt < cnt) {
//                    maxCnt = cnt;
//                    max = item;
//                }
//            }
//
//        }
//    }
//        cout << max << " " << maxCnt;
//    }

//14
//int main() {
//    int n = 6, v[100] = {3, -4, 3, 13, 8, -3};
//
//    int len, maxLen, start, maxStart; // len si start sunt lungimea si inceputul secventei curente,
//    //                                    iar maxlen si maxStart al celei maxime de pana acuma
//    maxLen = 0;
//
//    start = 0;
//    len = 0; // lungimea secventei curente, in care eocamdata n-am gasit niciun intreg pozitiv
//    for (int i = 0; i < n; i++) {
//        if (v[i] > 0) {
//            len++;
//        } else {
//            if (len > maxLen) {
//                maxLen = len;
//                maxStart = start;
//            }
//            start = i + 1; // poate urmatorul numar va fi pozitiv
//            len = 0; // practic in prezent n-avem numere pozitive
//        }
//    }
//
//    if (len > maxLen) {
//        maxLen = len;
//        maxStart = start;
//    }
//
//    for(int i=maxStart;i<maxStart+maxLen; i++) {
//        cout<<v[i]<<" ";
//    }
//}

//15
//int main() {
//    int n = 6, v[100] = {3, 13, 3, 13, 8, 13}, a[100];
//
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (v[i] > v[j]) {
//                swap(v[i], v[j]);
//            }
//        }
//    }
//    int i = 0;
//    while (i < n - 1) {
//        if (v[i] == v[i + 1]) {
//            for (int j = i; j < n - 1; j++)
//                v[j] = v[j + 1];
//            n--;
//        } else {
//            i++;
//        }
//    }
//    for (int j = 0; j < n; j++) {
//        cout << v[j] << " ";
//    }
//}
//int numarAparitii(int v[i]){
//
//}
// 16  practic, pentru fiecare element unic din vector, parcurgem vectorul si numaram de cate ori apare.
//      Poti face fct pt numarAparitii :D
bool estePrimaAparitie(int v[100], int n, int pozitieElement) {
    int val;
    val = v[pozitieElement];
    // verificam daca la stanga pozitiei se mai gaseste valoarea val
    for (int i = 0; i < pozitieElement; ++i) {
        // daca inainte de a ajunge la pozitieElement valoarea mai apare => nu este prima aparitie
        if (v[i] == val) {
            return false;
        }
    }
    return true;
}

int nrAparitii(int v[100], int n, int valoare) {
    // numaram de cate ori apare valoarea in vector
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == valoare) {
            cnt++;
        }
    }
    return cnt;
}

//int main() {
//    int n = 6, v[10] = {3, 13, 3, 13, 8, 13};
//    int aparitii; // aparitii=nr aparitii
//    // solutia 1: pentru fiecare element, daca este prima data cand apare in vector, afisam de cate ori apare
//    for (int i = 0; i < n; i++) {
//        if (estePrimaAparitie(v, n, i)) {
//            aparitii = nrAparitii(v, n, v[i]);
//            cout << v[i] << " " << aparitii << endl;
//        }
//    }
//
//
//    // solutia 2: le sortam prima data, si pt fiecare valoarea numaram de cate ori apare consecutiv
//
//
//}

// 17
//int main() {
////////    aflam multimea
////////    sortam desc. numerele ramase
////////    ASlegem primele m numere, daca exista
//    int v[100] = {3, 13, 3, 13, 8, 13}, n = 6, m = 2, sum, maxSum;
//
//    sum = 0;
//    maxSum = 0;
//
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (v[i] < v[j]) {
//                swap(v[i], v[j]);
//            }
//        }
//    }
//    int i = 0;
//    while (i < n - 1) {
//        if (v[i] == v[i + 1]) {
//            for (int j = i; j < n - 1; j++)
//                v[j] = v[j + 1];
//            n--;
//        } else {
//            i++;
//        }
//    }
//    if (n < m) {
//        // nu cumva, dupa transformarea in multime, au ramas mai putin de n elemente?
//        // daca da:
//        cout << "Imposibil";
//    } else {
//        sum = 0; // este maxima, datorita faptului ca "adunam" in ea cele mai mari valori
//        for (int j = 0; j < m; j++) {
//            sum += v[j];
//        }
//        cout << sum;
//    }
//}


//// 18
//void afiseazaVector(int v[10], int n) {
//    for (int i = 0; i < n; i++) {
//        cout << v[i];
//    }
//    cout << endl;
//}
//int main() {
//    int n = 4, v[10] = {2, 5, 3, 1}, primul;
//
//    for (int pas = 0; pas < n - 1; pas++) {
//        // permuta circular spre stanga:
//        primul = v[0];
//        for (int i = 0; i < n - 1; i++) {
//            v[i] = v[i + 1];
//        }
//        v[n - 1] = primul;
//        afiseazaVector(v, n);
//    }
//}
//    for (int pas = 0; pas < n - 1; pas++) {
//        // permuta circular spre stanga:
//        v[n] = v[0];
//        for (int i = 0; i < n; i++) {
//            v[i] = v[i + 1];
//
//        }
//        afiseazaVector(v, n);
//    }

//}

// 19

//int main() {
//    int a[100], n, cnt;
//    cin >> n;
//
//    cnt = 0;
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (i < j && a[i] > a[j]) {
//                cnt++;
//                cout << a[i] << " " << a[j] << " " << endl;
//
//            }
//        }
//    }
//    cout << cnt << endl;
//}
//20

// utila pt 16 (unde era cu aparitii)

//int main(){
//    long long n,cnt,cntMax;
//    // avem nevoie de 10 contoare, unul pt fiecare cifra
//    int cntCifre[10] = {0}; // cnt[0] este contoful pt cifra 0, cnt[2] este contorul pt cifra 2 etc
//
//    // calculam contoarele. Cum?  (Noi citim doar un numar cu mai multe cifra,
//    //                             din care trebuie sa obtinem frecventa (contorul) fiecarei cifre)
//    cin >> n;
//    int lastDigit;
//    while(n>0){
//        lastDigit=n%10;
//        cntCifre[lastDigit]++;
//        n/=10;
//    }
//
//    // Cum afisam prima data cifrele care apar de 1 ori, apoi de 2 ori etc
//    // Noi stim doar de cate ori apare fiecare cifra :D
//
//    for (int aparitiiCifra = 1; aparitiiCifra <= 18; ++aparitiiCifra) {
//        for (int cif = 0; cif < 10; ++cif) {
//            if (cntCifre[cif] == aparitiiCifra) {
//                cout << cif << ' ';
//            }
//        }
//    }
//    return 0;
//}

// Ca tema iti dau si o cerinta separata: verifica daca doua numere contin aceleasi cifre => poti folosi vector de contori ca mai sus

// 22 nu-i dificil doar sa te mai uiti peste ASCII


//// 21
//int main(){
//    int n=7,v[100]={1,40,32,44,3,8,17},aux;
//
//    for(int i=0;i<n;i++){
//        for(int j=i+1;j<n;j++){
//            if(v[i]%2==0 && v[j]%2==0 && v[i]>v[j]){
//                swap(v[i],v[j]);
//            }
//        }
//    }
//    for(int i=0;i<n;i++){
//        cout<<v[i]<<" ";
//    }
//}

// 24

//int main() {
//    float v[100] = {2.3, 12.09, 218.98021, 31.05, -212.098, 12.75};
//    int n = 3;
//
//    cout.precision(3);
//
//    for (int i = 0, j = 2 * n - 1; i < j; i++, j--) {
//
////        cout << v[i] << " " << v[j] << " " << endl;
//        int  parte_intreaga_a_lui_vi = floor(v[i]);
//        float parte_fractionara = v[j]-floor(v[j]);
//        cout << fixed << parte_intreaga_a_lui_vi + parte_fractionara << ' ';
//    }
//}

// 22

//int main() {
////    char a, b;
////    a = 65;// same as 'A';   67='C', 68='D'
////    b = 'i';
////    cout << a << ' ' << b << endl;
////    cout << (int) a << ' ' << (int) b << endl;
////    cout << a + b << endl;
////    cout << (char)(a + b) << endl;
////    cout << (int) (a + b) << endl;
//
//    int n = 7;
//    char v[100] = "ACBEzlE";
//
//    cout << v[0] + v[6] << endl;
//    cout << v[1] + v[5] << endl;
//    cout << v[2] + v[4] << endl; // pt 'B' + 'z' da suma maxima
//    cout << v[3] + v[3] << endl;
//}

// 23

//int main() {
//    int n = 7, v[100] = {14, -13, 21, 1, 120, 1000, 21}, pozMin, pozMax;
//
//    pozMin = 0;
//    pozMax = 0;
//    for (int i = 0; i < n; i++) {
//        if (v[i] < v[pozMin]) {
//            pozMin = i;
//        }
//        if (v[i] > v[pozMax]) {
//            pozMax = i;
//        }
//    }
//
//    if (pozMin >= pozMax) {
//        cout << "minimul este la dreapta maximului" << endl;
//        return 0;
//    }
//    if (pozMin + 1 == pozMax) {
//        cout << "Nu se efectueaza sortarea.";
//        return 0;
//    }
//    // i si j sorteaza clasic, dar sunt limitati la zona pe care am gasit-o
//    for (int i = pozMin + 1; i < pozMax; i++) {
//        for (int j = i + 1; j < pozMax; j++) {
//            if (v[i] > v[j]) {
//                swap(v[i], v[j]);
//            }
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        cout << v[i] << " ";
//    }
//}

// 30

//swap(a[i], a[i + a[i]]
//);
//if (i + a[i] > n) { // 1 2 3     a[2] <-> a[2 + 3] nu exista a[5] asa ca luam prin a numerota de la 0, adica dupa 2 urmeaza 0, apoi 1, apoi 2
//// se incepe de la pozitia 0
//j = (i + a[i]) % n;
//swap(a[i], a[j]
//);
//}

//int main() {
//    int n = 4, a[100] = {2, 4, 1, 3};
//
//    for (int i = 0; i < n; ++i) {
//        int j = (i + a[i]) % n;
//        swap(a[i], a[j]);
//        afiseazaVector(a, n);
//    }
//}

// 28, 29, 31, 32, 33
//2
//int main(){
//    int n,v[100],max,cnt;
//    cin>>n;
//
//    for(int i=0;i<n;i++){
//        cin>>v[i];
//    }
//    max=0;
//    cnt=0;
//    for(int i=0;i<n;i++) {
//        if (max < v[i]) {
//            max = v[i];
//        }
//    }
//            for(int i=0;i<n;i++){
//            if(max==v[i]){
//                cnt++;
//            }
//        }
//
//    cout<<"numarul maxim este = "<<max<<" se repeta de "<<cnt<<" ori";
//
//}
//3
//int main(){
//    int n=5,a[50]={8,4,6,9,3},cnt;
//    cnt=0;
//
//    for(int i=0;i<n-1;i++){
//        if(a[i]%a[n-1]==0){
//            cnt++;
//        }
//
//    }
//    cout<<cnt;
//}
//4
//int main(){
//    float a[100]={2.72,4.34,9.82,1.0,4.05,2.45};
//    int n=6;
//
//    for(int i=0;i<n;i++){
//        a[i]=round(a[i]);
//    }
//
//    for(int i=n-1;i>=0;i--){
//        cout<<a[i]<<" ";
//    }
//}
////5
//int main(){
//    int n=5,a[100]={3,4,6,7,8,},sum;
//
//    sum=0;
//    for(int i=0;i<n;i++){
//            if((i+1)%2!=0 && a[i]%2==0){//explica-mi if-ul asta
//                sum+=a[i];
//            }
//        }
//        cout<<sum;
//    }
////6
//int main() {
//    int n = 4, a[100] = {2, 0, 4, 5}, sum,num1,num2;
//
//    num1=0;
//    for (int i = 0; i < n; i++) {
//        num1 = num1 * 10 + a[i];
//    }
//
//    num2=0;
//    for(int j=n-1;j>=0;j--){
//        num2=num2*10+a[j];
//    }
//
//    cout<<num1<<" + "<<num2<<" = "<<num1+num2;
//}

////7
//int main(){
//    int n=5, a[100]={2,0,4,0,3},sum,mA,cnt;
//
//    sum=0;
//    cnt=0;
//    for(int i=0;i<n;i++) {
//        if (a[i] != 0) {
//            sum += a[i];
//            cnt++;
//        }
//    }
//    mA=sum/cnt;
//
//    for(int i=0;i<n;i++){
//        if(a[i]==0){
//            cout<<mA<<" ";
//        }
//        else{
//            cout<<a[i]<<" ";
//
//        }
//    }
//}
////8
//int main(){
//    int n=3,a[100]={2,4,3};
//
//    for(int i=0;i<n;i++){
//        cout<<a[i]<< " 0 ";
//
//    }
//}
//9
//int main(){
// float a[100]={2.32,4.34,9.2,1.0,4.05,2.45};
// int n=6;
// /*
//2.32 2.45
//4.34 4.05
//9.2 1.0
//  */
// for(int i=0;i<n/2;i++){
//     if (floor(a[i])==floor(a[n-1-i])) {
//         cout << a[i] << " " << a[n - 1 - i] << endl;
//     }
// }
//
//}
//10
//
//int main() {
//    int n = 6, a[100] = {3, 0, 7, 0, 4, 5};
//
//    for (int i = 0; i < n; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (a[i] < a[j] && a[i]!=0) {
//                swap(a[i], a[j]);
//            }
//        }
//    }
//    for(int i=0;i<n;i++){
//        cout<<a[i]<<" ";
//    }
//}

void afisareVector(int a[100], int n) {
    for (int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }

}

//int main(){
//    int n=5, a[100]={3,4,3,3,8};
//
//    int primul = a[0];
//
//   for(int i=0;i<n;i++){
//       if(a[i]==primul){
//           for(int j=i;j<n-1;j++){
//               a[j] = a[j+1];
//           }
//           n--;
//           i--;
//       }
//   }
//
//    afisareVector(a,n);
//}
//12
//int main() {
//    int n, a[100], cnt, maxCnt,max;
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//    // 5 3 3 3 4 4
//    maxCnt = 0;
//    for (int i = 0; i < n; i++) {
//        cnt = 0;
//        for (int j = 0; j < n; j++) {
//            if (a[i] == a[j]) {
//                cnt++;
//            }
//        }
//        //cout << a[i] << ' ' << cnt << endl; // de cate ori apare a[i]?
//        if (cnt > maxCnt) {
//            maxCnt = cnt;
//            max = a[i];
//        }
//    }
//        cout << maxCnt<<" "<<max;
//}
//13
//int main() {
//    float a[100] = {2.32, -4.34, -9.2, 1.0};
//    int n = 4;
//
//    for (int i = 0; i < n; i++) {
//        if (a[i] < 0) {
//
//            // muti toate elementele mai la dreapta
//            for (int j = n - 1; j >= i; j--) {
//                a[j + 1] = a[j];
//
//
//            }
//            a[i] = 0.00;
//            n += 1;
//            i++;
//        }
//    }
//    cout.precision(2);
//    for (int i = 0; i < n; i++) {
//        cout << fixed << a[i] << " ";
//    }
//}

////14
//int main() {
//    int n = 6, maxLen, maxStart;
//    float a[100] = {3, -4, 3, 13, 8, -3};
//
//    int start = 0;
//    int len = 0;
//    maxLen = 0;
//    for (int i = 0; i < n; i++) {
//        if (a[i] > 0) {
//            len++;
//        } else {
//            if (len > maxLen) {
//                maxLen = len;
//                maxStart = start;
//            }
//            start = i + 1; // a[i] < 0, but i+1 may hold a[i+1]>0
//            len = 0; // 0 because we don't know yet whether a[i+1]>0
//        }
//    }
//    for(int i=maxStart;i<maxStart+maxLen;i++){
//        cout<<a[i]<<" ";
//    }
//
//    // brute force   decide i and j, the beginning and end of a sequence, then check if all of them are positive
//    //                  and find the largest one with positive numbers
//}

//20

int aparitiiCifra(int nr, int cifra) {
    int cnt = 0, lastDigit;
    while (nr > 0) {
        lastDigit = nr % 10;
        if (lastDigit == cifra) {
            cnt++;
        }
        nr /= 10;
    }
    return cnt;
}

//int main(){
//    int n=355222;
//
//    // vector aparitii
//
//    for (int aparitii = 1; aparitii < 10; aparitii++) {
//        for (int cifra = 0; cifra < 10; cifra++) {
//            if (aparitiiCifra(n, cifra) == aparitii) {
//                cout << cifra << " ";
//            }
//        }
//    }
//
//}

// 15, 16, 17, 19
////15
//int main(){
//    int n=6,a[100]={3,13,3,13,8,13};
//
//    for(int i=0;i<n;i++){
//        for(int j=i+1;j<n;j++){
//            if(a[i]<a[j]){
//                swap(a[i],a[j]);
//            }
//        }
//    }
//    int i = 0;
//    while (i < n - 1) {
//        if (a[i] == a[i + 1]) {
//            for (int j = i; j < n - 1; j++)
//                a[j] = a[j + 1];
//            n--;
//        } else {
//            i++;
//        }
//    }
//    for (int j = 0; j < n; j++) {
//        cout << a[j] << " ";
//    }
//}
//16
//bool estePrimaAparitie(int n,int a[100],int pozitieElement){
//    int val=pozitieElement;
//    for(int i=0;i<pozitieElement;i++){
//        if(a[i]==val){
//            return false;
//        }
//    }
//    return true;
//}
//int numarAparitii (int n,int a[100],int indice){
//    int cnt=0;
//    for (int i = 0; i < n; i++) {
//        if (a[i] == a[indice]) {
//            cnt++;
//        }
//    }
//    return cnt;
//}
//int main() {
//    int n = 6, a[100] = {3, 13, 3, 13, 8, 13},aparitii;
//    aparitii=0;
//    for(int i=0;i<n;i++){
//        if(estePrimaAparitie(a,n,i)){
//            aparitii= numarAparitii(n, a, i);
//            cout<<a[i]<<" "<<aparitii<<endl;
//        }
//    }
//    }
//ce are functia?!
////17
//int main() {
//    int n = 6, m = 2, v[100] = {3, 13, 3, 13, 8, 13}, sum, maxSum;
//
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (v[i] < v[j]) {
//                swap(v[i], v[j]);
//            }
//        }
//    }
//    int i = 0;
//    while (i < n - 1) {
//        if (v[i] == v[i + 1]) {
//            for (int j = i; j < n - 1; j++)
//                v[j] = v[j + 1];
//            n--;
//        } else {
//            i++;
//        }
//    }
//
//    if (n < m) {
//        cout << "imposibil";
//    } else {
//        sum = 0;
//        for (int j = 0; j < m; j++) {
//            sum += v[j];
//        }
//
//    }
//        cout << sum;
//}
////19
//int main(){
//    int n=4,a[100]={1,13,2,4},cnt;
//
//    cnt=0;
//    for(int i=0;i<n;i++){
//      for(int j=i+1;j<n;j++){
//          if(i<j && a[i]>a[j]){
//              cnt++;
//              cout << a[i] << " " << a[j] << " " << endl;
//          }
//      }
//    }
//    cout<<cnt<<endl;
//}

//24
//int main(){
//    int a[100]={2,4,1,6,7},b[100]={3,4,8,9}, nA=5,nB=4;
//
//    for(int i=0;i<nA;i++){
//        cout<<a[i]<<" ";
//    }
//    for(int j=0;j<nB;j++){
//        bool apareInA = false; // apare b[j] si in a?
//        for(int i=0;i<nA;i++){
//            if(a[i]==b[j]) {
//                apareInA = true;
//            }
//        }
//        if (!apareInA) {
//            cout << b[j] << ' ';
//        }
//
//    }
//    cout << endl;
//
//    for(int i=0;i<nA;i++){
//        for(int j=0;j<nB;j++){
//            if(a[i]==b[j]){
//                cout<<a[i]<<" ";
//            }
//        }
//    }
//    cout<<endl;
//
//    for(int i=0;i<nA;i++){
//        bool apareinB=false;
//        for(int j=0;j<nB;j++) {
//            if(a[i]==b[j]){
//                apareinB=true;
//            }
//        }
//        if (!apareinB){
//            cout<<a[i]<<" ";
//        }
//    }
//
//}

//// 28
//int main(){
//    int n=50,a[100]={1}, i, end;
//
//    i = 0; // pe pozitia 0 deja avem 1 :)
//    end=1;
//    while (end < n) {
//        a[end] = a[i] * 2 + 1;
//        a[end+1] = a[i] * 3 + 1;
//        end += 2;
//        i += 1;
//    }
//    for(int i=0;i<n;i++){
//        cout<<a[i]<<" ";
//    }
//}
//29
//int main(){
//    int a[100]={2,5,5,6,4,3,1},n=7, i;
//
//    i=0;
//    while(i<n-1 && a[i]<=a[i+1]){
//        i++;
//    }
//    if(i==0){
//        cout<<" Nu este munte. ";
//        return 0;
//    }
//
//    // daca programul ajunge aici: i-ul > 0 deoarece a crescut in while
//    // deci, daca nr. este munte, a[i] este varful
//    //  Testam daca a[i] >= a[i+1] pentru toate pozitiile ramase
//    while(i<n-1 && a[i]>=a[i+1]){
//        i++;
//    }
//    if(i==n-1){
//        cout<<" Este munte ";
//    }
//    else{
//        cout<<" Nu este munte ";
//    }
//
//}

// 30
//int main() {
//    int n = 4, a[100] = {2, 4, 1, 3};
//
//    for (int i = 0; i < n; i++) {
//        if (i + a[i] >= n) {
//            int poz = (i + a[i])  % n; // cand facem % n    n devine 0, n+1 devine 1, n+2 devine 2
//            swap(a[i],a[poz]);
//        } else {
//            swap(a[i], a[i + a[i]]);
//        }
//    }
//
//    for (int i = 0; i < n; i++) {
//        cout << a[i] << " ";
//    }
//}

// 33
int numarCifreDistincte(int nr) {
    // vector de aparitii cifre:
    int lastDigit, cnt;
    int apareCifra[10] = {0};

    // parcurgem cifrele lui nr
    while (nr > 0) {
        lastDigit = nr % 10;
        apareCifra[lastDigit]++;
        nr /= 10;
    }

    // dar cate cifre distincte are nr?
    cnt = 0;
    for (int i = 0; i < 10; i++) {
        if (apareCifra[i] > 0) {
            cnt++;
        }
    }
    return cnt;
}

//// main:
//int main() {
//    int n = 7, a[100] = {334, 124, 21, 34, 222, 1, 39};
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = i + 1; j < n; ++j) {
//            if (numarCifreDistincte(a[i]) < numarCifreDistincte(a[j])) {
//                swap(a[i], a[j]);
//            }
//        }
//    }
//
//    for (int i = 0; i < n; ++i) {
//        cout << a[i] << " ";
//    }
//
//}


// tema: continuat recapitularea si refacut ce-am facut astazi.
//32
int primaCifra(int n) {
    int firstDigit;
    while (n > 0) {
        firstDigit = n % 10;
        n /= 10;
    }
    return firstDigit;
}

//int main(){
//    int n=7,a[100]={334,124,21,34,122,1,39};
//
//    for (int cifraDominanta = 1; cifraDominanta < 10; ++cifraDominanta) {
//        bool amAfisat = false;
//        for(int j=0;j<n;j++){
//            if(primaCifra(a[j])==cifraDominanta){
//                cout<<a[j]<<" ";
//                amAfisat = true; // amAfisat ne spune c-a intrat programul in if-ul asta.
//            }
//        }
//        if (amAfisat) { // amAfisat ramane false daca nu afisam nimic pe acest rand, sau true daca da iar noi va trebui sa punem final de rand
//            cout << endl;
//        }
//    }
//
//}
//34
//int main(){
//    int n=7;
//    float a[100]={3.34,12.4,3.41,3.04,12.8,1.3,3.9};
//
//    for(int i =0;i<n;i++) {
//        for (int j = i+1; j < n; ++j) {
//            if (floor(a[i]) > floor(a[j]) || (
//                floor(a[i]) == floor(a[j]) &&  a[i] < a[j])) {
//                swap(a[i], a[j]);
//            }
//        }
//    }
//    for(int i=0;i<n;i++){
//        cout<<a[i]<<" ";
//    }
//}
////35
//int main() {
//    int n = 3, a[100] = {3, 12, 21, 34, 2, 39}, sum, sumMax, maxSum;
//
//    for (int repeat = 0; repeat < 2 * n; ++repeat) {
//        for (int i = 0; i < n * 2; i++) {
//            if (a[i] < a[i + 1]) {
//                swap(a[i], a[i + 1]);
//            }
//        }
//    }
//
//    int i, j;
//    i = 0;
//    j = 2 * n - 1;
//
//    while (i < j) {
//        cout << a[i] << ' ' << a[j] << endl;
//        i++;
//        j--;
//    }
//
//}
//36
int insert(int a[100], int &n, int i, int nr) {
    for (int j = n; j > i; j--) {
        a[j] = a[j - 1];
    }
    a[i] = nr; // dar dupa ce il eliberam pe a[i], ca si cum am elibera un loc pe un raft

    n++;
    i++;
}
//
//int main(){
//    int n=6, nr, p10;
//    int a[100]={3,-1,73,5,-9,2};
//
//    for(int i=0;i<n;i++){
//        if(a[i+1]*a[i]<0){  // <0 doar daca au semn opus
//            p10 = 10;
//            while (p10 < abs(a[i + 1])) { // abs=modul (ro.), adica numarul scris cu semnul plus
//                p10 *= 10;  // 12 134  => 12*1000+134,   12 2 => 12 * 10 + 2
//            }
//            nr = abs(a[i]) * p10 + abs(a[i+1]);
//            insert(a, n, i+1, nr); // :)   vector, unde inseram, valoarea pe care o inseram
//            i++;
//        }
//    }
//
//    for(int i=0;i<n;i++){
//        cout<<a[i]<<" ";
//    }
//
//}


// 39
int suma(int n, int a[100], int i, int j) {
    int s = 0;
    for (int k = i; k <= j; ++k) {
        s += a[k];
    }
    return s;
}

//int main() {
//    int n = 7, s = 9, a[100] = {3, 2, 3, 4, 5, 11, -7}, sum;
//    sum = 0;
//    // 1. alegem i si j, capetele unei secvente. Daca suma secventei este egala cu S, o afisam
//    for (int i = 0; i < n; i++) {
//        for (int j = i; j < n; j++) {
//            if (suma(n, a, i, j) == s) {
//                for (int k = i; k <= j; ++k) {
//                    cout << a[k] << " ";
//                }
//                cout << endl;
//            }
//        }
//    }
//}


// 41 tema poti cauta si pe net
////34
//int main(){
//    int n=7;
//    float a[100]={3.34,12.4,3.41,3.04,12.8,1.3,3.9};
//
//    for(int i=0;i<n;i++){
//        for(int j=i+1;j<n;j++){
//            if(floor(a[i])>floor(a[j]) || floor(a[i])==floor(a[j]) && a[i]<a[j]){
//                swap(a[i],a[j]);
//            }
//        }
//    }
//    for(int i=0;i<n;i++){
//        cout<<a[i]<<" ";
//    }
//
//}
//41
//int main() {
//    int n = 8, m = 5, a[100] = {13, 26, 44, 54, 112, 115, 311, 600}, b[100] = {3, 28, 48, 55, 56}, c[100], cnt, i, j, k;
//
//    // interclasarea tuturor elementelor:
//
////    i=0;
////    j=0;
////    k=0;
////    while(i<n && j<m){
////        if(a[i]<b[j]){
////            c[k]=a[i];
////            i++;
////            k++;
////        } else{
////            c[k]=b[j];
////            j++;
////            k++;
////        }
////    }
////
////    while(i<n){
////        c[k]=a[i];
////        i++;
////        k++;
////    }
////
////    while(j<m) {
////        c[k]=b[j];
////        j++;
////        k++;
////    }
//
//    i=0;
//    j=0;
//    k=0;
//    while(i<n && j<m){
//        if(a[i]<b[j]){
//            if(a[i]%2==0) {
//                c[k] = a[i];
//                k++;
//            }
//            i++;
//        } else{
//            if(b[j]%2==0) {
//                c[k] = b[j];
//                k++;
//            }
//            j++;
//        }
//    }
//
//    while(i<n){
//        if(a[i]%2==0) {
//            c[k] = a[i];
//            k++;
//        }
//        i++;
//    }
//
//    while(j<m) {
//        if(b[j]%2==0) {
//            c[k] = b[j];
//            k++;
//        }
//        j++;
//    }
//
//    for(int i=0;i<k;i++){
//        cout<<c[i]<<" ";
//    }
//}
