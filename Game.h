#pragma once 

class Game 
{

private:

    bool m_bIsRunning;

    bool Init();

    void ProcessInputs();
    void Update();
    void Draw();
    void Test();

public:
    Game();
    ~Game();
    bool Program_running;

    void Run();
}; 
