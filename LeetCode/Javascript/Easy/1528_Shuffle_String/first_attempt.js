/**
 * @param {string} s
 * @param {number[]} indices
 * @return {string}
 */
 var restoreString = function(s, indices) {
    let sorted = true;
    // check if already sorted
    for (let i = 0; i < indices.length - 1; i++) {
        if (indices[i] > indices[i+1]) {
            sorted = false;
            break;
        }
    }
    if(sorted) return s;
    
    let temp = s.split("");
    
    for(let i = 0; i < indices.length; i++) {
        temp[indices[i]] = s.charAt(i);
    }
    return temp.join("");
};