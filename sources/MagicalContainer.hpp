#ifndef MAGICAL_CONTAINER_HPP
#define MAGICAL_CONTAINER_HPP
#include<vector>
#include <iterator>
using namespace std;
class MagicalContainer
{
private:
    vector <int> orginalContainer;
    vector <int> ascendingContainer;
    vector <int> primeContainer;
    vector <int> sideContainer;

public:
    MagicalContainer()=default;
    ~MagicalContainer()=default;
    MagicalContainer(MagicalContainer &other)=default;
    MagicalContainer(MagicalContainer &&other) noexcept =default;
    MagicalContainer& operator=(MagicalContainer&& other) noexcept =default;
    MagicalContainer& operator=(MagicalContainer& other) noexcept =default;

    void addElement(int element);
    void removeElement(int element);
    static bool isPrime(int element);
    int size()const;
};

class AscendingIterator
{
    MagicalContainer *magicalContainer;
    vector<int>::iterator it;
    int curr;
    public:

    AscendingIterator(MagicalContainer &magical);
    AscendingIterator(AscendingIterator &other);
    ~AscendingIterator()=default;
    AscendingIterator(AscendingIterator &&other) noexcept =default;
    AscendingIterator& operator=(AscendingIterator&& other) noexcept =default;
    AscendingIterator& operator=(AscendingIterator& other) noexcept =default;
    int operator*() const;
    AscendingIterator& operator++();

    bool operator==(AscendingIterator &other);
    bool operator!=(AscendingIterator &other);
    bool operator<(AscendingIterator &other);
    bool operator>(AscendingIterator &other);

    AscendingIterator& begin();
    AscendingIterator& end();
};

class SideCrossIterator
{
    MagicalContainer *magicalContainer;
    vector<int>::iterator it;
    int curr;
    public:

    SideCrossIterator(MagicalContainer &magical);
    SideCrossIterator(SideCrossIterator &other);
    ~SideCrossIterator()=default;
    SideCrossIterator(SideCrossIterator &&other) noexcept =default;
    SideCrossIterator& operator=(SideCrossIterator&& other) noexcept =default;

    SideCrossIterator& operator=(SideCrossIterator& other) ;
    int operator*() const;
    SideCrossIterator &operator++();

    bool operator==(SideCrossIterator &other);
    bool operator!=(SideCrossIterator &other);
    bool operator<(SideCrossIterator &other);
    bool operator>(SideCrossIterator &other);

    SideCrossIterator& begin();
    SideCrossIterator& end();
};

class PrimeIterator
{
    MagicalContainer *magicalContainer;
    vector<int>::iterator it;
    int curr;
    public:

    PrimeIterator(MagicalContainer &magical);
    PrimeIterator(PrimeIterator &other);
    ~PrimeIterator()=default;
    PrimeIterator(PrimeIterator &&other) noexcept =default;
    PrimeIterator& operator=(PrimeIterator&& other) noexcept =default;
    PrimeIterator& operator=(PrimeIterator& other) noexcept =default;
    int operator*() const;
    PrimeIterator &operator++();

    bool operator==(PrimeIterator &other);
    bool operator!=(PrimeIterator &other);
    bool operator<(PrimeIterator &other);
    bool operator>(PrimeIterator &other);

    PrimeIterator& begin();
    PrimeIterator& end();
};


#endif //MAGICAL_CONTAINER_HPP