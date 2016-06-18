#include "test.h"

/*
 * bits from objects of class B are inserted with values by object of Class A,
 * so as a declared friend of object A object B allows this for itself.
 */
void A::setSecretPublicValue(B & obj, int value) {
   obj.secretPublicValue = value;
}
void A::setSecretProtectedValue(B & obj, int value) {
   obj.secretProtectedValue = value;
}
void A::setSecretPrivateValue(B & obj, int value) {
   obj.secretPrivateValue = value;
}

