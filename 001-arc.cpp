#include <graphics.h>
#include <iostream>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    int x1, y1, x2, y2, x3;
    cout << "Enter Your co-ordinate : ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3;
    arc(x1, y1, x2, y2, x3);
    getch();
    closegraph();
    return 0;
}