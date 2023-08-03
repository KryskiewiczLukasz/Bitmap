#ifndef FRACTAL_H_
#define FRACTAL_H_

#include <string>
#include <cstdint>
#include <memory>
#include <math.h>
#include "Zoom.h"
#include "Mandelbrot.h"
#include "Bitmap.h"
#include "ZoomList.h"
#include "RGB.h"
#include <vector>


namespace lukasz {

class Fractal {
private:
	int m_width;
	int m_height;
	std::unique_ptr<int[]> m_histogram;
	std::unique_ptr<int[]> m_fractal;
	Bitmap m_bitmap;
	ZoomList m_zoomList;
	int m_total{0};

	std::vector<int> m_ranges;
	std::vector<RGB> m_colors;
	std::vector<int> m_rangeTotals;

	bool m_bGotFirstRange{false};

private:
	void calculateIteration();
	void calculateTotalIterations();
	void calculateRangeTotals();
	void drawFractal();
	void writeBitmap(std::string name);

public:
	Fractal(int width, int height);
	virtual ~Fractal();
	int getRange(int iterations) const;
	void addRange(double rangeEnd, const RGB& rgb);
	void addZoom(const Zoom& zoom);
	void run(std::string name); 
};

} 

#endif