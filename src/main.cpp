#include"obstacle.h"
int main()
{
    listpoint d;
    dataa a;
    a.x = 1;
    a.y = 2;
    a.z = 3;
    dataa b; 
    b.x = 4;
    b.y = 5;
    b.z = 6;
    listpoint dd;
    dd.push_back(a);
    dd.push_back(b);
    d.push_back(a);
    PointObstacle p;
    p.set_value(d);
    listpoint d2 = p.get_value();
    for(int i = 0; i < d2.size(); i++)
    {
        std::cout << d2[i].x << " " << d2[i].y << " " << d2[i].z << std::endl;
    }
    LineObstacle l;
    l.set_value(dd);
    listpoint d3 = l.get_value();
    for(int i = 0; i < d3.size(); i++)
    {
        std::cout << d3[i].x << " " << d3[i].y << " " << d3[i].z << std::endl;
    }
    ObstacleContainer oc;
    oc.push_back(ObstPtr(new PointObstacle(d)));
    oc.push_back(ObstPtr(new LineObstacle(dd)));
    for(int i = 0; i < oc.size(); i++)
    {
        listpoint d4 = oc[i]->get_value();
        for(int j = 0; j < d4.size(); j++)
        {
            std::cout << "Point in Container"<<d4[j].x << " " << d4[j].y << " " << d4[j].z << std::endl;
        }
    }
    return 0;
}