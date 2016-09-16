#include "include/constants.h"

namespace XplatGameTutorial
{
namespace PacManClone
{
    const Uint32 Constants::TicksPerFrame = Constants::c_msPerFrame;        // Alias
    const SDL_Color Constants::SDLColorGrey = { 128, 128, 128, 255 };       // Grey used for "background"
    const SDL_Color Constants::SDLColorMagenta = { 0xFF, 0, 0xFF, 0 };      // Color Key used for transparency
    const SDL_Color Constants::RenderDrawColor = Constants::SDLColorGrey;   // sets background when renderer cleared
    const char * const Constants::WindowTitle = "Pac-Man Clone";

    // This is the map data for the tiles, each index represents a different tile to render
    Uint16 Constants::MapIndicies[MapRows * MapCols] =
    {
        49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
        49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
        49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
         6,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 40, 39,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  8,
        18, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 15, 17, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 20,
        18, 16,  0,  1,  1,  2, 16,  0,  1,  1,  1,  2, 16, 15, 17, 16,  0,  1,  1,  1,  2, 16,  0,  1,  1,  2, 16, 20,
        18, 13, 12, 49, 49, 14, 16, 12, 49, 49, 49, 14, 16, 15, 17, 16, 12, 49, 49, 49, 14, 16, 12, 49, 49, 14, 13, 20,
        18, 16, 24, 25, 25, 26, 16, 24, 25, 25, 25, 26, 16, 27, 29, 16, 24, 25, 25, 25, 26, 16, 24, 25, 25, 26, 16, 20,
        18, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 20,
        18, 16,  0,  1,  1,  2, 16,  0,  2, 16,  0,  1,  1,  1,  1,  1,  1,  2, 16,  0,  2, 16,  0,  1,  1,  2, 16, 20,
        18, 16, 24, 25, 25, 26, 16, 12, 14, 16, 24, 25, 25,  5,  3, 25, 25, 26, 16, 12, 14, 16, 24, 25, 25, 26, 16, 20,
        18, 16, 16, 16, 16, 16, 16, 12, 14, 16, 16, 16, 16, 12, 14, 16, 16, 16, 16, 12, 14, 16, 16, 16, 16, 16, 16, 20,
        30, 31, 31, 31, 31, 11, 16, 12, 27,  1,  1,  2, 49, 12, 14, 49,  0,  1,  1, 29, 14, 16,  9, 31, 31, 31, 31, 32,
        49, 49, 49, 49, 49, 23, 16, 12,  3, 25, 25, 26, 49, 24, 26, 49, 24, 25, 25,  5, 14, 16, 21, 49, 49, 49, 49, 49,
        49, 49, 49, 49, 49, 23, 16, 12, 14, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 12, 14, 16, 21, 49, 49, 49, 49, 49,
        49, 49, 49, 49, 49, 23, 16, 12, 14, 49, 36, 37, 22, 47, 47, 19, 37, 38, 49, 12, 14, 16, 21, 49, 49, 49, 49, 49,
        34, 34, 34, 34, 34, 35, 16, 24, 26, 49, 48, 49, 49, 49, 49, 49, 49, 50, 49, 24, 26, 16, 33, 34, 34, 34, 34, 34,
        49, 49, 49, 49, 49, 49, 16, 49, 49, 49, 48, 49, 49, 49, 49, 49, 49, 50, 49, 49, 49, 16, 49, 49, 49, 49, 49, 49,
        10, 10, 10, 10, 10, 11, 16,  0,  2, 49, 48, 49, 49, 49, 49, 49, 49, 50, 49,  0,  2, 16,  9, 10, 10, 10, 10, 10,
        49, 49, 49, 49, 49, 23, 16, 12, 14, 49, 60, 61, 61, 61, 61, 61, 61, 62, 49, 12, 14, 16, 21, 49, 49, 49, 49, 49,
        49, 49, 49, 49, 49, 23, 16, 12, 14, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 12, 14, 16, 21, 49, 49, 49, 49, 49,
        49, 49, 49, 49, 49, 23, 16, 12, 14, 49,  0,  1,  1,  1,  1,  1,  1,  2, 49, 12, 14, 16, 21, 49, 49, 49, 49, 49,
         6, 34, 34, 34, 34, 35, 16, 24, 26, 49, 24, 25, 25,  5,  3, 25, 25, 26, 49, 24, 26, 16, 33,  7,  7,  7,  7,  8,
        18, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 12, 14, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 20,
        18, 16,  0,  1,  1,  2, 16,  0,  1,  1,  1,  2, 16, 12, 14, 16,  0,  1,  1,  1,  2, 16,  0,  1,  1,  2, 16, 20,
        18, 16, 24, 25,  5, 14, 16, 24, 25, 25, 25, 26, 16, 24, 26, 16, 24, 25, 25, 25, 26, 16, 12,  3, 25, 26, 16, 20,
        18, 13, 16, 16, 12, 14, 16, 16, 16, 16, 16, 16, 16, 49, 49, 16, 16, 16, 16, 16, 16, 16, 12, 14, 16, 16, 13, 20,
        53, 25,  5, 16, 12, 14, 16,  0,  2, 16,  0,  1,  1,  1,  1,  1,  1,  2, 16,  0,  2, 16, 12, 14, 16,  3,  4, 54,
        41, 28, 29, 16, 24, 26, 16, 12, 14, 16, 24, 25, 25,  5,  3, 25, 25, 26, 16, 12, 14, 16, 24, 26, 16, 27, 28, 42,
        18, 16, 16, 16, 16, 16, 16, 12, 14, 16, 16, 16, 16, 12, 14, 16, 16, 16, 16, 12, 14, 16, 16, 16, 16, 16, 16, 20,
        18, 16,  0,  1,  1,  1,  1, 29, 27,  1,  1,  2, 16, 12, 14, 16, 0,   1,  1, 29, 27,  1,  1,  1,  1,  2, 16, 20,
        18, 16, 24, 25, 25, 25, 25, 25, 25, 25, 25, 26, 16, 24, 26, 16, 24, 25, 25, 25, 25, 25, 25, 25, 25, 26, 16, 20,
        18, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 20,
        30, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 32,
        49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
        49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49
    };

    // Like the tilemap, this represents the playing area, but 1s are illegal space and 0s are legal free space
    // for the player.  The player sprite should be confined to these cells
    Uint16 Constants::CollisionMap[MapRows * MapCols] =
    {
        1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
        1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
        1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
        1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,1,1,1,1,0,1,1,1,1,1,0,1,1,0,1,1,1,1,1,0,1,1,1,1,0,1,
        1,0,1,1,1,1,0,1,1,1,1,1,0,1,1,0,1,1,1,1,1,0,1,1,1,1,0,1,
        1,0,1,1,1,1,0,1,1,1,1,1,0,1,1,0,1,1,1,1,1,0,1,1,1,1,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,1,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1,0,1,
        1,0,1,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1,0,1,
        1,0,0,0,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0,0,0,1,
        1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,0,1,1,1,1,1,0,1,1,1,1,1,1,
        1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,0,1,1,1,1,1,0,1,1,1,1,1,1,
        1,1,1,1,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,1,1,1,1,
        1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,
        1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,
        0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,
        1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,
        1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,
        1,1,1,1,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,1,1,1,1,
        1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,
        1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,1,1,1,1,0,1,1,1,1,1,0,1,1,0,1,1,1,1,1,0,1,1,1,1,0,1,
        1,0,1,1,1,1,0,1,1,1,1,1,0,1,1,0,1,1,1,1,1,0,1,1,1,1,0,1,
        1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,
        1,1,1,0,1,1,0,1,1,0,1,1,1,1,1,1,1,1,0,1,1,0,1,1,0,1,1,1,
        1,1,1,0,1,1,0,1,1,0,1,1,1,1,1,1,1,1,0,1,1,0,1,1,0,1,1,1,
        1,0,0,0,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0,0,0,1,
        1,0,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,0,1,
        1,0,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
        1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
        1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
    };

    // Vaious animation sequences, these are index to frames on the sprite sheet
    int Constants::PlayerAnimation_UP[PlayerAnimationFrameCount] = { 0, 1, 2, 1 };
    int Constants::PlayerAnimation_DOWN[PlayerAnimationFrameCount] = { 0, 5, 6, 5 };
    int Constants::PlayerAnimation_LEFT[PlayerAnimationFrameCount] = { 0, 7, 8, 7 };
    int Constants::PlayerAnimation_RIGHT[PlayerAnimationFrameCount] = { 0, 3, 4, 3 };
    int Constants::PlayerAnimation_DEATH[PlayerAnimationDeathFrameCount] = { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 9 };

    const char * const Constants::TilesImage = "./grfx/tiles.png";
    const char * const Constants::SpritesImage = "./grfx/spritesheet.png";
}
};