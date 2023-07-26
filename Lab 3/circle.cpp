//
//  main.cpp
//  Lab 3
//
//  Created by Sean Belingheri on 9/8/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    const double pi = 3.14159265;
    float rad;
    cout<<"Enter radius: ";
    cin>>rad;
    cout<<"Circumference: "<<float(2*pi*rad)<<endl;
    cout<<"Area: "<<float(pi*(rad*rad))<<endl;
}
