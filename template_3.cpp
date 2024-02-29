#include <iostream>
using namespace std;
template <typename T>
class array
{
    T *ptr;
    int size;
public:
    array(T arr[],int s)
    {
        ptr=new T[s];
        size=s;
        for(int i=0;i<size;i++){
            ptr[i]=arr[i];

        }

    }
    print()
    {
        for(int i=0;i<size;i++){
            cout<<*(ptr+i)<<" ";
        }
    }

};
int main()
{
    int array1[]={1,2,3,4,5};
    array<int> a(array1,5);
    a.print();

    cout<<"\n";

    string array2[]={"AB","BC","CD","DE"};
    array<string> s(array2,4);
    s.print();
}
