#include <iostream>

#include "opencv2/opencv.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/photo.hpp"

using namespace cv;

// Declare Mat objects for original image and mask for inpainting
Mat img, inpaintMask;
// Mat object for result output
Mat res;
Point prevPt(-1,-1);

int main() {
    using std::cout;
    using std::endl;

    cout << "OpenCV version : " << CV_VERSION << endl;
    cout << "Major version : " << CV_MAJOR_VERSION << endl;
    cout << "Minor version : " << CV_MINOR_VERSION << endl;
    cout << "Subminor version : " << CV_SUBMINOR_VERSION << endl;


    return 0;
}