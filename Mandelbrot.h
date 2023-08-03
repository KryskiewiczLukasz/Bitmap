#ifndef MANDELBROT_H_
#define MANDELBROT_H_

namespace lukasz{

class Mandelbrot{
    public:
    static const int MAX_ITERATIONS = 2137;

    public:
    Mandelbrot();
    virtual ~Mandelbrot();

static int getIterations(double x, double y);


};



}




#endif //MANDELBROTH_H_