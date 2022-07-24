#include<iostream>
using namespace std;
class A
{
    protected:
    int  n=1, m=2;

    public:
    void sum()
    {
        cout<<n+m;
    }
};

class B: public A
{
    public:

    void show()
    {
        cout<<n<<" "<<m;
    }
};


int main()
{
    B *obj = new B();
    (*obj).show();
    // or
    obj->show();
    return 0;
}
