#include<SFML/Graphics.hpp>

using namespace sf;

int main()
{
    Window window(VideoMode(800,600),"SnakeGame"); // create a object for Window class

    while(window.isOpen()){// created a infinite loop

        Event event; // create  event object for Event class

        while(window.pollEvent(event)) // check the event
        {
            if(event.type==Event::Closed) // this function true stop the loop

                window.close();

        }

        /****************** Work the Snake function and work script ****************/


    }

    return 0;
}
