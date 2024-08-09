#include <iostream>

using namespace std;

int main(){
    int x1,y1,x2,y2;

    cin >> x1 >> y1 >> x2 >> y2;

    dx = abs(x1-x2);
    dy = abs(y1-y2);
    if (dx == dy){
        cout << x1 << ' ' << y2 << ' '<< x2 << ' '<< y1 << endl;
    }
    else if(x1 == x2){
        cout << x1+dy << ' '<< y1 << ' '<< x2+dy << ' '<< y2 << endl;
    } else if(y1==y2){
        cout << x1 << ' '<< y1+dx << ' '<< x2 << ' '<< y2+dx << endl
    }else {
        cout << "-1";
    }
    return 0;
}