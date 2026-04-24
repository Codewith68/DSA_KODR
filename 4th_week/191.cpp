int searchInfinite(vector<int>& arr, int target) {
    int low = 0, high = 1;

    // Phase 1: Expand range
    while (arr[high] < target) {
        low = high;
        high = high * 2;
    }

    // Phase 2: Binary search
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }

    return -1;
}