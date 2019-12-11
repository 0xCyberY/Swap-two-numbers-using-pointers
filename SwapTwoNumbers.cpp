#include <iostream>
using namespace std;
class swapping{
    public:
void swap(int*, int*);
};
void swapping::swap(int* n1, int* n2) {
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
int main()
{
    swapping obj;
    int n1,n2;
    cout << "Enter a and b" << endl;
    cin>>n1>>n2;
    cout << "a = " << n1 << endl;
    cout << "b = " << n2 << endl;
    obj.swap(&n1, &n2);
    cout << "\nAfter swapping" << endl;
    cout << "a = " << n1 << endl;
    cout << "b = " << n2 << endl;
    return 0;
}


