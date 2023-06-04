#include"iostream"
using namespace std;
#include<graphics.h>
#include<math.h>
#include<conio.h>
void Area();
void Volume();
void triangle();
void square();
void rectangle();
void circle();
void parallelogram();
void ellipse();
void cube();
void cylinder();
void prism();
void sphere();
void tetrahedron();
void rectangular_cuboid();

float area;
float volume;
int main()
{
    int ch;
    while(1)
    {
        cout<<"1.Area\t 2.Volume\t3.Exit\n";
        cout<<"Enter your choice\n";
        cin>>ch;
        switch(ch)
        {
            case 1:Area();
                   break;
            case 2:Volume();
                   break;
            case 3:exit(0);
                   break;       
            default:cout<<"Enter correct choice\n";

        }
    }
}
void Area()
{
    int ch;
    cout<<"Enter the choice for the shapes which will display automatically\n1.Triangle\n2.Rectangle\n3.Parallelogram\n\n";
    cout<<"Enter the choice for the shapes which can be displayed using user given dimensions\n4.square\n5.circle\n6.ellipse\n7.exit\n";


        
        cin>>ch;
        switch(ch)
        {
            case 1:triangle();
                   break;
            case 2:rectangle();
                   break;
            case 3:parallelogram();
                   break;
            case 4:square();
                   break;
            case 5:circle();
                   break;
            case 6:ellipse();
                   break;
            case 7:exit(0);
                   break;
            default:cout<<"Enter correct choice\n";

        }

}
void Volume()
{
    int ch;
    cout<<"1.cube\t 2.cylinder\t 3.prism\t 4.sphere\t 5.tetrahedron\t 6.rectangular_cuboid\t 7.exit\n";


        cout<<"Enter your choice\n";
        cin>>ch;
        switch(ch)
        {
            case 1:cube();
                   break;
            case 2:cylinder();
                   break;
            case 3:prism();
                   break;
            case 4:sphere();
                   break;
            case 5:tetrahedron();
                   break;
            case 6:rectangular_cuboid();
                   break;
            case 7:exit(0);
                   break;
            default:cout<<"Enter correct choice\n";

        }

}
void triangle()
{
    int gd = DETECT, gm; 
    initgraph(&gd, &gm, " ");
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    line(300,100,200,200);
    line(300,100,400,200);
    line(200,200,400,200);
    
    floodfill(301,110,GREEN);
    getch();
    closegraph();
    float base,height;
    cout<<"Enter the base of triangle\n";
    while(!(cin>>base))
    {
        cout<<"ERROR enter the correct base\n";
        cin.clear();
        cin.ignore(123,'\n');
    }
    cout<<"Enter the height of triangle\n";
    while(!(cin>>height))
    {
        cout<<"ERROR enter the correct height\n";
        cin.clear();
        cin.ignore(123,'\n');
    }
    area=(0.5*base*height);
    cout<<"The area of triangle is :\n"<<area<<" square units\n\n";
    
}
void square()
{
     int gd, gm, s;
    gd=DETECT;
    initgraph(&gd, &gm," ");
    cout<<"Enter the value of side of square in multiple of 50 pixels to display square:\n";
    cin>>s;
    
    setcolor(CYAN);
    setfillstyle(SOLID_FILL,CYAN);
    moveto(50,50);
    lineto(50+s,50);
    lineto(50+s,50+s);
    lineto(50,50+s);
    lineto(50,50);
    //outtextxy(20, 450,"Press any key to continue...");
    floodfill(51,60,CYAN);
    getch();
    closegraph();
    float length;
    cout<<"Enter the length of square\n";
    while(!(cin>>length))
    {
        cout<<"ERROR enter the correct length\n";
        cin.clear();
        cin.ignore(123,'\n');
    }
    area=length*length;
    cout<<"The area of square is :\n"<<area<<" square units\n\n";

}
void rectangle()
{
    int gd = DETECT, gm; 
    int left = 150, top = 200; 
    int right = 400, bottom = 350; 
    initgraph(&gd, &gm, " "); 
    setcolor(YELLOW);
    rectangle(left, top, right, bottom); 
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(390,300,YELLOW);
    getch();   
    closegraph(); 
    float length=0,breadth=0;
    cout<<"Enter the length of the rectangle\n";
    while(!(cin>>length))
    {
        cout<<"ERROR enter the correct length\n";
        cin.clear();
        cin.ignore(123,'\n');
    }
    cout<<"Enter the breadth of the rectangle\n";
    while(!(cin>>breadth))
    {
        cout<<"ERROR enter the correct breadth\n";
        cin.clear();
        cin.ignore(123,'\n');
    }
    area=length*breadth;
    cout<<"The area of rectangle is :\n"<<area<<" square units\n\n";
    
  
}
void circle()
{
    //for graphics 
    int gd=DETECT,gm;
    int r;
    initgraph(&gd, &gm, " ");
    cout<<"Enter the radius of circle in multiple 50 pixels to display the circle\n";
    cin>>r;
    circle(250,240,r);
    setfillstyle(SOLID_FILL,RED);
    floodfill(250,240,WHITE);
    getch();
    closegraph();
    float radius;
    cout<<"Enter the radius of circle\n";
    while(!(cin>>radius))
    {
        cout<<"ERROR enter the correct radius\n";
        cin.clear();
        cin.ignore(123,'\n');
    }
    area=3.14*radius*radius;
    cout<<"The area of circle is :\n"<<area<<" square units\n\n";
    
}
void parallelogram()
{
    int gd=DETECT,gm;
    initgraph(&gd, &gm," ");
    setcolor(WHITE);
    setfillstyle(LTBKSLASH_FILL,WHITE);
    line(150,100,450,100);
    line(50,300,150,100);
    line(50,300,350,300);
    line(350,300,450,100);
    floodfill(151,110,WHITE);
    getch();
    closegraph();
    float base,height;
    cout<<"Enter the base of parallelogram\n";
    while(!(cin>>base))
    {
        cout<<"ERROR enter the correct base\n";
        cin.clear();
        cin.ignore(123,'\n');
    }
    cout<<"Enter the height of parallelogram\n";
    while(!(cin>>height))
    {
        cout<<"ERROR enter the correct height\n";
        cin.clear();
        cin.ignore(123,'\n');
    }
    area=base*height;
    cout<<"The area of parallelogram is :\n"<<area<<" square units\n\n";
}
void ellipse()
{
    int gd = DETECT,gm;
    int x ,y,maj,min;
    initgraph(&gd, &gm," ");
    x = getmaxx()/2;
    y = getmaxy()/2;
   
    cout<<"Enter the radius of semi major axis in multiple 50 pixels to display an ellipse\n";
    cin>>maj;
    cout<<"Enter the radius of semi minor axis in multiple 50 pixels to display an ellipse\n";
    cin>>min;
    outtextxy(x-100, 50, "ELLIPSE Using Graphics in C");
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,MAGENTA);
    ellipse(x, y, 0, 360, maj, min);
    floodfill(maj,min,WHITE);
    getch();
    float major,minor;
    cout<<"Enter the radius of semi major axis of an ellipse\n";
    while(!(cin>>major))
    {
        cout<<"ERROR enter the correct radius of semi major axis of an ellipse\n";
        cin.clear();
        cin.ignore(123,'\n');
    }
    cout<<"Enter the radius of semi minor axis of an ellipse\n";
    while(!(cin>>minor))
    {
        cout<<"ERROR enter the correct radius semi minor axis of an ellipse\n";
        cin.clear();
        cin.ignore(123,'\n');
    }
    area=3.14*major*minor;
    cout<<"The area of ellipse is :\n"<<area<<" square units\n\n";
    
    closegraph();
        
}
void cube()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");
    setcolor(BLUE);
    
    //1st rectangle
    rectangle(100,200,200,300);
    //2nd rectangle
    rectangle(150,250,250,350);
    
    setcolor(RED);
   
        // 1st line
    line(100,200,150,250);
    // 2nd line
    line(200,300,250,350);
    // 3rd line
    line(100,300,150,350);
    // 4th line
    line(200,200,250,250);
   
    getch();
    closegraph();
    float a;
    cout<<"Enter the edge length of cube\n";
    while(!(cin>>a))
    {
        cout<<"ERROR enter the correct edge length of cube\n";
        cin.clear();
        cin.ignore(123,'\n');
    }
    volume= a*a*a;
    cout<<"The volume of cube is :\n"<<volume<<" cubic units\n\n";
    
}
void cylinder()
{
    int gd=DETECT,gm;
    int x ,y;
    initgraph(&gd, &gm," ");
    setcolor(YELLOW);
    setfillstyle(HATCH_FILL,YELLOW);
    ellipse(300,60, 0, 360, 100, 50);
    ellipse(300,300, 0, 360, 100, 50);
    floodfill(301,70,YELLOW);
    floodfill(301,310,YELLOW);
    setcolor(CYAN);
    
    line(200,50,200,300);
    line(400,50,400,300);
   
    getch();
    closegraph();
    float r,h;
    cout<<"Enter the radius of cylinder\n";
    while(!(cin>>r))
    {
        cout<<"ERROR enter the correct radius of cylinder\n";
        cin.clear();
        cin.ignore(123,'\n');
    }
    cout<<"Enter the height of cylinder\n";
    while(!(cin>>h))
    {
        cout<<"ERROR enter the correct height of cylinder\n";
        cin.clear();
        cin.ignore(123,'\n');
    }
    volume = (3.14*r*r*h);
    cout<<"The volume of cylinder is :\n"<<volume<<" cubic units\n\n";
}
void prism()
{
    int gd = DETECT, gm; 
    initgraph(&gd, &gm, " ");
    setcolor(RED);
    line(200,300,100,400);
    line(300,400,100,400);
    line(200,300,300,400);
    setcolor(RED);
    line(325,350,525,350);
    line(325,350,425,250);
    line(425,250,525,350);
    setcolor(BLUE);
    line(425,250,200,300);
    line(300,400,525,350);
    line(100,400,325,350);
    getch();
    closegraph();
    float height,lheight,base;
    cout<<"Enter the base of triangular prism\n";
    while(!(cin>>base))
    {
        cout<<"ERROR enter the correct base\n";
        cin.clear();
        cin.ignore(123,'\n');
    }
    cout<<"Enter the height of triangle in prism\n";
    while(!(cin>>height))
    {
        cout<<"ERROR enter the correct height\n";
        cin.clear();
        cin.ignore(123,'\n');
    }
    cout<<"Enter the height of the triangular prism\n";
    while(!(cin>>lheight))
    {
        cout<<"ERROR enter the correct height\n";
        cin.clear();
        cin.ignore(123,'\n');
    }
    volume=base*height*lheight;
    cout<<"The volume of triangular prism is :\n"<<volume<<" cubic units\n\n";
}
void sphere()
{
    
    int gd=DETECT,gm;
    initgraph(&gd, &gm," ");
    setcolor(MAGENTA);
    circle(320,240,120);
    setcolor(MAGENTA);
    int x ,y;
    x = getmaxx()/2;
    y = getmaxy()/2;
    setfillstyle(HATCH_FILL,MAGENTA);
    ellipse(x, y, 0, 360, 120, 60);
    floodfill(x,y,MAGENTA);
    getch();
    closegraph();
    float r;
    cout<<"Enter the radius of a sphere\n";
    while(!(cin>>r))
    {
        cout<<"ERROR enter the correct radius\n";
        cin.clear();
        cin.ignore(123,'\n');
    }
    volume =1.333*3.14*r*r*r;
    cout<<"The volume of the sphere is :\n"<<volume<<" cubic units\n\n";
}
void tetrahedron()
{
   int gd = DETECT, gm; 
   initgraph(&gd, &gm, " ");
   setcolor(BROWN);
   line(300,100,100,300);
   line(300,100,500,300);
   line(100,300,500,300);
   setcolor(CYAN);
   line(100,300,300,200);
   line(500,300,300,200);
   line(300,100,300,200);
   getch();
   closegraph();
   float a;
   cout<<"Enter the base length of tetrahedron\n";
   while(!(cin>>a))
    {
        cout<<"ERROR enter the correct base length of tetrahedron\n";
        cin.clear();
        cin.ignore(123,'\n');
    }
   volume=(a*a*a)/(6*1.4142);
   cout<<"The volume of tetrahedron is :\n"<<volume<<" cubic units\n\n";
}
void rectangular_cuboid()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm," ");
   setcolor(RED);
   rectangle(150,200,400,350);
   rectangle(200,150,450,300);
   setcolor(BLUE);
   line(150,350,200,300);
   line(400,350,450,300);
   line(150,200,200,150);
   line(400,200,450,150);
   getch();
   closegraph();
   float l,w,h; 
   cout<<"Enter the length of rectangular_cuboid\n";
   while(!(cin>>l))
    {
        cout<<"ERROR enter the correct length\n";
        cin.clear();
        cin.ignore(123,'\n');
    }
   cout<<"Enter the width of an rectangular_cuboid\n";
   while(!(cin>>w))
    {
        cout<<"ERROR enter the correct width\n";
        cin.clear();
        cin.ignore(123,'\n');
    }
   cout<<"Enter the height of rectangular_cuboid\n";
   while(!(cin>>h))
    {
        cout<<"ERROR enter the correct height\n";
        cin.clear();
        cin.ignore(123,'\n');
    }
   volume=l*w*h;
   cout<<"The volume rectangular_cuboid is :\n"<<volume<<" cubic units\n\n";
}
