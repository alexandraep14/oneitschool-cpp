#include <iostream>

using namespace std;

/*
    Se citeste un numar natural n si un sir de n intervale, e.g.

    5
    10 11 3 22 8 19 2 3 -2 10
    => 3 22

    Se cere sa afisam intervalul cel mai larg
    (cu numar maxim de elemente intregi cuprinse in el).
 */

// 1
// folosim cin si cout, dar cream atat o structura pt interval
//  cat si o functie pentru citirea si una pt afisarea unui interval

struct Interval {
    int a, b;
};

void read(Interval &i) {
    cin >> i.a >> i.b;

}

void print(Interval i) {
    cout << "(" << i.a << " " << i.b << ") ";
}

int main() {
    int n;
    Interval v[100], max;

    cin >> n;

    for (int i = 0; i < n; i++) {
        read(v[i]);
    }

    max = Interval{0,0};
    for (int i = 0; i < n; i++) {
        int valI, valMax;
        valMax = max.b - max.a; // cat de larg este intervalul
        valI = v[i].b - v[i].a; // v[i] este un Interval, deci si el are .a si .b
        if(valI > valMax){
//        if(v[i].b - v[i].a > max.b - max.a){

            max = v[i];
        }
    }
    print(max);

}