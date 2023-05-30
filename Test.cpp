#include "doctest.h"
#include "sources/MagicalContainer.hpp"
using namespace std;

TEST_CASE("MAGICAL CONTAINER CHECK addElement")
{
    MagicalContainer magicalContainer;
    magicalContainer.addElement(3);
    magicalContainer.addElement(31);
    magicalContainer.addElement(8);
    CHECK(magicalContainer.size()==3);
    magicalContainer.addElement(-3);
    magicalContainer.addElement(0);
    CHECK(magicalContainer.size()==5);
}

TEST_CASE("MAGICAL CONTAINER CHECK removeElement")
{
    MagicalContainer magicalContainer;
    magicalContainer.addElement(3);
    magicalContainer.addElement(31);
    magicalContainer.addElement(8);
    CHECK(magicalContainer.size()==3);
    magicalContainer.removeElement(31);
    CHECK(magicalContainer.size()==2);
    magicalContainer.addElement(-3);
    magicalContainer.addElement(0);
    CHECK(magicalContainer.size()==4);
    magicalContainer.addElement(-9);
    magicalContainer.removeElement(3);
    CHECK(magicalContainer.size()==4);
}

TEST_CASE("MAGICAL CONTAINER CHECK removeElement")
{
    bool isPrime1= MagicalContainer::isPrime(30);
    CHECK(isPrime1==false);
    bool isPrime2= MagicalContainer::isPrime(88);
    CHECK(isPrime2==false);
    bool isPrime3= MagicalContainer::isPrime(3);
    CHECK(isPrime3==true);
    bool isPrime4= MagicalContainer::isPrime(31);
    CHECK(isPrime4==true);
}

TEST_CASE("ASCENDINGITERATOR CLASS ")
{
    MagicalContainer magicalContainer;
    MagicalContainer magicalContainer2;
    AscendingIterator ascendingIterator(magicalContainer);
    AscendingIterator ascendingIterator2(magicalContainer2);
    AscendingIterator other(ascendingIterator);
    bool res=ascendingIterator.begin()== ascendingIterator.end();
    CHECK(res==true);
    magicalContainer.addElement(3);
    magicalContainer.addElement(31);
    magicalContainer.addElement(8);
    magicalContainer.addElement(501);
    magicalContainer.addElement(2);
    magicalContainer.addElement(1);
    magicalContainer.addElement(18);
    magicalContainer.addElement(5);
    CHECK(*ascendingIterator.begin()==2);
    CHECK(*ascendingIterator.begin()==1);
    CHECK(*ascendingIterator.begin()==3);
    res=ascendingIterator.begin()==ascendingIterator.end();
    CHECK(res==true);
    magicalContainer2.addElement(12);
    magicalContainer2.addElement(13);
    magicalContainer2.addElement(11);
    magicalContainer2.addElement(15);
    bool isequal=ascendingIterator.operator==(ascendingIterator2);
    CHECK(isequal==true);
    isequal=ascendingIterator2.operator==(ascendingIterator);
    CHECK(isequal==false);
    bool isLessThan=ascendingIterator.operator<(ascendingIterator2);
    CHECK(isLessThan==true);
    isLessThan=ascendingIterator2.operator<(ascendingIterator);
    CHECK(isLessThan==false);
    bool isGreaterThan=ascendingIterator.operator>(ascendingIterator2);
    CHECK(isGreaterThan==true);
    isGreaterThan=ascendingIterator2.operator>(ascendingIterator);
    CHECK(isGreaterThan==false);
    bool notEqual=ascendingIterator.operator!=(ascendingIterator2);
    CHECK(notEqual==true);
    notEqual=ascendingIterator2.operator!=(ascendingIterator);
    CHECK(notEqual==false);
}

TEST_CASE("SIDEITERATOR CLASS ")
{
    MagicalContainer magicalContainer;
    MagicalContainer magicalContainer2;
    SideCrossIterator sideIterator(magicalContainer);
    SideCrossIterator sideIterator2(magicalContainer2);
    SideCrossIterator other(sideIterator);
    bool res=sideIterator.begin()== sideIterator.end();
    CHECK(res==true);
    magicalContainer.addElement(3);
    magicalContainer.addElement(31);
    magicalContainer.addElement(8);
    magicalContainer.addElement(501);
    magicalContainer.addElement(2);
    magicalContainer.addElement(1);
    magicalContainer.addElement(18);
    magicalContainer.addElement(5);
    CHECK(*sideIterator.begin()==2);
    CHECK(*sideIterator.begin()==1);
    CHECK(*sideIterator.begin()==3);
    res=sideIterator.begin()==sideIterator.end();
    CHECK(res==true);
    magicalContainer2.addElement(12);
    magicalContainer2.addElement(13);
    magicalContainer2.addElement(11);
    magicalContainer2.addElement(15);
    bool isequal=sideIterator.operator==(sideIterator2);
    CHECK(isequal==true);
    isequal=sideIterator2.operator==(sideIterator);
    CHECK(isequal==false);
    bool isLessThan=sideIterator.operator<(sideIterator2);
    CHECK(isLessThan==true);
    isLessThan=sideIterator2.operator<(sideIterator);
    CHECK(isLessThan==false);
    bool isGreaterThan=sideIterator.operator>(sideIterator2);
    CHECK(isGreaterThan==true);
    isGreaterThan=sideIterator2.operator>(sideIterator);
    CHECK(isGreaterThan==false);
    bool notEqual=sideIterator.operator!=(sideIterator2);
    CHECK(notEqual==true);
    notEqual=sideIterator2.operator!=(sideIterator);
    CHECK(notEqual==false);
}

TEST_CASE("PRIMEITERATOR CLASS ")
{
    MagicalContainer magicalContainer;
    MagicalContainer magicalContainer2;
    SideCrossIterator PrimeIterator(magicalContainer);
    SideCrossIterator PrimeIterator2(magicalContainer2);
    SideCrossIterator other(PrimeIterator);
    bool res=PrimeIterator.begin()== PrimeIterator.end();
    CHECK(res==true);
    magicalContainer.addElement(3);
    magicalContainer.addElement(31);
    magicalContainer.addElement(8);
    magicalContainer.addElement(501);
    magicalContainer.addElement(2);
    magicalContainer.addElement(1);
    magicalContainer.addElement(18);
    magicalContainer.addElement(5);
    CHECK(*PrimeIterator.begin()==2);
    CHECK(*PrimeIterator.begin()==1);
    CHECK(*PrimeIterator.begin()==3);
    res=PrimeIterator.begin()==PrimeIterator.end();
    CHECK(res==true);
    magicalContainer2.addElement(12);
    magicalContainer2.addElement(13);
    magicalContainer2.addElement(11);
    magicalContainer2.addElement(15);
    bool isequal=PrimeIterator.operator==(PrimeIterator2);
    CHECK(isequal==true);
    isequal=PrimeIterator2.operator==(PrimeIterator);
    CHECK(isequal==false);
    bool isLessThan=PrimeIterator.operator<(PrimeIterator2);
    CHECK(isLessThan==true);
    isLessThan=PrimeIterator2.operator<(PrimeIterator);
    CHECK(isLessThan==false);
    bool isGreaterThan=PrimeIterator.operator>(PrimeIterator2);
    CHECK(isGreaterThan==true);
    isGreaterThan=PrimeIterator2.operator>(PrimeIterator);
    CHECK(isGreaterThan==false);
    bool notEqual=PrimeIterator.operator!=(PrimeIterator2);
    CHECK(notEqual==true);
    notEqual=PrimeIterator2.operator!=(PrimeIterator);
    CHECK(notEqual==false);
}