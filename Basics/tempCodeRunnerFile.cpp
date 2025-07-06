// using PARAMETERISED RECURSION TO PRINT SUM OF N NUMBERS
// this function will print the sum of n numbers from 1 to n
int sum_n_num(int n, int i) {
    if (i > n) {
        return 0;
    }
    int result = i + sum_n_num(n, i + 1);
    cout << result << " ";
    return result;
}
