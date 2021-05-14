//纯数字验证码, n位验证码，每一个数字的范围0~9
function numTestCode(n){
    var arr=[]; //存储生成的数字
    for(var i=0; i<n; i++){
        var num=parseInt(Math.random()*10);
        arr.push(num);
    }
    return arr.join("");
}
/*
    数字和字符组成的验证码
        0~9
        a-z 97~122
        A-Z 65~90
        随机：0~122
    方法：
        1.生成一个数组，装有单个字符，长度62 随机0~61的下标
        2.随机ASCII码值
*/
function testCode(n){
    var arr=[];
    for(var i=0; i<n; i++){
        var num=parseInt(Math.random()*123);
        //数字
        if(num>=0 && num<=9){
            arr.push(num);
        }else if(num>=97 && num<=122 || num>=65 && num<=90){
            //字母
            arr.push(String.fromCharCode(num));
        }else{
            //剔除无用循环
            i--;
        }
    }
    return arr.join("");
}
