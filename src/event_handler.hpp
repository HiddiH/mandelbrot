/* Event handler */

#include <SDL2/SDL.h>

class EventHandler
{
    private:
        SDL_Event event;

        // This one is private because only the handler should change it
        bool need_quit = false; 
    public:
        EventHandler(); // Constructor

        void handleEvents(); // Handle all events in the event queue
        bool needQuit(); // Checks if the window should quit
};
