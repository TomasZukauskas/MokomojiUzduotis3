#include "Athlete.hpp"
#include <iostream>
#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>
#define DEFAULT "Default"
#define DEFAULT_0 000

using namespace std;

int main()
{
    try
    {
        //all methods should be called here
        ath::Athlete *athlete1 = new ath::Athlete("Stephen", "Curry", "Basketball", 191, 86);
        ath::Athlete *athlete2 = new ath::Athlete("Yuji", "Nishida", "Volleyball", 186, 88);
        ath::Athlete *athlete3 = new ath::Athlete("Cristiano", "Ronaldo", "Football", 187, 84);

        athlete1->setName("Mike");
        athlete1->setSurname("Trout");
        athlete1->setSport("Baseball");
        athlete1->setHeight(188);
        athlete1->setWeight(107);

        vector<ath::Athlete*> aDynam;

        aDynam.push_back(athlete1);
        aDynam.push_back(athlete2);
        aDynam.push_back(athlete3);

        for(size_t i = 0; i < aDynam.size(); ++i)
        {
            cout << aDynam[i]->toString() << endl;
        }

        cout << athlete3->getName() << endl;
        cout << athlete3->getSurname() << endl;
        cout << athlete3->getSport() << endl;
        cout << athlete3->getHeight() << endl;
        cout << athlete3->getWeight() << endl;

        cout << endl << "To show that id works fine: " << endl << athlete2->toString() << endl;

        ath::Athlete *athlete4 = new ath::Athlete("stephen", "curry", "basketball", 360, 500); // to show that it throws exception

        cout << athlete4->toString() << endl;

        delete athlete1;
        delete athlete2;
        delete athlete3;

        return 0;
    }
    catch(...)                  //In order to handle the error
    {
        cout << "ERROR: wrong input!";
    }
}
