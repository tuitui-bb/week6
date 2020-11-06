//#include <opencv2/opencv.hpp>
//#include <iostream>
//using namespace cv;
//int main()
//{
//	VideoCapture cap;
//
//	cap.open(0);
//
//	if (!cap.isOpened())
//	{
//		std::cout << "不能打开视频文件" << std::endl;
//		return -1;
//
//	}
//	double fps = cap.get(CAP_PROP_FPS);
//	std::cout << "fps" << fps << std::endl;
//	while (1)
//	{
//		cv::Mat frame;
//		cv::Mat dst;
//		cv::Mat dst1;
//		bool rSucess = cap.read(frame);
//		Canny(frame, dst, 100, 125, 3, false);
//		Canny(CV_8UC1, CV_8UC1, dst1, 100, 125, false);
//		if (!rSucess)
//		{
//			std::cout << "不能从视频文件中读取数据" << std::endl;
//			break;
//
//		}
//		else
//		{
//			cv::imshow("frame", frame);
//			cv::imshow("dst", dst);
//			cv::imshow("dst1", dst1);
//		}
//		waitKey(30);
//	}
//}