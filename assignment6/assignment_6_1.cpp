#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;
void getJudgeData(double& score, int& i);
void calcScore(double a, double b, double c, double d, double e, double& average);
double findLowest(double a, double b, double c, double d, double e);
double findHighest(double a, double b, double c, double d, double e);

int main()
{
   double average_score, max_score, min_score;
   double score_1, score_2, score_3, score_4, score_5;
   for (int i=1; i <= 5; i++) {
   double score;
   cout << "The user's score from judge " << i << " : "; cin >> score;
   getJudgeData(score, i);
   switch (i) { 
      case 1:
         score_1 = score;
         break;
      case 2:
         score_2 = score;
         break;
      case 3:
         score_3 = score;
         break;
      case 4:
         score_4 = score;
         break;
      case 5:
         score_5 = score;
         break;
      default:
         break;
   };
   };
   calcScore(score_1, score_2, score_3, score_4, score_5, average_score);
   return 0;
};
void getJudgeData(double& score,int& i) {
   while (score < 0 || score > 10) {
         cout << "Input Validation: Do not accept judge scores lower than 0 or higher than 10" << endl;
         cout << "Please enter a valid score " << i << " : "; cin >> score;
      };
   };
void calcScore(double a, double b, double c, double d, double e, double& average) {
   double min = findLowest(a, b, c, d, e);
   double max = findHighest(a, b, c, d, e);
   average = (a + b + c + d + e - min - max) / 3;
};
double findLowest(double a, double b, double c, double d, double e) {
   double min = a;
   if (min > b) min = b;
   if (min > c) min = c;
   if (min > d) min = d;
   if (min > e) min = e;
   return min;
};
double findHighest(double a, double b, double c, double d, double e) {
   double max = a;
   if (max < b) max = b;
   if (max < c) max = c;
   if (max < d) max = d;
   if (max < e) max = e;
   return max;
};

