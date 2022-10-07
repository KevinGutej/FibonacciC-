#include <iostream>

using namespace std;

long int fib(int x) //funkcja rekurencyjna dla Fibonacci numbers
{
    if(x==1||x==2)return 1;
    else return fib(x-1) + fib(x-2);
}
int main()
{
    int x;
    cout << "Podaj x [numer WYRAZU CIAGU]: ";
    cin >> x;
    cout << "Dla x =" << x << ", y = " << fib(x) << endl;
    cout << "Zatem wyraz ciagu Fibonacciego to numer: " << x << " ,to: " << fib(x) << endl;
}
