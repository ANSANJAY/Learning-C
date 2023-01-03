#include"headers.h"
#include"declarations.h"

DistMeter get_distance()
{
DistMeter dm;
printf("Enter the distance in meter and cm :\n");
scanf("%d%f",&dm.meter,&dm.cmeter);
printf("%d-%f\n",dm.meter,dm.cmeter);
return dm;
}
