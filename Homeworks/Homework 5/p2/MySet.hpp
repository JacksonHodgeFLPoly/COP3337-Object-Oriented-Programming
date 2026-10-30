
#ifndef MYSET_HPP
#define MYSET_HPP

class MySet {
public:
MySet(unsigned int maxRange);
MySet(const MySet& other);
~MySet();

void insertElement(int k);
void deleteElement(int m);

void printSet() const;

bool isEqualTo(const MySet& other) const;

private:
unsigned int range;
unsigned int size;
bool* set;

};

#endif