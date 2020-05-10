// CameraTest.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;

int main()
{
    VideoCapture cap(0); // デフォルトカメラをオープン
    if (!cap.isOpened())  // 成功したかどうかをチェック
        return -1;

    Mat frame;
    //namedWindow("CameraTest", 1);
    for (;;)
    {
        cap >> frame; // カメラから新しいフレームを取得
        imshow("CameraTest", frame);
        if (waitKey(30) >= 0) break; //「Esc」を押して終了する
    }
    // VideoCapture デストラクタにより，カメラは自動的に終了処理されます
    return 0;
}