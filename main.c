/* COPYRIGHT (C) HARRY CLARK 2024 */

/* SEGA MEGA DRIVE EMULATOR FRONTEND */

/* THIS FILE PERTAINS TOWARDS THE MAIN FUNCTIONALITY OF THE PROGRAM */

/* NESTED INCLUDES */

#include <stdio.h>

/* SDL INCLUDES */

#include <SDL2/SDL.h>

int main(int argc, char* argv[])
{
    int INDEX = 0;
    int QUIT = 0;
    SDL_Window* WINDOW = SDL_CreateWindow("HARRY CLARK - MDEMU", 0, 0, 320, 240, SDL_WINDOW_SHOWN);
    SDL_Renderer* RENDERER = SDL_CreateRenderer(WINDOW, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    SDL_Event EV;

    for (INDEX = 1; INDEX < argc && *argv[INDEX] == '-'; INDEX++)
    {
        printf("Usage: %s MDEMU", argv[0]);
        exit(EXIT_FAILURE);
    }

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
}
