#include <iostream>
#include "test.h"


using namespace std;

int main()
{
    B objB;
    A objA;

    objA.setSecretPublicValue(objB, 600);
    cout << objB.getSecretPublicValue() << endl;
    objA.setSecretProtectedValue(objB, 600);
    cout << objB.getSecretProtectedValue() << endl;
    objA.setSecretPrivateValue(objB, 600);
    cout << objB.getSecretPrivateValue() << endl;

    return 0;
}
