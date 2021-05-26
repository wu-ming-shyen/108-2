const meal=[``,`套餐1`,`套餐2`,`套餐3`,`套餐4`,`套餐5`];
const Num=[1,50,100,150,200,250];

document.write("<table>");
document.write("<caption id='StoreName'>台灣牛點餐價格表</caption>");
document.write("<caption id='Discount'>折扣內容:數量為3的倍數折50</caption>");

for(let Row=0;Row<8;Row++)
{
    document.write("<tr>");
    for(let Col=0;Col<6;Col++)
    {
        document.write("<td>");
        Row==0 && Col>=1 ? document.write(`<p class="Purple">${meal[Col]}<br>${Num[Col]}元</p>`) : console.log();
        Row>=1 && Col==0 ? document.write(`<p class="Purple">${Num[Col]*Row}</p>`) : console.log();
        Row>=1 && Row%3!=0 && Col!=0 ? document.write(`<p class="Green">${Num[Col]*Row}</p>`) : console.log();
        Row>=1 && Row%3==0 && Col!=0 ? document.write(`<p class="Red">原價:${Num[Col]*Row}<br>折扣價:${Num[Col]*Row-50}</p>`) : console.log();
        document.write("</td>");
    }
    document.write("</tr>");
}
document.write("</table>");