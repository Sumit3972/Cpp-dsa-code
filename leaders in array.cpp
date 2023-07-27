#include <iostream>
#include <vector>
using namespace std;

vector<int> find_leaders(vector<int>& A) {
    int n = A.size();
    vector<int> leaders;
    int max_so_far = A[n-1];
    leaders.push_back(max_so_far);
    for(int i = n-2; i >= 0; i--) {
        if(A[i] >= max_so_far) {
            leaders.push_back(A[i]);
            max_so_far = A[i];
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    vector<int> A = {16, 17, 4, 3, 5, 2};
    vector<int> leaders = find_leaders(A);
    cout << "Leaders in the array are: ";
    for(int leader : leaders) {
        cout << leader << " ";
    }
    return 0;
}
