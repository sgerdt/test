#ifndef TEST_H
#define TEST_H
class B;

class A
{
    public:
        void setSecretPublicValue(B &, int);
        void setSecretProtectedValue(B &, int);
        void setSecretPrivateValue(B &, int);
};

class B
{
    // To let another class use your functions and even private bits
    friend class A; // friends: permission for A to touch B's private bits
    public:
    int secretPublicValue;
    int getSecretPublicValue() { return secretPublicValue; }
    int getSecretProtectedValue() { return secretProtectedValue; }
    int getSecretPrivateValue() { return secretPrivateValue; }
    protected: // friends: even the protected bits..
    int secretProtectedValue;
    private: // friends: and even the private bits...
    int secretPrivateValue;
};

#endif
