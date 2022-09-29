#include"A_geometry.h"
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#define pi 3.14159


// calculate angle
double find_angle(double a1, double b1, double a2, double b2)
{
    double m1,m2,angle,inv,finalangle;
    m1= -(a1/b1);
    m2= -(a2/b2);
    angle = atan(abs((m2 - m1)/ (1 + m1 * m2)));
    finalangle = (angle * 180) / pi;
    return finalangle;
}

//find distance

double deg2rad(double deg)
{
  return (deg * pi / 180);
}

double rad2deg(double rad)
{
  return (rad * 180 / pi);
}

double find_distance(double lat1, double long1, double lat2, double long2)
{
   double dist,th;
    th = long1 - long2;
    dist = sin(deg2rad(lat1)) * sin(deg2rad(lat2)) + cos(deg2rad(lat1)) * cos(deg2rad(lat2)) * cos(deg2rad(th));
    dist = acos(dist);
    dist = rad2deg(dist);
    dist = dist * 60 * 1.1515;
   return dist;
}

//calculate area

double find_area(double x1, double y1, double x2, double y2, double x3, double y3)
{
      double area = 0.5*(x1*(y2 - y3)+ x2*(y3 - y1)+x3*(y1 - y2));
      return fabs(area);
}



