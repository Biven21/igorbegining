//==================================================================
//@file BivenLib.h                                                //
//                                                                //
//  librari of functions for a novice programmer Biven            //
//  ���������� ����������� ������������ �������� ����� ���������� //
//                                                                //
// (c) Bochkarev Igor V, teachar at school number 175 in Samara.  //
//                                                                //
//@date                  01/05/2021                               //
//==================================================================

#ifndef BIVENLIB_H_INCLUDED
#define BIVENLIB_H_INCLUDED



#endif // BIVENLIB_H_INCLUDED

void BoyDraw   (int x, int y, double sizeX, double sizeY, int shovelUp, double kneeX, double kneeY, double footX, double footY);
void HouseDraw (int x, int y, double sizeX, double sizeY, double GableUp, double GableX, double roofRight, double roofLeft);
void TreeDraw  (int x, int y, double sizeX, double sizeY);


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

void HouseDraw (int x, int y, double sizeX, double sizeY, double GableUp, double GableX, double roofRight, double roofLeft)
    {
    txSetColor      (TX_GREEN);

    txSetFillColor  (TX_GREEN);
    txRectangle (x - 100*sizeX, y - 70*sizeY, x, y);

    txSetFillColor  (TX_LIGHTGRAY);
    txRectangle (x - 36*sizeX, y - 42*sizeY, x - 15*sizeX, y);

    txSetFillColor  (TX_YELLOW);
    txRectangle (x - 79*sizeX, y - 42*sizeY, x - 65*sizeX, y - 22*sizeY);
    txLine      (x - 73*sizeX, y - 42*sizeY, x - 73*sizeX, y - 22*sizeY);

    txSetFillColor  (TX_RED);
    POINT roof [3] = {{ROUND (x - 120*sizeX*roofLeft),  ROUND (y -  70*sizeY)},
                      {ROUND (x -  50*sizeX*GableX),    ROUND (y - 128*sizeY*GableUp)},
                      {ROUND (x +  20*sizeX*roofRight), ROUND (y -  70*sizeY)}};
    txPolygon  (roof, 3);

    txSetFillColor  (TX_BROWN);
    POINT chimney [4] = {{ROUND (x - 85*sizeX), ROUND (y - 99*sizeY)},          {ROUND (x - 85*sizeX), ROUND (y - 117*sizeY*GableUp)},
                         {ROUND (x - 76*sizeX), ROUND (y - 117*sizeY*GableUp)}, {ROUND (x - 76*sizeX), ROUND (y - 107*sizeY)}};
    txPolygon (chimney, 4);
    }

void TreeDraw (int x, int y, double sizeX, double sizeY)
    {
    txSetColor (TX_BROWN, 4);
    txLine   (x, y, x, y - 30 * sizeY);

    txSetColor  (TX_BROWN, 2);
    txLine   (x,           y -  8*sizeY, x +  9*sizeX, y - 20*sizeY);
    txLine   (x +  9*sizeX, y - 20*sizeY, x + 18*sizeX, y - 23*sizeY);
    txLine   (x,            y - 13*sizeY, x -  9*sizeX, y - 20*sizeY);
    txLine   (x -  9*sizeX, y - 20*sizeY, x - 16*sizeX, y - 20*sizeY);
    txLine   (x,            y - 20*sizeY, x +  9*sizeX, y - 37*sizeY);
    txLine   (x,            y - 30*sizeY, x -  4*sizeX, y - 39*sizeY);

    txSetColor  (TX_GREEN, 2);
    txSetFillColor (TX_GREEN);
    txCircle (x,            y - 30*sizeY, 3 * (sizeX + sizeY));
    txCircle (x +  9*sizeX, y - 20*sizeY, 3 * (sizeX + sizeY));
    txCircle (x + 18*sizeX, y - 23*sizeY, 3 * (sizeX + sizeY));
    txCircle (x -  9*sizeX, y - 20*sizeY, 3 * (sizeX + sizeY));
    txCircle (x - 16*sizeX, y - 20*sizeY, 3 * (sizeX + sizeY));
    txCircle (x +  9*sizeX, y - 37*sizeY, 3 * (sizeX + sizeY));
    txCircle (x -  4*sizeX, y - 39*sizeY, 3 * (sizeX + sizeY));
    }