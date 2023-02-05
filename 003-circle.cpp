#include <stdio.h>
#include <iostream>
#include <graphics.h>
using namespace std;
int main()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    int x, y, r;
    cout << "Enter Your Co-ordinates :";
    cin >> x >> y >> r;
    circle(x, y, r);
    getch();
    closegraph();

    return 0;
}