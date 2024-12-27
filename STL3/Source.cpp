#include <iostream>
#include "vector.h"

int main()
{
    vector<int> data = { 5, 3, 8, 1, 4, 8, 2, 7 };

    MinFinder findMin;
    MaxFinder findMax;
    SortAscending sortAsc;
    SortDescending sortDesc;
    Increment incrementBy5(5);
    Decrement decrementBy2(2);
    RemoveValue remove8(8);

    cout << "Original data set: ";
    for (int num : data) cout << num << " ";
    cout << endl;

    cout << "Minimum value: " << findMin(data) << endl;

    cout << "Maximum value: " << findMax(data) << endl;

    sortAsc(data);
    cout << "After sorting in ascending order: ";
    for (int num : data) cout << num << " ";
    cout << endl;

    sortDesc(data);
    cout << "After sorting in descending order: ";
    for (int num : data) cout << num << " ";
    cout << endl;

    incrementBy5(data);
    cout << "After increasing by 5: ";
    for (int num : data) cout << num << " ";
    cout << endl;

    decrementBy2(data);
    cout << "After decreasing by 2: ";
    for (int num : data) cout << num << " ";
    cout << endl;

    remove8(data);
    cout << "After deleting all 8: ";
    for (int num : data) cout << num << " ";
    cout << endl;

    return 0;
}
