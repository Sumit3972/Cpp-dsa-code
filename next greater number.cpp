#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nge(vector<int> &arr) {
    int n = arr.size();
    vector<int> output(n, -1);
    stack<int> st;
    st.push(0);
    for(int i = 1; i < n; i++) {
        while(!st.empty() && arr[i] > arr[st.top()]) {
            output[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()) {
        output[st.top()] = -1;
        st.pop();
    }
    return output;
}

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++) {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    vector<int> result = nge(v);
    for(int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}
    