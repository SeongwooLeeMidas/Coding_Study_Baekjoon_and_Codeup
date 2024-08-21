void printNumbers(int n)
{
    if (n == 0)
    {
        return; // Àç±Í Á¾·á
    }
    printNumbers(n - 1);
    printf("%d\n", n);
}

int main(void)
{
    int n;
    scanf("%d", &n);

    printNumbers(n);
    return 0;
}