function Style()
{
    var text=[`Name`,`Phone`,`Email`,`ID_Number`];
    for(var i=0;i<text.length;i++)
    {
        var Text = document.getElementById(text[i]);
        Text.style.borderColor = `black`;
        Text.style.borderStyle = `dotted`;
        Text.style.borderWidth = `0 0 1px 0`;
        Text.style.height = `20px`;
    }
}

function Show()
{
    var Name = document.getElementById(`Name`).value;
    var Phone = document.getElementById(`Phone`).value;
    var Email = document.getElementById(`Email`).value;
    var ID_Number = document.getElementById(`ID_Number`).value;
    var ID=ID_Number
    document.write(`<h1>姓名:${Name}</h1>`);
    document.write(`<h1>電話:${Phone}</h1>`);
    document.write(`<h1>電子信箱:${Email}</h1>`);
    document.write(`<h1>身分證字號:${ID_Number}</h1>`);
    document.write(`<h1>性別:${Sex(ID)}</h1>`);

}

function Sex(ID)
{
    
    if(ID.substr(1,1)==1)
    {
        //document.write(`<h1>性別:男性</h1><br>`);
        return "男性";
    }
    else if(ID.substr(1,1)==2)
    {
        //document.write(`<h1>性別:女性</h1><br>`);
        return "女性";
    }
    else
    {
        //document.write("Erroe");
        return "Error";
    }

}