#include <iostream>
using namespace std;

int main()
{
    int quiz1 = 65;
    int quiz2 = 70;
    float quizOrtalama = (float)(quiz1 + quiz2)/2;

    cout << "Quiz Ortalaması = " << quizOrtalama << endl;
    cout << "------------------------------------------ \n" ;

    int quiz3 = 70;
    int quiz4 = 65;
    int quizOrtalama2 = (quiz1 + quiz2)/2;
    cout << "Quiz Ortalaması = " << quizOrtalama2 << endl;
    cout <<"------------------------------------------ \n";

    int a = 15;
    int b = 3;
    int z = a % b; // mod operatörü böler ve kalanı verir
    cout << "modu = " << z << endl;

    return 0;
}