#include<iostream>
#include "clockType.h"

using namespace std;

int main()
{
    //Code goes here
    clockType mytime(1,24,55);

    mytime.printTime();
    mytime.incrementHours();
    mytime.printTime();

    return 0;
}
