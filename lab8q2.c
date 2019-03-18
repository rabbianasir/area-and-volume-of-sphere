#include<stdio.h>
float area(float radius);
float area(float radius)
{
    float a;
    a=4*3.142*radius*radius;
    return a;
}
float volume(float radius);
float volume(float radius)
{
  float v;
  v=(4*3.142*radius*radius*radius)/3;
  return v;
}
void main()
{
 float radius;
 printf("enter the radius(in metres) of the sphere:");
 scanf("%f",&radius);
 printf("\nsurface area of sphere is %6.2f sq.metres",area(radius));
 printf("\nvolume of sphere is %6.2f cubic.metres",volume(radius));
}
