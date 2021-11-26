#include <iostream>

#include "src/List.h"
#include "src/Time.h"

using namespace std;

int main() {
    List<Time *> times;

    int h, m, s;

    cout << "Enter hours, minutes and seconds: ";
    cin >> h >> m >> s;
    times.Add_Item_To_End(new Time(h, m, s));
    cout << "Enter hours, minutes and seconds: ";
    cin >> h >> m >> s;
    Add_Item_To_Begin(&times, new Time(h, m, s));
    if (times.Get_Last()->Get_Value()->Less(times.Get_First()->Get_Value())) {
        Time * time = times.Get_First()->Get_Value();
        cout << "You can reduce time " << time->getHours() << ":" << time->getMinutes() << ":" << time->getSeconds() << endl;
        char what;
        int amount;
        cout << "Enter what you want to reduce [h/m/s]: ";
        cin >> what;
        cout << "Enter amount: ";
        cin >> amount;
        time->Reduce(what, amount);
        times.Add_Item_To_End(time);
        Extract_Item_From_Begin(&times);
    } else if (times.Get_Last()->Get_Value()->More(times.Get_First()->Get_Value())) {
        Time * time = times.Get_First()->Get_Value();
        cout << "You can increase time " << time->getHours() << ":" << time->getMinutes() << ":" << time->getSeconds() << endl;
        char what;
        int amount;
        cout << "Enter what you want to increase [h/m/s]: ";
        cin >> what;
        cout << "Enter amount: ";
        cin >> amount;
        time->Increase(what, amount);
    } else {
        times.Extract_Item_From_End();
    }

    Node<Time *> *it = times.Get_First();

    cout << "Final list: " << endl << endl;
    while (it != nullptr) {
        Time * time = it->Get_Value();
        cout << time->getHours() << ":" << time->getMinutes() << ":" << time->getSeconds() << endl;
        it = it->Get_Next();
    }

}
