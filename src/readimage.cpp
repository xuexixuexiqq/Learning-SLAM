
#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;

int main(int argc, char** argv)
{
    cv::Mat src;

    src = cv::imread("./data/rgb.png");
	if(src.empty()){
	    cout<<" cout not load image... "<<endl;
		return -1;
	}

	cv::namedWindow(" input ", CV_WINDOW_AUTOSIZE);
	cv::imshow(" input ", src);

	cv::waitKey(0);
    return 0;
}
