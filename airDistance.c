/* Author: Joseph Flodman
 *         jflodman3@huskers.unl.edu
 * Date: 09/8/2024
 *
 *$$d = \arccos{(\sin(\varphi_1) \sin(\varphi_2) + \cos(\varphi_1) \cos(\varphi_2) \cos(\Delta) )} \cdot R$$
 *
 * $$r = \frac{deg}{180} \cdot \pi$$
 *
 * Write a program that *interactively prompts* the user to enter the latitude and
longitude of two locations and then computes the distance between them
using the above formula.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <float.h>
#include<math.h>

#define PI 3.141592653589793
#define EARTH_RADIUS 6371.0


double degreesToRadians(double degrees) {
return (degrees * PI) / 180.0;

}

int main(int argc, char **argv) {

double latitude1;
double latitude2;
double longitude1;
double longitude2;
double radiusLatitude1;
double radiusLatitude2;
double deltaLongitude; //distance between longitude1 and longitude2
double distance;


//Ask user for input

printf("Enter the latitude and longitude of the origin:\n");
scanf("%lf", &latitude1);
scanf("%lf", &longitude1);

printf("Enter the latitude and longitude of the destination:\n");
scanf("%lf", &latitude2);
scanf("%lf", &longitude2);

radiusLatitude1 = degreesToRadians(latitude1);
radiusLatitude2 = degreesToRadians(latitude2);
radiusLongitude1 = degreesToRadians(longitude2);
deltaLongitude = degreesToRadians(longitude2 - longitude1);


distance = acos(sin(radiusLongitude1) * sin(radiusLatitude2) + cos(radiusLatitude1) * cos(radiusLatitude2) * cos(deltaLongitude)) * EARTH_RADIUS;

printf("Location Distance\n");
printf("========================\n");
printf("Origin:              (%.6f, %.6f)\n", latitude1, longitude1);
printf("Destination:         (%.6f, %.6f)\n", latitude2, longitude2);
printf("Air distance is %.6f kms\n", distance);



}
