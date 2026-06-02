#include <iostream>
using namespace std;
int Sum(int N[10]);
float avg(int N[10]);
int large(int N[10]);
int Small(int N[10]);
int main()
{
    int N[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the " << i + 1 << " Number :";
        cin >> N[i];
    }
    cout << "<-----Numbers----->" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the " << i + 1 << " Number : " << N[i] << endl;
    }
    
    cout << "<---Number Analyzer--->" << endl;
    cout << "Sum : " << Sum(N) << endl;
    cout << "Average : " << avg(N) << endl;
    cout << "Largest : " << large(N) << endl;
    cout << "Smallest : " << Small(N) << endl;

    return 0;
}
int Sum(int N[10])
{
    int sum=0;
    for (int i = 0; i < 10; i++)
    {
        sum = sum + N[i];
    }
    return sum;
}
float avg(int N[10])
{
    float avg = Sum(N) / 10.0;
    return avg;
}
int large(int N[10])
{
    int max = N[0];
    for (int i = 0; i < 10; i++)
    {
        if (max < N[i])
        {
            max = N[i];
        }
    }
    return max;
}
int Small(int N[10])
{
    int min=N[0];
    for (int i = 0; i < 10; i++)
    {
        if (min > N[i])
        {
            min = N[i];
        }
    }
    return min;
}
