// Edgar Jarquin

#include <iostream>
using namespace std;

void showDrive()
void showYards(int arr[], int size)

int main() {
    cout << "hi" << endl;

    cout << "Detroit Lions at Baltimore Ravens" << endl
    << "Sept 29, 2025 Game Statistics" << endl;
    const int size = 10;
    int yards[10] = {67, 98, 60, 94, 35, 25, 45, 50, 30, 40};
    cout << "First drive yards: " << yards[0] << endl;
    cout << "Epic second drive: " << yards[1] << " yards" << endl;

    for (int 1 = 0; i < size) {
        cout << "Drive " << i + 1 << ": " << yards[i] << " yards" << endl;
    }

    showDrive();
    showDrive();
    //display memory of array
    cout << "Array memory: ~" << sizeof(yards) << " bytes" << endl;
    cout << "All Yards: " << endl;
    for (int val : yards) {
        cout << val << " ";
    }

    double total = 0;
    for (int val : yards) {
        total += val;
    }
    cout << "Total yards: " << total << endl;
    cout << "Average yards: " << total / size << endl;

    int maxYards = yards[0];
    for (int i = 1; i < size; i++) {
        if (yards[i] > maxYards)
            maxYards = yards[i];
    }
    cout << "Longest drive: " << maxYards << " yards" << endl;

    int plays[size] = (11, 18, 10, 12, 5, 4, 6, 7, 5, 6);
    for (int i = 0; i < size; i++) {
        cout << "Drive " << i + 1 << ": " << plays[i] << " plays, "
            << yards[1] << " yds" << endl;

    }



    return 0;
}

void showDrive()
{
    static int driveNum = 1;
        cout << "Showing drive " << driveNum endl;
    driveNum++;

}

void showYards(int arr[], int size) 
{
    for (nt i = 0; 1)
}
