#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    // This is a comment

    int val = 30;
    string a = "";

    cout << "hello world" << val << endl;

    cin >> a;

    val = atoi(a.c_str());

    cout << "You entered: " << val << endl;

    return 0;
}
