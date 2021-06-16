#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

Mat testImage = imread("number_zero.jpg", 0);

int main(void){

	cout << (int)testImage.at<uchar>(0,0);
	
	testImage.at<uchar>(0,0)=200;

	cout << testImage;
	
	return 0;
}
