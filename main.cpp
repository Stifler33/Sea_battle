#include <iostream>
using namespace std;
int main(){
    bool  bigShip[] = {true, true, true, true};
    bool middleShip[] = {true,true,true};
    bool smallShip[] = {true,true};
    bool tinyShip[] = {true};
    cout << sizeof(bigShip) << endl;
    cout << sizeof(middleShip) << endl;
    cout << sizeof(smallShip) << endl;
    cout << sizeof(tinyShip) << endl;
}
