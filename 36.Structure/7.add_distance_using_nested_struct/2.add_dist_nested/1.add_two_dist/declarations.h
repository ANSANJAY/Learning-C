
//add_distance
//int display_distance();
typedef struct distance_in_feet_inches{
int ft;
float inches;
}DistFeet;

typedef struct distance_in_meter_centimeter{
int meter;
float cmeter;
}DistMeter;

typedef struct distances{
DistFeet *df;
DistMeter *dm;
}Distances;

DistFeet get_distance_f();
DistMeter get_distance_m();

int  display_distance_f(DistFeet);
int  display_distance_m(DistMeter);
