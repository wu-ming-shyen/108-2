function ExchangeRateValue(Rate,TableList,Row,Col)
{
    if(Row >= 1 && Col == 2)
    {
        return TableList[Row][1]*Rate;
    }
}

function BiggerThen100(price)
{
    if(Row >= 1 && Col == 2)
    {
        if(price >= 100)
        {
            return `class="red"`;
        }
        else
        {
            return `class="green"`;
        }
    }
}

var Rate = parseInt(prompt('Please input Rate'));
document.write(`<table>`);
document.write(`<caption><h1>Exchange Rate Table</h1></caption>`);
for(var Row = 0;Row <= 3;Row++)
{
    document.write(`<tr>`);
    for(var Col = 0;Col <= 2;Col++)
    {
        document.write(`<td>`);
        var price = ExchangeRateValue(Rate,TableList,Row,Col);
        var TableList = [[`物品`,`原價`,`換算匯率`],[`Apple`,10,`${price}`],[`Orange`,20,`${price}`],[`Strawberry`,150,`${price}`]];
        var color = BiggerThen100(price);
        document.write(`<h2 ${color}>${TableList[Row][Col]}</h2>`);
        document.write(`</td>`);
    }
    document.write(`</tr>`);
}
document.write(`</table>`);