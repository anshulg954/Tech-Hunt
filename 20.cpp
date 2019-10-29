#include <iostream>
using namespace std;
class Apratim2k19
{
    private:
        int x;
    public:
        Apratim2k19(): x(7) { }
        friend int techhunt(Apratim2k19);
};
int techhunt(Apratim2k19 d)
{
    d.x += ++d.x*d.x--+d.x++/d.x++;
    return d.x;
}
int main()
{
    Apratim2k19 D;
    cout<<"Apratim2k19: "<< techhunt(D);
    return 0;
}
