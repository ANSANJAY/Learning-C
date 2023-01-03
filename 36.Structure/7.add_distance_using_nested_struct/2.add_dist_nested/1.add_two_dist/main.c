#include"headers.h"
#include"declarations.h"

int main()
{
DistFeet df;
DistMeter dm;
Distances d;
df=get_distance_f(df);
dm=get_distance_m(dm);

display_distance_f(df);
display_distance_m(dm);

return 0;
}
