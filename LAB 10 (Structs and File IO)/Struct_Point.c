#include <stdio.h>

typedef struct point_2D Point_2D;
struct point_2D
{
    float x;
    float y;
};

//struct point_2D point;
int perimeter(Point_2D[]);
int area(Point_2D[]);

int main()
{
    puts("Enter 4 point");
    
    Point_2D point[4]={0};
    
    point[0].x = 0;
    point[0].y = 0;
    point[1].x = 2;
    point[1].y = 0;
    point[2].x = 2;
    point[2].y = 2;
    point[3].x = 0;
    point[3].y = 2;
    
    // for(int i = 0; i<4; i++)
    // {
    //     scanf("%f", &point[i].x);
    //     scanf("%f", &point[i].y);
    // }
    
    for(int i = 0; i<4; i++)
    {
        printf("%d ", (int) point[i].x);
        printf("%d\n", (int) point[i].y);
    }
    
    puts("");
    printf("perimeter: %d\n", perimeter(point));
    printf("area: %d\n", area(point));
    return 0;
}

int perimeter(Point_2D points[])
{
    float Xsmaller= points[0].x;
    float Xgreater= points[0].y;
    
    float Ysmaller= points[0].y;
    float Ygreater= points[0].y;
    
    float width=0;
    float height=0;
    
    int p=0;
    // Finding width
    for(int i=1; i<3; i++)
    {
        if(Xgreater < points[i].x)
        {
            Xgreater = points[i].x;
        }
        if(Xsmaller > points[i].x)
        {
            Xsmaller = points[i].x;
        }
    }
    
    for(int i=1; i<3; i++)
    {
        if(Ygreater < points[i].y)
        {
            Ygreater = points[i].y;
            //Ygreater = points[i].y;
        }
        if(Ysmaller > points[i].y)
        {
            Ysmaller = points[i].y;
        }
    }
    
    width = Xgreater - Xsmaller;
    height = Ygreater - Ysmaller;
    
    p = (2*width) + (2*height);
    
    return p;
    
}

int area(Point_2D points[])
{
    float Xsmaller= points[0].x;
    float Xgreater= points[0].y;
    
    float Ysmaller= points[0].y;
    float Ygreater= points[0].y;
    
    float width=0;
    float height=0;
    
    int a=0;
    // Finding width
    for(int i=1; i<3; i++)
    {
        if(Xgreater < points[i].x)
        {
            Xgreater = points[i].x;
        }
        if(Xsmaller > points[i].x)
        {
            Xsmaller = points[i].x;
        }
    }
    
    for(int i=1; i<3; i++)
    {
        if(Ygreater < points[i].y)
        {
            Ygreater = points[i].y;
            //Ygreater = points[i].y;
        }
        if(Ysmaller > points[i].y)
        {
            Ysmaller = points[i].y;
        }
    }
    
    width = Xgreater - Xsmaller;
    height = Ygreater - Ysmaller;
    
    a = width * height;
    
    return a;
    
}