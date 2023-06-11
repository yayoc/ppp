#include "../std_lib_facilities.h"

struct Person {
    string last_name;
    string first_name;
    string tel_number;
    string email;
    Person(string l, string f, string t, string e) : last_name(l), first_name(f), tel_number(t), email(e) {} 
};

int main() {
    Person p1 = Person{"Yayoshi", "Yayoshi", "09012345678", "yayoshi@gmail.com"};
    Person p2 = Person{"Tanaka", "Tanaka", "09087654321", "tanaka@gmail.com"};
    Person p3 = Person{"Sato", "Sato", "09087654321", "sato@gmail.com"};
    Person p4 = Person{"Hori", "Hori", "09087654321", "hori@gmail.com"};
    Person p5 = Person{"Yamamoto", "Yamamoto", "09087654321", "yamamoto@gmail.com"};

    vector<Person> people = {p1, p2, p3, p4, p5};
    int w = 18;
    for (int i = 0; i < people.size(); i++) {
        Person p = people[i];
        cout << setw(w) << p.last_name << "|" 
            << setw(w) << p.first_name << "|"
            << setw(w) << p.tel_number << "|"
            << setw(w) << p.email << "\n";
    }
}
