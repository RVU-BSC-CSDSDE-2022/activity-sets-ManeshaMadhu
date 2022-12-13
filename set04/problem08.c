#include<stdio.h>
typedef struct point {
    float start_end_x, start_end_y;
} Point;

typedef struct side {
    Point p1,p2;
    float distance;
} Side;

typedef struct polygon {
    Side sides[n];
    Point p[n];
    float perimeter;
} Polygon;

int input_n();
Point input_point();
void input_n_points(int n, Point p[n]);
void initialize_sides( Polygon *p);
float find_distance(Point a, Point b);
void find_perimeter(Polygon* p);
void output(Polygon p);