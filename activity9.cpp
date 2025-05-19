#include <iostream>
using namespace std;

class Student {
    private:
        static int studentTotal;
    public:
        string name;
        string status;
        int age;

        Student(string pName, int pAge ){
            name = pName;
            age = pAge;
            status = "New Student";
            ++ studentTotal;
            cout << name << "Created" << " Status" << status << endl;
            cout << endl;
        }

        ~Student() {
            cout << name << "Destroyed" << endl;
            --studentTotal;
            cout << endl;
        }

        static int getStudentTotal()
        {
            return studentTotal;
        }

        static void setStudentTotal (int a)
        {
            studentTotal = a;
        }

};

