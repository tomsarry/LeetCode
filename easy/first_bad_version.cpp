using namespace std;

// TC : O(logn) - 100%
// SC : O(1)
int binarySearch(int start, int end)
{
    int mid = start + (end - start) / 2;
    if (end - start <= 1)
    {
        if (isBadVersion(mid))
        {
            return mid;
        }
        return mid + 1;
    }
    if (isBadVersion(mid))
    {
        return binarySearch(start, mid);
    }
    else
    {
        return binarySearch(mid, end);
    }
}

// idea : binarySearch to find the first bad version -> logN calls to the API
int firstBadVersion(int n)
{
    return binarySearch(1, n);
}