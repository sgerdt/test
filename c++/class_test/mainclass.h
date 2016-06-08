#ifndef MAINCLASS
#define MAINCLASS

using namespace std;

class MainClass {
    public:
        MainClass() ;
        MainClass(int, int, int);
        ~MainClass();

    protected:
        virtual int Freedom() {}; // achieveable
        virtual int gainFinancialFreedom() {}; // achieveable
        virtual int createMeaningfulWork() {}; // basic premise
        int checkFinancialGains() { return financialbalance; }; // done

    /*
    int maslovsBasicWisdom() {} = 0; // achievable
    int investToGrow() = 0; // we must keep money flowing,
    void getPoverty() {}; // misnomer
    void achieveHappiness() {}; // a sorry user
    bool employManyPeople() {}; // a fancy sideeffect, great if true
    int constantReEducationWhileWorking() {}; // a neccessary goal to draw full potential from community
    void achieveHappiness() {}; // a sorry user
    int constantHealthChecks() =0;
    int keepPeopleFitHealthy() =0; // really, encourage or even force it for their own good. Relative dictatorship
    */
    protected:
        int getFinancialBalance() { return financialbalance; };
        void setFinancialBalance(int fb) { if (fb != financialbalance) financialbalance = fb; };
        int getFreedom() { return freedom; };
        void setFreedom(int f) { if (f != freedom) freedom = f; };
        int getFinancialFreedom() { return financialfreedom; };
        void setFinancialFreedom(int ff) { if (ff != financialfreedom) financialfreedom = ff; };
        int getMeaningfulWork() { return meaningfulwork; };
        void setMeaningfulWork(int mw) { if (mw != meaningfulwork) meaningfulwork = mw; };

    private:

    int freedom;
    int financialbalance;
    int financialfreedom;
    int meaningfulwork;
};
#endif
