/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: aparsons
 *
 * Created on October 9, 2017, 1:04 PM
 */

#include <iostream>

using namespace std;
class Base{
public:
    void virtual draw()
    {
        cout<<"  /\\"<<endl;
        cout<<" /  \\"<<endl;
        cout<<"/    \\"<<endl;
    }
};

class Dashes : public Base{
public:
    void draw()
    {
        cout<<"  /\\"<<endl;
        cout<<" //\\\\"<<endl;
        cout<<"///\\\\\\"<<endl;
    }
};

class Astricks : public Base{
public:
    void draw()
    {
        cout<<"  /\\"<<endl;
        cout<<" /**\\"<<endl;
        cout<<"/****\\"<<endl;
    }
};

class Pluses : public Base{
public:
    void draw()
    {
        cout<<"  /\\"<<endl;
        cout<<" /++\\"<<endl;
        cout<<"/++++\\"<<endl;
    }
};

int main(int argc, char** argv) {
    Base *pointer[4];
    
    Base base;
    Dashes dash;
    Astricks astrick;
    Pluses plus;
    
    pointer[0] = &dash;
    pointer[1] = &astrick;
    pointer[2] = &plus;
    
    for(int i = 0;i < sizeof(pointer); i++)
    {
        pointer[i] -> draw();
    }
}

