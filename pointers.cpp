/*
 * As basic code to implement various  pointers.
*/

#include <iostream>
#include <stdio.h>
using namespace std;
class pointers
{
    public:
        void basic_pointers();
        void passingPointerAsRef(int *p);
};

void pointers ::basic_pointers()
{
    int a = 5; // An integer
    int *p; // An integer pointer
    p = &a; //Giving memory location of A to pointer p. Thus, p points A.

    cout << "Pointer's memory location : " << &p << endl;
    cout << "Pointer is pointing at " << *p << endl;
    cout << "Pointer is pointing to memory location " << p << endl;
    cout << "Memory location of variable is " << &a << endl;
}

void pointers ::passingPointerAsRef(int *p)
{
    /* This function needs a pointer to some variable.
     * This function will print pointers different values.
     */
    cout << p << endl;
    cout << *p << endl;
}
int main ()
{
    pointers p;
    // p.basic_pointers();
    int a =5;
    int *p1;
    p1 = &a;
    /* So, to tun passingPointerAsRef we need to pass a memory location.
     * In this case we are passing a's memory location. We can pass either &a
     * or p1 both will work.
     * We can not pass *p1 as *p1 is 5.
     * */
    p.passingPointerAsRef(p1);
    return 0;
}