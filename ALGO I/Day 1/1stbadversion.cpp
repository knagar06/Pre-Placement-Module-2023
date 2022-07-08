int firstBadVersion(int n) {
        int high = n;
        int mid = n/2;
        int low = 1;
        while ( low <= high) {
            if ( isBadVersion(mid) ) {
                if ( isBadVersion(mid - 1)) {
                    high = mid - 2;
                } else {
                    return mid;
                }
            } else {
                low = mid + 1;
            }
            mid = low + (high - low) / 2;
        }
        return mid;
    }