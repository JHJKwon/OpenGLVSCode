#include "./common/global.hpp"
#include <glad/glad.h>
#include <glfw/glfw3.h>
#include <glm/glm.hpp>

using namespace std;

struct _Size {
    int w;
    int h;
};

typedef struct _Size Size;

class Engine
{
public:
    Engine();
    ~Engine();

    int initialize();
    void update();
    void draw();
    void processInput();

private:
    void setupOpenGLRendering();

private:
    float    _gameSpeed = 0.1f;
    Size    _screen = { 800, 600 };
    string  _windowName;
};
