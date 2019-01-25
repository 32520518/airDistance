/**
 * Author: Wencheng Bao computer science
 * Date: 2019/01/25
 *
 * calculate air distanc in c:
 *
 */

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main() {
   double lat1, lat2, lon1, lon2;
  double lat1r, lat2r, lon1r, lon2r;
  double d;


  printf("Please input the Latitude and the Longitude of your origin (separated by space in degree):\n");
  scanf("%lf %lf", &lat1, &lon1);
  printf("Please input the Latitude and the Longitude of your destination (separated by space in degree):\n");
  scanf("%lf %lf", &lat2, &lon2);

  lat1r = lat1/180.0*3.14159265358979;
  lat2r = lat2/180.0*3.14159265358979;
  lon1r = lon1/180.0*3.14159265358979;
  lon2r = lon2/180.0*3.14159265358979;

  const int R = 6371; 

  d = acos(sin(lat1r)*sin(lat2r)+cos(lat1r)*cos(lat2r)*cos(lon1r-lon2r))*R;

  printf("Location Distance\n========================\n");
  printf("Origin:      (%.6f,%11.6f)\n",lat1,lon1);
  printf("Destination: (%.6f,%11.6f)\n",lat2,lon2);
  printf("Air distance is %.6f kms\n",d);
  return 0;
}
