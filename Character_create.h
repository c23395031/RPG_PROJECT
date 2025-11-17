#pragma once 

#include <string>


using namespace std;



class Character
{
    private:



    void age_years();
    void gender();
    void race();
    void name();
    

    
    




    public:
    void create_prompt();
    void create();
    void character_readback();
    int Age;
    string Name;
    string Gender;
    string Race;
    string Create_choice;


};
