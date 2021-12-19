function binarySearch(arrayData, key){

    let mid;
    let top = arrayData.length-1, bottom = 0;

    while(bottom <= top) {
        mid = Math.floor((top + bottom) / 2);
        
        if(arrayData[mid] === key) {
            return mid;
        }

        key < arrayData[mid] ? top = mid-1 : bottom = mid+1;
    }

    return null;
}

// Some tests
const arrayData = [1, 2, 3, 4, 5, 6];

// Success
console.log("KEY FOUND:");
console.log(binarySearch(arrayData, 1));
console.log(binarySearch(arrayData, 3));
console.log(binarySearch(arrayData, 5));
console.log(binarySearch(arrayData, 6));

// Fail
console.log("KEY NOT FOUND:");
console.log(binarySearch(arrayData, -1));
console.log(binarySearch(arrayData, 0));
console.log(binarySearch(arrayData, 7));
console.log(binarySearch(arrayData, 1000));