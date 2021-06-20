//浏览器兼容 获取样式
function getStyle(node, cssStyle){
    return node.currentStyle ? node.currentStyle[cssStyle] : getComputedStyle(node)[cssStyle];
}

// 自定义byClassName方法
function elementsByClassName(node, classStr){
    //获取node节点下所有的子节点
    var nodes=node.getElementsByTagName("*");   //只用到了getElementsByTagName，没有兼容性问题
    var arr=[]; //存放符合条件的节点
    for(var i=0; i<nodes.length; i++){
        if(nodes[i].className===classStr){
            arr.push(nodes[i]);
        }
    }
    return arr;
}

/*
    颜色随机
    rgba(255,255,255,0);
    0~255的随机数
    parseInt(Math.random()*256)
*/
function randomColor(){
    var str="rgba("+parseInt(Math.random()*256)+","+parseInt(Math.random()*256)+","+parseInt(Math.random()*256)+","+"1)";
    return str;
}

// 显示当前时间
function showTime(){
    var d=new Date();
    var year=d.getFullYear();
    var month=d.getMonth()+1;   //0~11
    var date=d.getDate();
    var week=d.getDay();    //0~6 0是周日
    week=numOfChinese(week);
    var hour=doubleNum(d.getHours());
    var min=doubleNum(d.getMinutes());
    var sec=doubleNum(d.getSeconds());

    var str=year+"年"+month+"月"+date+"日 星期"+week+" "+hour+":"+min+":"+sec;
    return str;
}
//数字转成中文
function numOfChinese(num){
    var arr=["日", "一", "二", "三", "四", "五", "六"];
    return arr[num];
}
//时分秒两位显示
function doubleNum(n){
    if(n<10){
        return "0"+n;
    }else{
        return n;
    }
}

/*
    获取两个日期之间相差的天数
    规定传入日期格式
    "2000-01-01"
    "2000/01/01"
*/
function countOfDate(d1, d2){
    var dd1=new Date(d1);
    var dd2=new Date(d2);

    var time1=dd1.getTime();
    var time2=dd2.getTime();
    var time=Math.abs(time1-time2);
    return parseInt(time/1000/3600/24);
}

/*
输入n，输出n天后的时间
*/
function afterOfDate(n){
    var d=new Date();
    var day=d.getDate();
    d.setDate(day+n);

    return d;
}

// 事件对象获取
function showEvent(ev){
    // 通过形参拿事件对象的方法在IE8以下不兼容，IE8以下通过window.event
    var e=ev || window.event;
    alert(e);   //如果第一个参数有值，说明参数不为空，最终就执行第一个
}