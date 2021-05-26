var Name = prompt(`Please input your name.`);
var ID_Number = prompt(`Please input your ID_Number.`);
var First = ID_Number.substr(0,1);
var Second = ID_Number.substr(1,1);
switch(First)
{
    case 'A':
        document.write(`You born in 台北市`);
        break;
    case 'B':
        document.write(`You born in 台中市`);
        break;
    case 'C':
        document.write(`You born in 基隆市`);
        break;
    case 'D':
        document.write(`You born in 台南市`);
        break;
    case 'E':
        document.write(`You born in 高雄市`);
        break;
    case 'F':
        document.write(`You born in 台北縣`);
        break;
    case 'G':
        document.write(`You born in 宜蘭縣`);
        break;
    case 'H':
        document.write(`You born in 桃園縣`);
        break;
    case 'J':
        document.write(`You born in 新竹縣`);
        break;
    case 'K':
        document.write(`You born in 苗栗縣`);
        break;
    case 'L':
        document.write(`You born in 台中縣`);
        break;
    case 'O':
        document.write(`You born in 新竹市`);
        break;
    case 'M':
        document.write(`You born in 南投縣`);
        break;
    case 'N':
        document.write(`You born in 彰化縣`);
        break;
    case 'P':
        document.write(`You born in 雲林縣`);
        break;
    case 'Q':
        document.write(`You born in 嘉義縣`);
        break;
    case 'R':
        document.write(`You born in 台南縣`);
        break;
    case 'S':
        document.write(`You born in 高雄縣`);
        break;
    case 'T':
        document.write(`You born in 屏東縣`);
        break;
    case 'U':
        document.write(`You born in 花蓮縣`);
        break;
    case 'V':
        document.write(`You born in 台東縣`);
        break;
    case 'X':
        document.write(`You born in 澎湖縣`);
        break;
    case 'Y':
        document.write(`You born in 陽明山`);
        break;
    case 'I':
        document.write(`You born in 嘉義市`);
        break;
}

if(Second == '1')
{
    document.write(`You is a male`);
}
else
{
    document.write(`You is a female`);
}