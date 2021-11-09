function miniMaxSum(arr) {
    
    /*para comprar otras cosas, como texto 
     function compare(a, b) {
     if (a es menor que b según criterio de ordenamiento) {
         return -1;
     }
     if (a es mayor que b según criterio de ordenamiento) {
     return 1;
     }
     // a debe ser igual b
     return 0;
     }*/
    function compare ( a, b ){ return a - b; } 
    arr.sort(compare);
    
    let min = 0;
    let max = 0 ;
    
    for (let i = 0; i<4 ; i ++){
        min += arr[i];
        max += arr[i+1];
    }
    
    console.log (min + " " + max);
 
 }