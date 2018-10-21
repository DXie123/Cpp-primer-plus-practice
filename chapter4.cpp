#include <iostream>
#include <cstring>

void p1(void);

int main(int argc, char const *argv[])
{
    p1();

    return 0;
}

void p1(void)
{
    using namespace std;
    
    string firstname, lastname;
    char grade;
    short age;
    
    cout << "What is your first name? ";    
    getline(cin, firstname);
    cout << "What is your last name? ";
    getline(cin, lastname);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;

    cout << "Name: " << lastname << ", " << firstname << endl;
    cout << "Grade: " << char(grade+1) << endl;
    cout << "Age: " << age << endl;
}