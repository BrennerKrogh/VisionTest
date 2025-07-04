#include <opencv2/opencv.hpp>
// path: D:\libs\opencv\sources\include
#include <iostream>
using namespace cv;
int main()
{
    std::string image_path = "Bird.avif";
    Mat img = imread(image_path, IMREAD_COLOR);

    imshow("Display window", img);
    int k = waitKey(0); // Wait for a keystroke in the window
    return 0;
}