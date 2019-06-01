//
// Created by samurai on 5/31/19.
//

#ifndef RISE_THROUGH_THE_RANKS__GAME_HPP
#define RISE_THROUGH_THE_RANKS__GAME_HPP

#include <queue>
#include "Space.hpp"
#include "MercenaryShop.hpp"
#include "Asia.hpp"
#include "Americas.hpp"
#include "Europe.hpp"
#include "Champions.hpp"
#include "Fighter.hpp"
#include "Ninja.hpp"
#include "Validation.hpp"
#include <vector>
class Game
{

protected:
   std::queue<Fighter *> userTeam;
   std::queue<Fighter *> *tempTeam;
   int bank;
   Fighter *fighter;
   Space *locator;
   Space *mercenaryShop;
   Space *mercenaryShopRight;
   Space *mercenaryShopLeft;
   Space *asiaTrain;
   Space *americasTrain;
   Space *europeTrain;
   Space *champLeague;
   //int xSize = 24;
   //int ySize = 84;
   //char ** map;

public:
   Game();
   void setMap();
   void printMap();
   void setSpaces();
   void moveMenu();
   void move(int &);
   void play();
   void printTeam(std::queue<Fighter *>);
   void mShop();
   void asianSpace();
   void hitFirst(Fighter *one, Fighter *two, int pick);
   void fight(std::queue<Fighter *> &uTeam, std::queue<Fighter *> enemy);
   ~Game();

};

#endif //RISE_THROUGH_THE_RANKS__GAME_HPP
