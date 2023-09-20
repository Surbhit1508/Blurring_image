# Blurring_image
A full working code in order to blur an image that a user himself can upload and blur it :)
To create a project in C++ that can blur any image, you'll need to use a library for image processing. One of the popular libraries for this purpose is OpenCV. 
OpenCV is a versatile open-source computer vision library that includes various functions for image manipulation, including blurring.

Prerequisites:
1. Install OpenCV on your system.
2. Set up a C++ development environment (e.g., using an IDE like Visual Studio or Code::Blocks) with OpenCV support.


Compilation and Execution:

Compile the program using a C++ compiler with OpenCV support. For example, you can use the following command with G++:
g++ -o blur_image blur_image.cpp `pkg-config --cflags --libs OpenCV
Run the program by providing the path to an image as a command-line argument:

bash
./blur_image input_image.jpg
It will load an image, apply Gaussian blur to it with a specified kernel size, and display both the original and blurred images.

Make sure to adjust the kernelSize variable to control the strength of the blur effect. Larger values will result in stronger blurring.
