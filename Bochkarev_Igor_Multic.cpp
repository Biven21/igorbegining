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

void HouseDraw   (int x, int y, double sizeX, double sizeY, double GableUp, double GableX, double roofRight, double roofLeft);
void SunDraw     (int x, int y, double size,  double sizeChet, double sizeNChet, double sizeEyse,
                 double EyeLeftX, double EyeRightX, double EyeLeftUp, double EyeRightUp);
void girlDraw    (int x, int y, double sizeX, double sizeY, double wind);
void BoyDraw     (int x, int y, double sizeX, double sizeY, int shovelUp);
void FirDraw     (int x, int y, double sizeX, double sizeY, double Wind);
void TreeDraw    (int x, int y, double sizeX, double sizeY);
void BackGround  ();
void StartTitles ();
void StarShip    (int x, int y, double sizeShip);
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

int main()
    {
    txCreateWindow  (1200, 700);
    txSetFillColor  (TX_WHITE);
    txRectangle     ( 10,  10, 1190, 690);

    //StartTitles ();
    //txSleep (1000);
    //Serenity ();
    //Disembarkation ();
    //Solstice ();
    //Disembarkation ();
    //ConstructionCamp ();
    PlantingGarden ();
    TreeDraw (50, 20, 2, 2);
    EndTitles ();

    return 0;
    }

void SunDraw (int x, int y, double size, double sizeChet, double sizeNChet, double sizeEyse,
              double EyeLeftX, double EyeRightX, double EyeLeftUp, double EyeRightUp )
    {
    txSetColor     (TX_YELLOW, 4);
    txSetFillColor (TX_YELLOW);
    txCircle (x, y, 20*size);
    txLine (ROUND (x + 15*size), ROUND (y - 14*size), ROUND (x + 40*size*sizeNChet), ROUND (y - 37*size*sizeNChet));
    txLine (ROUND (x + 19*size), ROUND (y -  4*size), ROUND (x + 39*size*sizeChet),  ROUND (y -  7*size*sizeChet));
    txLine (ROUND (x + 20*size), ROUND (y +  9*size), ROUND (x + 37*size*sizeNChet), ROUND (y + 18*size*sizeNChet));
    txLine (ROUND (x +  8*size), ROUND (y + 18*size), ROUND (x + 16*size*sizeChet),  ROUND (y + 36*size*sizeChet));
    txLine (ROUND (x),           ROUND (y + 20*size), ROUND (x),                     ROUND (y + 63*size*sizeNChet));
    txLine (ROUND (x),           ROUND (y - 20*size), ROUND (x),                     ROUND (y - 63*size*sizeChet));
    txLine (ROUND (x -  8*size), ROUND (y + 18*size), ROUND (x - 16*size*sizeNChet), ROUND (y + 36*size*sizeNChet));
    txLine (ROUND (x - 15*size), ROUND (y - 14*size), ROUND (x - 40*size*sizeChet),  ROUND (y - 37*size*sizeChet));
    txLine (ROUND (x - 20*size), ROUND (y +  9*size), ROUND (x - 37*size*sizeNChet), ROUND (y + 18*size*sizeNChet));
    txLine (ROUND (x - 19*size), ROUND (y -  4*size), ROUND (x - 39*size*sizeChet),  ROUND (y -  7*size*sizeChet));

    txSetColor (TX_BLACK, 1);
    txSetFillColor (TX_WHITE);
    txCircle (ROUND (x - 10*size*EyeLeftX),  ROUND (y - 10*size*EyeLeftUp),  4*size*sizeEyse);
    txCircle (ROUND (x + 10*size*EyeRightX), ROUND (y - 10*size*EyeRightUp), 4*size*sizeEyse);
    txSetFillColor (TX_BLACK);
    txCircle (ROUND (x -  9*size*EyeLeftX),  ROUND (y - 10*size*EyeLeftUp),  2.7*size*sizeEyse);
    txCircle (ROUND (x + 11*size*EyeRightX), ROUND (y - 10*size*EyeRightUp), 2.7*size*sizeEyse);

    txSetFillColor (TX_TRANSPARENT);
    POINT smile [5] = {{ROUND (x - 11*size), ROUND (y + 7*size)}, {ROUND (x),          ROUND (y + 13*size)},
                       {ROUND (x + 11*size), ROUND (y + 7*size)}, {ROUND (x + 5*size), ROUND (y +  9*size)},
                       {ROUND (x -  5*size), ROUND (y + 9*size)}};
    txPolygon (smile, 5);
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

void girlDraw (int x, int y, double sizeX, double sizeY, double wind)
    {
    txSetColor  (TX_GREEN);
    txCircle    (x,      y -  4*sizeY, 4*((sizeX + sizeY)/3));

    txSetFillColor  (TX_BLUE);
    POINT girlDress [3] = {{ROUND (x), ROUND (y)}, {ROUND (x - 3*sizeX), ROUND (y + 12*sizeY)}, {ROUND (x + 4*sizeX), ROUND (y + 12*sizeY)}};
    txPolygon       (girlDress, 3);

    txLine      (ROUND (x -  2*sizeX), ROUND (y + 12*sizeY), ROUND (x -  3*sizeX), ROUND (y + 24*sizeY));
    txLine      (ROUND (x +  1*sizeX), ROUND (y + 12*sizeY), ROUND (x +  4*sizeX), ROUND (y + 24*sizeY));
    txLine      (ROUND (x +  2*sizeX), ROUND (y +  5*sizeY), ROUND (x -  9*sizeX), ROUND (y)           );
    txLine      (ROUND (x +  1*sizeX), ROUND (y +  5*sizeY), ROUND (x + 10*sizeX), ROUND (y -  1*sizeY));
    txLine      (ROUND (x + 10*sizeX), ROUND (y -  8*sizeY), ROUND (x + 10*sizeX), ROUND (y +  1*sizeY));

    txSetFillColor (TX_RED);
    POINT flag [3] = {{ROUND (x + 10*sizeX), ROUND (y - 8*sizeY)}, {ROUND (x + 19*sizeX), ROUND (y - 6*sizeY*wind)}, {ROUND (x + 10*sizeX), ROUND (y - 4*sizeY)}};
    txPolygon   (flag, 3);
    }

void BoyDraw (int x, int y, double sizeX, double sizeY, int shovelUp)
    {
    txSetColor  (TX_GREEN);
    txCircle    (x, y - 5*sizeY, 5*((sizeX + sizeY)/2));

    txSetColor      (TX_BLACK, 2);
    txSetFillColor  (TX_RED);
    POINT shirt [4] = {{ROUND (x - 4*sizeX), ROUND (y)},            {ROUND (x + 6*sizeX), ROUND (y)},
                       {ROUND (x + 3*sizeX), ROUND (y + 16*sizeY)}, {ROUND (x - 1*sizeX), ROUND (y +16*sizeY)}};
    txPolygon (shirt, 4);

    txLine      (ROUND (x),            ROUND (y + 16*sizeY),          ROUND (x -  4*sizeX), ROUND (y + 27*sizeY));
    txLine      (ROUND (x +  1*sizeX), ROUND (y + 16*sizeY),          ROUND (x +  5*sizeX), ROUND (y + 27*sizeY));
    txLine      (ROUND (x -  3*sizeX), ROUND (y +  3*sizeY),          ROUND (x - 14*sizeX), ROUND (y +  6*sizeY*shovelUp));
    txLine      (ROUND (x +  5*sizeX), ROUND (y +  3*sizeY),          ROUND (x + 12*sizeX), ROUND (y + 15*sizeY));
    txLine      (ROUND (x - 14*sizeX), ROUND (y +  3*sizeY*shovelUp), ROUND (x - 14*sizeX), ROUND (y + 23*sizeY*shovelUp));

    txSetFillColor  (TX_GRAY);
    POINT shovel [4] = {{ROUND (x - 17*sizeX), ROUND (y + 23*sizeY*shovelUp)}, {ROUND (x - 11*sizeX), ROUND (y + 23*sizeY*shovelUp)},
                        {ROUND (x - 12*sizeX), ROUND (y + 27*sizeY*shovelUp)}, {ROUND (x - 16*sizeX), ROUND (y + 27*sizeY*shovelUp)}};
    txPolygon (shovel, 4);
    }

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

void TreeDraw (int x, int y, double sizeX, double sizeY)
    {
    txSetColor  (TX_BROWN, 5);
    txLine      (x, y, x, y - 30*sizeY);     // x = 344; y = 323

    txSetColor  (TX_BROWN, 2);
    txLine      (x - 9*sizeX, y - 20*sizeY, x - 16*sizeX, y*sizeY - 20);
    txLine      (x,           y -  8*sizeY, x +  9*sizeX, y*sizeY - 20);
    txLine      (x + 9*sizeX, y - 20*sizeY, x + 18*sizeX, y*sizeY - 23);
    txLine      (x,           y - 13*sizeY, x + 11*sizeX, y*sizeY - 20); //344, 310, 335, 303);
    txLine      (x,           y - 19*sizeY, x +  9*sizeX, y*sizeY - 37); //344, 304, 353, 286);
    txLine      (x - 4*sizeX, y - 39*sizeY, x,            y*sizeY - 30); //340, 284, 344, 293);
    }

void BackGround ()
    {
    HouseDraw (557, 321,  1,   1,   1,    1,   1,   1);
    HouseDraw (557, 180,  1,   1,   1.1,  1.6, 1,   1);
    HouseDraw (300, 450,  2,   1.2, 1,    1,   1.2, 1.1);
    HouseDraw (230, 222,  1,   1,   1.5, -1.6, 2,   2);

    girlDraw  (429, 299,  1,   1,    1);
    girlDraw  (429, 128,  1.5, 1.5,  2);
    girlDraw  ( 22, 299,  2,   2,    3);
    girlDraw  (202, 200,  2.5, 2.5, -1);
    girlDraw  (429, 399, -4,  -2,   -1);

    BoyDraw   (388, 296, 1, 1,  1);
    BoyDraw   (500, 500, 3, 3, -1);
    BoyDraw   (600, 500, 3, 3, -1);


    FirDraw   (292, 277, 1,   1, 0);
    FirDraw   (600, 100, 1,   1, 1);
    FirDraw   (750,  90, 1.5, 2, 4);
    FirDraw   (660,  80, 0.5, 1, 2);
    FirDraw   (680,  80, 0.5, 1, 2);

    TreeDraw  (300, 300, 1, 1);

    SunDraw   (990, 260, 3,   2, 3, 1,   1, 1,   1, 1);
    SunDraw   ( 40,  70, 2,   1, 1, 1,   1, 1,   1, 1);
    SunDraw   (190,  50, 3,   1, 1, 1,   1, 1,   1, 1);
    SunDraw   (390,  90, 1.5, 1, 1, 1,   1, 1,   1, 1);
    SunDraw   (990, 490, 1.5, 2, 1, 1.5, 1, 1.5, 1, 1);

    txSetColor  (TX_GREEN, 2);
    txLine      (273, 323, 443, 323);
    }

void StartTitles ()
        {
    txSetFillColor  (RGB (0, 150, 200));
    txRectangle     ( 10,  10, 1190, 690);

    int x = 1;
    while (x <= 300)
        {
        txClear ();
        txSetColor (TX_BLACK, 10);
        txSelectFont ("Tahoma", 40);
        txTextOut  (x + 20, 100, "БОЧКАРЕВ ФИЛЬМ");
        x = x + 1;
        txSleep (10);
        }

    x = 1;
    while (x <= 250)
        {
        txClear ();
        txSetColor (TX_BLACK, 10);
        txSelectFont ("Tahoma", 40);
        txTextOut  (300, 100, "БОЧКАРЕВ ФИЛЬМ");
        txSetColor (TX_RED, 100);
        txSelectFont ("Tahoma|", 60);
        txTextOut  (x + 10, 180, " ПЕДСТАВЛЯЕТ ");
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

void StarShip (int x, int y, double sizeShip)
    {
    txSetColor (TX_BLACK, 4);
    txEllipse (ROUND (x - 60.0*sizeShip), ROUND (y - 24.7*sizeShip), ROUND (x + 60.0*sizeShip), ROUND (y + 24.7*sizeShip));
    txLine    (ROUND (x - 60.1*sizeShip), ROUND (y),                 ROUND (x - 54.0*sizeShip), ROUND (y + 16.7*sizeShip));
    txLine    (ROUND (x - 54.0*sizeShip), ROUND (y + 16.7*sizeShip), ROUND (x),                 ROUND (y + 54.7*sizeShip));
    txLine    (ROUND (x),                 ROUND (y + 54.7*sizeShip), ROUND (x + 53.7*sizeShip), ROUND (y + 24.7*sizeShip));
    txLine    (ROUND (x + 53.7*sizeShip), ROUND (y + 24.7*sizeShip), ROUND (x + 59.7*sizeShip), ROUND (y +  2.2*sizeShip));
    txLine    (ROUND (x),                 ROUND (y - 96.1*sizeShip), ROUND (x - 59.1*sizeShip), ROUND (y -  4.3*sizeShip));
    txLine    (ROUND (x),                 ROUND (y - 96.1*sizeShip), ROUND (x - 44.5*sizeShip), ROUND (y + 16.6*sizeShip));
    txLine    (ROUND (x),                 ROUND (y - 96.1*sizeShip), ROUND (x + 41.9*sizeShip), ROUND (y + 17.7*sizeShip));
    txLine    (ROUND (x),                 ROUND (y - 96.1*sizeShip), ROUND (x + 59.0*sizeShip), ROUND (y -  4.5*sizeShip));
    txLine    (ROUND (x),                 ROUND (y + 54.7*sizeShip), ROUND (x),                 ROUND (y + 24.7*sizeShip));

    POINT Support1 [3] = {{ROUND (x - 47.6*sizeShip), ROUND (y + 21.2*sizeShip)}, {ROUND (x - 43.5*sizeShip), ROUND (y + 49.9*sizeShip)}, {ROUND (x - 40.2*sizeShip), ROUND (y + 26.4*sizeShip)}};
    txPolygon (Support1, 3);
    POINT Support2 [3] = {{ROUND (x - 27*sizeShip),   ROUND (y + 75.1*sizeShip)}, {ROUND (x - 28.9*sizeShip), ROUND (y + 24.7*sizeShip)}, {ROUND (x - 16.5*sizeShip), ROUND (y + 30.4*sizeShip)}};
    txPolygon (Support2, 3);
    POINT Support3 [3] = {{ROUND (x + 30.2*sizeShip), ROUND (y + 78.2*sizeShip)}, {ROUND (x + 33.5*sizeShip), ROUND (y + 24.7*sizeShip)}, {ROUND (x + 15.6*sizeShip), ROUND (y + 30.4*sizeShip)}};
    txPolygon (Support3, 3);
    POINT Support4 [3] = {{ROUND (x + 48.3*sizeShip), ROUND (y + 57.7*sizeShip)}, {ROUND (x + 38.6*sizeShip), ROUND (y + 33.1*sizeShip)}, {ROUND (x + 48.3*sizeShip), ROUND (y + 27.7*sizeShip)}};
    txPolygon (Support4, 3);
    }

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

void Disembarkation ()
    {
    int x = 250;
    int y = 550;
    int shovel = 0;
    ArrivalStarShip (5);
    while (x <= 400, y >= 500, shovel <= 15)
        {
        BoyDraw  (x,      y,      2,   2,   shovel % 2 * 2 - 1);
        girlDraw (x + 10, y - 50, 2.5, 2.5, 2);
        StarShip (200, 500, 1.5);

        x += 30;
        y -=  2;
        shovel ++;
        txSleep (500);
        }
    }

void Solstice ()
    {
    int t = 0;
    while (t < 370)
        {
        txClear ();
        txSetFillColor (TX_WHITE);
        Landscape ();

        SunDraw (-  10 + t*4.5, 270 - t, 2, 1, 1, 1, 1, 1, 1, 1);
        SunDraw (- 400 + t*4.5, 270 - t, 2, 1, 1, 1, 1, 1, 1, 1);

        t ++;
        txSleep (10);
        }
    }

void ConstructionCamp ()
    {
    double t = 0;
    while (t < 500)
        {

        txClear   ();
        Landscape ();

        SunDraw (-  10 + t*4.5, 270 - t,     2, 1, 1, 1, 1, 1, 1, 1);
        SunDraw (- 400 + t*4.5, 270 - t,     2, 1, 1, 1, 1, 1, 1, 1);
        SunDraw (-1000 + t*4,   270 - t*0.6, 2, 1, 1, 1, 1, 1, 1, 1);
        SunDraw (-1400 + t*4,   270 - t*0.6, 2, 1, 1, 1, 1, 1, 1, 1);

        BoyDraw ( 50 + 0.2*t, 600 - 0.25*t, 2, 2, 1);
        BoyDraw (100 + 0.2*t, 600 - 0.4*t,  2, 2, 1);
        BoyDraw (150 + 0.2*t, 600 - 0.4*t,  2, 2, 1);
        BoyDraw (200 + 0.2*t, 600 - 0.25*t, 2, 2, 1);

        BoyDraw (250 + 0.2*t, 600 - 0.20*t, 2, 2, 1);
        BoyDraw (300 + 0.2*t, 600 - 0.40*t, 2, 2, 1);
        BoyDraw (350 + 0.2*t, 600 - 0.40*t, 2, 2, 1);
        BoyDraw (320 + 0.2*t, 600 - 0.20*t, 2, 2, 1);

        t++;
        txSleep (10);
        }
    Housbilding (1000);
    }

void EndTitles ()
    {
    double t = 0;
    while (t < 265)
        {
        txClear   ();
        Landscape ();
        HouseDraw (150, 521,  1,   1,   1,    1,   1,   1);
        HouseDraw (450, 521,  1,   1,   1,    1,   1,   1);
        HouseDraw (450, 621,  1,   1,   1,    1,   1,   1);
        HouseDraw (150, 621,  1,   1,   1,    1,   1,   1);
        HouseDraw (650, 521,  1,   1,   1,    1,   1,   1);
        HouseDraw (657, 621,  1,   1,   1,    1,   1,   1);

        SunDraw   (- 10 + t*3, 70 - t*0.1, 2, 1, 1, 1, 1, 1, 1, 1);
        SunDraw   (-400 + t*3, 70 - t*0.1, 2, 1, 1, 1, 1, 1, 1, 1);

        txSetColor (TX_BLACK, 20);
        txSelectFont ("Tahoma", 40);
        txTextOut  (1200 - t*3, 100, "ПРОДОЛЖЕНИЕ СЛЕДУЕТ");

        t = t + 1;
        txSleep (10);
        }

    }

void Housbilding (int x)
    {
    txSleep (x);
    HouseDraw (150, 521,  1,   1,   1,    1,   1,   1);
    txSleep (x);
    HouseDraw (450, 521,  1,   1,   1,    1,   1,   1);
    txSleep (x);
    HouseDraw (650, 521,  1,   1,   1,    1,   1,   1);
    txSleep (x);
    HouseDraw (657, 621,  1,   1,   1,    1,   1,   1);
    txSleep (x);
    HouseDraw (150, 621,  1,   1,   1,    1,   1,   1);
    txSleep (x);
    HouseDraw (450, 621,  1,   1,   1,    1,   1,   1);
    txSleep (x);
    }

void Village ()
    {
    HouseDraw (150, 521,  1,   1,   1,    1,   1,   1);
    HouseDraw (450, 521,  1,   1,   1,    1,   1,   1);
    HouseDraw (650, 521,  1,   1,   1,    1,   1,   1);
    HouseDraw (657, 621,  1,   1,   1,    1,   1,   1);
    HouseDraw (150, 621,  1,   1,   1,    1,   1,   1);
    HouseDraw (450, 621,  1,   1,   1,    1,   1,   1);
    }

void PlantingGarden ()
    {
    int t = 0;
    while (t < 300)
        {
        txClear   ();
        Landscape ();
        Village   ();

        BoyDraw  (750 + 0.1*t, 600 - 0.41*t, 2,   2,   1);
        girlDraw (770 + 0.1*t, 600 - 0.41*t, 2.5, 2.5, 2);

        BoyDraw  (850 + 0.2*t, 600 - 0.51*t, 2,   2,   1);
        girlDraw (870 + 0.2*t, 600 - 0.51*t, 2.5, 2.5, 2);

        BoyDraw  (950 + 0.3*t, 600 - 0.31*t, 2,   2,   1);
        girlDraw (970 + 0.3*t, 600 - 0.31*t, 2.5, 2.5, 2);

        t++;
        txSleep (10);
        }
    //t = 0;
    TreeDraw (750, 600, 2, 2);
    TreeDraw (850, 600, 2, 2);
    }
