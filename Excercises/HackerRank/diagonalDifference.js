function diagonalDifference(arr) {
    let size = arr.length;
    
    let lrd =0;
    let rld =0;
    
    for(let i=0; i<size ; i++ ) {
        lrd += arr[i][i];
        rld += arr[i][size-i-1];
    }
    console.log(lrd - rld)
    return Math.abs(lrd - rld);

}
