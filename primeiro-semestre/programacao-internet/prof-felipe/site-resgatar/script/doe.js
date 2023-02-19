const doacaoFinanceira = document.querySelector("#financeira");
const cardFinanceira = document.querySelector("#card-financeira");
const hidenFinanceira = document.querySelector("#hiden-financeira");


doacaoFinanceira.addEventListener("click", function(event) {
    event.preventDefault();
    cardFinanceira.style.display = 'block';
  });

hidenFinanceira.addEventListener("click", function(event) {
    event.preventDefault();
    cardFinanceira.style.display = 'none';
})


const doacaoProdutos = document.querySelector("#produtos");
const cardProdutos = document.querySelector("#card-produtos");
const hidenProdutos = document.querySelector("#hiden-produtos");


doacaoProdutos.addEventListener("click", function(event) {
    event.preventDefault();
    cardProdutos.style.display = 'block';
  });

hidenProdutos.addEventListener("click", function(event) {
    event.preventDefault();
    cardProdutos.style.display = 'none';
})

const doacaoTempo = document.querySelector("#tempo");
const cardTempo = document.querySelector("#card-tempo");
const hidenTempo = document.querySelector("#hiden-tempo");


doacaoTempo.addEventListener("click", function(event) {
    event.preventDefault();
    cardTempo.style.display = 'block';
  });

hidenTempo.addEventListener("click", function(event) {
    event.preventDefault();
    cardTempo.style.display = 'none';
})

const doacaoAdocao = document.querySelector("#adocao");
const cardAdocao = document.querySelector("#card-adocao");
const hidenAdocao = document.querySelector("#hiden-adocao");


doacaoAdocao.addEventListener("click", function(event) {
    event.preventDefault();
    cardAdocao.style.display = 'block';
  });

hidenAdocao.addEventListener("click", function(event) {
    event.preventDefault();
    cardAdocao.style.display = 'none';
})