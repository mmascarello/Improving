function countingSort(arr) {
    let size = arr.length;
    let dicctionary = [];
    
    for (let i = 0; i < 100 ; i++){
        dicctionary.push(0);
    }
    
    for (let i = 0; i < size; i++ ){
            dicctionary[arr[i]]++;
    }
    
    return dicctionary;
}