#include <iostream>
using namespace std;

class Student {
    private:
        int id;
        string name;
        int age;
        string phoneNumber;
        double gpa;
    public:

        // Setter
        void setId(int id) {
            this->id = id;
        }
        void setName(string name) {
            this->name = name;
        }
        void setAge(int age) {
            this->age = age;
        }
        void setPhoneNumber(string phoneNumber) {
            this->phoneNumber = phoneNumber;
        }
        void setGpa(double gpa) {
            this->gpa = gpa;
        }

        // Getter
        int getId() {
            return id;
        }
        string getName() {
            return name;
        }
        int getAge() {
            return age;
        }
        string getPhoneNumber() {
            return phoneNumber;
        }
        double getGpa() {
            return gpa;
        }

};