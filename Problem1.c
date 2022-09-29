//Angle at chowk
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

double find_angle(double a1, double b1, double a2, double b2)
{
    double m1,m2,angle,inv,finalangle;
    m1= -(a1/b1);
    m2= -(a2/b2);
    angle = atan(abs((m2 - m1)/ (1 + m1 * m2)));
    finalangle = (angle * 180) / pi;
    return finalangle;
}

int main()
{
   double angle_at_chowk;
   angle_at_chowk = find_angle(5,1,2,3);
   printf("Angle at which these roads meets at 123 Chowk: %.2f degree\n\n",angle_at_chowk);
   return 0;

}
