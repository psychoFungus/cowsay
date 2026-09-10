#include "Field.hpp"
#include "Parser.hpp"

#include <iostream>
using std::cout;
using std::endl;

Field::Field(Parser& parser) : cow(parser.getTongue(), parser.getCow()), cloud(parser.getMessage(), parser.getCloud()), sun(parser.getSun()), fill(parser.getFill()), message(parser.getMessage()), tongue(parser.getTongue())
{
    
}

Field::~Field() {}

void Field::print()
{
    int x, y;
    x = cow.getWidth() + cloud.getWidth() / 2 + 20;
    y = cow.getHeight() + cloud.getHeight() + 2;
    
    cout << ':';
    cout << sun;
    for (int i = 0; i < x; i++)
        {if(i%6 - 1 == 0)
                cout << fill;
            else 
                cout << " ";}
    cout << endl;
    for (int i = 0; i < x; i++)
        {if(i%6 - 2 == 0)
                cout << fill;
            else 
                cout << " ";}
    cout << endl;

    cloud.print(2, fill, x);
    cow.print(2, fill, x);

    for (int i = 0; i < x; i++)
        {if(0 == 0)
                cout << fill;
            else 
                cout << " ";}
    cout << endl;
    for (int i = 0; i < x; i++)
        {if(0 == 0)
                cout << fill;
            else 
                cout << " ";}
    cout << endl;
}
