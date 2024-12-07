/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    
double fahrenheit = (celsius * 1.80) + 32.00;
double kelvin = (celsius + 273.15);

double* ans = malloc(sizeof(double) * 2);

*returnSize = 2;

ans[0] = kelvin;
ans[1] = fahrenheit;

return ans;

}