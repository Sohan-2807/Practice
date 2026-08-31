// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    int flag = 1;

    for(int i = n; i >= 1; i--) {
        if(!isBadVersion(i)) {
            flag = i + 1;
            break;
        }
    }

    return flag;
}