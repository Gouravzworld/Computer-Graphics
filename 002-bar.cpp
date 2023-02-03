#include <conio.h>
#include <iostream>
#include <graphics.h>
using namespace std;

main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    int x, y, z, a;
    cout << "Enter Your Co-ordinates :";
    cin >> x >> y >> z >> a;
    bar(x, y, z, a);

    getch();
    closegraph();
    return 0;
}