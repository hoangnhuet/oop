#include "obstacle.h"

// Obstacle implementations
Obstacle::Obstacle() {}

Obstacle::Obstacle(const listpoint& d) : d(d) {}

listpoint Obstacle::get_value() {
    return d;
}

void Obstacle::set_value(const listpoint& d) {
    this->d = d;
}

// PointObstacle implementations
PointObstacle::PointObstacle() : Obstacle() {}

PointObstacle::PointObstacle(const listpoint& d) : Obstacle(d) {}

listpoint PointObstacle::get_value() {
    return d;
}

void PointObstacle::set_value(const listpoint& d) {
    this->d = d;
}

// LineObstacle implementations
LineObstacle::LineObstacle() : Obstacle() {}

LineObstacle::LineObstacle(const listpoint& d) : Obstacle(d) {}

listpoint LineObstacle::get_value() {
    return d;
}

void LineObstacle::set_value(const listpoint& d) {
    this->d = d;
}