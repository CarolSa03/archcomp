unsigned int size_string_wrong (char s[]) {
      return sizeof(s);
}

unsigned int size_string_correct (char s[]) { 
    unsigned int cont=0;
    while(s[cont]!=0)
         cont++;
    return cont;
}

//Na primeira função, sizeof(s) retorna o tamanho do ponteiro s, que é 4 bytes em um sistema de 32 bits e 8 bytes em um sistema de 64 bits.
//Na segunda função, o tamanho da string é calculado manualmente, percorrendo a string até encontrar o caractere nulo.
