#ifndef GAME_H
#define GAME_H

#include "SceneNode.h"
#include "GLManager.h"

class Game
{
public:
  Game(void);
  virtual ~Game(void);

  virtual void init(void);

  virtual void update(int delta);
  virtual void render(GLManager *glManager);

  SceneNode *getRootScene(void) { return &rootScene; };

protected:
  void addToScene(SceneNode *node);

private:
  SceneNode rootScene;
};

#endif
