#include <iostream> 
using namespace std;
int main() {
int n(0);
int *p = new int;
int *q = new int (2);
int *r = new int{1};
*p = 3;
n = *p + *q + *r;
cout <<"n => " << n << endl;
cout << *p<< ","<< *q << ","<< *r << endl;
delete p;
delete q;
delete r;
}