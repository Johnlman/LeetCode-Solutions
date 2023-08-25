int lengthOfLastWord(char * s){
    int i= strlen(s)-1;
    int leadingZeroes = 0;
    while(s[i]==' ') {
        i--;
        leadingZeroes++;
    }
    while (i>=0){
        if (s[i]==' '){
            return strlen(s) - i - 1 - leadingZeroes;
        }
        i--;
    }
    return strlen(s)- leadingZeroes;
}