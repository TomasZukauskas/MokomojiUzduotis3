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

ath::Athlete::Athlete(string inputName, string inputSurname, string inputSport, unsigned int inputHeight, unsigned int inputWeight)
{
    setName(inputName);
    setSurname(inputSurname);
    setSport(inputSport);
    setHeight(inputHeight);
    setWeight(inputWeight);
    thisID = ++ID;
}
ath::Athlete::~Athlete()
    cout << "Destroyed!" << endl;
}
void ath::Athlete::setName(string inputName)
{
    if(isName(inputName))
    {
        name = inputName;
    }
    else
    {
        throw DEFAULT;
    }
}
void ath::Athlete::setSurname(string inputSurname)
{
    if(isSurname(inputSurname))
    {
        surname = inputSurname;
    }
    else
    {
        throw DEFAULT;
    }
}
void ath::Athlete::setSport(string inputSport)
{
    if(isSport(inputSport))
    {
        sport = inputSport;
    }
    else
    {
        throw DEFAULT;
    }
}
void ath::Athlete::setHeight(unsigned int inputHeight)
{
    height = (inputHeight > 0 && inputHeight <= 250 ? inputHeight : throw DEFAULT_0);
}
void ath::Athlete::setWeight(unsigned int inputWeight)
{
    weight = (inputWeight > 0 && inputWeight <= 300 ? inputWeight : throw DEFAULT_0);;
}
string ath::Athlete::getName()
{
    return name;
}
string ath::Athlete::getSurname()
{
    return surname;
}
string ath::Athlete::getSport()
{
    return sport;
}
unsigned int ath::Athlete::getHeight()
{
    return height;
}
unsigned int ath::Athlete::getWeight()
{
    return weight;
}
string ath::Athlete::toString()
{
    stringstream athlete;

    athlete << thisID << ". " << name << " " << surname << " " << sport << " player " <<endl;
    athlete << "Height: " << height << " Weight: " <<  weight << endl;

    return athlete.str();
}
bool ath::Athlete::isName(string name)
{
    for (size_t i = 1; i < name.length(); i++)
    {
        if (!islower(name[i]))
        {
            return false;
        }
    }
    if (!isupper(name[0]))
    {
        return false;
    }
    return true;
}
bool ath::Athlete::isSurname(string surname)
{
    for (size_t i = 1; i < surname.length(); i++)
    {
        if (!islower(surname[i]))
        {
            return false;
        }
    }
    if (!isupper(surname[0]))
    {
        return false;
    }
    return true;
}
bool ath::Athlete::isSport(string sport)
{
    for (size_t i = 1; i < sport.length(); i++)
    {
        if (!isalpha(sport[i]))
        {
            return false;
        }
    }
    if (sport.length() < 1)
    {
        return false;
    }
    return true;
}
int ath::Athlete::ID = 0;
