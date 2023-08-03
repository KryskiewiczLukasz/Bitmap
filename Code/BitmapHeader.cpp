#include <iostream>
#include "Fractal.h"
#include "Fractal.cpp"
#include <string>
#include <memory>
#include "Bitmap.h"
#include "Zoom.h"
#include "Mandelbrot.h"
#include "ZoomList.h"
#include "Bitmap.cpp"
#include "Mandelbrot.cpp"
#include "ZoomList.cpp"
#include "RGB.h"
#include "RGB.cpp"


using namespace lukasz;



int main(){

    Fractal fractal(800,600);

    fractal.addRange(0.0, RGB(0, 0, 255));
    fractal.addRange(0.05, RGB(255, 99, 71 ));
    fractal.addRange(0.08, RGB(255, 215, 0 ));
    fractal.addRange(1.0, RGB(255, 255, 255 ));


    fractal.addZoom(Zoom(295, 202, 0.1));
    fractal.addZoom(Zoom(312, 304, 0.1));
    fractal.run("Fractal Image.bmp"); 


    std::cout<<"Finished" <<std::endl;


    return 0;
}