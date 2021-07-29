function printEven(x) {
    if (x <= 0)
        return;
    printEven(x - 1);
    if (x % 2 == 0)
        console.log(x);
}
printEven(11);