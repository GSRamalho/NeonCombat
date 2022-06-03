#pragma once
#include "Entity.h"
#include "Obstacle.h"
#include "EntityList.h"
class Collisions_Manager :public Entity
{
private:
    List<Obstacle> LO;
public:
    Collisions_Manager();
    ~Collisions_Manager();
    void setLO(Obstacle *obstacle);
    Obstacle getObstacle(int position) { return *LO.getItem(position); }

};