const doacaoFinanceira = document.getElementById("doacao-financeira");
const card = document.getElementsByClassName("card");


doacaoFinanceira.addEventListener("click", function(event) {
    event.preventDefault();
    card.style.display = 'block';
  });