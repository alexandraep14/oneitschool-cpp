#include <string>
#include <cstring>
#include <iostream>

using namespace std;

void demo() {
    // string este un tip de date precum float, int..
    // dar mai complex, pt ca in afara de a retine un sir de caractere,
    // el are si metode (cum aveam pana acum functii) care se aplica (.)
    // direct pe variabila.

    string s = "abc";

    // pentru concatenare, putem folosi +
    cout << s + "de" << endl;
    // si logic, pt a concatena lui s si sa ramana modificat:
    s += "de";
    cout << s << endl;

    // pentru a concatena cu intregi, float
    //  este nevoie de functia to_string (inclusa tot in <string>)
    cout << s + to_string(2) << endl;


    string s2 = to_string(2.345);
    cout << s2 << endl;

    // in continuare putem folosi, desi nu este array, []
    cout << s2[1] << endl;
    // TODO nu mai putem folosi s2 + i, deoarece nu este pointer

    // TODO Metodele sunt:

    // noutate: putem extrage un substring
    string s3 = s2.substr(1, 3);
    cout << s3; // 3 caractere, incepand cu pozitia 1


    // funcii de cautare (cautam un string sau un caracter)
    string s4 = "Ana are mere";
    // find() gaseste prima pozitie pe care apare
    cout << s4.find('a') << endl; // putem cauta fie un caracter, fie un string
    cout << s4.find("are") << endl; // pozitia de inceput a string-ului gasit
    cout << s4.find('z') << endl; // da cel mai mare nr. de tip unsigned long long
    if (s4.find('z') == string::npos) { // npos=constanta care traieste in namespace-ul string
        cout << "Caracterul z nu a fost gasit" << endl;
    }
    // cand vrem sa cautam incepand cu o pozitie anume,
    //  punem si al doilea argument

    cout << s4.front() << "->" << s4.back() << endl;
    // front()=primul caracter, back()=ultimul caracter

    // dar cum aflam cate caracterul are sirul?
    cout << "Sirul " + s4 + " are " + to_string(s4.size()) + " caractere" << endl;


    // Cum gasim si afisam toate silabele dintr-un sir
    char cs[100] = "Ana are mere", syllable[] = "re";
    string s5 = "Ana are mere";
    // pt C-style strings
    for (int i = 0; i < strlen(cs); ++i) {
        if (strstr(cs + i, syllable) == cs + i) {
            // afisam pozitia
            cout << i << ' ';
        }
    }
    cout << endl;
    // si pentru strings
    int pos = s5.find(syllable); // prima cautare, de pe pozitia 0
    while (pos != string::npos) {
        cout << pos << ' ';
        pos = s5.find(syllable, pos + 1); // incepand cu pozitia pos+1
    }

    string s6 = "abc";
    s6.erase(1); // sterge totul incepand cu pozitia 1
    cout << s6 << endl;
    // daca vrem sa stergem un substring din string, folosim tot erase:
    s6 = "0123456789";
    s6.erase(s6.begin() + 2, s6.begin() + 5);
    cout << s6 << endl;
}

// 1.
bool esteVocala(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
           || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}
//int main() {
//    string s, silaba; // textul nostru, care va fi pe o intreaga linie:
//    getline(cin, s); // getline are nevoie de consola de de unde citeste, si de string-ul unde citeste
//    char c;
//    // pt cuvinte, este suficient cin >>
//    cin >> silaba >> c;
//
//    // a)
//    int cnt = count(s.begin(), s.end(), c);
//    cout << cnt << endl;
//
//    // c)
//
//    // cu 10*n pasi (pt ca apelam de 10 ori)
//    string vocale = "aeiouAEIOU";
//    int cntVocale = 0;
//    for (char vocala: vocale) { // TODO cum parcurgem fiecare caracter dintr-un string
//        cntVocale += std::count(s.begin(), s.end(), vocala);
//    }
//    cout << cntVocale << endl;
////    cout << std::count_if(s.begin(), s.end(), [&](const auto &item) {
////        if (item == 'a' || item == 'e' || item == 'i' || item == 'o' || item == 'u'
////            || item == 'A' || item == 'E' || item == 'I' || item == 'O' || item == 'U') {
////            return true;
////        } else {
////            return false;
////        }
////    });
////    // TODO SAU:
////    cout << std::count_if(s.begin(), s.end(), esteVocala) << endl;
//    int cntSilabe;
//    cntSilabe = 0;
//    int pos = s.find(silaba); // prima cautare, de pe pozitia 0
//    while (pos != string::npos) {
//        //cout << pos << ' ';
//        pos = s.find(silaba, pos + 1); // incepand cu pozitia pos+1
//        cntSilabe++;
//    }
//    cout<<cntSilabe;
//}

//2
//int main() {
////    demo();
//    string s;
//    char primul;
//
//    getline(cin, s);
//    primul = s[0];

//    // s.erase merge similar cu strcpy(s+i, s+i+1)
//    for (int i = 0; i < s.size(); i++) {
//        if (s[i] == primul) {
//            s.erase(s.begin() + i, s.begin() + i + 1);
//            i--; // pt a nu sari caracterul care acum a fost copiat pe pozitia i
//        }
//    }
//    cout << s << endl;

//    std::remove_if(s.begin(), s.end(), [primul](char item) { return item == primul; });
//    std::remove_copy_if(s.begin(), s.end(), copie.begin(), [primul](char item) { return item == primul; });
//}

// TODO poti folosi <, >, >= pt comparare lexicografica
// 3-7
//3
//int main() {
//    long long a;
//    string s;
//    getline(cin, s);
//    int i = 0;
//    int pos = 0;
//    while (s.size() > 2) {
//
////        s.front()--; // primul element
////        s.back()--
//        s.erase(0, 1);
//        s.erase(s.size() - 1, 1);
//        cout << s << " ";
//        //nu stiu ce si cum sa retin ce a rams si dupa ce am s-a eliminat
//
//    }
//
//}
//5
//bool isAlpha(string c) {
//    return c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z';
//}
//int main(){
//  string s,c,d;
//  getline(cin,s);
//
//    c = "abcdefghijklmnopqrstxyz";
//    d = "ABCDEFGHIJKLMNOPQRSTXYZ";
//            std::replace( s.begin(), s.end(), c,d );
//
//cout<<s;
//  }
int main() {
    int a, max;
    cin>>a;
    max = 0;

    while( 0 < a) {
        if (max < a) {
            max = a;

        }
    }
    cout<<max;
}







///// TODO namespaces:
//namespace notStd {
//
//    int main() {
//        cout << "Alt main" << endl;
//        return 0;
//    }
//
//}
//
//int main() {
//    // TODO scopul namespace este ca in acest mod putem avea
//    //  mai multe functii cu acelasi nume, dar cu prefix (namespace) diferit
//
//    main();
//    notStd::main();
//    std::cout << "Main-ul principal";
//    return 0;
// }

// Ctrl+S




