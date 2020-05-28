#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

enum COLOR
{
    RED,    //0
    black,  //1
    white,  //2
    blue,   //3
    green   //4
};

class sheet
{
    string name;
    int numberOfLines;
    COLOR color;
public:
    sheet(string _name, int _numberOfLines, COLOR _color)
    {
        name = _name;
        numberOfLines = _numberOfLines;
        color = _color;
    }
    
    static sheet *redSheet(){
        return new sheet("knove", 30, RED);
    }
    
    static sheet *blackSheet(){
        return new sheet("ffoof", 40, black);
    }
    
    static sheet *whiteSheet(){
        return new sheet("bvkyue", 35, white);
    }
    
    static sheet *blueSheet(){
        return new sheet("evibwi", 50, blue);
    }
    
    static sheet *greenSheet(){
        return new sheet("sviive", 25, green);
    }
    
    void print()
    {
        cout << "Color: " << color << endl;
        cout << "Name: " << name << endl;
        cout << "Number Of Lines: " << numberOfLines << endl;
    }
};

int main()
{
    sheet *red = sheet::redSheet();
    sheet *black = sheet::blackSheet();
    sheet *white = sheet::whiteSheet();
    sheet *blue = sheet::blueSheet();
    sheet *green = sheet::greenSheet();
    
    red->print();
    black->print();

    return 0;
}
