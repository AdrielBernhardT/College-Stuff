let form = document.getElementById('container')

form.addEventListener('submit', function(event) {
    event.preventDefault();

    let server = document.getElementById("server");
    let desc = document.getElementById("Desc");

    if(server.value == "" || desc.value == ""){
        alert("Please fill in all fields");
        return;
    }

    if(desc.value.length < 10){
        alert("Description must be at least 10 characters long");
        return;
    }

    if(desc.value.length > 1500){
        alert("Description must be less than 1500 characters long");
        return;
    }

    form.reset();
    alert('Report submitted successfully');
    window.location.href = "../../../index.html";
});