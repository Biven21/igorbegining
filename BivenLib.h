//==================================================================
//@file BivenLib.h                                                //
//                                                                //
//  librari of functions for a novice programmer Biven            //
//  библиотека начинающего программиста Бочкарев Игорь Викторович //
//                                                                //
// (c) Bochkarev Igor V, teachar at school number 175 in Samara.  //
//                                                                //
//@date                  01/05/2021                               //
//==================================================================

#ifndef BIVENLIB_H_INCLUDED
#define BIVENLIB_H_INCLUDED



#endif // BIVENLIB_H_INCLUDED

void BoyDraw     (int x, int y, double sizeX, double sizeY, int shovelUp, double kneeX, double kneeY, double footX, double footY);

void BoyDraw (int x, int y, double sizeX, double sizeY, int shovelUp,
              double LeftKneeX, double LeftKneeY, double LeftFootX, double LeftFootY,
              double RightKneeX, double RightKneeY, double RightFootX, double RightFootY)
    {
    txSetColor  (TX_GREEN);
    txCircle    (x, y - 5*sizeY, 5*((sizeX + sizeY) / 2));

    txSetColor      (TX_BLACK, 2);
    txSetFillColor  (TX_RED);
    POINT shirt [4] = {{ROUND (x - 6*sizeX), ROUND (y)},            {ROUND (x + 6*sizeX), ROUND (y)},
                       {ROUND (x + 3*sizeX), ROUND (y + 16*sizeY)}, {ROUND (x - 3*sizeX), ROUND (y +16*sizeY)}};
    txPolygon (shirt, 4);

    txSetColor (TX_BLACK, 4);
    txLine (ROUND (x - 1*sizeX),                 ROUND (y + 16*sizeY),                 ROUND (x - (2 + LeftKneeX) * sizeX), ROUND (y + (22 - LeftKneeY) * sizeY));
    txLine (ROUND (x - (2 + LeftKneeX) * sizeX), ROUND (y + (22 - LeftKneeY) * sizeY), ROUND (x - (3 + LeftFootX) * sizeX), ROUND (y + (28 - LeftFootY) * sizeY));

    txLine (ROUND (x + 1*sizeX),                  ROUND (y + 16*sizeY),                  ROUND (x + (2 + RightKneeX) * sizeX), ROUND (y + (22 - RightKneeY) * sizeY));
    txLine (ROUND (x + (2 + RightKneeX) * sizeX), ROUND (y + (22 - RightKneeY) * sizeY), ROUND (x + (3 + RightFootX) * sizeX), ROUND (y + (28 - RightFootY) * sizeY));

    txLine (ROUND (x -  3*sizeX), ROUND (y +  3*sizeY), ROUND (x - 14*sizeX), ROUND (y +  6*sizeY*shovelUp));
    txLine (ROUND (x +  5*sizeX), ROUND (y +  3*sizeY), ROUND (x + 12*sizeX), ROUND (y + 15*sizeY));

    txLine (ROUND (x - 14*sizeX), ROUND (y +  3*sizeY*shovelUp), ROUND (x - 14*sizeX), ROUND (y + 23*sizeY*shovelUp));
    txSetFillColor  (TX_GRAY);
    POINT shovel [4] = {{ROUND (x - 17*sizeX), ROUND (y + 23*sizeY*shovelUp)}, {ROUND (x - 11*sizeX), ROUND (y + 23*sizeY*shovelUp)},
                        {ROUND (x - 12*sizeX), ROUND (y + 27*sizeY*shovelUp)}, {ROUND (x - 16*sizeX), ROUND (y + 27*sizeY*shovelUp)}};
    txPolygon (shovel, 4);
    }

