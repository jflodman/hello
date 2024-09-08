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

double = latitude1;
double = latitude2;
double = longitude1;
double = longitude2;
double = radiusLatitude1;
double = radiusLatitude2;
double = deltaLongitude;
double = distance;


//Ask user for input

printf("Please enter the latitude and longitude of two locations:\n");
scanf("%lf", latitude1, longitude1);
















}
