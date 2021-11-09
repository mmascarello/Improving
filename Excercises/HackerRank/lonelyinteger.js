function lonelyinteger(a) {
    let sorted = a.sort(function (a,b){
        return a - b;
    });
    
    let size = sorted.length;
    
    for (let i = 0; i < size ; i++){
        if ( i+1 == size ){
            return sorted[i]
        }else if (sorted[i] == sorted[i+1]){
            i++;
        }else{
            return sorted[i];
        }
    }

}