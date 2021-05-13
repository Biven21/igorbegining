#include "TXLib.h"
#include "BivenLib.h"
#include "LFioninaLib.h"

using namespace biven;

void Landscape ();
void Village   ();
void HeightGarden ();
void BeeFlyby ();
void GardenEnd ();

int main ()
    {
    txCreateWindow  (1200, 700);
    txSetFillColor  (TX_WHITE);
    txRectangle     ( 10, 10, 1190, 690);

    Landscape ();
    Village ();
    HeightGarden ();
    BeeFlyby ();

    return 0;
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

//-----------------------------------------------------------------------------
void Village ()
    {
    HouseDraw (150, 521,  1,   1,   1,    1,   1,   1);
    HouseDraw (450, 521,  1,   1,   1,    1,   1,   1);
    HouseDraw (650, 521,  1,   1,   1,    1,   1,   1);
    HouseDraw (657, 621,  1,   1,   1,    1,   1,   1);
    HouseDraw (150, 621,  1,   1,   1,    1,   1,   1);
    HouseDraw (450, 621,  1,   1,   1,    1,   1,   1);
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
void GardenEnd ()
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

void BeeFlyby ()
    {
    int t = 0;
    while (t <= 1500)
        {
         txClear ();
         Landscape ();
         Village   ();
         GardenEnd ();

         if (t < 700)
            {
             BeeDraw (750 + (t + 10) / 2, 500,                         1.5);
             BeeDraw (750 + (t - 10) / 2, 450 + 50 / (1 + (t/4) %12),  1.5);
             BeeDraw (750 + t / 2,        470 - 50 / (0.1 + (t/4) %6), 1.5);
             BeeDraw (750 + (t - 30) / 2, 550 + 40 / (1 + (t/4) %20),  1.5);
            }
         else
            {
             BeeDraw (1105 - (t - 700 + 10) / 2, 500,                         1.5);
             BeeDraw (1095 - (t - 700 - 10) / 2, 450 + 50 / (1 + (t/4) %12),  1.5);
             BeeDraw (1000 - (t - 700) / 2,        470 - 50 / (0.1 + (t/4) %6), 1.5);
             BeeDraw (1085 - (t - 300) / 4, 550 + 40 / (1 + (t/4) %20),  1.5);
            }

         t++;
         txSleep (2);
        }

    }
