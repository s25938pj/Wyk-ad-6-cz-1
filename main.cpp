#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

struct student
{
    string name;
    string surrname;
    int age;

    student()
    {
        cout << "Student created\n";
    }
    student(string n, string s, int a)
    {
        name = n;
        surrname = s;
        age = a;

        cout << "Student created\n";
    }
    student(student const& other)
    {
        name = other.name;
        surrname = other.surrname;
        age = other.age;
        cout << "Student copied\n";
    }

    student& operator=(student const& other)
    {
        name = other.name;
        surrname = other.surrname;
        age = other.age;
        return *this;
    }
    ~student()
    {
        cout << "Student destroyed\n";
    }
};

auto take_student(student const& s) -> void // Poprzez const& nie tworzymy niepotrzebnych kopii
{

}
auto operator!(string const& str) -> string
{
    cout << "It's illegal";
}
auto main() -> int {
 auto stud1 = student("Adam", "Mickiewicz", 30);
    {
        auto stud2 = student("Juliusz", "Slowacki", 21);
    }
    auto stud3 = student("Jan", "Kochanowski", 40);
    auto stud4 = stud3;

    cout << stud4.name << ' ' << stud4.surrname<<"\n";
    take_student(stud4);
    take_student(stud4);
    take_student(stud4);

//    auto x = 0;
//    x=0;

    stud3 = stud1;
    cout << stud3.name << ' ' << stud3.surrname << "\n";

//    auto str = string("hello");
//    cout << !str;

                            //Część 2

}
