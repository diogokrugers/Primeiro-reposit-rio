#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isValid(char * s){
    int tamanho = strlen(s);
    char stack[tamanho];
    int topo = -1;

    for (int i = 0; i < tamanho; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack[++topo] = s[i];
        } else {
            if (topo == -1) {
                return false;
            }

            if ((s[i] == ')' && stack[topo] == '(') || (s[i] == '}' && stack[topo] == '{') || (s[i] == ']' && stack[topo] == '[')) {
                topo--;
            } else {
                return false;
              }
          }
    }
    return true;
}

int main() {
    //testes
    char *teste1 = "()";
    char *teste2 = "()[]{}";
    char *teste3 = "(]";
    
    printf("teste 1: %s\n", isValid(teste1) ? "true" : "false");
    printf("teste 2: %s\n", isValid(teste2) ? "true" : "false");
    printf("teste 3: %s\n", isValid(teste3) ? "true" : "false");
    
    return 0;
}