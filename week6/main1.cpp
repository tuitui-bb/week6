//#include<opencv2/opencv.hpp>
//#include<iostream>
//using namespace cv;
//
//
//int main()
//{
//	cv::Mat dstMat;
//	cv::Mat srcMat = cv::imread("D:\\lean.jpg", 1);
//	if (srcMat.empty()) return -1;
//
//	//旋转-40° 缩放尺寸为
//	float angle = -10.0, scale = 1;
//	//旋转中心为图像中心
//	cv::Point2f center(srcMat.cols * 0.5, srcMat.rows * 0.5);
//	//获得变化矩阵
//	const cv::Mat affine_matrix = cv::getRotationMatrix2D(center, angle, scale);
//
//	cv::warpAffine(srcMat, dstMat, affine_matrix,srcMat.size());
//
//	cv::imshow("src", srcMat);
//	cv::imshow("dst", dstMat);
//	waitKey(0);
//	return 0;
//}