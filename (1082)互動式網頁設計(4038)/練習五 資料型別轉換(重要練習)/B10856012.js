var String_A=0;
var String_B=0;
var A=0;
var B=0;

String_A=prompt("請輸入數值A:\n");
String_B=prompt("請輸入數值B:\n");

document.write(`<h1>數值A(${String_A})，資料型態為:${typeof(String_A)}<br>`);
document.write(`<h1>數值B(${String_B})，資料型態為:${typeof(String_B)}<br>`);
document.write("<br><br><br>");

A=parseInt(String_A);
B=parseInt(String_B);

document.write(`${A}+${B}=` + (A+B) + "<br>");
document.write(`${A}-${B}=` + (A-B) + "<br>");
document.write(`${A}*${B}=` + (A*B) + "<br>");
document.write(`${A}/${B}=` + (A/B) + "<br>");