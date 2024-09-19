int count_words(char str[]){
    int count = 0;
    int i = 0;
    if(str[i] == ' '){
        i++;
    }
    while(str[i] != '\0'){
        if(str[i] == ' '){
            count++;
        }
        i++;
    }
    return count + 1;
}