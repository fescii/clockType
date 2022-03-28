#include<iostream>
#include "clockType.h"

clockType::clockType(int hours, int minutes, int seconds)
{
    if(0 <= hours && hours < 24)
        hr = hours;
    else
        hr = 0;

    if(0 <= minutes && minutes < 60)
        min = minutes;
    else
        min = 0;

    if(0 <= seconds && seconds < 60)
        sec = seconds;
    else
        sec = 0;

///Also it can be written as :: (Efficient for Debugging)
/// setTime(hours, minutes, seconds)

}


clockType::clockType()
{
    hr = 0;
    min = 0;
    sec = 0;

///Also it can be written as :: (Efficient for Debugging)
/// setTime(0,0,0)
}

void clockType::setTime(int hours, int minutes, int seconds)
{
    if(0 <=hours && hours < 24)
        hr = hours;
    else
        hr = 0;

    if(0 <= minutes && minutes < 60)
        min = minutes;
    else
        min = 0;

    if(0 <= seconds && seconds < 60)
        sec = seconds;
    else
        sec = 0;
}

void clockType::getTime(int& hours, int& minutes, int& seconds)
{
    hours = hr;
    minutes = min;
    seconds = sec;
}

void clockType::printTime() const
{
    if(hr < 10)
        std::cout<<"0";
    std::cout<<hr<<":";

    if(min < 10)
        std::cout<<"0";
    std::cout<<min<<":";

    if(sec < 10)
        std::cout<<"0";
    std::cout<<sec<<std::endl;
}


void clockType::incrementHours()
{
    hr++;

    if(hr > 23)
        hr = 0;
}

void clockType::incrementMinutes()
{
    min++;

    if(min > 59)
    {
        min = 0;
        incrementHours();//Increment hours
    }

}

void clockType::incrementSeconds()
{
    sec++;
    if(sec > 59)
    {
        sec = 0;
        incrementMinutes();//Increment Minutes
    }
}

bool clockType::equalTime(const clockType& otherClock) const
{
    return(hr == otherClock.hr
           && min == otherClock.min
           && sec == otherClock.sec);
}

