#include <opencv2/imgcodecs.hpp>
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdint>

int main() {
    std::cout << "expected size: [1440 x 2048]" << std::endl;

    cv::Mat img = cv::imread(
        "./e09ca4a57584181ce573e45079b524ff3859b9fb.jpg",
        cv::IMREAD_REDUCED_COLOR_8
    );
    std::cout << "imread size: " << img.size() << std::endl;

    std::ifstream instream("./e09ca4a57584181ce573e45079b524ff3859b9fb.jpg", std::ios::in | std::ios::binary);
    std::vector<uint8_t> data = std::vector<uint8_t>(std::istreambuf_iterator<char>(instream), std::istreambuf_iterator<char>());
    cv::Mat img2 = cv::imdecode(
        data,
        cv::IMREAD_REDUCED_COLOR_8
    );
    std::cout << "imdecode size: " << img2.size() << std::endl;

    return 0;
}
