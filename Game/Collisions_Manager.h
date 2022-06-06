#pragma once
#include "Entity.h"
#include "Obstacle.h"
#include "Platform.h"
#include "EntityList.h"
#include "Player.h"

class Collisions_Manager :public Entity
{
private:
    List<Platform> LO;
    Platform* platform;
public:
    Collisions_Manager();
    ~Collisions_Manager();
    void setLO(Platform* obstacle);
    Platform getObstacle(int position) { return *LO.getItem(position); }
    void verify_collisions(Player *player);
};