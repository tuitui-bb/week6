#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;


int main()
{
	cv::Mat dstMat;
	cv::Mat result = cv::imread("D:\\lean.jpg", 1);
	cv::Mat srcMat = cv::imread("D:\\lean.jpg", 0);
	
	int d = 0;
	int d1 = 0;
	int d2 = 0;
	if (srcMat.empty()) return -1;
	int height = srcMat.rows;//行数
	int width = srcMat.cols;//每行元素的总元素量
	


	for (int j = 0; j < height; j++) {
		for (int i = 0; i < width; i++)
		{
			if (srcMat.at<uchar>(height-1, i) < 230) d = i;

		}
	}
	for (int j = 0; j < height; j++)
	{
		for (int i = 0; i < width; i++)
		{
			if (srcMat.at<uchar>(j, 0) < 230) d1 = j;
		}
	}
	for (int j = 0; j < height; j++)
	{
		for (int i = 0; i < width; i++)
		{
			if (srcMat.at<uchar>(j, width - 1) < 240)  d2 = j;
		}
	}
	const cv::Point2f src_pt[] = {
								   cv::Point2f(d,height-1),
								   cv::Point2f(0,d1),
								   cv::Point2f(width-1,d2) };

	const cv::Point2f dst_pt[] = { cv::Point2f(width-1,height-1),
								  cv::Point2f(0,height - 1),
								  cv::Point2f(width - 1,0) };

	const cv::Mat affine_matrix = cv::getAffineTransform(src_pt, dst_pt);

	cv::warpAffine(result, dstMat, affine_matrix, srcMat.size());

	cv::imshow("src", result);
	cv::imshow("dst", dstMat);
	
	cv::waitKey(0);

	return 0;
}