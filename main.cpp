#include <iostream>
using namespace std;
int main(){
    bool  bigShip[] = {true, true, true, true};
    bool middleShip[] = {true,true,true};
    bool smallShip[] = {true,true};
    bool tinyShip[] = {true};
    cout << sizeof(bigShip) / sizeof(bigShip[0])<< endl;
    cout << sizeof(middleShip) / sizeof(middleShip[0]) << endl;
    cout << sizeof(smallShip) / sizeof(smallShip[0])<< endl;
    cout << sizeof(tinyShip) / sizeof(tinyShip[0])<< endl;
}
