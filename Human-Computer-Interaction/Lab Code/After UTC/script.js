let form = document.getElementById('register');

form.addEventListener('submit', function(event) {
    event.preventDefault();

    let name = document.getElementById("inputUsername");
    let password = document.getElementById("inputPassword");
    let confirmPassword = document.getElementById("inputConfirm");
    let email = document.getElementById("inputEmail");
    let phoneNumber = document.getElementById("inputPhone");

    if (name.value == "" || password.value == "" || confirmPassword.value == "" || email.value == "" || phoneNumber.value == ""){
        alert("Please fill in all fields");
        return;
    }
    
    if (password.value !== confirmPassword.value) {
        alert("Passwords do not match");
        return;
    }

    if (phoneVal(phoneNumber) == false){
        alert("Phone number must be numeric");
        return;
    }

    alert('Registration successful');
    form.reset();
});

function phoneVal(phoneNumber){
    for (let i = 0; i < phoneNumber.length; i++){
        if (phoneNumber[i] < '0' || phoneNumber[i] > '9'){
            return false;
        }
    }
    return true;
}