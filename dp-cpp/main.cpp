#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

void getInput();
void searchByName();
void searchByYear();
void searchByAge();
void searchByGrade();
void exit();
void display();
void search_student();



int main()
{
    system("title student info program in c++");
    system("color F0");
    system("cls");

    int choice;
    cout << "1.enter a new Student" << endl;
    cout << "2.search for a Student" << endl;
    cout << "3.exit program" << endl;
    cout << ">";
    cin >> choice;


    switch(choice){
        case 1:
            getInput();
            break;
        case 2:
            search_student();
            break;
        case 3:
            exit();
            break;

            cin.get();
    }
    return 0;
}


void getInput(){
    string name;
    int age;
    int year;
    int grade;
    ofstream newStudnet("newStudent.txt", ios::app);
    cout << "enter the new Student's name" << endl;
    cin >> name;

    cout << "enter the new Student's year" << endl;
    cin >> year;

    cout << "enter the new Student's age" << endl;
    cin >> age;

    x:cout << "enter the new Student's grade 100% is the greatest" << endl;
    cin >> grade;
    if(grade > 100 || grade < 0)
        goto x;

    newStudnet << name << " " << year << " " << age << " " << grade << endl;
    newStudnet.close();

    main();
}


void searchByName(){
    ifstream studnet("newStudent.txt");
    string name;
    string str;

    int year;
    int age;
    int grade;


    system("CLS");
    cout << "enter the Student's name: ";
    cin >> str;

    while(studnet >> name >> year >>  age >> grade){
        if(str == name){
            system ("CLS");
            cout << "Student(s) found" << endl;
            cout << "Name " << "year " << "Age " << "grade " << endl;
            cout << "-----------" << endl;
            cout << name << " "  << year << " " << age << " " << grade  << "%" << endl;
        }

        if(!(str == name)){
            system("cls");
            cout << "no Student(s) found" << endl;
        }
    }

    system("pause");
    cin.get();
    main();
}






void searchByYear(){
    ifstream studnet("newStudent.txt");
    string name;

    int year;
    int age;
    int grade;
    int fyear;


    system("CLS");
    cout << "enter the Student's name: ";
    cin >> fyear;

    while(studnet >> name >>year >>  age >> grade){
        if(year == fyear){
            system ("CLS");
            cout << "Student(s) found" << endl;
            cout << "Name " << "year " << "Age " << "grade " << endl;
            cout << "-----------" << endl;
            cout << name << " "  << year << " " << age << " " << grade  << "%" << endl;
        }

        if(!(year == fyear)){
            system("cls");
            cout << "no Student(s) found" << endl;
        }
    }

    system("pause");
    cin.get();
    main();
}


void searchByAge(){
    ifstream student("newStudent.txt");
    string name;

    int year;
    int age;
    int fage;
    long int grade;

    system("CLS");
    cout << "enter the Student's age: ";
    cin >> fage;

    while(student >> name >> year >> age >> grade){
        if(fage == age){
            system ("CLS");
            cout << "Studnet(s) found" << endl;
            cout << "Name " << "Year " << "Age " << "Grade" << endl;
            cout << "-----------" << endl;
            cout << name << " " << year << " " << age << " $" << grade << "%" << endl;
        }

        if(!(age == fage)){
            system("CLS");
            cout << "no Student(s) found" << endl;
        }
    }

    system("pause");
    cin.get();
    main();
}



void searchByGrade(){
    ifstream student("newStudent.txt");
    string name;

    int year;
    int age;
    int grade;
    int fgrade;

    system("CLS");
    cout << "enter the Students's grade: ";
    cin >> fgrade;

    while(student >> name >> year >> age >> grade){
        if(fgrade == grade){
            system ("CLS");
            cout << "Student(s) found" << endl;
            cout << "Name " << "Year " << "Age " << "Grade" << endl;
            cout << "-----------" << endl;
            cout << name << " " << year << " " << age << " " << grade << "%"<< endl;
        }

        if(!(grade == fgrade)){
            system("CLS");
            cout << "no Students(s) found" << endl;
        }
    }

    system("pause");
    cin.get();
    main();
}


void exit(){
    system("CLS");
    cout << "exiting......" << endl;
    system("pause");
    cin.get();
}


void display(){
    ifstream student("newStudent.txt");
    string name;

    int year;
    int age;
    int grade;

    system ("CLS");
    cout << "entire students information" << endl;
    cout << "Name " << "Year " << "Age " << "Grade" << endl;
    cout << "=======================================" << endl;

    while(student >> name >> year >> age >> grade){
        cout << name << " " << year << " " << age  << " " << grade << endl;
    }
    system("pause");
    cin.get();
    main();
}








void search_student(){
    int choice2;
    system("CLS");

    cout << "1.search by name" << endl;
    cout << "2.search by year" << endl;
    cout << "3.search by age" << endl;
    cout << "4.search by grade" << endl;
    cout << "5.display all Students" << endl;
    cout << "6.exit program" << endl;
    cin >> choice2;

    switch(choice2){
        case 1:
            searchByName();
            break;
        case 2:
            searchByYear();
            break;
        case 3:
            searchByAge();
            break;
        case 4:
            searchByGrade();
            break;
        case 5:
            display();
            break;
    }

}





