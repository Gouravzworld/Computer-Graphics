#include<conio.h>
#include<graphics.h>
#include<iostream>
#include<stdio.h>

int main(int argc, char const *argv[])
{
     
    int gd=DETECT,gm;
    int x,y;
    
    initgraph(&gd,&gm, (char*)"");
    putpixel(x,y,4);
    getch();
    closegraph();
}