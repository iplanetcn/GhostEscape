#ifndef WEAPON_THUNDER_H
#define WEAPON_THUNDER_H

#include "raw/weapon.h"

class WeaponThunder : public Weapon
{
public:
    static WeaponThunder* addWeaponThunderChild(Actor* parent, float cool_down, float mana_cost);

    virtual void handleEvents(SDL_Event& event) override;
};



#endif // WEAPON_THUNDER_H