#include"headers.h"
#include"declarations.h"

DistFeet get_distance()
{
DistFeet df;
printf("Enter the distance in feet and inches :\n");
scanf("%d%f",&df.ft,&df.inches);
printf("%d-%f\n",df.ft,df.inches);
return df;
}

