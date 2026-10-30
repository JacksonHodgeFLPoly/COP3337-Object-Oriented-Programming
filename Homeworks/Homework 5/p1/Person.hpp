#ifndef PERSON_HPP
#define PERSON_HPP

class Person {
public:
    Person(const char* name, int age);
    Person(const Person& other);
    ~Person();
    void display() const;

private:
    char* name;
    int age;

};

#endif
