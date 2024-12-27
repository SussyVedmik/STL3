#include "vector.h"

int MinFinder::operator()(const vector<int>& data) const
{
    return *min_element(data.begin(), data.end());
}

int MaxFinder::operator()(const vector<int>& data) const
{
    return *max_element(data.begin(), data.end());
}

void SortAscending::operator()(vector<int>& data) const
{
    sort(data.begin(), data.end());
}

void SortDescending::operator()(vector<int>& data) const
{
    sort(data.rbegin(), data.rend());
}

void Increment::operator()(vector<int>& data) const
{
    for_each(data.begin(), data.end(), [this](int& x) { x += value; });
}

void Decrement::operator()(vector<int>& data) const
{
    for_each(data.begin(), data.end(), [this](int& x) { x -= value; });
}

void RemoveValue::operator()(vector<int>& data) const
{
    data.erase(remove(data.begin(), data.end(), target), data.end());
}
