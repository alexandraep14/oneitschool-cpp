//#include <iostream>
//
//using namespace std;
//
//
//// (*) Sa cream o functie care numara de cate ori apare o cifra data intr-un numar dat
//
//// Functie = pt practica noastra - un cod separat in care primim direct input-ul (so we don't use cin>>) si spunem/afisam rezultatuld
////																											cel mai des il spunem, nu afisam, ca sa poata fi folosit in main() rezultatul
//
//// (*) Input: un int n, si un int cif
////	  Output: numarul de cifre, deci un intreg
//
////int countDigit(int n, int digit) {
////	int cnt = 0;
////	while (n > 0) {
////		if (n % 10 == digit) {
////			cnt++;
////		}
////		n /= 10;
////	}
//
///*
//    Imagine that the function goes out to solve a problem (let's say getting the groceries :)).)
//    When it "returns" home it must bring something. This is what return does, says what it ultimately computed for us.
//*/
//
////return cnt; // return  este instructiunea folosita pt a spune care e rezultatul functiei
///*
//    spre exemplu sqrt(3) este unde il folosim inlucuit cu 1.73... asta inseamna ca functia sqrt se termina prin instructiunea return 1.73.. (practic o var. ca contine aceasca valoare)
//*/
//
////int main() {
////	cout << countDigit(123452, 2); // linia asta va afisa doi pe ecran
////
////}
//
//
////int main() {
////	// poti refolosi si aici codul, fara copy paste, fara sa te incurci in multe nume de variabile
////	//	poti sa folosesti un int n aici, pt ca este independent de acela din countDigit (adica ii altul)
////
////	int n, cif;
////	cin >> n >> cif;
////	cout << countDigit(n, cif) << endl; // alt avantaj este ca n-ul de aici ramane nemodificat, deoarece functia foloseste alta variabila
////	cout << n << ' ' << cif << endl;
////}
//
//// (**) O alta functie utila va fi sa raspundem daca un numar este prim
////		Functia primeste (input) un numar intreg
////		Functie returneaza (output) daca numarul este prim sau nu (da sau nu inseamna bool)
//
//// are you still in your prime?
//// maybe it's just the competition and you don't like these numbers
//
////1 2 3 4 5 6 /// return is the last (executed) statement from the function. i.e. if n%i==0 the function stops here and the result is false. ALSO this means that the return after the true is not executed
////	}
////	}
//
//// executed only when no other return executes
//// the program gets here only when n>=2 and n doesn's have divisors between 2 and n-1
////return true;
////}
//
////int main() {
////
////	// Sa se afiseze cifrele prime ale unui numar :)
////	int n, lastDigit;
////	cin >> n;
////
////	while (n > 0) {
////		lastDigit = n % 10;
////		if (isPrime(lastDigit) == true) {
////			cout << lastDigit << ' ';
////		}
////		n /= 10;
////	}
////}
//
//
//// 40
//
//// calculam primele doua cifre ale lui n
//// testam daca numarul este perfect, si daca da afisam cate cifre are n
////										daca nu este perfect, afisam doar cate cifre pare are n
//
//// Acum putem folosi functii
//// Spre exemplu, avem mai sus functia countDigit care nu ne ajuta cu nimic :)),
////	Dar putem noi face functii pentru:
////	* a calcula numarul din primele doua cifre ale lui n
////	* sa calculeze cate cifre pare are
////	* sa verifice (true/false) checks, daca un numar este perfect
////	* sa calculeze cate cifre are
////
////int firstTwoDigits(int n) {
////	// eliminam ultima cifra pana ramanem cu primele 2
////	while (n >= 100) {
////		n /= 10;
////	}
////	// returnam rezultatul
////	return n;
////}
////
////bool isPerfect(int n) {
////	int sum = 0;
////	for (int i = 1; i < n; i++) {
////		if (n%i == 0) {
////			sum += i;
////		}
////	}
////	if (n == sum) {
////		return true;
////	}
////	else {
////		return false;
////	}
////}
////int cntDigits(int n) {
////	int cnt = 0;
////	while (n > 0) {
////		int lastDigits = n % 10;
////		n /= 10;
////		 cnt += 1;
////	}
////	return cnt;
////}
////int cntEven(int n) {
////	int cnt= 0;
////	while (n > 0) {
////		int lastDigit = n % 10;
////		n /= 10;
////		if (lastDigit % 2 == 0) {
////			cnt += 1;
////		}
////
////	}
////	return cnt;
////}
////
////int main() {
////	int n, firstDigits;
////
////	cin >> n;
////
////	firstDigits = firstTwoDigits(n);
////	if (isPerfect(firstDigits) == true) {
////		cout << cntDigits(n);
////	}
////	else {
////		cout << cntEven(n);
////	}
////}
//
//// In mod amuzant, poti incepe cu 46:
//// * functie care verifica daca toate cifrele unui numar sunt in ordine crescatoare
//// * functie care verifica daca toate cifrele unui numar sunt in ordine descrescatoare
//
//// hint compari n%10 cu n/10%10,   cat timp are cel putin 2 cifre
////...ok or not OK?
//
////// si in main poti scrie:
////bool suntCrescatoare(int n) {
////	while (n < 100000000) {//??
////
////		if (n % 10 > n / 10 % 10) {
////			return true;
////		}
////	}
////}
////bool suntDescrescatoare(int n) {
////	while (n <= 100000000) {//??
////
////		if (n%10 < n / 10 % 10 ) {
////			n /= 10;
////
////		}
////	}
////	return true;
////
////	//nu inteleg de ce nu e true 4321 1(n%10)<2(n/10%10)
////}
////int main() {
////	int n;
////
////	cin >> n;
////
////	if (suntCrescatoare(n) == true || suntDescrescatoare(n) == true) {
////		cout << "bine ordonate" << endl;
////}//123 1<2<3 3 >2       4321 1<2
////}
//
//// 41 (fct. care calculeaza cati divizori are un numar)
//// 42 (refaci isPrime si vezi ce poti face)
//// 44 (functie isPrime si functie pt numarul de cifre ale unui numar(am facut deja))
//// 45 (functie care verifica daca doua numere intregi sunt prime intre ele.
////		doua numere intregi sunt prime intre ele daca n-au divizori comuni != 1
////	9 si  10 n-au divizori comuni mai mare decat 1 => 9 si 10 sunt prime intre ele
////	9 si 6 au divizor comun pe 3    =>    nu sunt prime intre ele
//
//
//////41
////determina numarul de divizori ai numarului num
//int countDivisors(int num) {
//    int cnt = 0;
//    for (int d = 1; d <= num; d++) {
//        if (num % d == 0) {
//            cnt += 1;
//        }
//    }
//    return cnt;
//}
//
////int main() {
////	int n, num, maxCnt, maxNum; // maxNum is the number with most divisors, as denoted by maxCnt
////	//								adica maxNum este numarul cu maxCnt divizori
////	cin >> n;
////
////	cout << "Introduceti sirul de  numere :";
////	maxCnt = 0;
////	for (int i = 1; i <= n; i++) {
////		cin >> num;
////
////		if (countDivisors(num) > maxCnt) {
////			maxCnt = countDivisors(num);
////			maxNum = num; // pt ca acum num are numarul maxim de divizori
////		}
////	}
////	cout << "Numarul cu cei mai multi divizori este: " << maxNum <<endl;
////}
//
////42
///*
//6
//19 2 27 31 9 31
//7
//19 2 27 31 9 31 41
//*/
//// 42
////int main() {
////	int n, num, max, cnt;
////	cin >> n;
////
////	max = 0;
////	for (int i = 1; i <= n; i++) {
////		cin >> num;
////		if (isPrime(num) && num > max) {
////			max = num;
////			cnt = 1;// e prima data cand gasesti un numar atat de mare, deci o singura aparitie momentan
////		}
////		else if (isPrime(num) && num == max) {
////			cnt++;
////		}
////	}
////	// Controlul cade :), Ctrl+K+D :)   ARANJAM CODUL
////
////	cout << cnt;
////}
//
////44
//int cntDigits(int num) {
//    int cnt = 0;
//    while (num > 0) {
//        int lastDigits = num % 10;
//        num /= 10;
//        cnt += 1;
//    }
//    return cnt;
//}
//
////bool isPrime(int num) {
////	if (num < 2) {
////		return false;
////	}
////
////	for (int i = 2; i <= num - 1; i++) {
////		if (num%i == 0) {
////			return false;
////		}
////	}
////	return true;
////}
////int main() {
////	int n, num, cnt;
////	cin >> n;
////
////	cnt = 0;
////	for (int i = 1; i <= n; i++) {
////		cin >> num;
////		if (isPrime(num) == true) {
////			//cout << cntDigits(num)<<" "; // but whose digits?
////			cnt += cntDigits(num);
////		}
////	}
////	// and the output is:
////	cout << cnt;
////}
////45
//// Euclid?
//// :'(
//int cmmdc(int a, int b) {
//    // mai simplu:
//    //	cat timp a diferit de b, din numarul mai mare il scadem pe ala mai mic
//    //	rezultatul va fi numarul final, cand a si b sunt egale
//    while (a != b) {
//        if (a > b) {
//            a = a - b;
//        } else {
//            //if (b > a) {
//            b = b - a;
//
//            //}
//        }
//    }
//    return a; //sau return b
//}
//
//bool primeIntreEle(int a, int b) {
//    return (cmmdc(a, b) == 1); // deoarece folosim ==, returneaza true/false
//}
////int main() {
////	int n, a, b;
////	cin >> n;
////
////	for (a = 1; a <= n; a++) {
////		for (b = a+1; b <= n; b++) {
////			if (primeIntreEle(a, b) == true) {
////				cout << a << ' ' << b << endl;
////			}
////		}
////	}
////}
//
////46
//bool crescator(int n) {
//    // 2245 => true
//    // 2219 => false
//    while (n > 9) {
//        int lastDigit = n % 10;
//        n /= 10;
//        // daca cifrele nu sunt in ordinea ceruta
//        if (n % 10 > lastDigit) { // DAR AI GASIT 2 CIFRE DESCRESCATOARE => false
//            return false;
//        }
//    }
//    return true;
//}
//
//bool descrescator(int n) {
//    // 2245 => true
//    // 2219 => false
//    while (n > 9) {
//        int lastDigit = n % 10;
//        n /= 10;
//        // daca cifrele nu sunt in ordinea ceruta
//        if (n % 10 < lastDigit) { // DAR AI GASIT 2 CIFRE CRESCATOARE => false
//            return false;
//        }
//    }
//    return true;
//}
//
//bool bineOrdonat(int n) {
//    return crescator(n) || descrescator(n);
//    // 2245 => true
//    // 2219 => false
//
//    //bool crescatoare = false;
//    //bool descrescatoare = false;
//    //while (n > 9) {
//    //	int lastDigit = n % 10;
//    //	n /= 10;
//    //	// daca cifrele nu sunt in ordinea ceruta
//    //	if (n % 10 > lastDigit) { // 21
//    //		if (crescatoare == true) {
//    //			return false;
//    //		}
//    //		descrescatoare = true;
//    //	}
//    //	else if (n % 10 < lastDigit) {
//    //		if (descrescatoare == true) {
//    //			return false;
//    //		}
//    //		crescatoare = true;
//    //	}
//    //}
//    //return true;
//}
////46
////int main() {
////	int n;
////	cin >> n;
////
////	if (bineOrdonat(n) == true) {
////		cout << "Bine ordonate";
////	}
////	else {
////		cout << "Nu sunt bine ordonate";
////	}
////
////	return 0;
////}
//
//
////52
////:)
////int main() {
////	int n, a, b, cntAfisate ;
////	cin >> n;
////
////	cntAfisate = 0;
////	a = 3;
////	while (cntAfisate != n) {
////		b = a + 2;
////		if (isPrime(a)==true && isPrime(b)==true){
////			cntAfisate++;
////			cout << a << " " << b << endl;
////		}
////		a += 2;
////	}
////}
//
//// 2	= 2
//// 2*2	= 4
//// 4*2	= 8
//// 8 *2 = 16
//// 6 *2 = 12
////int main() {
////	// aici vom lucra mereu doar cu ultima cifra a produsului
////	int a, n, cif, lastDigitA;
////	cin >> a >> n;
////	lastDigitA = a % 10;
////
////	cif = 1;
////	for (int i = 1; i <= n; i++) {
////		cif = cif * lastDigitA;
////		cif = cif % 10; // mereu folosim doar ultima cifra din produs
////	}
////
////	cout << cif << endl;
////}
//
//
//
//// 48
///*
//Ideea este ca 2 are numarul de ordine 1 si suma cifrelor 1,
//	101 are nr de ordine 2 si suma cifrelor 2
//
//	adica pe scurt 2, 101, 23, 3001, 234 ai nr. de ordine 1,2,3,4,5
//
//	iar pentru suma cifrelor poti face o functie
//
//*/
//// arrays :)
//// 47 -> poti cauta pe net ce mai insemna factori si descompunere
//
///// the struggle is real :)
//
//// 48
////int sumaCifrelor(int num) {
////	int lastDigit,sum;
////	sum = 0;
////	while(num>0){
////		lastDigit = num % 10;
////		num /= 10;
////		sum += lastDigit;
////	}
////	return sum;
////}
////int main() {
////	int n,num,cnt;
////	cin >> n;
////
////	// numar ordine = al catelea citit de la tastatura
////	cnt = 0;
////	for (int i = 1; i <= n; i++) { // numarul de ordine ii chiar i
////		cin >> num;
////		if (sumaCifrelor(num) == i) {
////			cnt += 1;
////
////		}
////	}
////	cout << cnt;
////}
//
//// 47
////	240=2*2*2*2*3*5  // adica 240 e produs de nr. prime
//// Def. Descumpenerea in factori primi arata asa:
//// 240=2^4 * 3^1 * 5^1     2,3,5 sunt factorii primi, iar 4,1,1 sunt puterile la care apar
////		in descompunere
//
//int putereaFactorului(int n, int d) {
//    // egal la ce putere putem ridica pe d astfel incat sa ramana divizor al lui n
//    //	putere cat mai mare
//    // e.g.: n=240, d=2   si vedem ca si 2*2 divide, si 4*2 divide si 8*2 divide, dar 16*2 nu mai divide
//    //	asadar revenim la 8*2, care este rezultatul
//
//    int dCopy = d, put = 1;
//    while (n % (d * dCopy) == 0) { // cat timp d ramane divizor si daca-l mai inmultim
//        d *= dCopy;
//        put += 1;
//    }
//    return put;
//}
////int main() {
////	int n;
////	cin >> n;
////
////	/// factori primi = divizori ai lui n care sunt si primi
////	for (int d = 1; d <= n; d++) {
////		if (n%d == 0 && isPrime(d) == true) {
////			cout << d << " exponent " << putereaFactorului(n, d) << endl;
////		}
////	}
////}
//
//// 49 facem si alta varianta pt factori primi:
//
//// NOUTATE pt functii:
//int putereFactor(int &num, int d) { // output, adica il punem pe n ca parametru de iesire, ca sa-l modifice
//
//    int cnt = 0;
//    // aflam de care ori se imparte num la d:
//
//    while (num % d == 0) {// cat timp num se imparte la d, il impartim si contorizam
//        cnt += 1;
//        num /= d;
//    }
//
//    return cnt;
//}
////
////int main() {
////	int n, p, a, b;
////	cin >> n;
////
////	cin >> a >> b;
////
////	for (int d = 2; d <= n; d++) {
////		if (n%d == 0) {
////			p = putereFactor(n, d); // aici si n este modificat, prin a-l imparti la d de cate ori se poate
////			if (a <= d && d<=b) { // ordinea a <= d <=  b
////				cout << d << " exponent " << p << endl;
////			}
////		}
////	}
////
////
////	/*
////	d	n	p					240 120 60 30 15
////	2	240	-
////	2	15	4
////	3	5	1
////
////	// Scopul este ca, daca vom imparti pe n pe parcurs ce gasim factori primi,
////	//	nu mai trebuie sa verificam daca d este prim
////
////	*/
////
////	// 240 are divizor si pe 6, care nu-i prim. Pai daca il imparti pe 240 la 2 cat poti
////	//	nu mai ramane niciun 2 in descumpenerea lui, deci n-are cum sa se mai imparta la 6
////	//	nici la 12, 24 pt ca toate sunt pare ddar nu mai avem 2 in descompunere
////}
//
//
//
//
////int main() {
////	int k, a,b,max,maxA,maxB ;
////	cin >> k;
////
////	max = 0;
////	for (int i = 1; i <= k; i++) {
////		cin >> a >> b;
////		if (b - a + 1 > max) {
////			max = b - a + 1;
////			maxA = a;
////			maxB = b;
////		}
////	}
////	cout << maxA<<" " << maxB;
////}
//
//
//// Mark Twain? The prince and the pauper
//// 53, 54, 52, 55 (vezi problema 9 cu stelute), 58
//// daca e dificil, dar mai ai inca timp, poti incerca pe site-uri mai romanesti
////	fie cu subprograme de bac, fie pe pbinfo ca probabil este filtru cu probleme despre subprograme
//// 7 ore pe saptamana :)
//
//
////53
//
////2^10 = 1024
////2 ^ 11 = 4*2
////2 ^ 12 = 8 * 2
////2 ^ 13 = 6 * 2
//
//// lucram doar cu ultimele cifre, iar dupa fiecare inmultire pastram numai ultima cifra a produsul
//
////#include <cmath>
////int calcPerioada(int cif) {
////	int orig = cif, cnt;
////
////	cif *= orig;
////	cnt = 1;
////
////	while (cif % 10 != orig) {
////		cif *= orig;
////		cnt++;
////	}
////
////	return cnt;
////}
////
////int main() {
////	int a, n, lastDigitA, lastDigitProd, power;
////	cin >> a >> n;
////
////	lastDigitA = a % 10;
////
////	//power = 1;
////	//lastDigitProd = lastDigitA;
////	//while (power < n) {
////	//	/*
////	//	lastDigitProd *= a;
////	//	lastDigitProd = lastDigitProd % 10;
////	//	power++;
////	//
////	//	*/
////	//	lastDigitProd *= lastDigitA;
////	//	lastDigitProd = lastDigitProd % 10; // pastram doar ultima cifra din prod
////	//	power++;
////	//}
////
////	// DAR aceste cifre se repeta, de ce sa inmultim de atatea ori?
////	// 2 4 8 16 32 64 128 256  ... 2^1532  e suficient sa scadem din 1532 un multiplu de 4 cat mai mare, dar < n  => 1528     => 1532 - 1528 = 4
////	// 1 2 3 4   5  6
////
////	// mai bine avem o functie care ne calculeaza perioada ( f(a+T) = f(a) adica valorile sunt aceleasi, din T in T)
////	// si ne dam seama care e puterea minima la care putem ridica
////
////	int perioada = calcPerioada(a % 10), putereMinima;
////	if (n % perioada == 0) {
////		putereMinima = perioada;
////	}
////	else {
////		putereMinima = n % perioada;
////	}
////
////	cout <<	(int) pow(a % 10, putereMinima) % 10 << endl;
////
////}
////
//
//// 54
//
//// or does it?
//// does 10 only occurs once in 1*2*3*...*16?
////	it occurs as 2*5
//
//// 1* 2 *3*4* 5 *6*7*8*9* 10 *11*12*13*14* (15=3*5) * (16=2*2*2*2)
//// the question becomes.. how many times does 5 occur?
//
////5 10 15 20 25		30 35 40 45 50 55 ..
////5*2*5*3*5*4*5*5*5
//
//// numaram cati multipli de 5 afvem in 1*2*..*n, dar si cati de 25 si cati de 125 i cati de 625 etc
//
////int main() {
////	int n, multiplu,cnt;
////	cin >> n;
////
////	cnt = 0; // numara zerourile
////	multiplu = 5;
////	while (multiplu <= n) {
////		cnt += n / multiplu;
////		multiplu *= 5;
////	}
////	cout << cnt;
////}
//
//// 55
////int main() {
////	int n;
////	cin >> n;
////
////	for (int i = 1; i <= n * n; i++) {
////
////		cout << i << " ";
////		if (i % n == 0) {
////			cout << endl;
////		}
////
////	}
////
////	// cu 2 foruri: ne trebuie extra o variabila contor
////	int cnt = 1;
////	cout << endl;
////	for (int i = 0; i < n; i++)
////	{
////		for (int j = 0; j < n; j++)
////		{
////			cout << cnt << " ";
////			cnt++;
////		}
////		cout << endl;
////	}
////
////	//incearca sa le parcurgi cu for si sa pui endline doar in anumite conditii :)
////
////
////// da, asta e noua :(
////}
//
//// 60
//
//// avem subprogram (functii) pt suma cifrelor
//int sumaCifrelor(int n) {
//    int sum = 0, lastDigit;
//    while (n > 0) {
//        lastDigit = n % 10;
//        sum += lastDigit;
//        n /= 10;
//    }
//    return sum;
//}
//
////  facem funcie care calculeaza cifra de control a unui numar
////int cifraControl(int n) {
////	while (n > 9) {
////		n = sumaCifrelor(n);
////	}
////	return n;
////}
//
////int main() {
////	int n, x, i, cnt; // cnt=cate valori am gasit pana acum
////
////	cin >> x >> n;
////
////	cnt = 0;
////	i = 0;
////	while (cnt < n) {
////		if (cifraControl(i) == x) {
////			cout << i << ' ';
////			cnt++;
////		}
////		i++;
////	}
////}
//
//// 57 relativ simplu, am mai lucrat lucruri similare cu cifre
//// la tema poti sa mai lucrezi din nou din exercitiul 8,  18, 11, 17, 24
//
////8
////a
////int main() {
////	int n;
////	cin >> n;
////
////	for (int i = 0; i <= n; i++) {
////		for (int j = 0; j <= n; j++) {
////			cout << " * ";
////
////		}
////		cout << endl;
////	}
////
////}
////b
////int main() {
////	int n;
////	cin >> n;
////
////	for (int i = n; i >= 1; i--) {
////		for (int j = 1; j <= i; j++) {
////			cout << " *";
////
////		}
////		cout << endl;
////	}
////	cout << endl;
////}
////c
////int main() {
////	int n;
////	cin >> n;
////
////	for (int i = 1; i <= n; i++) {
////		for (int j = 1; j <= i; j++) {
////			cout << " *";
////		}
////		cout << endl;
////	}
////	cout << endl;
////}
////d
////int main() {
////	int n;
////	cin >> n;
////
////	for (int i = 1; i <= n; i++) {
////		for (int j = 1; j <= i; j++) {
////			cout << j<<" ";
////		}
////		cout << endl;
////	}
////	cout << endl;
////}
//
////int main() {
////	double n,  nr, sum, numitor,result;
////	cin >> n;
////
////	sum = 0;
////	for (int i = 1; i <= n; i++ ) {
////		cin >> nr;
////		numitor = 1.0 / nr;
////
////		sum += numitor;
////	}
////	result = n / sum;
////	cout << result;
////}
//
////57
//bool contineAB(int x, int a, int b) {
//    int ab = a * 10 + b;
//    while (x > 9) {
//
//
//        int lastDigits = x % 100;
//        if (lastDigits == ab) {
//            return true;
//        }
//        x /= 10;
//    }
//    return false;
//    // a=2, b=3
//    // ab=23
//
//    // 355423
//    // 355231
//}
////int main() {
////	int a, b, cnt, x;
////	cin >> a >> b;
////
////	cnt = 0;
////	cin >> x;
////	while (x != 0) {
////		if (contineAB(x, a, b) == true) {
////			cnt += 1;
////		}
////		cin >> x;
////	}
////	cout << cnt;
////
////}
//
////51
//
////#include <conio.h>
////
////int main() {
////	char p1, p2 // ultimul caracter ales de fiecare jucator
////		, pNext; // currPlayer = 1; // currPlayer = 3 - currPlayer;
////	int cnt; /// var.1 cnt este numarul de caractere citite pana in prezent
////
////	//cin >> p1 >> p2;
////	p1 = _getch();
////	p2 = _getch();
////
////	//cin >> pNext;
////	pNext = _getch();
////
////	cnt = 3;
////	while (pNext != p1 && pNext != p2) {
////		// pui pNext in p1 sau p2, dupa caz
////		if (cnt % 2 == 1) {
////			p1 = pNext;
////		}
////		if (pNext % 2 == 0) {
////			p2 = pNext;
////		}
////		// citesti inca un pNext
////		//cin >> pNext;
////		pNext = _getch();
////		cnt++;
////	}
////	if (cnt % 2 == 1) {
////		cout << "P1 a pierdut";
////	}
////	else {
////		cout << "P2 a pierdut";
////	}
////	// battleships :)
////}
//
//// 56 swallow the frog first :)
//bool contineCifra(int nr, int cif) {
//    // primeste in nr un intreg si in cif o cifra.
//    // verficam daca cif apare in nr.
//
//    int lastDigit;
//    while (nr != 0) {
//        lastDigit = nr % 10;
//        nr /= 10;
//        if (cif == lastDigit) {
//            return true;
//        }
//
//    }
//    return false;
//}
////int main() {
////	int nr1, nr2;
////	cin >> nr1 >> nr2;
////
////	for (int cif = 0; cif <= 9; cif++) {
////		if (contineCifra(nr1, cif) == true && contineCifra(nr2,cif)==true) {
////			cout << cif<<" ";
////		}
////	}
////}
//
////58
////int main() {
////	int n, p, left, right; // left hand side :)  a-2=b
////	int maxLeft, maxRight;
////	// 3203
////	// 320*3
////	// 32*3
////	// 3*203
////	cin >> n;
////
////	p = 10;
////	maxLeft = 0;
////	maxRight = 0;
////	while (n / p > 0) {
////
////		left = n / p;
////		right = n % p;
////		//cout << left << '*' << right << '=' << left * right << endl;
////
////		if (maxLeft* maxRight < left * right) {
////			maxLeft = left;
////			maxRight = right;
////		}
////		p *= 10;
////
////	}
////
////	cout << maxLeft << '*' << maxRight << '=' << maxLeft * maxRight << endl;
////}
//
//// data viitoare avem :) stii tu
////1
//
////i
////2
////int main() {
////    int n,num,sum, cnt,mA;
////    cin >> n;
////
////    cnt = 0;
////    sum=0;
////    for (int i = 1; i <= n; i++) {
////        cin>>num;
////        if (num== 2 || num == 3 || num == 5||num == 7) {
////            sum+=num;
////            cnt +=1;
////            mA=sum/cnt;
////        }
////    }
////    cout<<mA;
////}
////3
////int main(){
////    int n;
////    cin>>n;
////
////
////}
/////4
////int main(){
////    int n,p,i,copyI,nrDivizori;
////    cin>>n;
////    cin>>p;
////
////    i=copyI;
////    nrDivizori=0;
////    for(int i=4;i<n;i++){
////        if(  n%i==0) {
////            if(i!=5 || i!=7){
////
////    nrDivizori+=1;
////
////    if( p>nrDivizori) {
////
////    }
////
////}
////        }
////        cout << i << " ";
////
////        }
////    }
//
////5//palindrom=numar care scris invers ramane acelasi
////int main(){
////    int a,b,sum,cnt;
////    cin>>a>>b;
////
////     sum=0;
////     cnt=0;
////    for(int i=a;i<=b;i++){
////        int lastDigit=a%10;
////        int firstDigit=a/10;
////        if(a<=10 || firstDigit==lastDigit ){
////            cnt+=1;
////            sum+=i;
////        }
////    }
////cout<<"Media aritmetica ="<<sum/cnt;
////
////}
////6
//
////int main() {
////    int n, x, y, p;
////    cin >> n >> x >> y;
////
////
////    p = 1;
////    while (n > 0) {
////        p *= n;
////        if (p > x) {
////            if (p < y) {
////                cout << p << " ";
////            }
////        }
////    }
////}
////
////}
////7 a
////int main(){
////    int n,num,E1;
////    cin>>n;
////
////    E1=0;
////
////    for(int i=1;i<=n;i++){
////            num=i*10+i+1;
////            E1+=num;
////            cout<<num<<" ";
////        }
////
////    cout<<endl;
////    cout<<E1;
////}//nu inteleg de ce da 56 daca n=5
//////b
////int main(){
////    int n,num,E2;
////    cin>>n;
////
////    num=1;
////    E2=1;
////    cout<<num<<" ";
////    for(int i=2;i<=n;i++){
////        num=num*10+i;
////        E2+=num;
////        cout<<num<<" ";
////
////    }
////    cout<<endl;
////    cout<<E2<<endl;
////}
//
////8
////int main() {
////    int n ;
////    cin >> n;
////
////
////        for (int i = 0; i <= n; i++) {
////            for (int j = 0; j <= n; j++) {
////                cout << "* ";
////
////            }
////            cout<<endl;
////        }
////
////}
//
////9
////int main() {
////    int n, num,;
////    cin >> n;
////
//
////}
////10
////int main(){
////    int n,a,b,num,sum,mA,sumCif,firstDigit,lastDigit;
////    cin>>n>>a>>b;
////
////    sum=0;
////    sumCif=0;
////    for(int i=1;i<=n;i++) {
////        cin >> num;
////        sum += num;
////    }
////          mA=sum/n;
////
////          firstDigit=mA/10;
////          lastDigit=mA%10;
////
////          sumCif=firstDigit+lastDigit;
////
////          if(sumCif>a && sumCif<b){
////              cout<<mA;
////          }
////          else{
////              cout<<"Suma cif nu apartine intervalului"<<endl;
////      }
////
////    cout<<"suma cif este "<<sumCif;
////    }
////
////11
////int main(){
////    int n,sumN;
////    cin>>n;
////
////    sumN=n;
////    for(int a=1; a<=n ;a++){
////        for(int b=1; b<=n; b++){
////            for(int c=1; c<=n; c++){
////                if(a!=b || a!=c || c!=b){
////                    sumN=a+b+c;
////
////                }
////                cout<<sumN<<"="<<a<<"+"<<b<<"+"<<c;
////                cout<<endl;
////
////            }
////
////        }
////
////
////    }
//
//
//////}
//////12
////bool estePrimm( int num) {
////    int lastDigit = num % 10;
////    if (lastDigit < 2) {
////        return false;
////    }
////        if (lastDigit % 2 == 0 || lastDigit % 3 == 0 || lastDigit % 5 == 0 || lastDigit == 7) {
////            cout << lastDigit << endl;
////            return true;
////        }
////    }
////
////int main(){
////    int n,num;
////    cin>>n;
////
////    for(int i=1;i<=n;i++){
////        cin>>num;
////        if(estePrimm(num)==true){
////            cout<<estePrimm(num);
////        }
////    }
////}
//
//
//////15
////int main() {
////    int n, oB, max, max2;
////    cin >> n;
////
////    max = 0;
////    max2 = 0;
////    for (int i = 1; i <= n; i++) {
////        cin >> oB;
////        if (max <= oB) {// max=2, max2=1    gasim 2
////            max2 = max;
////            max = oB;
////        } else {
////            if (max2 < oB) {
////                max2 = oB;
////            }
////
////        }
////        cout << max << " " << max2 << " ";
////    }
////}
////16
////int main(){
////    int n,note,max,cnt;
////    cin>>n;
////
////    cnt=0;
////    max=0;
////    for(int i=1;i<=n;i++){
////        cin>>note;
////        if(max<note){
////            max=note;
////            cnt=1;
////        }
////    }
////    cout<<"Nota "<<max<<" obtinuta de "<<cnt<<" elevi";
////}
//
//
//////17
////int main() {
////    int n, nota1,nota2,mAE,cnt,medMax;
////    cin >> n;
////
////    float mAC,sumMed;
////    sumMed=0;
////    cnt=0;
////    medMax=0;
////    mAC=0;
////    for (int i = 2; i <= n; i += 2) {
////        cin >> nota1>>nota2;
////    }
////   mAE=round(float(nota1+nota2)/2);
////   sumMed+=mAE;
////
////    cout<<"Media clasei este "<<mAC;
////    if(mAE<5){
////        cnt+=1;
////    }
////    mAC=sumMed/n;
////
////    if (medMax <  mAE) {
////			medMax = mAE;
////		}
////
////	mAC = sumMed / n;
////	cout << "Media clasei este " << mAC<< " ";
////	if (cnt > 0) {
////		cout << cnt << " Elevi corigenti. ";
////	}
////	else {
////		cout << "Nici un elev corigent. ";
////	}
////	cout << "Media maxima este " << medMax<<".";
////}
//
////ceva gresit
////18
////int main(){
////    double n,nr,numitor,sum,result;
////    cin>>n;
////
////        sum=0;
////    for(int i=1;i<=n;i++) {
////        cin >> nr;
////
////        numitor = 1.0 / nr;
////        sum += numitor;
////        result = n / sum;
////    }
////    cout<<result;
////}
////19
////21
////int main() {
////    int n, lastDigit, nrPar;
////    cin >> n;
////
////    while (n > 0) {
////        lastDigit = n % 10;
////        if (lastDigit % 2 == 0) {
////            cout << lastDigit << ",";
////        }
////            n /= 10;
////
////    }
////}
////
//
////22
//// int main(){
////    int n,lastDigit,par,impar,inversNr;
////    cin>>n;
////
////    par=0;
////    impar=0;
////    while(n!=0) {
////        inversNr = inversNr * 10 + n % 10;
////        n /= 10;
////
////    }
////        while(inversNr!=0){
////        lastDigit = inversNr % 10;
////        if (lastDigit % 2 == 0) {
////            par=par*10+lastDigit;
////            //cout << "par :"<<par;
////        } else {
////            impar=impar*10+lastDigit;
////            //cout << "impar"<<impar;
////        }
////      inversNr/=10;
////    }
////    cout << "par : "<<par<<endl;
////    cout << "impar : "<<impar;
////}
//
//////23
////int main(){
////    int n,inversN,lastDigit,cnt,nr1,nr2,jumatate;
////    cin>>n;
////
////    while(n>0) {
////        inversN = inversN * 10 + n % 10;
////        cnt+=1;
////        n /= 10;
////    }
////    jumatate=cnt/2;
////    while(inversN>0) {
////        lastDigit = inversN % 10;
////        //n /= 10;
////        for (int i = 1; i <= jumatate; jumatate++) {
////             nr1=nr1*10+lastDigit;
////             nr2=nr2*10+lastDigit;
////
////        }
////        n /= 10;
////    }
////    }
////nu stiu
//
//////24
////int main() {
////    int n, lastDigit,i;
////    cin >> n;
////
////    i=0;
////    while (n > 0) {
////        lastDigit = n % 10;
////        if (i % 2 == 0) {
////            cout << lastDigit;
////        }
////
////        n /= 10;
////        i++;
////    }
////    }
//
//////25
////int main(){
////    int n,inversN,firstD,secondD;
////    cin>>n;
////
////    while(n>0) {
////        inversN = inversN * 10 + n % 10;
////        n /= 10;
////    }
////    firstD=inversN%10;
////    secondD=(inversN/10)%10;
////    cout<<firstD+secondD;
////}
//
////26
////int main(){
////    int n,inversN,firstD,lastD,nr;
////    cin>>n;
////
////    nr=0;
////    lastD=n%10;
////    while(n!=0){
////        inversN = inversN * 10 + n % 10;
////        n /= 10;
////    }
////    firstD=inversN%10;
////    //lastD=n%10;
////    nr=10*firstD+lastD;
////
////    if(nr%2==0){
////        cout<<nr;
////    }
////    else{
////        cout<<nr*2;
////    }
////}
//////27
////int main() {
////	int n,result,i,lastDigit,nr;
////	cin >> n;
////
////	nr = 0;
////	while (n > 0) {
////		lastDigit = n % 10;
////		nr = nr * 10 + lastDigit; // numarului nr ii adaugam la dreapta ultima cifra
////		n /= 10;
////	}
////
////	i = 1;
////	result = 0;
////	while (nr > 0) {
////		lastDigit = nr % 10;
////		if(i%2==1 && lastDigit%2==0){
////			result = result * 10 + lastDigit;
////		}
////		nr /= 10;
////		i++;
////	}
////
////cout << result;
////}
//////28
////int main() {
////    int n, digit, lastD,cnt;
////    cin >> n;
////
////    cnt=0;
////    lastD = n % 10;
////while(n>0){
////    digit=n%10;
////    if (digit == lastD) {
////        cnt += 1;
////    }
////    n/=10;
////}
////cout<<cnt<<" "<<lastD;
////}
////29
////int main(){
////    int n,lastD,cnt,maxLD;
////    cin>>n;
////
////    maxLD=0;
////    cnt=0;
////    lastD=n%10;
////    while(n>0) {
////        maxLD = n % 10;
////
////        if (maxLD < lastD) {
////            maxLD = lastD;
////            cnt += 1;
////        }
////        n /= 10;
////    }
////    cout<<maxLD<<" de : "<<cnt;
////}
//
//////30
////int main(){
////    int n,sum;
////    cin>>n;
////
////    sum=0;
////    for(int i=2;i<=n;i+=2){
////        sum+=i;
////        if(sum<n){
////            cout<<i<<" ";
////        }
////    }
////}
//////31
////int main(){
////    int n,a,b,cntPerechiGasite;
////    cin>>n; //n perechi a si b
////
////    cntPerechiGasite=0;
////    a=1;
////    while(cntPerechiGasite<n){
////        b=a+1;
////        if((a+b)%n==0){
////            cout<<a<<" "<<b<<endl;
////            cntPerechiGasite+=1;
////        }
////        a++;
////    }
////}
/////32
////int main(){
////    int n,lastD,copyLD,nr,zeci,unitati,primaCifra;
////    cin>>n;
////
////   zeci=0;
////    while(n>0) {
////        lastD=n%10;
////        copyLD = copyLD * 10 + lastD;
////        n /= 10;
////    }
////        if (n == copyLD){
////            nr=nr*10+lastD;
////            cout << nr;
////        } else {
////            primaCifra=copyLD%10;
////            cout << primaCifra;
////
////        }
////    }//de ce nu merge zeci
//
//////33
////int main(){
////  float n;
////  cin>>n;
////  while(n>0){
////  cout<<n<<" ";
////  n-=2;
////  }
////}
////34
////int main() {
////        int n, m, num, first;
////        cin >> n >> m;
////
////
////        if (n % 2 == 0) {
////            num = n + 1;
////        }
////        if (n % 2 == 1) {
////            num = n + 2;
////        }
////        first = num;
////        while (num - first <= m) {
////            cout << num << " ";
////            num += 2;
////        }
////    }
//////diferenta nu este mai mare decat m.cum adica? este mai mare!
//////35
////int main(){
////    int n,pow;
////    cin>>n;
////
////    pow=1;
////    while (pow<30000) {
////        pow *= n;
////        cout << pow<<" ";
////    }
////}
//////38
////int main(){
////    int n,num;
////    cin>>n;
////
////    for(int i=1;i<=n;i++){
////        cin>>num;
////
////    }
////}
//
////4, 15, 20, 44, 51, 55
//// Fi-mi-ar scarba, succes la test :)
////15
////int main() {
////    int n, price, max, max2;
////    cin >> n;
////
////    max = 0;
////    max2 = 0;
////    //  max max2 price
////    //  10  9       11
////    //  10  3       6
////    for (int i = 1; i <= n; i++) {
////        cin >> price;
////        if (max < price) {
////            max2 = max;
////            max = price;
////        } else {
////            if (max2 < price) {
////                max2 = price;
////            }
////        }
////    }
////cout<<max2<<" "<<max<<" ";
////}
//
//// 20
////  Sa scrii functie care verifica daca un nr. este prim
////  Si s-o folosesti pe numere dintre n,n-1,n-2 etc
////  Te opresti dupa ce gasesti 2 nr. prime
//bool isPrime(int num) {
//    if (num < 2) {
//        return false;
//    }
//    for (int i = 2; i <= num - 1; i++) {
//        if (num % i == 0) {
//            return false;
//        }
//    }
//    return true;
//}
//
////int main() {
////    int num, max, max1;
////    cin >> num;
//
////    max = 0;
////    max1 = 0;
////    for (int i = 2; i < num; i++) {
////        // cele mai mari doua numere PRIME dintre valorile i
//////        isPrime(i);
////        if (isPrime(i) == true) {
////
////
////            if (max < i) {
////                max1 = max;
////                max = i;
////            } else {
////                if (max1 < i) {
////                    max1 = i;
////                }
////            }
////        }
////    }
////
////    cout << max1 << " " << max;
////
////
////    int cnt = 0;
////    for (int i = num-1; i > 0; i--) {
////        // cele mai mari doua numere PRIME dintre valorile i
//////        isPrime(i);
////        if (isPrime(i) == true) {
////
////            cout << i << " ";
////            cnt++;
////            if (cnt == 2) {
////                break;
////            }
////        }
////    }
////
////}
////44
//int cntDidits(int num) {
//    int lastDigits, cnt;
//    cnt = 0;
//    while (num > 0) {
//        lastDigits = num % 10;
//        cnt += 1;
//        num /= 10;
//    }
//    return cnt;
//}
//
////int main() {
////    int n, num,cnt;
////    cin >> n;
////
////    cnt=0;
////    for (int i = 1; i <= n; i++) {
////        cin >> num;
////        if (isPrime(num) == true) {
////        cnt+= cntDigits(num);
////        }
////    }
////    cout << cnt;
////}
////4
////int main() {
////    int n, p, i, copyI, nrDivizori;
////    cin >> n;
////    cin >> p;
////
////    i = copyI;
////    nrDivizori = 0;
////    for (i = n-1; i > 1; i--)
////        if (n % i == 0) {
////            nrDivizori += 1;
////            if (p >= nrDivizori) {
////                cout << i << " ";
////            }
////        }
////}
////55
////int main() {
////    int n;
////    cin >> n;
////
////    for (int i = 1; i <= n * n; i++) {
////        cout << i << " ";
////
////        if (i % n == 0) {
////            cout << endl;
////        }
////    }
////}
//
////int main() {
////    int v[100] = {1, 23, 4}; // valorile sunt v[0], v[1], v[2]
////    for (int i = 0; i < 3; i++) {
////        cout << v[i] << endl; // array/ sir la noi
////
////    }
////    // arrays, matrices (arrays of arrays), string, files, OOP (Databases, Operating Systems..)
////}
//
////31
////int main(){
////    int n,a,b,cntPerechiGasite;
////    cin>>n;
////
////    cntPerechiGasite=0;
////    a=1;
////    while(cntPerechiGasite<n){
////        b=a+1;
////        if((a+b)%n==0){
////            cout<<a<<" "<<b<<" "<<endl;
////            cntPerechiGasite+=1;
////        }
////        a++;
////    }
////}
////32
//
////int inversNr (int n){
////    int nr=0;
////    while(n!=0) {
////
////        nr = nr * 10 + n%10;
////        n /= 10;
////    }
////    return nr;
////}
////
//////32
////int main(){
////    int n,zeci,unitati,numar;
////    cin>>n;
////
////    unitati = n % 10;
////    zeci = n / 10 % 10;
////    if(inversNr(n)==n){
////        numar=zeci*10+unitati;
////        cout<<numar;
////    }
////    else{
////        cout<<inversNr(n)%10;
////    }
////}//40 DE MINUTE FMS
////33
////int main() {
////    float n, num;
////    cin >> n;
////
////    num = 0;
////    while (n > 0.1) {
////        n-=2.00;
////        cout << n << " ";
////    }
////}//output:5.01 3.01 1.01 -0.99(daca n>0 , de ce nu s-a oprit? )
//////34
////int main(){
////    int n,m,num,first;
////    cin>>n>>m;
////
////    if(n%2==0){
////        num=n+1;
////    }
////    if(n%2==1){
////        num=n+2;
////    }
////    first=num;
////    while(num-first<=m){
////        cout<<num<<" ";
////        num+=2;
////    }
////}
////35
////int main(){
////    int n,pow;
////    cin>>n;
////
////    pow=1;
////    while(pow<30000){
////        pow*=n;
////        cout<<pow<<" ";
////    }
////}
//////38
////int main(){
////    int n,num;
////    cin>>n;
////
////    for(int i=1;i<=n;i++) {
////        cin >> num;
////    }
////}//123 12 321 21
////39 sa facem din nou 39
//
//int main() {
//    // afisam primele n numere prime:
//    int n, cnt,num;
//    cin >> n;
//
//    cnt = 0; // am afisat zero nr. prime
//    num=2;
//    while (cnt < n) { // cat timp am afisat mai putin de n numere prime
//        // gasim nr. prime..
//        if (isPrime(num) == true) { // is num prime?
//            cout << num<<" ";
//            cnt++;
//        }
//
//        num++;
//    }
//}
//
//
////40
//
//
//int first2Digits(int n) {
//
//    while (n >= 100) {
//        n /= 10;
//
//    }
//    return n;
//}
//
//int cntEven(int n) {
//    int lastD;
//    int cnt = 0;
//    while (n > 0) {
//        lastD = n % 10;
//        if (lastD % 2 == 0) {
//            cnt += 1;
//        }
//        n /= 10;
//    }
//    return cnt;
//}
//
//int cntCifre(int n) {
//    int lastD;
//    int cnt = 0;
//    while (n > 0) {
//        lastD = n % 10;
//        cnt += 1;
//        n /= 10;
//
//
//    }
//    return cnt;
//}
//
//bool estePerfect(int n) {//suma divizorilor sa fie egala cu numarul
//    int sum = 0;
//    for (int i = 1; i <= n; i++) {
//        if (n % i == 0) {
//            sum += i;
//
//        }
//        if (n == sum) {
//            return true;
//        } else {
//            return false;
//        }
//    }
//    return false;
//}
////}
////int main(){
////int n,first2D;
////cin>>n;
////
////first2D= first2Digits(n);
////if(estePerfect(first2D)==true){
////    cout<<cntCifre(n);//sare peste acest cout
////}
////else{
////    cout<<cntEven(n);
////}
////
////}
////41
////    int cntDivizori(int num) {//??
////        int cnt = 0;
////        for (int i; i <= num; i++) {
////            if (n % i == 0) {
////                cnt += 1;
////            }
////
////        }
////        return cnt;
////    }
////    int main() {
////        int n, num, cntMax, maxNum;
////        cin >> n;
////
////        cntMax = 0;
////        for (int i = 1; i <= n; i++) {
////            cin >> num;
////            if (cntDizivori(num) > cntMax) {
////                cntMax = cntDivizori(num);
////                maxNum = num;
////                cout << maxNum;
////            }
////        }
////    }
////}//de ce nu merge functia?
////42
////bool isPrim(int num) {
////    int cnt=0;
////	if (num < 2) {
////		return false;
////	}
////
////	for (int i = 2; i <= num - 1; i++) {
////		if (num%i == 0) {
////			return true;
////		}
////	}
////	return false;
////}
////int main(){
////int n,num,cnt,maxPrime;
////cin>>n;
////
////for(int i=1;i<=n;i++){
////    cin>>num;
////    if(isPrim(num) && num >maxPrime) {
////        maxPrime = num;
////        cnt=1;
////    }
////    if(isPrim(num) && num==maxPrime){
////        cnt++;
////    }
////}
////    cout<<cnt;
////}
////43
////int main(){
////    int n,a,b,maxSum,sum;
////    cin>>n;
////
////    sum=0;
////    for(int i=1;i<=n;i++){
////        cin>>a>>b;
////        sum=a+b;
////        if(maxSum<sum){
////            maxSum=sum;
////        }
////    }
////    cout<<maxSum;
////}
////44
// select all with command+A