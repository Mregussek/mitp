//
// Created by mateusz on 23.04.19.
//

#ifndef VIDEOSTREAMING_CAMERA_H
#define VIDEOSTREAMING_CAMERA_H

#include "opencv2/opencv.hpp"

namespace mrz
{
    class Camera
    {
    public:
        Camera();
        ~Camera();

        void if_continuous();
        void read_frame();
        void process_frame();

        uchar* get_metadata();

        cv::Mat* gray_image;
        size_t* image_size;

    private:
        cv::VideoCapture* camera;
        cv::Mat* image;
    };
}


#endif //VIDEOSTREAMING_CAMERA_H
