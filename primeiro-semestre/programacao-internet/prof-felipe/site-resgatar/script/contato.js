var formulario = document.querySelector("form");
var nomeInput = document.getElementById("nome");
var emailInput = document.getElementById("email");
var mensagemInput = document.getElementById("mensagem");
var enviarSubmit = document.getElementById("enviar");

nomeInput.addEventListener("focus", function() {
  nomeInput.style.border = "3px solid #27221f";
});

nomeInput.addEventListener("focusout", function() {
  nomeInput.style.border = "1px solid #27221f";
  nomeInput.style.backgroundColor = "white";
});

nomeInput.addEventListener("click", function() {
    nomeInput.style.backgroundColor = "#ffc7c8";
  });

emailInput.addEventListener("focus", function() {
  emailInput.style.border = "3px solid #27221f";
});

emailInput.addEventListener("focusout", function() {
  emailInput.style.border = "1px solid #27221f";
  emailInput.style.backgroundColor = "white";
});

emailInput.addEventListener("click", function() {
    emailInput.style.backgroundColor = "#ffc7c8";
  });


mensagemInput.addEventListener("focus", function() {
  mensagemInput.style.border = "3px solid #27221f";
});

mensagemInput.addEventListener("blur", function() {
  mensagemInput.style.border = "1px solid #27221f";
  mensagemInput.style.backgroundColor = "white";
});

mensagemInput.addEventListener("click", function() {
    mensagemInput.style.backgroundColor = "#ffc7c8";
  });

enviarSubmit.addEventListener("submit", function(event) {
  event.preventDefault(); // impede o envio do formulário
  formulario.reset();
});