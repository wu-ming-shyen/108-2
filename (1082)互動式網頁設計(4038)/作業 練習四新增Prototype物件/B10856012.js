function Square()
{
    this.Width = document.getElementById(`Width`).value;
    this.Height = document.getElementById(`Height`).value;
    this.BorderColor = document.getElementById(`BorderColor`).value;
    this.BackgroundColor = document.getElementById(`BackgroundColor`).value;
    this.Show=Show;
}

function Show()
{
    document.write(`<h1>Width:${this.Width}</h1><br>`);
    document.write(`<h1>Height:${this.Height}</h1><br>`);
    document.write(`<h1>BorderColor:${this.BorderColor}</h1><br>`);
    document.write(`<h1>BackgroundColor:${this.BackgroundColor}</h1><br>`);
}

function Area()
{
    var result=this.Width*this.Height;
    document.write(`<h1>Area:${result}</h1><br>`);
}

function Active()
{
    var action=new Square();
    Square.prototype.Area=Area;
    action.Show();
    action.Area();
}