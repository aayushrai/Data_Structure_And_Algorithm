#include <bits/stdc++.h>

using namespace std;



int main()
{
    vector<int> arr = {1,2,3,4};
    arr = arr + {5};
    for(int i=0; i < 5; i++)
        cout << arr[i];
}