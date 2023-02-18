var formulario = document.querySelector("form");
var nomeInput = document.getElementById("nome");
var emailInput = document.getElementById("email");
var mensagemInput = document.getElementById("mensagem");
var enviarSubmit = document.getElementById("enviar");

nomeInput.addEventListener("focus", function() {
  nomeInput.style.border = "3px solid #FF7A7D";
});

emailInput.addEventListener("focus", function() {
  emailInput.style.border = "3px solid #FF7A7D";
});


mensagemInput.addEventListener("focus", function() {
  mensagemInput.style.border = "3px solid #FF7A7D";
});


enviarSubmit.addEventListener("submit", function(event) {
  event.preventDefault();
  
  formulario.reset();
});
