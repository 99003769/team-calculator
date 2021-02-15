#include<VOLUME_CALCULATOR.h>
#include<stdio.h>
void volume_calc()
{
     int radius, height, side ;
     float volume_sphere,volume_cone,volume_cube,cone,cube,sphere;
     char volume;


     printf("Enter radius : ");
     scanf("%d",&radius);
       printf("Enter height : ");
     scanf("%d",&height);
       printf("Enter side : ");
     scanf("%d",&side);
     printf("enter name of object");
     scanf("%c",&volume);
     switch (volume)
     {
        case 'sphere':
            volume_sphere = (4/3.0)*3.14*radius*radius*radius;
            printf("\nVolume of Sphere = %f",volume_sphere);
            break;
        case 'cone':
            volume_cone=(1/3)*height*3.14*radius*radius;
            printf("\nVolume of cone = %f",volume_cone);
            break;
        case 'cube':
            volume_cube=side*side*side;
            printf("\nVolume of cube = %f",volume_cube);
            break;
        default:
             printf("object not found");
             
     }
    
}
