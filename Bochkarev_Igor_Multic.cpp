//-----------------------------------------------------------------------------
//@file     https://github.com/Biven21/igorbegining.git
//
//@date     april 2021
//@brief    анимация, почти мультик, "Колонизация".
//          посвящение 60 летию полета человека в космос.
//
//@autor    Igor Bochkarev, teacher school 175, Samara.
//
//-----------------------------------------------------------------------------

#include "TXLib.h"
#include "BivenLib.h"

using namespace Biven;

void girlDraw    (int x, int y, double sizeX, double sizeY, double wind);
void FirDraw     (int x, int y, double sizeX, double sizeY, double Wind);
//void BackGround  ();
void StartTitles ();
void ArrivalStarShip (int x);
void Landscape   ();
void Serenity    ();
void Disembarkation ();
void Solstice    ();
void ConstructionCamp ();
void EndTitles   ();
void PlantingGarden ();
void Housbilding (int x);
void Village ();
void GardenStart ();
void HeightGarden ();
void HeightGardenEnd ();

//-----------------------------------------------------------------------------

int main()
    {
    txCreateWindow  (1200, 700);
    txSetFillColor  (TX_WHITE);
    txRectangle     ( 10,  10, 1190, 690);

    StartTitles ();
    txSleep (1000);
    Serenity ();
    Disembarkation ();
    Solstice ();
    Disembarkation ();
    ConstructionCamp ();
    PlantingGarden ();
    EndTitles ();

    return 0;
    }

//-----------------------------------------------------------------------------


void girlDraw (int x, int y, double sizeX, double sizeY, double wind)
    {
    txSetColor  (TX_GREEN);
    txCircle    (x, y -  4*sizeY, 4*((sizeX + sizeY)/3));

    txSetFillColor  (TX_BLUE);
    POINT girlDress [3] = {{ROUND (x), ROUND (y)}, {ROUND (x - 3*sizeX), ROUND (y + 12*sizeY)}, {ROUND (x + 4*sizeX), ROUND (y + 12*sizeY)}};
    txPolygon       (girlDress, 3);

    txLine (ROUND (x -  2*sizeX), ROUND (y + 12*sizeY), ROUND (x -  3*sizeX), ROUND (y + 24*sizeY));
    txLine (ROUND (x +  1*sizeX), ROUND (y + 12*sizeY), ROUND (x +  4*sizeX), ROUND (y + 24*sizeY));
    txLine (ROUND (x +  2*sizeX), ROUND (y +  5*sizeY), ROUND (x -  9*sizeX), ROUND (y)           );
    txLine (ROUND (x +  1*sizeX), ROUND (y +  5*sizeY), ROUND (x + 10*sizeX), ROUND (y -  1*sizeY));
    txLine (ROUND (x + 10*sizeX), ROUND (y -  8*sizeY), ROUND (x + 10*sizeX), ROUND (y +  1*sizeY));

    txSetFillColor (TX_RED);
    POINT flag [3] = {{ROUND (x + 10*sizeX), ROUND (y - 8*sizeY)}, {ROUND (x + 19*sizeX), ROUND (y - 6*sizeY*wind)}, {ROUND (x + 10*sizeX), ROUND (y - 4*sizeY)}};
    txPolygon   (flag, 3);
    }

 //-----------------------------------------------------------------------------

void FirDraw (int x, int y, double sizeX, double sizeY, double Wind)
    {
    txSetColor      (TX_BROWN, 2);
    txSetFillColor  (TX_BROWN);
    txRectangle (x - 3*sizeX, y + 42*sizeY, x + 3*sizeX, y + 46*sizeY);

    txSetColor      (TX_GREEN, 2);
    txSetFillColor  (TX_GREEN);

    txSetFillColor  (TX_GREEN);
    POINT Fir1Line [4] = {{ROUND (x - 22*sizeX), ROUND (y + 42*sizeY)}, {ROUND (x + 19*sizeX), ROUND (y + 42*sizeY)},
                          {ROUND (x +  7*sizeX), ROUND (y + 26*sizeY)}, {ROUND (x -  7*sizeX), ROUND (y + 26*sizeY)}};
    txPolygon (Fir1Line, 4);

    POINT Fir2Line [4] = {{ROUND (x - 16*sizeX),          ROUND (y + 26*sizeY)},
                          {ROUND (x + 14*sizeX),          ROUND (y + 26*sizeY)},
                          {ROUND (x +  5*sizeX + 2*Wind), ROUND (y + 11*sizeY)},
                          {ROUND (x -  4*sizeX + 2*Wind), ROUND (y + 11*sizeY)}};
    txPolygon  (Fir2Line, 4);

    POINT Fir3Line [3] = {{ROUND (x - 10*sizeX + 2*Wind), ROUND (y + 11*sizeY)},
                          {ROUND (x + 10*sizeX + 2*Wind), ROUND (y + 11*sizeY)},
                          {ROUND (x + 4*Wind),                   y}};
    txPolygon  (Fir3Line, 3);
    }

//_____________________________________________________________________________
//void BackGround ()
//   {
//    HouseDraw (557, 321,  1,   1,   1,    1,   1,   1);
//    HouseDraw (557, 180,  1,   1,   1.1,  1.6, 1,   1);
//    HouseDraw (300, 450,  2,   1.2, 1,    1,   1.2, 1.1);
//    HouseDraw (230, 222,  1,   1,   1.5, -1.6, 2,   2);
//
//    girlDraw  (429, 128,  1.5, 1.5,  2);
//    girlDraw  ( 22, 299,  2,   2,    3);
//    girlDraw  (202, 200,  2.5, 2.5, -1);
//    girlDraw  (429, 399, -4,  -2,   -1);

    //BoyDraw   (388, 296, 1, 1,  1, 5, 27);
    //BoyDraw   (500, 500, 3, 3, -1, 5, 27);
    //BoyDraw   (600, 500, 3, 3, -1, 5, 27);


//    FirDraw   (292, 277, 1,   1, 0);
//    FirDraw   (600, 100, 1,   1, 1);
//    FirDraw   (750,  90, 1.5, 2, 4);
//    FirDraw   (660,  80, 0.5, 1, 2);
//    FirDraw   (680,  80, 0.5, 1, 2);

//   TreeDraw  (300, 300, 1, 1);

//   SunDraw   (990, 260, 3,   2, 3, 1,   1, 1,   1, 1);
//   SunDraw   ( 40,  70, 2,   1, 1, 1,   1, 1,   1, 1);
//   SunDraw   (190,  50, 3,   1, 1, 1,   1, 1,   1, 1);
//   SunDraw   (390,  90, 1.5, 1, 1, 1,   1, 1,   1, 1);
//   SunDraw   (990, 490, 1.5, 2, 1, 1.5, 1, 1.5, 1, 1);

//   txSetColor  (TX_GREEN, 2);
//    txLine      (273, 323, 443, 323);
//   }

//_____________________________________________________________________________

//-----------------------------------------------------------------------------

void StartTitles ()
        {
    txSetFillColor (RGB (0, 150, 200));
    txRectangle    ( 10,  10, 1190, 690);

    int x = 1;
    while (x <= 300)
        {
        txClear ();
        txSetColor (TX_BLACK, 10);
        txSelectFont ("Tahoma", 40);
        txTextOut (x + 20, 100, "БОЧКАРЕВ ФИЛЬМ");
        x = x + 1;
        txSleep (10);
        }

    x = 1;
    while (x <= 250)
        {
        txClear ();
        txSetColor (TX_BLACK, 10);
        txSelectFont ("Tahoma", 40);
        txTextOut (300, 100, "БОЧКАРЕВ ФИЛЬМ");
        txSetColor (TX_RED, 100);
        txSelectFont ("Tahoma|", 60);
        txTextOut (x + 10, 180, " ПЕДСТАВЛЯЕТ ");
        x ++;
        txSleep (10);
        }
    txSleep (600);
    x = 1;
    while (x <= 250)
        {
        txClear ();
        txSetColor (TX_BLACK, 10);
        txSelectFont ("Tahoma", 40);
        txTextOut  (300, 100, "История Колонизации");
        txSetColor (TX_GREEN, 100);
        txSelectFont ("Tahoma|", 60);
        txTextOut  (x, 180, " П О С Е Л Е Н И Е ");
        x ++;
        txSleep (10);
        }
    }

//-----------------------------------------------------------------------------


void ArrivalStarShip (int x)
    {
    int t = 0;
    while (t <= 600)
        {
        txClear   ();
        Landscape ();
        StarShip  (1000 - t,     10 + t, 1);
        StarShip  (1100 - t / 2, 10 + t, 1);
        t ++;
        txSleep (x);
        }
    }

//-----------------------------------------------------------------------------

void Landscape ()
    {
    txSetColor (TX_LIGHTGREEN);
    txSetFillColor (RGB (0, 255, 128));
    POINT ValleyHorizon [11] = {{ 10, 498}, { 62, 478}, {139, 461}, { 277, 442}, { 437, 442},
                                {648, 433}, {840, 433}, {969, 453}, {1190, 531}, {1190, 700}, {10, 700}};
    txPolygon (ValleyHorizon, 11);

    txSetColor (TX_LIGHTGRAY);
    txSetFillColor (RGB (192, 192, 150));
    POINT MountainLeft [7] = {{10, 255}, {116, 171}, {218, 413}, {166, 457}, {139, 461}, {62, 478}, {10, 498}};
    txPolygon (MountainLeft, 7);

    txSetColor (TX_LIGHTGRAY);
    txSetFillColor (RGB (200, 192, 170));
    POINT MountainCentral [13] = {{166, 457}, {439, 225}, {480, 263}, {519, 245}, {561, 264}, {615, 249}, {666, 225},
                                  {766, 231}, {928, 446}, {840, 432}, {648, 432}, {438, 443}, {278, 443}};
    txPolygon (MountainCentral, 13);

    txSetColor (TX_LIGHTGRAY);
    txSetFillColor (RGB (255, 255, 255));
    POINT MountainCentralTop [10] = {{439, 225}, {480, 263}, {519, 245}, {561, 264}, {614, 249}, {666, 225},
                                     {766, 231}, {680, 119}, {548, 250}, {484, 170}};
    txPolygon (MountainCentralTop, 10);

    txSetColor (TX_LIGHTGRAY);
    txSetFillColor (RGB (192, 192, 150));
    POINT MountainRight [10] = {{ 892, 399}, {1066, 191}, {1122, 186}, {1136, 196}, {1150, 189},
                                {1160, 194}, {1190, 382}, {1190, 532}, { 968, 453}, { 926, 446}};
    txPolygon (MountainRight, 10);

    txSetColor (TX_WHITE);
    txSetFillColor (RGB (255, 255, 255));
    POINT MountainRightTop [8] = {{1066, 191}, {1122, 186}, {1136, 196}, {1150, 189}, {1160, 194},
                                  {1152, 161}, {1120, 184}, {1084, 170}};
    txPolygon (MountainRightTop, 8);

    txSetColor (TX_LIGHTBLUE);
    txSetFillColor (RGB (0, 100, 255));
    POINT Sky [14] = {{  0, 256}, {116, 170}, { 218, 413}, { 438, 226}, { 484, 170}, {548, 250},
                      {680, 119}, {892, 399}, {1084, 170}, {1120, 184}, {1152, 161}, {1190, 382}, {1190,  10}, { 10,  10}};
    txPolygon (Sky, 14);
    }

//-----------------------------------------------------------------------------

void Serenity ()
    {
    int x = 0;
    while (x <= 600)
        {
        txClear ();
        Landscape ();
        txSetColor (TX_BLACK, 10);
        txSelectFont ("Tahoma", 30);
        txTextOut  (x + 20, 10, "безмятежность");

        x = x + 1;
        txSleep (5);
        }
    }

//-----------------------------------------------------------------------------

void Disembarkation ()
    {
    int t = 0;
    int shovel = 0;
    ArrivalStarShip (5);
    while (t < 300 || shovel <= 15)
        {
        BoyDraw  (250 + t/5, 600 - t/4, 2, 2, 1,
                 ((t + 2) / 20) % 2 * 2,        ((t + 2) / 20) % 2 * 7,        ((t + 2) / 20) % 2,        ((t + 2) / 20) % 2 * 7,
                 ((t / 20) % 2 * (-1) + 1) * 2, ((t / 20) % 2 * (-1) + 1) * 7, ((t / 20) % 2 * (-1) + 1), ((t / 20) % 2 * (-1) + 1) * 7);;

        girlDraw (250 + t + 10, 550 - t / 10 - 50, 2.5, 2.5, 2);
        StarShip (200, 500, 1.5);

        t += 30;
        shovel ++;
        txSleep (500);
        }
    }

//-----------------------------------------------------------------------------

void Solstice ()
    {
    int t = 0;
    while (t < 370)
        {
        txClear ();
        txSetFillColor (TX_WHITE);
        Landscape ();

        SunDraw (-  10 + t*4, 270 - t, 2, 1, 1, 1, 1, 1, 1, 1);
        SunDraw (- 400 + t*4, 270 - t, 2, 1, 1, 1, 1, 1, 1, 1);

        t ++;
        txSleep (10);
        }
    }

//-----------------------------------------------------------------------------

void ConstructionCamp ()
    {
    int t = 0;
    while (t < 520)
        {
        txClear   ();
        Landscape ();

        SunDraw (-  10 + t*5, 270 - t,         2, 1, 1, 1, 1, 1, 1, 1);
        SunDraw (- 400 + t*5, 270 - t,         2, 1, 1, 1, 1, 1, 1, 1);
        SunDraw (-1000 + t*4, 270 - t*100/165, 2, 1, 1, 1, 1, 1, 1, 1);
        SunDraw (-1400 + t*4, 270 - t*100/165, 2, 1, 1, 1, 1, 1, 1, 1);

        BoyDraw ( 50 + t/5, 600 - t/4, 2, 2, 1,
                ((t + 2) / 20) % 2 * 2,        ((t + 2) / 20) % 2 * 7,        ((t + 2) / 20) % 2,        ((t + 2) / 20) % 2 * 7,
                ((t / 20) % 2 * (-1) + 1) * 2, ((t / 20) % 2 * (-1) + 1) * 7, ((t / 20) % 2 * (-1) + 1), ((t / 20) % 2 * (-1) + 1) * 7);

        BoyDraw (100 + t/5, 600 - t/3, 2, 2, 1,
                ((t + 2) / 20) % 2 * 2,        ((t + 2) / 20) % 2 * 7,        ((t + 2) / 20) % 2,        ((t + 2) / 20) % 2 * 7,
                ((t / 20) % 2 * (-1) + 1) * 2, ((t / 20) % 2 * (-1) + 1) * 7, ((t / 20) % 2 * (-1) + 1), ((t / 20) % 2 * (-1) + 1) * 7);

        BoyDraw (150 + t/5, 600 - t*10/25, 2, 2, 1,
                ((t + 2) / 20) % 2 * 2,        ((t + 2) / 20) % 2 * 7,        ((t + 2) / 20) % 2,        ((t + 2) / 20) % 2 * 7,
                ((t / 20) % 2 * (-1) + 1) * 2, ((t / 20) % 2 * (-1) + 1) * 7, ((t / 20) % 2 * (-1) + 1), ((t / 20) % 2 * (-1) + 1) * 7);

        BoyDraw (200 + t/4, 600 - t/4, 2, 2, 1,
                ((t + 2) / 20) % 2 * 2,        ((t + 2) / 20) % 2 * 7,        ((t + 2) / 20) % 2,        ((t + 2) / 20) % 2 * 7,
                ((t / 20) % 2 * (-1) + 1) * 2, ((t / 20) % 2 * (-1) + 1) * 7, ((t / 20) % 2 * (-1) + 1), ((t / 20) % 2 * (-1) + 1) * 7);

        BoyDraw (250 + t/5, 600 - t/5, 2, 2, 1,
                ((t + 2) / 20) % 2 * 2,        ((t + 2) / 20) % 2 * 7,        ((t + 2) / 20) % 2,        ((t + 2) / 20) % 2 * 7,
                ((t / 20) % 2 * (-1) + 1) * 2, ((t / 20) % 2 * (-1) + 1) * 7, ((t / 20) % 2 * (-1) + 1), ((t / 20) % 2 * (-1) + 1) * 7);

        BoyDraw (300 + t/5, 600 - t*10/25, 2, 2, 1,
                ((t + 2) / 20) % 2 * 2,        ((t + 2) / 20) % 2 * 7,        ((t + 2) / 20) % 2,        ((t + 2) / 20) % 2 * 7,
                ((t / 20) % 2 * (-1) + 1) * 2, ((t / 20) % 2 * (-1) + 1) * 7, ((t / 20) % 2 * (-1) + 1), ((t / 20) % 2 * (-1) + 1) * 7);

        BoyDraw (350 + t/5, 600 - t*10/25, 2, 2, 1,
                ((t + 2) / 20) % 2 * 2,        ((t + 2) / 20) % 2 * 7,        ((t + 2) / 20) % 2,        ((t + 2) / 20) % 2 * 7,
                ((t / 20) % 2 * (-1) + 1) * 2, ((t / 20) % 2 * (-1) + 1) * 7, ((t / 20) % 2 * (-1) + 1), ((t / 20) % 2 * (-1) + 1) * 7);

        BoyDraw (400 + t/5, 600 - t/5, 2, 2, 1,
                ((t + 2) / 20) % 2 * 2,        ((t + 2) / 20) % 2 * 7,        ((t + 2) / 20) % 2,        ((t + 2) / 20) % 2 * 7,
                ((t / 20) % 2 * (-1) + 1) * 2, ((t / 20) % 2 * (-1) + 1) * 7, ((t / 20) % 2 * (-1) + 1), ((t / 20) % 2 * (-1) + 1) * 7);

        t++;
        txSleep (10);
        }
    Housbilding (1000);
    }

//-----------------------------------------------------------------------------

void EndTitles ()
    {
    int t = 0;
    while (t < 265)
        {
        txClear   ();
        Landscape ();
        Village ();
        HeightGardenEnd ();

        SunDraw (- 10 + t*3, 70 - t/10, 2, 1, 1, 1, 1, 1, 1, 1);
        SunDraw (-400 + t*3, 70 - t/10, 2, 1, 1, 1, 1, 1, 1, 1);

        txSetColor (TX_BLACK, 20);
        txSelectFont ("Tahoma", 40);
        txTextOut  (1200 - t*3, 100, "TO BE CONTINUED");

        t ++;
        txSleep (10);
        }
    }

//-----------------------------------------------------------------------------

void Housbilding (int x)
    {
    txSleep (x);
    HouseDraw (150, 521, 1, 1, 1, 1, 1, 1);
    txSleep (x);
    HouseDraw (450, 521, 1, 1, 1, 1, 1, 1);
    txSleep (x);
    HouseDraw (650, 521, 1, 1, 1, 1, 1, 1);
    txSleep (x);
    HouseDraw (657, 621, 1, 1, 1, 1, 1, 1);
    txSleep (x);
    HouseDraw (150, 621, 1, 1, 1, 1, 1, 1);
    txSleep (x);
    HouseDraw (450, 621, 1, 1, 1, 1, 1, 1);
    txSleep (x);
    }

//-----------------------------------------------------------------------------

void Village ()
    {
    HouseDraw (150, 521,  1, 1, 1, 1, 1, 1);
    HouseDraw (450, 521,  1, 1, 1, 1, 1, 1);
    HouseDraw (650, 521,  1, 1, 1, 1, 1, 1);
    HouseDraw (657, 621,  1, 1, 1, 1, 1, 1);
    HouseDraw (150, 621,  1, 1, 1, 1, 1, 1);
    HouseDraw (450, 621,  1, 1, 1, 1, 1, 1);
    }

//-----------------------------------------------------------------------------

void PlantingGarden ()
    {
    int t = 0;
    while (t < 520)
        {
        txClear   ();
        Landscape ();
        Village   ();

        BoyDraw  (750 + t/100, 700 - t*61/100, 2,   2,   1,
                 ((t + 2) / 20) % 2 * 2,        ((t + 2) / 20) % 2 * 7,        ((t + 2) / 20) % 2,        ((t + 2) / 20) % 2 * 7,
                 ((t / 20) % 2 * (-1) + 1) * 2, ((t / 20) % 2 * (-1) + 1) * 7, ((t / 20) % 2 * (-1) + 1), ((t / 20) % 2 * (-1) + 1) * 7);

        girlDraw (770 + t/100, 700 - t*61/100, 2.5, 2.5, 2);

        BoyDraw  (830 + t/5, 700 - t/2, 2,   2,   1,
                 ((t + 2) / 20) % 2 * 2,        ((t + 2) / 20) % 2 * 7,        ((t + 2) / 20) % 2,        ((t + 2) / 20) % 2 * 7,
                 ((t / 20) % 2 * (-1) + 1) * 2, ((t / 20) % 2 * (-1) + 1) * 7, ((t / 20) % 2 * (-1) + 1), ((t / 20) % 2 * (-1) + 1) * 7);

        girlDraw (850 + t/5, 700 - t/2, 2.5, 2.5, 2);

        BoyDraw  (900 + t*3/10, 700 - t*3/10, 2,   2,   1,
                 ((t + 2) / 20) % 2 * 2,        ((t + 2) / 20) % 2 * 7,        ((t + 2) / 20) % 2,        ((t + 2) / 20) % 2 * 7,
                 ((t / 20) % 2 * (-1) + 1) * 2, ((t / 20) % 2 * (-1) + 1) * 7, ((t / 20) % 2 * (-1) + 1), ((t / 20) % 2 * (-1) + 1) * 7);

        girlDraw (930 + t*3/10, 700 - t*3/10, 2.5, 2.5, 2);

        BoyDraw  (950 + t*3/10, 700 - t/5, 2,   2,   1,
                 ((t + 2) / 20) % 2 * 2,        ((t + 2) / 20) % 2 * 7,        ((t + 2) / 20) % 2,        ((t + 2) / 20) % 2 * 7,
                 ((t / 20) % 2 * (-1) + 1) * 2, ((t / 20) % 2 * (-1) + 1) * 7, ((t / 20) % 2 * (-1) + 1), ((t / 20) % 2 * (-1) + 1) * 7);

        girlDraw (970 + 3*t/10, 700 - t/5, 2.5, 2.5, 2);

        t++;
        txSleep (10);
        }
    GardenStart ();
    HeightGarden ();
    }

//-----------------------------------------------------------------------------

void GardenStart ()
    {
    TreeDraw (750,  600, 1, 1); txSleep (500);
    TreeDraw (850,  600, 1, 1); txSleep (500);
    TreeDraw (900,  600, 1, 1); txSleep (500);
    TreeDraw (1000, 600, 1, 1); txSleep (500);

    TreeDraw (900,  550, 1, 1); txSleep (500);
    TreeDraw (850,  550, 1, 1); txSleep (500);
    TreeDraw (750,  550, 1, 1); txSleep (500);
    TreeDraw (1000, 550, 1, 1); txSleep (500);

    TreeDraw (900,  500, 1, 1); txSleep (500);
    TreeDraw (850,  500, 1, 1); txSleep (500);
    TreeDraw (750,  500, 1, 1); txSleep (500);
    TreeDraw (1000, 500, 1, 1); txSleep (500);
    }

//-----------------------------------------------------------------------------

void HeightGarden ()
    {
    int t = 0;
    while (t < 100)
        {
        txClear ();
        Landscape ();
        Village   ();

        TreeDraw (750,  600, 1 + t * 0.02, 1 + t * 0.02);
        TreeDraw (850,  600, 1 + t * 0.02, 1 + t * 0.02);
        TreeDraw (900,  600, 1 + t * 0.02, 1 + t * 0.02);
        TreeDraw (1000, 600, 1 + t * 0.02, 1 + t * 0.02);

        TreeDraw (900,  550, 1 + t * 0.02, 1 + t * 0.02);
        TreeDraw (850,  550, 1 + t * 0.02, 1 + t * 0.02);
        TreeDraw (750,  550, 1 + t * 0.02, 1 + t * 0.02);
        TreeDraw (1000, 550, 1 + t * 0.02, 1 + t * 0.02);

        TreeDraw (900,  500, 1 + t * 0.02, 1 + t * 0.02);
        TreeDraw (850,  500, 1 + t * 0.02, 1 + t * 0.02);
        TreeDraw (750,  500, 1 + t * 0.02, 1 + t * 0.02);
        TreeDraw (1000, 500, 1 + t * 0.02, 1 + t * 0.02);

        t ++;
        txSleep (10);
        }
    txSleep (500);
    }

//-----------------------------------------------------------------------------

void HeightGardenEnd ()
    {
    int t = 100;
    TreeDraw (750,  600, 1 + t * 0.02, 1 + t * 0.02);
    TreeDraw (850,  600, 1 + t * 0.02, 1 + t * 0.02);
    TreeDraw (900,  600, 1 + t * 0.02, 1 + t * 0.02);
    TreeDraw (1000, 600, 1 + t * 0.02, 1 + t * 0.02);

    TreeDraw (900,  550, 1 + t * 0.02, 1 + t * 0.02);
    TreeDraw (850,  550, 1 + t * 0.02, 1 + t * 0.02);
    TreeDraw (750,  550, 1 + t * 0.02, 1 + t * 0.02);
    TreeDraw (1000, 550, 1 + t * 0.02, 1 + t * 0.02);

    TreeDraw (900,  500, 1 + t * 0.02, 1 + t * 0.02);
    TreeDraw (850,  500, 1 + t * 0.02, 1 + t * 0.02);
    TreeDraw (750,  500, 1 + t * 0.02, 1 + t * 0.02);
    TreeDraw (1000, 500, 1 + t * 0.02, 1 + t * 0.02);
    }

//-----------------------------------------------------------------------------


