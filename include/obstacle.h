#ifndef OBST_H
#define OBST_H
#include <iostream>
#include <vector>
#include <memory>

struct dataa {
    double x;
    double y;
    double z;
};

typedef std::vector<dataa> listpoint;
typedef std::vector<class Obstacle> listObstacle;

class Obstacle {
public:
    Obstacle();
    Obstacle(const listpoint& d);
    virtual ~Obstacle() = default;
    
    virtual listpoint get_value();
    virtual void set_value(const listpoint& d);

protected:
    listpoint d;
};

typedef std::shared_ptr<Obstacle> ObstPtr;
typedef std::vector<ObstPtr> ObstacleContainer;

class PointObstacle : public Obstacle {
public:
    PointObstacle();
    PointObstacle(const listpoint& d);
    virtual listpoint get_value() override;
    virtual void set_value(const listpoint& d) override;
};

class LineObstacle : public Obstacle {
public:
    LineObstacle();
    LineObstacle(const listpoint& d);
    virtual listpoint get_value() override;
    virtual void set_value(const listpoint& d) override;
};

#endif