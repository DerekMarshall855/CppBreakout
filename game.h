#ifndef GAME_H
#define GAME_H

enum GameState
{
    GAME_ACTIVE,
    GAME_MENU,
    GAME_WIN
};

class Game
{
public:
    GameState State;
    bool Keys[1024];
    unsigned int Width, Height;
    Game(unsigned int width, unsigned int height);
    ~Game();
    // Init for game state
    void Init();
    // Loop
    void ProcessInput(float dt);
    void Update(float dt);
    void Render();
};

#endif