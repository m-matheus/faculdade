var formulario = document.querySelector("form");
var nomeInput = document.getElementById("nome");
var emailInput = document.getElementById("email");
var mensagemInput = document.getElementById("mensagem");
var enviarSubmit = document.getElementById("enviar");

nomeInput.addEventListener("focus", function() {
  nomeInput.style.border = "3px solid #27221f";
});

nomeInput.addEventListener("click", function() {
    nomeInput.style.backgroundColor = "#ffc7c8";
  });

emailInput.addEventListener("focus", function() {
  emailInput.style.border = "3px solid #27221f";
});

emailInput.addEventListener("click", function() {
    emailInput.style.backgroundColor = "#ffc7c8";
  });


mensagemInput.addEventListener("focus", function() {
  mensagemInput.style.border = "3px solid #27221f";
});

mensagemInput.addEventListener("click", function() {
    mensagemInput.style.backgroundColor = "#ffc7c8";
  });

enviarSubmit.addEventListener("submit", function(event) {
  event.preventDefault();
  
  formulario.reset();
});
