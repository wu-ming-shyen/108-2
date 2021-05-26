var String_Score=0;
var Score=0;

String_Score=prompt(`請輸入您的成績:`);
Score=parseInt(String_Score);
document.write("<h1>");

switch(Score)
{
    case 90<=Score&&Score<=100:
        document.write(`${Score}分，及格，超強，好好保持!`);
        break;
    case 80<=Score&&Score<90:
        document.write(`${Score}分，及格，接近完美!`);
        break;
    case 70<=Score&&Score<80:
        document.write(`${Score}分，及格，程度達到標準!`);
        break;
    case 60<=Score&&Score<70:
        document.write(`${Score}分，及格，但有進步空間!`);
        break;
    default:
        document.write(`${Score}分，不及格，請再加強!`);
        break;
}