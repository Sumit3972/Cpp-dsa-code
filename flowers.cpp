#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canMakeBouquets(const vector<int>& bloomDay, int K, int M, int days) {
    int bouquets = 0;
    int adjacentFlowers = 0;
    
    for (int i = 0; i < bloomDay.size(); i++) {
        if (bloomDay[i] <= days) {
            adjacentFlowers++;
            if (adjacentFlowers == K) {
                bouquets++;
                adjacentFlowers = 0;
            }
        } else {
            adjacentFlowers = 0;
        }
    }
    
    return bouquets >= M;
}

int minDaysToMakeBouquets(const vector<int>& bloomDay, int K, int M) {
    int left = 1; // minimum possible number of days
    int right = *max_element(bloomDay.begin(), bloomDay.end()); // maximum possible number of days
    int result = -1; // if unable to make M bouquets
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (canMakeBouquets(bloomDay, K, M, mid)) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    
    return result;
}

int main() {
    int M, K;
    cin >> M >> K;
    
    int N;
    cin >> N;
    
    vector<int> bloomDay(N);
    for (int i = 0; i < N; i++) {
        cin >> bloomDay[i];
    }
    
    int minDays = minDaysToMakeBouquets(bloomDay, K, M);
    cout << minDays << endl;
    
    return 0;
}
