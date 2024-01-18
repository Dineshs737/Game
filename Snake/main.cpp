#include<SFML/Graphics.hpp>
#include<Snake.h>
#define WIDTD 60
#define HEIGH 50
#define SIZE 16
#define W SIZE*WIDTD
#define H SIZE*HEIGH



using namespace sf;

Texture texture1;
texture1.loadFromFile("image\green.png",);


Snake snake({W/2,H/2});
int main()
{
    Window window(VideoMode(W,H),"SnakeGame"); // create a object for Window class

    while(window.isOpen()){// created a infinite loop

        Event event; // create  event object for Event class

        while(window.pollEvent(event)) // check the event
        {
            if(event.type==Event::Closed) // this function true stop the loop

                window.close();

        }
       // for(int )

        /****************** Work the Snake function and work script ****************/
       // window.draw(sprite1);
       // window.display();

    }

    return 0;
}
