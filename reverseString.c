void reverseString(char* s, int sSize) {
    char c;
    int i;
    for(i=0; i<sSize/2; i++){
        c = s[i];
        s[i] = s[sSize-1-i];
        s[sSize-1-i] = c;
    }
}