//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <math.h>
#include <stdlib.h>
#include "MainApp.h"
#include "ShowChart.h"
# include<vector>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TShowChartDialog *ShowChartDialog;
int samples = 10000;
//---------------------------------------------------------------------------
__fastcall TShowChartDialog::TShowChartDialog(TComponent* Owner)
	: TForm(Owner)
{
}

//---------------------------------------------------------------------------




// 生成隨機變數
double uniform(double a, double b)
{
    int n = rand() % (int)pow(2.0, 15);
    return a + (b - a) * n / pow(2.0, 15);
}

double exponential(double lambda)
{
    double x = uniform(0, 1);
    if (x <= 1e-10) x = 1e-10;
    return -log(1 - x) / lambda;
}

double normal(double mean, double variance)
{
    double x1 = uniform(0, 1);
    double x2 = uniform(0, 1);
    if (x2 <= 1e-10) x2 = 1e-10;

    double pi = 3.141592653589793;
    return mean + variance * cos(2 * pi * x1) * sqrt(-2 * log(x2));
}

// 主要繪圖邏輯
void __fastcall TShowChartDialog::showDiagram(TObject *Sender)
{
    const int bins = 100;        // 分箱數
    int histogram[bins] = {0};   // 每個區間的頻率
    double minX, maxX, range, binWidth;
    double x;

    Series1->Clear();

    // 設定取值範圍
    if (Form5->ComboBox1->ItemIndex == 0) { // Uniform
        minX = Form5->para1;
        maxX = Form5->para2;
    }
    else if (Form5->ComboBox1->ItemIndex == 1) { // Exponential
        minX = 0;
        maxX = 5 / Form5->para1; // 大概到 5/lambda
    }
    else { // Normal
        minX = Form5->para1 - 4 * Form5->para2;
        maxX = Form5->para1 + 4 * Form5->para2;
    }

    range = maxX - minX;
    binWidth = range / bins;

    // 統計直方圖
    for (int i = 0; i < Form5->samples; i++) {
        switch (Form5->ComboBox1->ItemIndex) {
            case 0:
                x = uniform(Form5->para1, Form5->para2);
                break;
            case 1:
                x = exponential(Form5->para1);
                break;
            case 2:
                x = normal(Form5->para1, Form5->para2);
                break;
        }
        int binIndex = (int)((x - minX) / binWidth);
        if (binIndex >= 0 && binIndex < bins) {
            histogram[binIndex]++;
        }
    }

    // 將 histogram 畫出來
    for (int i = 0; i < bins; i++) {
        double binCenter = minX + (i + 0.5) * binWidth;
        double density = (double)histogram[i] / (Form5->samples * binWidth);
        Series1->AddXY(binCenter, density);
    }

    Chart1->LeftAxis->Title->Caption = "Probability Density";
    Chart1->BottomAxis->Title->Caption = "X";
}

