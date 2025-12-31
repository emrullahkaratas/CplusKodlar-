#include <iostream>
using namespace std;
int main()
{
    int sayi = 5;
    // sayi = sayi + 1;
    sayi++; // Postfix
    cout << "sayi = " << sayi << endl;

    int sayi1 = 5;
    // sayi1 = sayi + 1;
    ++sayi1; // Prefix
    cout << "sayi1 = " << sayi1 << endl; 

    int sayi2 = 5;
    // sayi2 = sayi2 - 1;
    sayi2--;
    cout << "sayi2 = " << sayi2 << endl;

    int sayi3 = 5;
    // sayi3 = sayi - 1;
    --sayi3;
    cout << "sayi3 = " << sayi3 << endl;

    cout << "postfix ve prefix arasindaki fark " << endl;
    cout << "-------------------------------------" << endl;

    // postfix farkı
    int x = 5;
    int y = x++; 
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    // prefix farkı
    int a = 5;
    int b = --a;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
     
    return 0;
}