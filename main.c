/* COPYRIGHT (C) HARRY CLARK 2024 */

/* SEGA MEGA DRIVE EMULATOR FRONTEND SAMPLE */

/* PROVIDING A SMALL SAMPLE FOR CREATING AN SDL WINDOW */
/* NOW THAT I HAVE TRANSITIONED DEVELOPMENT TO LINUX, A LOT OF THE HEADACHES HAVE BEEN ALLEVIATED */
/* IN TERMS OF USING SDL ON WINDOWS - THANKS, MICROSHIT */

#include <SDL2/SDL.h>
#include <stdio.h>

int main()
{

    SDL_Window* WINDOW = SDL_CreateWindow("HARRY CLARK - MDEMU", 0, 0, 320, 240, SDL_WINDOW_SHOWN);
    SDL_Renderer* RENDERER = SDL_CreateRenderer(WINDOW, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    SDL_Event EV;

    int QUIT = 0;
    while (!QUIT) 
    {
        while (SDL_PollEvent(&EV)) 
        {
            if (EV.type == SDL_QUIT) 
            {
                QUIT = 1;
            }
        }

        SDL_RenderClear(RENDERER);
        SDL_RenderPresent(RENDERER);
    }

    SDL_DestroyRenderer(RENDERER);
    SDL_DestroyWindow(WINDOW);
    SDL_Quit();

    return 0;
}