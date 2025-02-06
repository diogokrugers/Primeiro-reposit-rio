int timeRequiredToBuy(int* tickets, int ticketsSize, int k) {
    int tempoquelevou = 0;
    int i = 0;

    while (tickets[k] != 0) {

        if (tickets[i] != 0) {
            tickets[i]--;
            tempoquelevou++;
        } 

        i++;

        if (i == ticketsSize){
            i = 0;
        }
    }
    return tempoquelevou;
}