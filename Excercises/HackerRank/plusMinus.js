function plusMinus(arr) {
   let positive = 0;
   let negative = 0;
   let zero = 0;
   let size = arr.length
   
   arr.forEach(function(item){
      if(item < 0) negative++;
      else if (item > 0 ) positive++;
      else zero++; 
   });
   
   console.log((positive/size).toPrecision());
   console.log((negative/size).toPrecision());
   console.log((zero/size).toPrecision());
}