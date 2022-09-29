//distance between two points
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define pi 3.14159
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

int main()
{
   double distance;
   distance = find_distance( 23.259933 , 77.412613 ,12.9716 , 77.5946);
   printf("Distance Between Saurabh Sir and Prateek Sir: %lf miles",distance);
   return 0;
}
