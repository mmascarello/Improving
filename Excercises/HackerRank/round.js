/* round
//There are meny ways of rounding...
Math.floor(5.5) //Answer 5, it alwas rounds down.
Math.round(5.5) //Answer 6, it simpily rounds to the closest whole number.
Math.ceil(5.5) //Answer 6, it alwas rounds up.
*/

function findMedian(arr){

    function intSort(a , b){ return a-b;}
    let sorted = arr.sort(intSort);
    let median = Math.floor((sorted.length)/2);
    return sorted[median];
}