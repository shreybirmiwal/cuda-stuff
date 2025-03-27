#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int basic_example()
{
    int val = 10;    // setting normal value
    int *ptr = &val; //*ptr means * we are making an address type variable.  & means to get address of val

    cout << "at memory location " << ptr << " value is " << *ptr << endl;
    // again using *ptr allows us to get value at a pointer
    //  using &val lets us get address of a value

    return 0;
}

int recursive_pointer()
{

    int value = 42;
    int *ptr = &value;
    int **ptr1 = &ptr;
    int ***ptr2 = &ptr1;

    cout << "value at ptr2 (3 astricts): " << ***ptr2;

    // So basically u can do multiple layers of saving the address of a value and then u can deference multiple at once

    return 0;
}

int void_pointer()
{

    int num = 10;
    float fnum = 3.14;

    void *void_pointer;
    // we can also do voice pointes that can change what type of variable they are pointing to (ie int to float)

    void_pointer = &num;
    cout << "pointer:" << void_pointer << ", value at address:" << *(int *)void_pointer << endl;
    // so since its a voide, we must type fast it to int to let it know its pullin an int addy

    void_pointer = &fnum;
    cout << "pointer:" << void_pointer << ", value at address:" << *(float *)void_pointer << endl;
    // this time we let it know its a float

    // this is prolly bc each float, int etc take up diff space in memory so it needs to know till when its looking

    return 0;
}

int null_pointer()
{

    int *pointer = NULL;
    cout << "initial pointer value: " << (void *)pointer << endl;
    // notice thats its 0x0 because no memeory was actually allocated

    if (pointer == NULL)
    {
        cout << "cannot deference, pointer is null" << endl;
    }

    // allocate memory
    pointer = (int *)malloc(sizeof(int));

    cout << "new pointer " << pointer << " value at pointer: " << *pointer << endl;

    return 0;
}

int arrays()
{

    int arr[] = {12, 24, 36, 48};

    // natively, arr is actually just a poitner to the location of this array
    cout << "array, when we try printing it:" << arr << " now lets print value at arr " << *arr << endl;

    int *pointer = arr;

    for (int i = 0; i < 5; i++)
    {
        cout << pointer << " " << *pointer << endl;
        pointer++;
    }

    //     input: {12, 24, 36, 48}
    //     output:
    //     0x16d69f160 12
    //     0x16d69f164 24
    //     0x16d69f168 36
    //     0x16d69f16c 48
    //     0x16d69f170 41300060

    // What is happening? On the 5th iteration of the loop, it is printing the element after the array in memory..
    // notice that the address is jumping by 4 - 4 bytes * 8 bits/byte = 32bits = int32!

    return 0;
}

int matrix()
{

    int ar1[] = {5, 4, 8, 2};
    int ar2[] = {8, 1, 19, 5};

    int *ptr_array1 = ar1;
    int *ptr_array2 = ar2;

    int *matrix[] = {ptr_array1, ptr_array2};

    for (int i = 0; i < 2; i++)
    {
        // rows
        for (int j = 0; j < 4; j++)
        {
            // cols
            cout << "this should be the value of the pointer (column) we are on in the matrix " << *(matrix + i) << endl;
            cout << "this should be the address of what we want to get (col, row)" << (*(matrix + i) + j) << "now this should be the value :" << *(*(matrix + i) + j) << endl;
        }
    }

    return 0;
}

int main()
{
    matrix();

    return 0;
}