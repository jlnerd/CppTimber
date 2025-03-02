#include <iostream>
#include <SFML/Graphics.hpp>
//#include <glog/logging.h>

using namespace sf;
using namespace std;


int main() {
    //google::InitGoogleLogging("Timber");

    // Get the desktop video mode, which contains screen resolution
    sf::VideoMode desktopMode = sf::VideoMode::getDesktopMode();

    //Create a video mode object
    Vector2u mode_size(desktopMode.size);
    //LOG(INFO) << "mode_size: " << mode_size.x << " " << mode_size.y;

    VideoMode vm(mode_size);

    Texture textureBackground;
    textureBackground.loadFromFile("/Users/johnleonard/CLionProjects/Timber/graphics/background.png");

    Sprite spriteBackground(textureBackground);
    Vector2f pos(0, 0);
    spriteBackground.setPosition(pos);
    g
            //Create and open a window for the game
    RenderWindow window(vm, "Timber!!!", sf::Style::Titlebar);

    while (window.isOpen()) {
        window.clear(sf::Color::Black);

        window.draw(spriteBackground);

        window.display();

        // Handle the players input
        if (Keyboard::isKeyPressed(Keyboard::Key::Escape)) {
            window.close();
        }
    }

    return 0;
}
