#include"headers.h"
#include"declarations.h"

Distance get_distance()
{
Distance d;	

printf("Enter the distance in feet and inches :\n");
scanf("%d%f",&d.ft,&d.inches);

printf("%d-%f\n",d.ft,d.inches);

return d; 
}
