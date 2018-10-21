#include <iostream>
#include <cstring>
#include <array>

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

void p2(void)
{
    using namespace std;

    string name, dessert;
    cout << "Enter uour name:\n";
    getline(cin, name);
    
    cout << "Enter your favorite dessert:\n";
    getline(cin, dessert);

    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
}

void p3(void)
{
    using namespace std;
    
    char firstname[20], lastname[20], name[40];

    cout << "Enter your first name: ";
    cin.getline(firstname, 20);
    cout << "Enter your last name: ";
    cin.getline(lastname, 20);
    strcpy(name, lastname);
    strcat(name, ", ");
    strcat(name, firstname);
    cout << "Here's the information in a single string: " << name << endl;
}

void p4(void)
{
    using namespace std;

    string firstname, lastname, name;
    cout << "Enter your first name: ";
    getline(cin, firstname);
    cout << "Enter your last name: ";
    getline(cin, lastname);
    name = lastname + ", " + firstname;
    cout << "Here's the information in a single string: " << name << endl;
}

struct CandyBar
{
    std::string name;
    double weight;
    int calorie;
};

void p5(void)
{
    using namespace std;

    CandyBar snack = {"Mocha Munch", 2.3, 500};
    cout << "Name: " << snack.name << endl;
    cout << "Weight: " << snack.weight << endl;
    cout << "Clarie: " << snack.calorie << endl;
}

void p6(void)
{
    using namespace std;

    CandyBar food[3] = 
    {
        {"apple", 1.2, 2},
        {"noodle", 2.3, 5},
        {"cafe", 5.6, 6}
    };

    for(int i=0; i<3; i++)
    {
        cout << "Name: " << food[i].name << endl;
        cout << "Weight: " << food[i].weight << endl;
        cout << "Clarie: " << food[i].calorie << endl << endl;    
    }
}

struct Pizza
{
    std::string name;
    double diameter;
    double weight;
};

void p7(void)
{
    using namespace std;
    Pizza p1;
    cout << "Enter the name of pizza: ";
    getline(cin, p1.name);
    cout << "Enter the diameter of pizza company: ";
    cin >> p1.diameter;
    cout << "Enter the weight of pizza: ";
    cin >> p1.weight;

    cout << "\nHere's your pizza:\n";
    cout << "Name: " << p1.name << endl;
    cout << "Diameter: " << p1.diameter << endl;
    cout << "Weight: " << p1.weight << endl;
}

void p8(void)
{
    using namespace std;
    Pizza* p1 = new Pizza;

    cout << "Enter the diameter of pizza: ";
    cin >> p1->diameter; cin.get();
    cout << "Enter the name of pizza company: ";
    getline(cin, p1->name);
    cout << "Enter the weight of pizza: ";
    cin >> p1->weight;

    cout << "\nHere's your pizza:\n";
    cout << "Name: " << p1->name << endl;
    cout << "Diameter: " << p1->diameter << endl;
    cout << "Weight: " << p1->weight << endl; 
    delete p1;   
}

void p9(void)
{
    using namespace std;
    CandyBar* food = new CandyBar[3]; //initialize here is also okay
    *food = {"apple", 1.2, 2};
    *(food+1) = {"noodle", 2.3, 5};
    *(food+2) = {"cafe", 5.6, 6};

    for (size_t i = 0; i < 3; i++)
    {
        cout << "Name: " << (food+i)->name << endl;
        cout << "Weight: " << (food+i)->weight << endl;
        cout << "Calorie: " << (food+i)->calorie << endl << endl;
    }
    delete [] food;
}

void p10(void)
{
    using namespace std;
    array<double, 3> grade;
    for (size_t i = 0; i < 3; i++)
    {
        cout << "Enter your grade No." << i+1 << ": ";
        cin >> grade[i];
    }
    for (size_t i = 0; i < 3; i++)
    {
        cout << "Grade No." << i+1 << " is " << grade[i] << endl;
    }
    cout << "Average grade is " << (grade[0]+grade[1]+grade[2])/3 << endl;
}

int main(int argc, char const *argv[])
{
    p10();

    return 0;
}