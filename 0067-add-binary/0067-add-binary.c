char * addBinary(char * a, char * b){
    
    int i = strlen(a)-1;
    int j = strlen(b)-1;
    int carry = 0;
    int index = i>=j?i+3:j+3;
    char* ret = malloc(sizeof(char)*(index));
    index-=2;
    ret[index+1] = '\0';
    int max = index;
    while(i>=0||j>=0) {
        int result;
        if (i>=0&&j>=0) {
            result = (a[i]-'0')+(b[j]-'0') + carry;
        } else if (i<0&&j>=0) {
            result = (b[j]-'0') + carry;
        } else if (i>=0&&j<0) {
            result = (a[i]-'0') + carry;
        }
        printf("result %d\n",result);
        carry = (result >= 2)?1:0;
        ret[index] = (result==1 || result == 3)?'1':'0';
        printf("%c\n",ret[index]);
        index--;
        i--;
        j--;
    }
    printf("carry %d\n",carry);
    if (carry == 1) {
        ret[0] = '1';
    } else {
        for (int i = 0;i<max+1;i++){
            ret[i]=ret[i+1];
        }
        ret[max+1] = '\0';
    }
    return ret;
}