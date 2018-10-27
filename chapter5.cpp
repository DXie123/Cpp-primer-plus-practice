#include <iostream>
#include <array>
#include <cstring>

void p1(void)
{
    using namespace std;
    
    int num1, num2, result = 0;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >>num2;
    for (int i = num1; i <= num2; i++)
    {
        result += i;
    }
    cout << "The result is " << result << endl;
}

void p2(void)
{
    using namespace std;

    const int ArSize = 101;
    array<long double, ArSize> factorials = {1,1};
    for (size_t i = 2; i < ArSize; i++)
    {
        factorials[i] = factorials[i-1]*i;
    }
    for (size_t i = 0; i < ArSize; i++)
    {
        cout << i << "! = " << factorials[i] <<endl;
    }
}

void p3(void)
{
    using namespace std;

    int get, sum;
    sum = 0;
    cout << "Enter number(0 to quit):";
    cin >> get;
    while(get)
    {
        sum += get;
        cout << "The sum is " << sum << endl;
        cout << "Enter number(0 to quit):";
        cin >> get;
    }
}

void p4(void)
{
    using namespace std;

    double Daphne, Cleo;
    int year = 0;
    Daphne = Cleo = 100;

    while(Daphne >= Cleo)
    {
        Daphne += 10;
        Cleo += Cleo*0.05;
        year++;
    }

    cout << "After " << year << " years, Cleo will receive more money.\n";
    cout << "Daphne: " << Daphne << endl;
    cout << "Cleo: " << Cleo << endl;
}

void p5(void)
{
    using namespace std;

    string month[12] = {
        "January",
        "Febuary",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    int sale [12] = {0};
    int sum = 0;

    for (size_t i = 0; i < 12; i++)
    {
        cout << "Enter the sales of " << month[i] << ':';
        cin >> sale[i];
        sum += sale[i];
    }
    
    cout << "The sales of this year is " << sum << endl;
}
int main(int argc, char const *argv[])
{
    p5();
    return 0;
}
