#ifndef SINGLYLINKEDLIST_TIME_H
#define SINGLYLINKEDLIST_TIME_H


class Time {
private:
    int hours, minutes, seconds;
public:
    Time(int h, int m, int s);
    ~Time();
    void Increase(char what, int amount);
    void Reduce(char what, int amount);
    bool More(Time * time);
    bool Less(Time * time);
    bool Equal(Time * time);
    int getHours();
    int getMinutes();
    int getSeconds();
};


#endif //SINGLYLINKEDLIST_TIME_H
