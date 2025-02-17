#ifndef ENEMY_H
#define ENEMY_H

#include "player.h"

class Enemy : public Actor
{
    Player* target_ = nullptr;

public:
    virtual void init();
    virtual void update(float dt) override;  // override the update function from Actor

    void aim_target(Player* target);

    // getters and setters
    Player* get_target() { return target_; }
    void set_target(Player* target) { target_ = target; }
};








#endif // ENEMY_H