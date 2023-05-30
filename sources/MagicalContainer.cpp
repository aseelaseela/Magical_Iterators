#include "MagicalContainer.hpp"
#include <iostream>
using namespace std;
//MagicalContainer
void MagicalContainer :: addElement(int element)
{
    return;
}
void MagicalContainer :: removeElement(int element)
{
    return;
}
bool MagicalContainer :: isPrime(int element)
{
    return false;
}
int MagicalContainer :: size()const
{
    return orginalContainer.size();
}
// *** AscendingIterator *** 
AscendingIterator ::AscendingIterator (MagicalContainer &magical)
{
    cout << "AscendingIterator constructor" <<endl ;
}
 AscendingIterator ::AscendingIterator (AscendingIterator &other)
{
    cout << "AscendingIterator copy constructor" <<endl ;
}

int AscendingIterator :: operator*() const
{
    return 0;
}
AscendingIterator& AscendingIterator :: operator++()
{
    return *this;
}
bool AscendingIterator :: operator==(AscendingIterator &other)
{
    return false;
}
bool AscendingIterator :: operator!=(AscendingIterator &other)
{
    return false;
}
bool AscendingIterator :: operator<(AscendingIterator &other)
{
    return false;
}
bool AscendingIterator :: operator>(AscendingIterator &other)
{
    return false;
}
AscendingIterator& AscendingIterator :: begin()
{
    return *this;
}
AscendingIterator& AscendingIterator :: end()
{
    return *this;
}

// *** SideCrossIterator *** 
SideCrossIterator ::SideCrossIterator (MagicalContainer &magical)
{
    cout << "SideCrossIterator constructor" <<endl ;
}
 SideCrossIterator ::SideCrossIterator (SideCrossIterator &other)
{
    cout << "SideCrossIterator copy constructor" <<endl ;
}

int SideCrossIterator :: operator*() const
{
    return 0;
}
SideCrossIterator& SideCrossIterator :: operator++()
{
    return *this;
}
bool SideCrossIterator :: operator==(SideCrossIterator &other)
{
    return false;
}
bool SideCrossIterator :: operator!=(SideCrossIterator &other)
{
    return false;
}
bool SideCrossIterator :: operator<(SideCrossIterator &other)
{
    return false;
}
bool SideCrossIterator :: operator>(SideCrossIterator &other)
{
    return false;
}
SideCrossIterator& SideCrossIterator :: begin()
{
    return *this;
}
SideCrossIterator& SideCrossIterator :: end()
{
    return *this;
}
//***PrimeIterator***
PrimeIterator ::PrimeIterator (MagicalContainer &magical)
{
    cout << "PrimeIterator constructor" <<endl ;
}
PrimeIterator ::PrimeIterator (PrimeIterator &other)
{
    cout << "PrimeIterator copy constructor" <<endl ;
}

int PrimeIterator :: operator*() const
{
    return 0;
}
PrimeIterator& PrimeIterator :: operator++()
{
    return *this;
}
bool PrimeIterator :: operator==(PrimeIterator &other)
{
    return false;
}
bool PrimeIterator :: operator!=(PrimeIterator &other)
{
    return false;
}
bool PrimeIterator :: operator<(PrimeIterator &other)
{
    return false;
}
bool PrimeIterator :: operator>(PrimeIterator &other)
{
    return false;
}
PrimeIterator& PrimeIterator :: begin()
{
    return *this;
}
PrimeIterator& PrimeIterator :: end()
{
    return *this;
}