{
    var Name = prompt(`Input your name.`);
    var Age = prompt(`Input your age.`);
    var Phone = prompt(`Input your phone.`);
    var Email = prompt(`Input your email.`);
    
    var Object = new Object();

    Object.name = Name;
    Object.age = Age;
    Object.phone = Phone;
    Object.email = Email;

    document.write(`<h1>Name:${Object.name}<br></h1>`);
    document.write(`<h1>Age:${Object.age}<br></h1>`);
    document.write(`<h1>Phone:${Object.phone}<br></h1>`);
    document.write(`<h1>Email:${Object.email}<br></h1>`);
}