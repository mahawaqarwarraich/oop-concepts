#include<iostream>
using namespace std;

class Person {
    protected:
        string name;
        int age;

    public: 
        Person(string n, int a) {
            name = n;
            age = a;
        }

    void introduce() {
        cout << "Hi i am " << name << " , " << age << " years old";
    }

};

class Student: public Person {
    public: 
        string university;

    Student(string n, int a, string u) : Person(n, a) {
        university = u;
    }

    void study() {
        cout << name << " is studying at " << university << endl;
    }

};

class Teacher: public Person {
    public:
        string subject;

    // constructor
    Teacher(string n, int a, string sub): Person(n, a) {
        subject = sub;
    }

    // func
    void teach() {
        cout << name << " is teaching " << subject << endl;
    }
    

};




int main() {
    Student s("maha", 22, "uog");
    Teacher t("naila", 28, "dld");

    s.introduce();
    s.study();

    t.introduce();
    t.teach();
    return 0;
}