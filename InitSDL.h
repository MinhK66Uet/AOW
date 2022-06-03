#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

//Screen dimension constants
const int code = 12390242;
const int SCREEN_WIDTH = 900;
const int SCREEN_HEIGHT = 600;
const int RENDER_WIDTH = 153;
const int RENDER_HEIGHT = 103;
const int CBASE = 933123;

//Loads individual image
SDL_Surface* loadSurface( std::string path );

//The window we'll be rendering to
SDL_Window* gWindow = NULL;

//The surface contained by the window
SDL_Surface* gScreenSurface = NULL;

//Current displayed PNG image
SDL_Surface* gPNGSurface = NULL;

SDL_Texture* loadTexture(std :: string path);

SDL_Renderer* gRenderer = NULL;

SDL_Texture* gTexture = NULL;

//Starts up SDL and creates window
bool init();

//Loads media
bool loadMedia();

//Frees media and shuts down SDL
void close();

class LTexture
{
     public:
       LTexture();

       ~LTexture();

       bool loadFromFile( std::string path );

       void free();

       void setColor( Uint8 red , Uint8 green, Uint8 blue );

       void setBlendMode( SDL_BlendMode blending );

       void setAlpha( Uint8 alpha );

       //toa do goc -> toa do dich
       void render( int x, int y, int w, int h, int dx, int dy, int dw, int dh );

       int getWidth();

       int getHeight();

     private:

       SDL_Texture* mTexture;

       int mWidth;
       int mHeight;
};

LTexture gSpriteSheetTexture;
LTexture gFooTexture;
LTexture gBackgroundTexture;
LTexture gModulatedTexture;
LTexture Warrior, gEnemy, gHeart , gDeadth, gHitted, gArcher, gArrow1, gHeal, gSpear, gSharpshooter ,gElfSword ,gGoldSharpShooter;
LTexture Background, gGameOver;

LTexture gArrow, gElfSoc, gButcher, gMeric, gGoldArrow, gRooted, gMenuBar, gHealth, gHealthBar;

LTexture BackGround;

LTexture gPause, gPause2, gNext, gNext2 ,gbuttonspeed;

LTexture gElfBase;

LTexture iSharpShooter, iMeric, iGoldSharpShooter, iElfSword, iElfSoc,
         iSharpShooter2, iMeric2, iGoldSharpShooter2, iElfSword2, iElfSoc2,
         gNumber, gEconomic, gEconomic2, gDefensive, gDefensive2, gArchery, gArchery2,
         gHitPoint, gHitPoint2, gOffensive, gOffensive2, gSocery, gSocery2, gGold,
         gStartMenu, gPlay, gPlay2, gExit, gExit2, gEasy, gEasy2, gMedium, gMedium2, gHard, gHard2,
         gDefeat, gVictory
         ;

struct Deadth
{
    int x, y, w, h;
    int time;
};

vector < Deadth > SaveDeadth;

struct Healing
{
    int x, y, w, h, time;
};

vector < Healing > SaveHealing;

void LTexture::setBlendMode( SDL_BlendMode blending )
{
    SDL_SetTextureBlendMode( mTexture, blending );
}

void LTexture::setAlpha( Uint8 alpha )
{
    SDL_SetTextureAlphaMod( mTexture, alpha );
}

void LTexture::setColor( Uint8 red, Uint8 green, Uint8 blue )
{
    SDL_SetTextureColorMod( mTexture, red, green, blue );
}

LTexture::LTexture()
{
    mTexture = NULL;
    mWidth = 0;
    mHeight = 0;
}

LTexture::~LTexture()
{
    free();
}

bool LTexture::loadFromFile( std::string path )
{
    free();

    SDL_Texture* newTexture = NULL;

    SDL_Surface* loadedSurface = IMG_Load( path.c_str() );

    if ( loadedSurface == NULL )
    {
        printf( "Unable to load image %s! SDL_image Error %s\n", IMG_GetError() );
    } else
    {
        //Color key image
        SDL_SetColorKey( loadedSurface, SDL_TRUE, SDL_MapRGB( loadedSurface->format, 12, 9, 3 ) );

        //Create texture from surface pixel
        newTexture = SDL_CreateTextureFromSurface( gRenderer, loadedSurface );
        if ( newTexture == NULL )
        {
            printf( "Unable to create texture from %s! SDL Error: %s\n", path.c_str(), SDL_GetError() );
        } else
        {
            mWidth = loadedSurface->w;
            mHeight = loadedSurface->h;
        }

        SDL_FreeSurface( loadedSurface );
    }

    mTexture = newTexture;
    return mTexture != NULL;
}

void LTexture::free()
{
    if ( mTexture != NULL)
    {
        SDL_DestroyTexture( mTexture );
        mTexture = NULL;
        mWidth = 0;
        mHeight = 0;
    }
}

void LTexture::render( int x, int y, int w, int h, int dx, int dy, int dw, int dh )
{
    SDL_Rect BaseQuad, GoalQuad;

    //copy toan bo
    if (x == code && w == code && dx == code && dw == code)
    {
        SDL_RenderCopy( gRenderer, mTexture, NULL, NULL );
        return;
    }

    if ( x != code )
    {
        BaseQuad.x = x;
        BaseQuad.y = y;
        BaseQuad.w = w;
        BaseQuad.h = h;
    }

    if ( dx != code)
    {
        GoalQuad.x = dx;
        GoalQuad.y = dy;
        GoalQuad.w = dw;
        GoalQuad.h = dh;
    }

    if ( dx != code && x != code )
    {
       SDL_RenderCopy( gRenderer, mTexture, &BaseQuad, &GoalQuad );
       return;
    }

    if ( x != code && dx == code )
    {
        SDL_RenderCopy( gRenderer, mTexture, &BaseQuad, NULL );
        return;
    }

    if ( x == code && dx != code )
    {
        SDL_RenderCopy( gRenderer, mTexture, NULL, &GoalQuad );
        return;
    }
}

int LTexture::getWidth()
{
    return mWidth;
}

int LTexture::getHeight()
{
    return mHeight;
}

bool loadMedia()
{
    bool success = true;

    if ( !Background.loadFromFile( "nbackground.png" ) )
    {
        printf( "Unable to load background.png!\n" );
        success = false;
    }

    if ( !gDeadth.loadFromFile( "deadth.png" ) )
    {
        printf( "Unable to load deadth.png!\n");
        success = false;
    }

    if ( !gHitted.loadFromFile( "beinghitted.png" ) )
    {
        printf( "Unalbe to load beinghitted.png!\n");
        success = false;
    }

    if ( !gArrow.loadFromFile( "Arrow.png" ) )
    {
        printf( "Unable to load Arrow1.png!\n");
        success = false;
    }

    if ( !gHeal.loadFromFile( "Healing.png" ) )
    {
        printf( "Unable to load Healing.png!\n");
        success = false;
    }

    if ( !gSharpshooter.loadFromFile( "SharpShooter.png" ) )
    {
        printf( "Unable to load SharpShooter.png!\n" );
        success = false;
    }

    if ( !gElfSword.loadFromFile( "ElfSwordMan.png") )
    {
        printf( "Unalbe to load ElfSwordMan.png!\n");
        success = false;
    }

    if ( !gElfSoc.loadFromFile( "ElfSoccerer.png") )
    {
        printf( "Unalbe to load ElfSoc.png!\n");
        success = false;
    }

    if ( !gMeric.loadFromFile( "Meric.png") )
    {
        printf( "Unalbe to load Meric.png!\n");
        success = false;
    }

    if ( !gButcher.loadFromFile( "Butcher.png") )
    {
        printf( "Unalbe to load Butcher.png!\n");
        success = false;
    }

    if ( !iSharpShooter.loadFromFile( "SharpShootericon.png" ) )
    {
        printf( "Unable to load SharpShooter.png!\n" );
        success = false;
    }

    if ( !iElfSword.loadFromFile( "ElfSwordicon.png") )
    {
        printf( "Unalbe to load ElfSwordicon.png!\n");
        success = false;
    }

    if ( !iElfSoc.loadFromFile( "ElfSocicon.png") )
    {
        printf( "Unalbe to load ElfSocicon.png!\n");
        success = false;
    }

    if ( !iMeric.loadFromFile( "Mericicon.png") )
    {
        printf( "Unalbe to load Mericicon.png!\n");
        success = false;
    }

    if ( !iSharpShooter2.loadFromFile( "SharpShootericon2.png" ) )
    {
        printf( "Unable to load SharpShootericon2.png!\n" );
        success = false;
    }

    if ( !iElfSword2.loadFromFile( "ElfSwordicon2.png") )
    {
        printf( "Unalbe to load ElfSwordicon2.png!\n");
        success = false;
    }

    if ( !iElfSoc2.loadFromFile( "ElfSocicon2.png") )
    {
        printf( "Unalbe to load ElfSocicon2.png!\n");
        success = false;
    }

    if ( !iElfSoc2.loadFromFile( "ElfSocicon2.png") )
    {
        printf( "Unalbe to load ElfSocicon2.png!\n");
        success = false;
    }

    if ( !iMeric2.loadFromFile( "Mericicon2.png") )
    {
        printf( "Unalbe to load Mericicon2.png!\n");
        success = false;
    }

    if ( !gPause.loadFromFile( "Pause.png") )
    {
        printf( "Unalbe to load Pause.png!\n");
        success = false;
    }

    if ( !gPause2.loadFromFile( "Pause2.png") )
    {
        printf( "Unalbe to load Pause2.png!\n");
        success = false;
    }

    if ( !gNext.loadFromFile( "Next.png") )
    {
        printf( "Unalbe to load Next.png!\n");
        success = false;
    }

    if ( !gNext2.loadFromFile( "Next2.png") )
    {
        printf( "Unalbe to load Next2.png!\n");
        success = false;
    }

    if ( !gbuttonspeed.loadFromFile( "SpeedButton.png") )
    {
        printf( "Unalbe to load SpeedButton.png!\n");
        success = false;
    }

    if ( !gElfBase.loadFromFile( "ElfBase.png" ) )
    {
        printf( "Unalbe to load ElfBase.png!\n");
        success = false;
    }

    if ( !gGoldSharpShooter.loadFromFile( "GoldenSharpShooter.png" ) )
    {
        printf( "Unalbe to load GoldenSharpShooter.png!\n");
        success = false;
    }

    if ( !gGoldArrow.loadFromFile( "GoldArrow.png" ) )
    {
        printf( "Unalbe to load GoldArrow.png!\n");
        success = false;
    }

    if ( !gRooted.loadFromFile( "Rooted.png" ) )
    {
        printf( "Unalbe to load Rooted.png!\n");
        success = false;
    }

    if ( !gMenuBar.loadFromFile( "MenuBar.png" ) )
    {
        printf( "Unalbe to load MenuBar.png!\n");
        success = false;
    }

    if ( !gHealthBar.loadFromFile( "HealthBar.png" ) )
    {
        printf( "Unalbe to load HealthBar.png!\n");
        success = false;
    }

    if ( !gHealth.loadFromFile( "Health.png" ) )
    {
        printf( "Unalbe to load Health.png!\n");
        success = false;
    }

    if ( !iGoldSharpShooter.loadFromFile( "GoldSharpShootericon.png" ) )
    {
        printf( "Unable to load GoldSharpShootericon.png!\n" );
        success = false;
    }

    if ( !iGoldSharpShooter2.loadFromFile( "GoldSharpShootericon2.png" ) )
    {
        printf( "Unable to load GoldSharpShootericon2.png!\n" );
        success = false;
    }

    if ( !gNumber.loadFromFile( "number.png"))
    {
        printf( "Unable to load number.png!\n" );
        success = false;
    }

    if ( !gEconomic.loadFromFile( "economic.png"))
    {
        printf( "Unable to load economic.png!\n" );
        success = false;
    }

    if ( !gEconomic2.loadFromFile( "economic2.png"))
    {
        printf( "Unable to load economic2.png!\n" );
        success = false;
    }

    if ( !gDefensive.loadFromFile( "defensive.png"))
    {
        printf( "Unable to load defensive.png!\n" );
        success = false;
    }

    if ( !gDefensive2.loadFromFile( "defensive2.png"))
    {
        printf( "Unable to load defensive2.png!\n" );
        success = false;
    }

    if ( !gArchery.loadFromFile( "archery.png"))
    {
        printf( "Unable to load archery.png!\n" );
        success = false;
    }

    if ( !gArchery2.loadFromFile( "archery2.png"))
    {
        printf( "Unable to load archery2.png!\n" );
        success = false;
    }

    if ( !gHitPoint.loadFromFile( "hitpoint.png"))
    {
        printf( "Unable to load hitpoint.png!\n" );
        success = false;
    }

    if ( !gHitPoint2.loadFromFile( "hitpoint2.png"))
    {
        printf( "Unable to load hitpoint2.png!\n" );
        success = false;
    }

    if ( !gOffensive.loadFromFile( "offensive.png"))
    {
        printf( "Unable to load offensive.png!\n" );
        success = false;
    }

    if ( !gOffensive2.loadFromFile( "offensive2.png"))
    {
        printf( "Unable to load offensive2.png!\n" );
        success = false;
    }

    if ( !gSocery.loadFromFile( "Socery.png"))
    {
        printf( "Unable to load socery.png!\n" );
        success = false;
    }

    if ( !gSocery2.loadFromFile( "Socery2.png"))
    {
        printf( "Unable to load socery2.png!\n" );
        success = false;
    }

    if ( !gGold.loadFromFile( "Gold.png"))
    {
        printf( "Unable to load Gold.png!\n" );
        success = false;
    }

    if ( !gStartMenu.loadFromFile( "StartMenu.png"))
    {
        printf( "Unable to load StartMenu.png!\n" );
        success = false;
    }

    if ( !gPlay.loadFromFile( "Play.png") )
    {
        printf( "Unalbe to load Play.png!\n");
        success = false;
    }

    if ( !gPlay2.loadFromFile( "Play2.png") )
    {
        printf( "Unalbe to load Play2.png!\n");
        success = false;
    }

    if ( !gExit.loadFromFile( "exit.png") )
    {
        printf( "Unalbe to load exit.png!\n");
        success = false;
    }

    if ( !gExit2.loadFromFile( "exit2.png") )
    {
        printf( "Unalbe to load exit2.png!\n");
        success = false;
    }

    if ( !gEasy.loadFromFile( "easy.png") )
    {
        printf( "Unalbe to load easy.png!\n");
        success = false;
    }

    if ( !gEasy2.loadFromFile( "easy2.png") )
    {
        printf( "Unalbe to load easy2.png!\n");
        success = false;
    }

    if ( !gMedium.loadFromFile( "medium.png") )
    {
        printf( "Unalbe to load medium.png!\n");
        success = false;
    }

    if ( !gMedium2.loadFromFile( "medium2.png") )
    {
        printf( "Unalbe to load medium2.png!\n");
        success = false;
    }

    if ( !gHard.loadFromFile( "Hard.png") )
    {
        printf( "Unalbe to load Hard.png!\n");
        success = false;
    }

    if ( !gHard2.loadFromFile( "Hard2.png") )
    {
        printf( "Unalbe to load Hard2.png!\n");
        success = false;
    }

    if ( !gVictory.loadFromFile( "Victory.png" ) )
    {
        printf( "Unalbe to load Victory.png!\n");
        success = false;
    }

    if ( !gDefeat.loadFromFile( "defeat.png" ) )
    {
        printf( "Unalbe to load defeat.png!\n");
        success = false;
    }

    return success;
}

bool init()
{
    bool success = true;

    if ( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        printf( "SDL could not initialize! SDL Error: %s\n", SDL_GetError() );
        success = false;
    }

    gWindow = SDL_CreateWindow( "Age Of War", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );

    if ( gWindow == NULL )
    {
        printf ( "Window could not be created! SDL Error: %s\n", SDL_GetError() );
        success = false;
    } else
    {
        gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED );
        if ( gRenderer == NULL )
        {
            printf( "Renderer could not be created! SDL Error: %s\n", SDL_GetError() );
            success = false;
        } else
        {
            SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );

            int imgFlags = IMG_INIT_PNG;
            if ( !(IMG_Init( imgFlags ) & imgFlags ) )
            {
                printf( "SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError() );
                success = false;
            }
        }
    }

    return success;
}

void close()
{
    SDL_DestroyTexture( gTexture );
    gTexture = NULL;

    SDL_DestroyRenderer( gRenderer );
    SDL_DestroyWindow( gWindow );
    gWindow = NULL;
    gRenderer = NULL;

    IMG_Quit();
    SDL_Quit();
}

