function isPalindrome(text){

    const formatedText = text.toString().toLowerCase().normalize('NFKD').replace(/[^\w]/g, '');

    if(!formatedText || formatedText.length < 1)
        return false;

    for (let i = 0; i < formatedText.length/2; i++)
        if(formatedText[i] !== formatedText[formatedText.length - i - 1])
            return false;

    return true;
}

// Some tests

// Palindromes
console.log(isPalindrome('anana'));
console.log(isPalindrome('BANANA B'));
console.log(isPalindrome(123454321));
console.log(isPalindrome('123454321'));
console.log(isPalindrome('Roma me tem amor'));
console.log(isPalindrome('Romã me tem amor'));
console.log(isPalindrome('red rum, sir, is murder'));

// Not palindromes
console.log(isPalindrome('banana'));
console.log(isPalindrome('love'));
console.log(isPalindrome(123454327));
console.log(isPalindrome('CAçA'));
console.log(isPalindrome('casa'));
console.log(isPalindrome('A casa do rei no topo da colina'));
console.log(isPalindrome(true));