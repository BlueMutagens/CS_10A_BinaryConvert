//
//  binary8.cpp
//  Lab 3
//
//  Created by Sean Belingheri on 9/8/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int start, a, b, c, d, e, f, g, h;
    int digit1, digit2, digit3, digit4, digit5, digit6, digit7, digit8;
    cout<<"Enter a number in base 10: ";
    cin>>start;
    a = start % 256;
    digit1 = a / 128;
    c = a % 128;
    digit2 = c / 64;
    b = a % 64;
    digit3 = b / 32;
    d = b % 32;
    digit4 = d / 16;
    e = d % 16;
    digit5 = e / 8;
    f = e % 8;
    digit6 = f / 4;
    g = f % 4;
    digit7 = g / 2;
    h = g % 2;
    digit8 = h / 1;
    cout<<"8 least significant bits: "<<digit1<<digit2<<digit3<<digit4<<digit5<<digit6<<digit7<<digit8<<endl;
    
    
    
}
