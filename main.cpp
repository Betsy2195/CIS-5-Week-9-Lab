#include <iostream>

// Lab 9 — Betsy Caudel
// CIS 5 Week 09 · Call and return
// Homework continues this program. Do not start a second file.

using std::cout;
using std::endl;

double average (const int a[], int n);
void printSummary(double avg);

int main() {
  const int N = 4;
  int scores[N] = {80, 90, 70, 100};
  double avg = average(scores, N);
  printSummary(avg);
  return 0;
}

double average (const int a[], int n)
{
  //Returns, meaning it doesn't print if n == 0.
   if (n == 0) {
    return 0;
  }
  //Calculates the average.
  int sum = 0;
  for (int i = 0; i < n; ++i){
    sum = sum + a[i];
  }
  // Returns the average.
  return sum * 1.0 / n;
}

void printSummary(double avg)
{
  // Prints the average.
  cout << "Average: " << avg << endl;
}