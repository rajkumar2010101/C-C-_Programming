#include<iostream>
#include<conio.h>
class Shape
{
  protected:
  int width;
  int height;
  public:
  void setwidth(int w)
  {
    width = w;
  }
  void setheight(int h)
  {
    height = h;
  }
};
class Rectangle : public Shape
{
  public:
  int getArea()
  {
    return(width * height);
  }
};
void main()
{
  clrscr();
  Rectangle Rect;
  Rect.setwidth(5);
  Rect.setheight(7);
  cout<<"Total Area :"<<Rect.getArea()<<endl;
  getch();
}