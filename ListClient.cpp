#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;

 //Do some stuff with L1, L2, ...
 // ...
L1.insert(5,1);
L1.insert(8,1);
L1.remove(1);
L2.insert(20,1);
L2.insert(30,1);
L1.get(1);
L2.get(2);

cout << "List L1 is" << " " << L1.get(1) << endl;

cout << "List L2 is" << " " << L2.get(1) << endl;
}
