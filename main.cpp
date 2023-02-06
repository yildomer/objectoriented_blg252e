#include <iostream>

using namespace std;

// For generic programming, we can use template functions in C++.
template <typename T>
T templateMax(T var1, T var2) {
    return (var1 > var2) ? var1 : var2;
}

int main() {

    cout << templateMax<int>(3,4) << endl;

    cout << templateMax<double>(5.0,3.0) << endl;

    cout << templateMax<char>('a', 'z') << endl;

    return 0;
}