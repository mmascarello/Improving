function timeConversion(s) {
    /*  Different types of split
        "1、2、3".split("、") == ["1", "2", "3"]
        "1、2、3".split(/(、)/g) == ["1", "、", "2", "、", "3"]
        "1、2、3".split(/(?=、)/g) == ["1", "、2", "、3"]
        "1、2、3".split(/(?!、)/g) == ["1、", "2、", "3"]
        "1、2、3".split(/(.*?、)/g) == ["", "1、", "", "2、", "3"]
    */
   
    let amPm = s[8]+s[9];
    
    let timeArray;
    
    if(amPm == 'AM') {
        let time = s.replace('AM', '');
        timeArray = time.split(':');
        
        let hour = Number(timeArray[0]);
        
        if(hour == 12) timeArray[0] = '00';
        else timeArray[0] = '0' + String(hour);
    }else {
        let time = s.replace('PM', '');
        timeArray = time.split(':');
        
        let hour = Number(timeArray[0]);
        
        if(hour >= 1 && hour < 12) timeArray[0] = String(hour + 12);
        else timeArray[0] = String(hour);
    }
    
    return timeArray.join(':');

}