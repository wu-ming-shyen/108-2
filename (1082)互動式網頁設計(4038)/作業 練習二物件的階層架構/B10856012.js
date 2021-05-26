{
    var Name = prompt("Please input your name.");
    var Phone = prompt("Please input your phone.");
    var ID_Number = prompt("Please input your ID_Number.");
    var Email = prompt("Please input your Email.");

    function Judgment(Name,Phone,ID_Number,Email)
    {
        this.Name = Name;
        this.Phone = Phone;
        this.ID_Number = ID_Number;
        this.Email = Email;
        this.Sex = Sex;
        this.print = Print_Judgment;
    }

    function Sex()
    {
        if(ID_Number.substr(1,1)==1)
        {
            //document.write(`<h1>性別:男性</h1><br>`);
            return "男性";
        }
        else if(ID_Number.substr(1,1)==2)
        {
            //document.write(`<h1>性別:女性</h1><br>`);
            return "女性";
        }
        else
        {
            return "Error";
        }
    }

    function Print_Judgment()
    {
        document.write("<h1>使用者資料判斷</h1><br>");
        document.write("<hr>");
        document.write(`<h1>Name:${this.Name}</h1><br>`);
        document.write(`<h1>Phone:${this.Phone}</h1><br>`);
        document.write(`<h1>ID:${this.ID_Number}</h1><br>`);
        document.write(`<h1>Email:${this.Email}</h1><br>`);
        document.write("<hr>");
        document.write(`<h1>性別:${Sex(ID_Number)}</h1><br>`);
    }

    var Object_Judgment = new Judgment(Name,Phone,ID_Number,Email);
    
    Object_Judgment.print();
    
}

    