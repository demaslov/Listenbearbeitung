#include <iostream>
#include <list>
#include <set>

using namespace std;


list<int> checkCommonValues(list<int> integerListOne, list<int> integerListTwo);

int main() {

    list<int> integerListOne = {1, 1, 8, 9, 7, 8, 2, 3, 3};
    list<int> intergerListTwo = {13, 24,11, 11, 7, 8, 33, 42, 31, 1, 88};
    list<int> resultList;

    resultList = checkCommonValues(integerListOne, intergerListTwo);

    for(list<int>::iterator i = resultList.begin(); i != resultList.end(); ++i){
        cout << *i << endl;
    }

    return 0;
}

list<int> checkCommonValues(list<int> integerListOne, list<int> integerListTwo) {

    list<int> returnList;
    set<int> integerSetOne(integerListOne.begin(), integerListOne.end());
    set<int> integerSetTwo(integerListTwo.begin(), integerListTwo.end());

    set_intersection(integerSetOne.begin(), integerSetOne.end(),
                     integerSetTwo.begin(), integerSetTwo.end(),
                     back_inserter(returnList));

    return returnList;
}

/*
list<int> gemeinsameWerte(list<int> integerListEins, list<int> integerListZwei) {

    list<int> gemeinsameElemente;

    for (list<int>::iterator i = integerListEins.begin(); i != integerListEins.end(); ++i) {
        for (list<int>::iterator z = integerListZwei.begin(); z != integerListZwei.end(); ++z) {
            if(*i == *z){
                gemeinsameElemente.push_back(*i);
            }
        }
    }

    gemeinsameElemente.sort();
    gemeinsameElemente.unique();
    return gemeinsameElemente;
}

bool keineGemeinsamenWerte(list<int> gemeinsameWerte) {
    if(gemeinsameWerte.empty() == true)
        return false;
    else
        return true;
}
*/
