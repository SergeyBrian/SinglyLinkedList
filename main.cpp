#include <iostream>

#include "src/List.h"

using namespace std;

int main() {
    List<int> list;

    Add_Item_To_Begin(&list, 1);
    list.Add_Item_To_End(2);
    list.Add_Item_To_End(3);
    list.Extract_Item_From_End();
    Extract_Item_From_Begin(&list);

}
