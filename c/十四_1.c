#include<stdio.h>
#include<stdbool.h>

struct point
{
    int x;
    int y;
};

struct rectangle
{
    struct point uppers_left;

    struct point lower_right;
    
};

int main(void)
{
    struct rectangle *r;
    scanf("%d%d%d%d",r->uppers_left.x,r->uppers_left.y,r->lower_right.x,r->lower_right.y);
    return 0;
}

int calculate_square(struct rectangle *r)
{
    printf("%d",(r->uppers_left.y-r->lower_right.y)*(r->lower_right.x-r->uppers_left.x));
}

struct point calculate_center(struct rectangle *r)
{
    struct point center;
    center.x=(r->lower_right.x+r->uppers_left.x)/2;
    center.y=(r->lower_right.y+r->uppers_left.y)/2;
    return center;
}

bool judge(struct rectangle *r,struct point p)
{
    if(p.x<=r->lower_right.x&&
       p.x>=r->uppers_left.x&&
       p.y<=r->uppers_left.y&&
       p.y>=r->lower_right.y)
    return true;
    return false;
}