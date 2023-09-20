#include <bits/stdc++.h>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

int main(int argc, char** argv) {
    // Check for the correct number of command-line arguments
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <image_path>" << std::endl;
        return -1;
    }

    // Load the input image
    Mat image = imread(argv[1]);

    // Check if the image was loaded successfully
    if (image.empty()) {
        std::cerr << "Error: Could not open or find the image." << std::endl;
        return -1;
    }

    // Define the kernel size for blurring
    int kernelSize = 5;  // You can adjust this value as needed

    // Apply Gaussian blur to the image
    Mat blurredImage;
    GaussianBlur(image, blurredImage, Size(kernelSize, kernelSize), 0);

    // Display the original and blurred images
    imshow("Original Image", image);
    imshow("Blurred Image", blurredImage);

    // Wait for a key press and then close the windows
    waitKey(0);

    return 0;
}
