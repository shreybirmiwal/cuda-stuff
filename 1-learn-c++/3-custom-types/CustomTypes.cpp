#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int sizeT()
{

    // essentially size_t is a longlong in other languages
    size_t test_long = 9;
    cout << "value: " << test_long << " size: " << sizeof(test_long) << "bytes" << endl;

    // 8 bytes = 64 bits for size_t
    // compared to normal int is just 4 bytes = 32 bits
    return 0;
}
typedef struct
{
    float x;
    float y;
} Point;

int enum_testing()
{
    Point test_point = {1.2, 3.5};
    cout << "Size of Point:" << sizeof(test_point) << endl;
    return 0;
}

int main()
{
    sizeT();
    enum_testing();
    return 0;
}