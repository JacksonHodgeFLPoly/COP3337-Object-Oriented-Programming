#include "Vector.hpp"
#include <random>
#include <string>

int main(void) {
    // Part 0 goes here
    Vector<int>* pVec = new Vector<int>(1);

    int elements[] = {
        81, 117, 105, 122, 45, 52, 32, 87, 101, 100, 
        110, 101, 115, 100, 97, 121, 32, 49, 49, 47, 
        48, 52, 47, 50, 47, 50, 48, 50, 54
    };

    for (int val : elements) {
        pVec->push_back(val);
    };

    std::cout << "[ ";
    for (int i = 0; i < pVec->getSize(); i++) {
        std::cout << (char)pVec->at(i) << ' ';
    }
    std::cout << "]" << std::endl;

    delete pVec;

    // Part 1 testing
    // Test copy constructor
    Vector<double>* mvd1 = new Vector<double>(10);
    mvd1->push_back(5.5);
    Vector<double>* mvd2 = new Vector<double>(*mvd1);

    delete mvd1;
    delete mvd2;

    // Test other methods
    Vector<std::string> v;
    std::cout << v.empty() << std::endl;
    std::cout << v.getCapacity() << std::endl;
    v.push_front("hello");
    v.push_front("hi");
    v.push_front("good morning");
    std::cout << v.empty() << std::endl;
    std::cout << v.at(-1) << std::endl;
    
    v.insert(2, "bye");
    std::cout << v.getSize() << std::endl;
    for (int i = 0; i < v.getSize(); i++) {
        std::cout << v.at(i) << ' ';
    }
    std::cout << "\n";
    v.clear();

    // Test erase and remove_dups

    std::mt19937 eng(1);
    std::uniform_int_distribution<int> dist(0, 20);
    
    Vector<int> *p = new Vector<int>(100);
    for (int i = 0; i < 20; i++) {
        p->push_front(dist(eng));
    }
    
    
    p->print();
    while (p->getSize() > 5) {
        std::uniform_int_distribution<int> dist2(p->getSize() * -1, p->getSize() - 1);
        int index = dist2(eng);
        std::cout << "index to delete " << index << std::endl;
        p->erase(index);
        p->print();
    }

    for (int i = 0; i < 20; i++) {
        p->push_front(dist(eng));
    }

    std::cout << "Before remove_dups()\n";
    p->print();
    p->remove_dups();
    std::cout << "After remove_dups()\n";
    p->print();

    delete p;
    


    return 0;
}
