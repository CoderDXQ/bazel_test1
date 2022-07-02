#include <opencv2/opencv.hpp>
 
int main(int argc, char *argv[]) {
    cv::Mat img = cv::imread("/home/alan/1.jpg");
    std::cout << "Resolution: " << img.rows << " x " << img.cols << std::endl;
    return 0;
}