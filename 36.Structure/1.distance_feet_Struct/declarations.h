typedef struct distance{
    int feet;
    float inches;
}Distance;

void input(Distance *);
void display(Distance *);
Distance* sum(Distance *,Distance *);