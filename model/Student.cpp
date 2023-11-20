#include <iostream>
class Student {
    private:
        int id;
        string name;
        int age;
        string phoneNumber;
        double jpa;
    public:
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
        void setJpa(double jpa) {
            this->jpa = jpa;
        }

};