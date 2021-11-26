#include "Time.h"

#include <iostream>

Time::Time(int h, int m, int s) {
    hours=h;
    minutes=m;
    seconds=s;
}

Time::~Time() = default;

void Time::Increase(char what, int amount) {

    switch(what) {
        case 'h':
            hours+=amount;
            break;
        case 'm':
            minutes+=amount;
            break;
        case 's':
            seconds+=amount;
            break;
        default:
            std::cout << "Input error!\n";
    }
}

void Time::Reduce(char what, int amount) {
    Increase(what, -amount);
}

bool Time::More(Time *time) {
    return hours*3600 + minutes*60 + seconds > time->getHours()*3600 + time->getMinutes()*60 + time->getSeconds();
}

bool Time::Less(Time *time) {
    return !More(time);
}

bool Time::Equal(Time *time) {
    return (!More(time) && !Less(time));
}

int Time::getHours () {return hours;}
int Time::getMinutes () {return minutes;}
int Time::getSeconds () {return seconds;}
