#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{

    // static casting: this is for casting
    float pi = 3.14;

    int pi_int = (int)pi;

    cout << "type casted: " << pi_int << endl;

    // 3.14 --> truncated to 3

    return 0;
}