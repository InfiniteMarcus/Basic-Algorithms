function reverseArray (arrayData) {
    let start = 0, end = arrayData.length - 1;
    let temp;

    while (start < end) {
        temp = arrayData[start];
        arrayData[start] = arrayData[end];
        arrayData[end] = temp;
        start++;
        end--;
    }

    return arrayData;
}

//Some tests
console.log(reverseArray([1, 2, 3, 4, 5]));
console.log(reverseArray([-1, -2, -3, -4, -5]));
console.log(reverseArray([-10, -5, 0, 5, 10]));
console.log(reverseArray(['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h']));
console.log(reverseArray([true, true, true, false, false, false]));