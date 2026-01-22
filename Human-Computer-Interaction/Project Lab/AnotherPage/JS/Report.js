const passwordInput = document.getElementById("Pass");
const togglePassword = document.getElementById("togglePassword");

togglePassword.addEventListener("click", () => {
    const isPassword = passwordInput.type === "password";
    passwordInput.type = isPassword ? "text" : "password";

    togglePassword.src = isPassword 
        ? "../../../Asset/REMIXICON/icons/System/eye-off-line.svg" 
        : "../../../Asset/REMIXICON/icons/System/eye-line.svg";
});

const form = document.getElementById('container');

form.addEventListener('submit', function(event) {
    event.preventDefault();

    const username = document.getElementById("Username");
    const password = document.getElementById("Pass");

    if (username.value === "" || password.value === "") {
        alert("Please fill in all fields");
        return;
    }

    if(username.value.length < 5) {
        alert("Username must be at least 5 characters long");
        return;
    }

    if (password.value.length < 8) {
        alert("Password must be at least 8 characters long");
        return;
    }

    alert('Login successful');
    form.reset();
    window.location.href = "DescReport.html";
});

