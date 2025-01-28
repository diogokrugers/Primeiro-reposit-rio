int firstUniqChar(char* s) {
    int count[256] = {0};

    for (int i = 0; i < strlen(s); i++) {
        count[(unsigned char)s[i]]++;
    }

    for (int i = 0; i < strlen(s); i++) {
        if (count[(unsigned char)s[i]] == 1) {
            return i;
        }
    }

    return -1;
}