typedef struct distance_ft{
    float feet;
    float inches;
}Distance_ft;

typedef struct distance_mt{
    float meter;
    float cm;
}Distance_mt;

void input_ft(Distance_ft *);
void display_ft(Distance_ft *);
void display_mt(Distance_mt *);

Distance_mt* convert(Distance_ft *);