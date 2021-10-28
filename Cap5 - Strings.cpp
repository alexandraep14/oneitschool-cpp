#include <cstring>
#include <iostream>
#include <fstream>

using namespace std;

//int main(){
//    char s[256];
//
//    // TODO citim un cuvant (adica pana la spatiu sau final de rand)
//    cin >> s; // desi este vector
//
//    // programul stie sa afiseze, deoarece dupa ce a citti de la consola cuvantul, a
//    //  adaugat la final si caracterul '\0', adica caracterul cu
//    //  codul ascii 0
//    cout << s;
//}

//int main(){
//    char s[256];
//
//    // TODO citim un rand intreg de la consola
//    //  s este sirul unde se salveaza, iar 255 este lungimea maxima de
//    //      caractere citite
//    cin.getline(s, 255);
//
//    // programul stie sa afiseze, deoarece dupa ce a citti de la consola cuvantul, a
//    //  adaugat la final si caracterul '\0', adica caracterul cu
//    //  codul ascii 0
//    cout << s;
//
//    // TODO din cauza asta, oricand citim un sir mai lung, va fi citit de pe o linie intreaga
//    //  Si daca spre exemplu citim doua texte, trebuie citite de pe randuri separate
//}

// 1

//bool esteVocala(char c) {
//    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
//           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
//}

// s este sirul unde verificam daca ultimaSilaba apare incepand cu pozitia poz
bool apareSilaba(char s[], char silaba[], int poz) {
    for (int j = 0; j < strlen(silaba); j++) {
        if (s[poz + j] != silaba[j]) {
            // TODO poz+j este pozitia din s, iar j pozitia din ultimaSilaba, cand
            //  verificam daca ultimaSilaba apare pe pozitia i din sir
            // i=5
            // s: Ina are multe mere
            // ultimaSilaba: re
            return false;
        }
    }
    return true;
}

//int main() {
//    char s[256], litera, ultimaSilaba[5];
//    int cnt, cntVocale, cntSilaba;
//    bool silabaApare;
//    cin.getline(s, 255);
//    cin >> litera;
//    cin >> ultimaSilaba;
//
//    // a)
//    cnt = 0;
//    for (int i = 0; i < strlen(s); i++) {
//        if (s[i] == litera) {
//            cnt++;
//        }
//    }
//
//    //b)
//    cntVocale = 0;
//    for (int i = 0; i < strlen(s); i++) {
//        if (esteVocala(s[i]) == true) {
//            cntVocale++;
//        }
//    }
//
//    //c)
//    for (int i = 0; i < strlen(s); i++) {
//        if (apareSilaba(s, ultimaSilaba, i)) {
//            cntSilaba++;
//            // varianta fara functie
////        silabaApare = true;
////        for( int j = 0; j< strlen(ultimaSilaba);j++) {
////            if (s[i + j] != ultimaSilaba[j]) {
////                // TODO poz+j este pozitia din s, iar j pozitia din ultimaSilaba, cand
////                //  verificam daca ultimaSilaba apare pe pozitia i din sir
////                // i=5
////                // s: Ina are multe mere
////                // ultimaSilaba: re
////                silabaApare = false;
////            }
////        }
////        if (silabaApare) {
////            cntSilaba++;
////        }
//        }
//
//        // afisarea rezultatelor
//        cout << "a) " << cnt << endl;
//        cout << "b) " << cntVocale << endl;
//        cout << "c) " << cntSilaba;
//    }
//}

// 2
//int main() {
//    char s[100], litera;
//
////    s = "abc"; // TOT nu merge,
////    // chiar daca citirea si afisarea merg,
////    //  atribuirea direct cu vector de caractere NU merge
//
//    // exemple strcpy
////    strcpy(s, "abc"); // similar cu s = "abc", adica copiem in s sirul
////    cout << s;
////    strcpy(s, s + 1); // daca s este "abc", atunci s+1 este numai "bc"
////    cout << " -> " << s << endl;
////
////    strcpy(s, "abcde");
////    cout << s;
////    strcpy(s + 2, s + 3); // s+2 este "cde" iar s+3 este "de". Ce se intampla daca  ai copia s+3 peste s+2
////    cout << " -> " << s << endl;
//
//    cin.getline(s, 99);
//
//    litera = s[0];
//    for (int i = 0; i < strlen(s); i++) {
//        if (s[i] == litera) {
//            // o eliminam
//            strcpy(s + i, s + i + 1);
//            // TODO ca sa mearga si pt aardvark
//            i--;
//        }
//    }
//    cout << s;
//}

//// Tema: refacut ce-am facut, plus de lucrat 5, 3
//int main() {
//    // Exemplu litere mari si mici
//    char c = 'E';
//    cout << c-'A' << endl; // pozitia in alfabet a lui c
//    // alte exemple:
//    cout << 'E' - 'A' << ' ' << 'B'-'A' << endl;
//
//    cout << (int)'a' << endl;
//    cout << 'a' + 3 << endl;
//    char c2 = 'a' + 3; // deoarece valoarea 100 este pusa intr-un char,
//    //                      la afisare va fi afisat caracterul cu codul ascii 100
//    cout << c2 << endl;
//    cout << (char)('a' + 3) << (char)('a' + 0) << (char)('a' + 12) << endl;
//
//    // vei folosi:
//    char s[100] = "Abc";
//    s[0] = s[0] - 'A' + 'a';
//    s[1] = s[1] - 'a' + 'A';
//    s[2] = s[2] - 'a' + 'A';
//    cout << s << endl;
//}

////6
//int main(){
//    // s[i] este un cuvant, deci sir de caractere
//    //  si fiecare sir de caractere trebuie sa aiba nr. maxim de caractere.
//    char s[50][25] = {
//            "mama", "arc","conduce", "paine", "vine"
//    }; // maxim 50 cuvinte de maxim 24 caractere
//    char max1[25], max2[25];
//    int n = 5;
//
//    // lungimea primului cuvant:
////    cout << strlen(s[0]);
//
//    // var. 1
//    if (strlen(s[0]) > strlen(s[1])) {
//        strcpy(max1, s[0]);
//        strcpy(max2, s[1]);
//    } else {
//        strcpy(max1, s[1]);
//        strcpy(max2, s[0]);
//    }
//
//    for(int i = 0; i < n; i++){
//        if (strlen(s[i]) > strlen(max1)) {
//            strcpy(max2, max1);
//            strcpy(max1, s[i]);
//        } else if (strlen(s[i]) > strlen(max2)) {
//            strcpy(max2, s[i]);
//        }
//    }
//    cout << max1 << max2;
//
//}
//
//int main(){
//   char s[50][25] = {
//           "mama", "arc","conduce", "paine", "vine"
//   };
//   int n = 5;
//
//   for( int i = 0; i< n; i++){
//       for( int j = i + 1 ; j < n; j++){
//           // strcmp are la baza ideea de comparator
//           //   valoarea lui este < 0   daca s[i] < s[j]
//           //                     > 0   daca s[i] > s[j]
//           //                     = 0   daca s[i] = s[j]
//           if(strcmp(s[i], s[j]) > 0) {
//               char aux[25];
//               strcpy(aux, s[i]); // aux=s[i];
//               strcpy(s[i], s[j]);
//               strcpy(s[j], aux);
//
//           }
//       }
//   }
////
////   for( int i = 0; i < n; i++){
////       cout << s[i]<<" ";
////   }
//   cout << s[0] << s[1]; // cele mai mici lexicografic :)
//}

// 9
//int main(){
//    char s[50][25]= {
//            "Ana", "Alice", "Mihai", "Maria", "Ion"
//
//    };
//    int n = 5, cnt;
//    cnt =0;
//    // sa numaram cate nume de fete sunt in sir:
//    for(int i = 0; i< n; i++){
//        int ultimaPozitie = strlen(s[i]) - 1;
//        if(s[i][ultimaPozitie] == 'a'|| strcmp(s[i],  "Carmen") == 0 || strcmp(s[i],"Alice")== 0){
//            cnt++;
//        }
//    }
//
//    char max[25];
//    strcpy(max, s[0]);
//    for( int i = 1; i< n; i++){
//        if (strcmp(s[i], max) > 0) {
//            strcpy(max, s[i]);
//        }
//    }
//    for( int i = 0; i < strlen(max); i++){
//        // daca este litera mica:
//        if (max[i] >= 'a' && max[i] <= 'z') {
//            max[i] = max[i] - 'a' + 'A';// inlocuim minuscula cu majuscula
//        }
//    }
//    cout << cnt << endl;
//    cout << max << endl;
//}
//10
//void ultimaSilaba(char *s, char *silaba) {
//    for (int i = strlen(s) - 1; i >= 0; i--) {
//        if (esteVocala(s[i])) {
//            strcpy(silaba, s + i);
//            return;
//        }
//    }
//    // daca n-am gasit vocale, intreg cuvantul este ultimaSilaba
//    strcpy(silaba, s);
//}
//int main(){
//    char s1[25], s2 [25];
//    char silaba1[25], silaba2[25];
//    cin>>s1>>s2;
//
//    // 1 gasim ultima ultimaSilaba pt fiecare cuvant
//
//    // cautam ultima ultimaSilaba
//    ultimaSilaba(s1, silaba1);
//    ultimaSilaba(s2, silaba2);
//
////    cout << silaba1 << ' ' << silaba2;
//    // 2 le comparam
//    if(strcmp(silaba1, silaba2) == 0){
//        cout<< " Rimeaza";
//    }
//}

// Recapitulare

// strategie:
// incepi sa faci 1  de la zero
// si daca vezi ca nu merge (adica dureaza prea mult fara rezultate)
//    atunci poti sa te uiti la rezolvare putin dar clar, si dupa o refaci fara sa te mai uiti la ea


bool vocala(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

bool aparitineSilaba(char s[], char silaba[], int poz) {
    poz = 0;
    for (int i = 0; i < strlen(silaba); i++) {
        if (s[poz + i] != silaba[i]) {
            return false;

        }
    }
    return true;
}

////1
//int main() {
//    char c[256], litera, ultimasilaba [10];
//    int cnt, cntVocale;
//    cin.getline(c, 255);
//    cin>>litera;
//    cin>>ultimasilaba;
////a)
//    cnt = 0;
//    for(int i = 0; i < strlen(c); i++){
//        if( c[i] == litera){
//            cnt++;
//        }
//    }
//
//
//    //b)
//    cntVocale =0;
//     for(int i = 0; i < strlen(c); i++){
//         if( vocala (c[i]) == true ){
//               cntVocale++;
//         }
//     }
//
//    cout << cnt << endl;
//    cout << cntVocale;
//    //c)
//    int cntSilaba = 0;
//
//    if(aparitineSilaba(c,ultimasilaba[silaba]) == true){
//             cntSilaba++;
//         }
//    cout<<cntSilaba;
//}
// 11 12 13

//2
//int main(){
//    char c[10], a;
//    cin.getline(c, 10);
//    cin>>a;
//
//    for(int i =0; i< strlen(c); i++){
//        if(c[i] != a){
//            cout<<c[i];
//        }
//    }
//}


//11
//int main() {
//    char s[20];
//    int i, num;
//
//    cin.getline(s, 20); // 1G11o1L
//
//    for (i = 0; i < strlen(s); i++) {
//        // cum verificam daca un caracter (s[i]) este cifra?
//        if (s[i] >= '0' && s[i] <= '9') {
//            // in primul rand, obtinem numarul
//            num = 0;
//            while (s[i] >= '0' && s[i] <= '9') {
//                num = num * 10 + (s[i] - '0');
//                i++;
//            }
//            // apoi afisam caracter de nr ori
//            for (int j = 0; j < num; j++) {
//                cout << s[i];
//            }
//        }
//    }
//}

//12
bool isDigit(char s) { // functia este conditie, deci putem direct returna raspunsul
    return s >= '0' && s <= '9';
}

//int main() {
//    char s[50];
//    cin.getline(s, 50);
//    int n = strlen(s);
//    for(int i = 0; i< strlen(s); i++){
//        if(isDigit(s[i])){
//            cout << s[i];
//            // este ultima cifra din numar?
//            if (i == n-1 || !isDigit(s[i+1])) {
//                cout << ' ';
//            }
//        }
//    }
//}

// 15

// functie care afiseaza frecventa literelor unui cuvant
// vector de frecventa = un vector care ne spune de cate ori apare fiecare caracter dintr-un cuvant

void afiseazaFrecventa(char s[]) {
    // in realitate este un vector de contori
    int f[26] = {0}; // 26 litere in alfabet

    for (int i = 0; i < strlen(s); ++i) {
        f[s[i] - 'a']++;   // s[i]-'a' cand s[i] este intre a si z da un numar intre 0 si 25
    }

    for (int i = 0; i < 26; ++i) {
        cout << f[i] << ' ';
    }
    cout << endl;
}

void calculeazaFrecventa(char s[], int f[]) {
    // nu putem stii sigur daca f este initializat ={0}
    //  asadar trebuie noi sa facem asta
    for (int i = 0; i < 26; ++i) {
        f[i] = 0;
    }
    for (int i = 0; i < strlen(s); ++i) {
        f[s[i] - 'a']++;
    }
}

bool suntAnagrame(char s1[], char s2[]) {
    // faci de la 0 doi vectori de frecventa
    int f1[26] = {0}, f2[26] = {0};

    calculeazaFrecventa(s1, f1);
    calculeazaFrecventa(s2, f2);

//    for(int i = 0; i< strlen(s1); i++){
//       f1[s1[i] - 'a']++;
//    }
//    for( int j = 0 ; j< strlen(s2); j++){
//        f2[s2[j] - 'a']++;
//    }

    for (int i = 0; i < 26; ++i) {
        if (f1[i] != f2[i]) {
            return false;
        }
    }
    return true;
}

//int main() {
//    char s[10][40] = {"arc","rac","eu","tu", "car"}; //
//    int n = 5;
//
//    for(int i = 1; i<n; i++){
////        afiseazaFrecventa(s[i]);
//        if (suntAnagrame(s[0], s[i])) {
//            cout << s[i] << ' ';
//        }
//
//    }
//}
//16
bool isAlpha(char c) {
    return c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z';
}

//int main() {
//    char s[255], cuvinte[20][40];
//    int cntCuvinte, j;
//    cin.getline(s, 255);
//
//    cntCuvinte = 0;
//    j = 0;
//
//    for (int i = 0; i < strlen(s); i++) {
//        if (isAlpha(s[i]) == true) {
//            // il adaugi la final de
////            cout << s[i];
//
//            cuvinte[cntCuvinte][j] = s[i]; // adaugam inca un caracter in cuvantul curent
//            j++;
//
//            // daca urmatorul caracter nu este alfabetic
//            if (!isAlpha(s[i + 1])) {
////                cout << endl;
//
//                cuvinte[cntCuvinte][j] = '\0';
//                // am terminat de scris cuvantul de pe pozitia cntCuvinte,
//                //  asadar atat cntCuvinte creste, cat si j revina la 0,  urmatorul cuvant
//                j = 0;
//                cntCuvinte++;
//            }
//        }
//    }
//
//    for(int i = 0; i < cntCuvinte; i++) {
//        cout << cuvinte[i] << '\n';
//    }
//}

// 19
//int main(){
//    char s[100][40] = {"ieri", "am", "venit", "devreme"};
//    int n = 4;
//
//
//    for( int i = 0; i< n; i++){
//        for( int j = i + 1; j < n; j++){
//            if(strcmp(s[i], s[j]) > 0) { // s[i] > s[j] alfabetic
//                char s2[40];
//                strcpy(s2, s[i]); // un fel de s2 = s[i];  dar care merge pt siruri de caractere
//                strcpy(s[i], s[j]); // idem s[i] = s[j];
//                strcpy(s[j], s2); // idem s[j] = s2;
//            }
//        }
//    }
//
//    for (int i = 0; i < n; ++i) {
//        cout << s[i] << ' ';
//    }
//}



// Tema
//// 13
//int main(){
//    char s[50];
//    cin.getline(s, 50);
//    int n = strlen(s);
//    for(int i = 0; i< strlen(s); i++){
//        if( isDigit(s[i]) ){
//            }
//
//        }
//
//    }
//
//
//}

// 16 (dar si exercitiul unde extragi numerel) le poti modifica astfel inca sa retii in vector ceea ce ai afisat

// 17 (poti sa lucrezi ca in orice vector


//int main(){
//    char s[255] = "AMC WCDRVAS";
//
//    // int v[1100]  cum cautam o secventa de elemente?
//
//    int iStart, iEnd, iStartMax , iEndMax; // indicii de inceput si final ai secventei
//
//    iStart = 0;
//    iEnd = 0;
//
//    for(int i = 1; i < strlen(s); i++) {
//        // daca sunt in ordine alfabetica
//        if (s[i] > s[iEnd]) { // avem mereu ca 'B' > 'A'    'E' > 'B'
//            iEnd++;
//        }
//        else{
//            // lungimea secventei este de iEnd - iStart + 1  elemente
//            if(iEnd - iStart + 1 > iEndMax - iStartMax + 1){
//                iStartMax = iStart;
//                iEndMax = iEnd;
//            }
//            // sa incepi noua secventa
//            iStart = i;
//            iEnd = i;
//        }
//    }
//
//    for(int i = iStartMax; i <= iEndMax; i++){
//        cout<<s[i];
//    }
//}

// 18
// Spre deosebire de 17, aici trebuie sa testam toate pozitiile posibile pt iStart si iEnd
//  si pentru fiecare pereche iStart, iEnd testam daca avem un palindrom
//
//int main(){
//    int j2,i2, i, j, iMax, jMax;
//    char s[255] = "AM tCOjOC" ;
//    bool palindrom;
//
//    iMax = 0;
//    jMax = 0;
//
//    for(int i = 0; i< strlen(s); i++){
//        for(int j = i+1; j < strlen(s); j++){
//            i2 = i;
//            j2 = j;
//            palindrom = true;
//            while(i2 < j2){
//                if(s[i2] != s[j2]) {
//                    palindrom = false;
//                    break;
//                }
//                i2++;
//                j2--;
//            }
//            if (palindrom && j - i + 1 > jMax - iMax + 1) {
//                jMax = j;
//                iMax = i;
//            }
//        }
//    }
//    for(int i = iMax; i<= jMax; i++){
//        cout<<s[i];
//    }
//}

// 21
//int main(){
//    char s[100] = " w234b5br6779";
//
//    for( int i =0; i< strlen(s); i++){
//        if('0'<= s[i] && s[i] <= '9'&& '0'<=s[i+1] && s[i+1] <= '9'){
//            cout<< s[i]<<s[i+1]<<" ";
//        }
//    }
//}
// (21) CONTINUARE
// Deoarece exercitiul a fost prea usor :), ne dorim sa calculam suma elementelor, si sa le si afisam
// Practic, vom extrage numarul intr-un intreg si il vom aduna unei sume a tuturor numerelor.

//int main() {
//    char s[100] = " w234b5br6779";
//    int nr, sum, tens, units;
//
//    sum = 0;
//
//    for (int i = 0; i < strlen(s); i++) {
//        if ('0' <= s[i] && s[i] <= '9' && '0' <= s[i + 1] && s[i + 1] <= '9') {
//            cout << s[i] << s[i + 1] << " ";
//            tens = s[i] - '0';
//            units = s[i + 1] - '0';
//            nr = tens * 10 + units;
//            sum += nr;
//            // la fel cum aflam si pozitia in alfabet ('c' - 'a' ne da 2)
//            //  aflam si numarul ('3' - '0' ne da chiar 3)
//        }
//    }
//    cout << sum << endl;
//}




// 19

//int main(){
//    int n = 4;
//    char s[100][30] = {"ieri", "am", "venit", "devreme"};
//
//    for( int i = 0; i< n; i++){
//        for(int j = i +1; j< n; j++){
//            /* TODO Cand vrem sa comparam lexicografic 2 cuvinte/ string-uri
//             *  strcmp(s1, s2) < 0   daca s1<s2
//             *  strcmp(s1, s2) == 0   daca s1==s2
//             *  strcmp(s1, s2) > 0   daca s1>s2
//             */
//            if(strcmp(s[i], s[j]) > 0){
//                char tmp[30];
//                strcpy(tmp, s[i]); // o copiere similara cu tmp = s[i];
//                strcpy(s[i], s[j]);
//                strcpy(s[j], tmp);
//            }
//        }
//    }
//
//    for( int i = 0; i< n ; i++){
//        cout<<s[i]<<" ";
//    }
//}

// 20
//int main() {
//    char s[256] = "Am, venit!...spune el";
//    char sep[] = ", !.;";
//
//    int iStart, iEnd, i2, j2;
//    bool amAlesPrima;
//    // strchr -> cauta un caracter intr-un sir si ne spune daca l-a gasit
//
//    amAlesPrima = false;
//    for (int i = 0; i < strlen(s); i++) {
//        if (strchr(sep, s[i])) {
//            // s[i] este separator
//
//            // afisam cuvantul dintre iStart si iEnd
//            if (amAlesPrima == true) {
////                for (int j = iStart; j <= iEnd; ++j) {
////                    cout << s[j];
////                }
//                i2 = iStart;
//                j2 = iEnd;
//                while (i2 < j2) {
//                    swap(s[i2], s[j2]);
//                    i2++;
//                    j2--;
//                }
//            }
//            amAlesPrima = false;
//        } else {
//            // este caracter alfabetic
//            if (!amAlesPrima) {
//                iStart = i;
//                iEnd = i;
//                amAlesPrima = true;
//            } else {
//                iEnd = i;
//            }
//        }
//    }
//    // afisam cuvantul dintre iStart si iEnd
//    if (amAlesPrima == true) {
////        for (int j = iStart; j <= iEnd; ++j) {
////            cout << s[j];
////        }
//
//        i2 = iStart;
//        j2 = iEnd;
//        while (i2 < j2) {
//            swap(s[i2], s[j2]);
//            i2++;
//            j2--;
//        }
//    }
//    cout << s;
//}


// 22, 23, 26
////22
//bool isNumber (char s) {
//     return '0' <= s && s <= '9';
//}
//int numarReal(char s) {
//    int num = 0;
//    for (int i = 0; i < strlen(s); i++){
//
//    }
//    while (num < 99){
//        num = s
//    }
//}

// 1. ne gandim la ea ca la o problema de a demonstra o proprietate (precum estePrim, estePalindrom)
//    Presupui ca ar fi nr. real, dar incercam sa demonstram ca nu este
//      daca nu are '.' nu este, si nici daca are mai mult decat un '.' tot nu este
//      in afara de '.' trebuie sa contina doar  => daca orice car. este diferit de '.' si 01..9
//      caracterul '.' nu trebuie sa fie primul sau ultimul din sir

bool esteReprReala(char s[]) {
    // 1 numaram de cate ori apare '.
    int cnt = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '.') {
            cnt++;
        }
    }
    if (cnt != 1) {
        return false;
    }

    // 2 cautam car. diferite de acestea: .01234567
    for (int i = 0; i < strlen(s); i++) {
        if (!strchr("0.123456789", s[i])) {
            return false;
        }
    }

    // 3 verificam daca nu cumva '.'ul este situat la inceput sau final
    if ('.' == s[0] || '.' == s[strlen(s) - 1]) {
        return false;
    }

    return true;
}

//int main(){
//
//    char s[10] = "31.234";
//
//    if(esteReprReala(s) == true){
//            cout<<"DA";
//        }
//    else {
//        cout<<"NU";
//    }
//}
bool esteVvocala(char s) {
    return s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u';
}

//23
//int main() {
//    char s[10] = "moale";
//    int cnt = 0;
//    char s2[10];
//    char s3[10];
//
//    for (int i = 0; i < strlen(s); i++) {
//        if (esteVvocala(s[i])) {
//            cnt++;
//        }
//    }
//    cout << cnt << ' ';
//    for(int i = 0; i < strlen(s); i++){
//        if(!esteVvocala(s[i])){
//            cout<<s[i];
//        }
//    }
//}


//26

//int main() {
//    char s[100]= "caracatita";
//    int i = 0;
//    int j = 0;
//
//    for(int i = 1; i < strlen(s) / 2; i++){
//        for(int j = 0; j < i; j++) {
//            cout << s[j];
//        }
//
//        // a doua jumatate:
//        for(int j = strlen(s) - i; j < strlen(s); j++) {
//            cout<<s[j];
//        }
//        cout << endl;
//    }
//}

// Incepem sa folosim functia strtok
// string tokenization
// token? posibile token-uri sunt words, sentences, even number inside a string

// strtok ne ofera o cale usoara (mai usoara pt ca este o metoda repetitiva, o folosi mmereu la fel)
//  de a parcurge cuvintele/afirmatiile etc dintr-un string

//// 25
//int main() {
//    char s[100] = "Ce spui ......?, a intrebat el!", cpy[100];
//    char sep[100] = " .?,!;:";
//
//    char v[50][25];
//    int n;
//
//    n = 0;
//
//    strcpy(cpy, s);
//    char *p;
//    p = strtok(cpy, sep);
//    while (p != nullptr) {
////        cout << p << endl;
//        // aici poti folosi cuvintele in orice mod posibil :D
//        strcpy(v[n],p);
//        n++;
//
//        p = strtok(nullptr, sep);
//    }
//
//    char seps[50][25] = {""};
//    int m = 0;
//    strcpy(cpy, s);
//    // TODO este posibil sa exista separator si inainte de text !!!
//    if (strchr("abcdefghijklmnopqrstubwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", s[0])) {
//        m = 1; // astfel incat primul separator sa ramana gol ("")
//    }
//    p = strtok(cpy, "abcdefghijklmnopqrstubwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
//    while (p != nullptr) {
////        cout << p << endl;
//        // aici poti folosi cuvintele in orice mod posibil :D
//        strcpy(seps[m],p);
//        m++;
//
//        p = strtok(nullptr, "abcdefghijklmnopqrstubwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
//    }
//
//
//    for(int i = 0; i < n; i++){
//        for(int j = i + 1; j< n; j++){
//            if(strcmp(v[i],v[j]) > 0) {
//                char k[100];
//                strcpy(k,v[i]);
//                strcpy(v[i],v[j]);
//                strcpy(v[j],k);
//            }
//        }
//    }
//
////    // metoda fara concatenare
////    cout << seps[0];
////    for(int i = 0; i < n; i++) {
////        cout << v[i] << seps[i+1];
////    }
//    // metoda cu concateare
//    strcpy(s, seps[0]);
//    for(int i = 0; i < n; i++) {
//        strcat(s, v[i]);
//        strcat(s, seps[i+1]);
//    }
//    cout << s;
//
//    return 0;
//}

// 27

//    strcpy(cpy, s);
//    char *p;
//    p = strtok(cpy, sep);
//    while (p != nullptr) {
////        cout << p << endl;
//        // aici poti folosi cuvintele in orice mod posibil :D
//        strcpy(v[n],p);
//        n++;
//
//        p = strtok(nullptr, sep);
//    }
//

//int main() {
//    ifstream fin;  // ifstream from input file stream, such as istream from simple input stream
//    fin.open("../in.txt"); // ../ inseamna directorul parinte
//    // citim fiecare linie din fisier:
//    char line[100], word[100];
//    char sep[10] = ".!?*\" ,";
//    cin>>word;
//    int cnt =0;
//    while (fin.getline(line, 99)) {
//        cout << line << endl;
//        // pentru fiecare linie, parcurgem cuvintele
//        char *p;
//        p = strtok(line,sep);
//        while(p != nullptr) {
//            // p este cuvantul actual
//            if(strcmp(p,word) == 0){
//                cnt++;
//            }
//            p = strtok(nullptr, sep);
//        }
//    }
//    cout<<cnt;
//    fin.close();
//}

// 32, dar numai pentru o propozitie
void eliminaPerechiVocale(char s[]) {
    char c[10] ="aeiou";
    for(int i = 0; i<strlen(s)-1; i++) {
        if (strchr(c, s[i]) && strchr(c, s[i+1])) {
            strcpy(s + i, s + i + 2);
            i--;
        }
    }
}
//int main(){
//    char c[50][100] = {"Mama_Are_Mere", "Maine_este_o_noua_zi"};
//    int n = 2;
//
//    for(int i = 0; i< n;i++) {
//        eliminaPerechiVocale(c[i]);
//        cout << c[i] << endl;
//        for (int j = 0; j < n; j++) {
//            eliminaPerechiVocale(c[j]);
//            cout << c[j]<<endl;
//        }
//    }
//    // TODO ca tema va trebui sa cauti si maximul si sa faci citirea din fisier (ca mai sus)
//}



// TODO discutie despre extragerea cuvintelor din text
// Complexe: 14, 24, 29, completezi 32

//14
//int main(){
//    char s[100] ="are mere si pere";
//
//}
////24
//int main() {
//    char s[250] = {"-Ai venit?  intreaba Alina"}, cpy[100];
//    char sep[10] = "! ?-";
//
//    char v[50][25];
//    int n;
//
//    n = 0;
//
//    strcpy(cpy, s);
//    char *p;
//    p = strtok(cpy, sep);
//
//    while (p != nullptr) {
//        // inainte de afisare, transformam in majuscula prima litera a cuvantului din p
//
//        // TODO cand lucrezi cu p te poti gandi la el ca la orice sir de caractere
//        // p[i] este caracterul de pe pozitia i
//        // p+i este sirul incepand cu pozitia i
//        // si poti folosi p in functii string
//
//        // verificam daca p[0] este litera mica:
//        if(p[0] >= 'a' &&  p[0] <= 'z'){
//            p[0] = p[0] - 'a' + 'A';
//        }
//
//        cout << p << endl;
//
//        strcpy(v[n], p);
//        n++;
//
//        p = strtok(nullptr, sep);
//
//    }
//
//}
//29

//int main() {
//    char s[50] = "Noi am gandit la fel ca voi ...!",cpy[50], *ptr;
//    int n, p = 3, pozitiaInSirACuvantului, pozitiaSeparatori, i, cntSeparatori;
//
//    char v[20][10];
//    char sep[10] = ".! ";
//    n = 0;
//    // !!! cand folosim strtok, pierdem unii dintre separatori din sirul
//    //     dar ca parametru, din acest motiv facem o copie a lui.
//    strcpy(cpy,s);
//    // folosim ptr pentru a parcurge cuvintele.
//
//    ptr = strtok(cpy, sep);
//
//    while (ptr != nullptr) {
////        cout << ptr << endl;
//
//        // daca cuvantul din ptr are exact ptr litere, nu il vom copia
//        if (strlen(ptr) != p) {
//            strcpy(v[n], ptr);
//            n++;
//            // in paralel, copiem si separatori de dupa cuvant
//            pozitiaInSirACuvantului = ptr - cpy;
////            cout << s + pozitiaInSirACuvantului << endl;
//            pozitiaSeparatori = pozitiaInSirACuvantului + strlen(ptr);
//            // vom concatena lui v[n-1] toti separatorii de dupa cuvant
//            i = pozitiaSeparatori;
//            cntSeparatori = 0;
//            while (!isAlpha(s[i])) {
//                cntSeparatori++;
//                i++;
//            }
//            strncat(v[n-1], s + pozitiaSeparatori, cntSeparatori);
//        }
//
//        ptr = strtok(nullptr, sep);
//    }
//    // ultimului cuvant (v[n-1]) ii vom concatena separatorii de la final de sir
//    for (i = strlen(s) - 1; i >= 0; i--) {
//        if (isAlpha(s[i])) {
//            i++; // ca i sa ramana la inceput de separatori
//            break;
//        }
//    }
//    cout << "\"" << s + i << '"' << endl;
//    strcat(v[n-1], s+i);
//
//    for(int i =0; i<n;i++) {
//        cout<<v[i];
//    }
//}

// 30 31 32 33 pot fi facute fara strtok.
// 31 este practic la fel ca aceiasi problema de la vectori.
// 30 teoretic obtii cu
// 32 elimini folosind strcpy(s+i, s+i+2) cele doua vocale consecutive.
// 33

//31
//int main(){
//    char s[5 0] ={" mamaie,macara"};
//    char v[50][25];
//
//    for(int i = 0; i < strlen(s); i++) {
//        for (int j = i + 1; j < strlen(s); j++) {
//            if ( v[i] == v[j] ) {
//                char k[100];
//                strcpy(k, v[i]);
//                strcpy(v[i], v[j]);
//                strcpy(v[j], k);
//            }
//        }
//    }
//
//}
