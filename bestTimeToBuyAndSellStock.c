int maxProfit(int* prices, int pricesSize) {
    int i, j;
    int lucro = 0;
    for(i=0; i < pricesSize; i++){
        for(j= i+1; j < pricesSize; j++){
            if(prices[j] > prices[i] && prices[j] - prices[i] > lucro){
                lucro = prices[j] - prices[i];;
            }            
        }
    }
    return lucro;
}
/* Solução com brute force, rodou para os exemplos principais
e foi até o testcase 200/212 até dar Time Limit Exceeded.
Não tinha visto que esse problema é solucionado através de programação
dinâmica, porém considerando que isso é um conteúdo para AED2, acho que 
fui bem, deu pra exercitar bem.
*/