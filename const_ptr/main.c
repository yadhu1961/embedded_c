#include <stdio.h>

int main()
{
    const int *ptr0; // pointer to a constant value, const acts on value instead of a pointer.
    int value0 = 100;
    int value1 = 200;

    ptr0 = &value0;

    int *const ptr1 = &value1; // const pointer, since * is closer to const

    *ptr1 = 200; // Should be fine.

    ptr0 = &value1; // should be fine, since it is a modifiable pointer.

    *ptr0 = 200; // This should be an error, since ptr0 is a pointer to const value

    ptr1 = &value1; // Should error, because it is a const pointer.

    return 0;
}
