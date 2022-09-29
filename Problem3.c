//To find area under A shape
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double find_area(double x1, double y1, double x2, double y2, double x3, double y3)
{
      double area = 0.5*(x1*(y2 - y3)+ x2*(y3 - y1)+x3*(y1 - y2));
      return fabs(area);
}

int main()
{
     double area_under_A;
     area_under_A = find_area(20.077 , 11.598 , 26.526 , 90.138 , 23.674 , 32.579);
     printf("Area to be coloured black: %lf\n",area_under_A);
     return 0;

}
