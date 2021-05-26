var Multiplicand=0,Multiplier=0,i=0;

document.write("<table>");
document.write("<caption>九九乘法表</caption>");

    for(Multiplicand=0;Multiplicand<=9;Multiplicand++)
    {
        document.write("<tr>");
        for(Multiplier=0;Multiplier<=9;Multiplier++)
        {
            //if((Multiplicand=0) && (Multiplier=0))
            //{
            //    document.write("<th></th>");
            //}
            //else
            //{
                document.write("<td>");
            //    if(Multiplicand=0)
            //    {
            //        document.write(`${Multiplier}`);
            //    }
            //    else if (Multiplier=0)
            //    {
            //        document.write(`${Multiplier}`);
            //    }
            //    else
            //    {
                    document.write(`${Multiplicand}*${Multiplier}=`+(Multiplicand*Multiplier));
            //    }
                document.write("</td>");
            //}
        }
        document.write("</tr>");
    }

document.write("</table>");