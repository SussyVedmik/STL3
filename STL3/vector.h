#include <vector>
#include <algorithm>

using namespace std;

struct MinFinder
{
    int operator()(const vector<int>& data) const;
};

struct MaxFinder
{
    int operator()(const vector<int>& data) const;
};

struct SortAscending
{
    void operator()(vector<int>& data) const;
};

struct SortDescending
{
    void operator()(vector<int>& data) const;
};

struct Increment
{
    int value;
    Increment(int val) : value(val) {}
    void operator()(vector<int>& data) const;
};

struct Decrement
{
    int value;
    Decrement(int val) : value(val) {}
    void operator()(vector<int>& data) const;
};

struct RemoveValue
{
    int target;
    RemoveValue(int val) : target(val) {}
    void operator()(vector<int>& data) const;
};

