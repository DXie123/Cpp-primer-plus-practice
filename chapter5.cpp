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

void p6(void)
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
    int sale [3][12] = {0};
    int sum [3] = {0};    
    int total = 0;

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 12; j++)
        {
            cout << "Enter the sales of " << month[j] << ':';
            cin >> sale [i][j];
            sum [i] += sale[i][j];
        }
        total += sum[i];
    }

    for (size_t i = 0; i < 3; i++)
    {
        cout << "The sales of year " << i << " is " << sum[i] <<endl;
    }
    cout << "Total sales are " << total << endl;
}

struct car
{
    std::string name;
    int year;
};

void p7(void)
{
    using namespace std;

    int number;
    cout << "How many cars do you wish to catalog? ";
    cin >> number; // cin will keep \n when reading a number
    cin.get(); // (cin >> number).get() is also okay
    car* p1 = new car[3];

    for (int i = 0; i < number; i++)
    {
        cout << "Car #" << i+1 << ":\n";
        cout << "Please enter the make: ";
        getline(cin,(p1+i)->name);
        cout << "Please enter the year made: ";
        cin >> (p1+i)->year;
        cin.get();
    }

    for (int i = 0; i < number; i++)
    {
        cout << (p1+i)->year << ' ' << (p1+i)->name << endl;
    }
}

void p8(void)
{
    using namespace std;

    int count = 0;
    char word[20];

    cout << "Enter words (to stop, type word done) :\n";
    cin >> word;
    while (strcmp(word,"done") != 0)
    {
        cin >> word;
        count++;
    }

    cout << "You entered a total of " << count << " words.\n";
}

void p9(void)
{
    using namespace std;

    int count = 0;
    string word;

    cout << "Enter words (to stop, type word done) :\n";
    cin >> word;
    while (word != "done")
    {
        cin >> word;
        count++;
    }

    cout << "You entered a total of " << count << " words.\n";
}

void p10(void)
{
    using namespace std;

    int row = 0;
    char dot, star;
    dot = '.'; star = '*';

    cout << "Enter number of rows: ";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = row; j > i; j--)
        {
            cout << dot;
        }
        for (int j = 0; j < i; j++)
        {
            cout << star;
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    p10();
    return 0;
}
