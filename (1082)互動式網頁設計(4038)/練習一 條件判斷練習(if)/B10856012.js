var String_Score=0;
var Score=0;

String_Score=prompt(`<h1>請輸入您的成績:`);
Score=parseInt(String_Score);
document.write("<h1>");

if(90<=Score&&Score<=100)
{
    document.write(`${Score}分，及格，超強，好好保持!`);
}
else if(80<=Score&&Score<90)
{
    document.write(`${Score}分，及格，接近完美!`);
}
else if(70<=Score&&Score<80)
{
    document.write(`${Score}分，及格，程度達到標準!`);
}
else if(60<=Score&&Score<70)
{
    document.write(`${Score}分，及格，但有進步空間!`);
}
else
{
    document.write(`${Score}分，不及格，請再加強!`);
}