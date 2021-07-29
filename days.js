function findDays(month) {

    if (month > 12 || month <= 0)
        console.log('Please enter a valid month');
    else {
        let daysInAMonth = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
        console.log(daysInAMonth[month - 1]);
    }

}
findDays(-1);
findDays(14);
findDays(2);