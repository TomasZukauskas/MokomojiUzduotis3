#ifndef ATHLETE_HPP
#define ATHLETE_HPP
#include <iostream>
#include <string>

using namespace std;

namespace ath
{
    class Athlete
    {
        private:
            string name;
            string surname;
            string sport;
            unsigned int height;
            unsigned int weight;
            static int ID;
            int thisID;
        public:
            Athlete(string inputName, string inputSurname, string inputSport, unsigned int inputHeight, unsigned int inputWeight);
            ~Athlete();
            void setName(string inputName);
            void setSurname(string inputSurname);
            void setSport(string inputSport);
            void setHeight(unsigned int inputHeight);
            void setWeight(unsigned int inputWeight);
            string getName();
            string getSurname();
            string getSport();
            unsigned int getHeight();
            unsigned int getWeight();
            string toString();
        private:
            bool isName(string name);
            bool isSurname(string surname);
            bool isSport(string sport);
    };
}

#endif // ATHLETE_HPP
