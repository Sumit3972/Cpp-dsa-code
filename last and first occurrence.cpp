
int firstoccurence(int arr[], int n, int k)
{
    int start = 0, end = n - 1, mid, res = -1;
    while (start <= end)
    {
        mid = start + ((end - start) >> 1);
        if (arr[mid] > k)
        {
            end = mid-1;
        }
        else if (arr[mid] == k)
        {
            res = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return res;
}

int lastoccurence(int arr[], int n, int k)
{
    int start = 0, end = n - 1, mid, res = -1;
    while (start <= end)
    {
        mid = start + ((end - start) >> 1);
        if (arr[mid] > k)
        {
            end = mid-1;
        }
        else if (arr[mid] == k)
        {
            res = mid;
            start = mid + 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return res;
}
vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int>v(2);
    v[0]=firstoccurence(arr, n, x);
    v[1]=lastoccurence(arr,n,x);
    
    return v;
}