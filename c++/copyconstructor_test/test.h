#ifndef TEST_H_COPYCONSTRUCTOR
#define TEST_H_COPYCONSTRUCTOR

using namespace std;

class Test
{
    public:
        int x;
        int y;
        int* p;
        Test(const Test &);
        Test(int, int, int);
        ~Test();
};

#endif
