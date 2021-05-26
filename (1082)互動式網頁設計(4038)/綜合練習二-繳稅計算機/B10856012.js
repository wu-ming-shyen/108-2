var Money_String="";
var Money_Number=0;

Money_String=prompt("請輸入所得金額");
Money_Number=parseInt(Money_String);

if(Money_Number<=500000)
{
    document.write(`您所需納稅的總額=`,Money_Number*0.05);
}
else if (Money_Number<=1130000)
{
    document.write(`您所需納稅的總額=`,25000+(Money_Number-500000)*0.12);
}
else if (Money_Number<=2260000)
{
    document.write(`您所需納稅的總額=`,100600+(Money_Number-1130000)*0.2);
}
else if (Money_Number<=4230000)
{
    document.write(`您所需納稅的總額=`,326600+(Money_Number-2260000)*0.3);
}
else
{
    document.write(`您所需那歲的總額=`,917600+(Money_Number-4230000)*0.4);
}