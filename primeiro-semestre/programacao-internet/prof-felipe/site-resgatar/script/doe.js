const doacaoFinanceira = document.querySelector("#financeira");
const cardFinanceira = document.querySelector("#card-financeira");
const hidenFinanceira = document.querySelector("#hiden-financeira");
/* 
  Criando as constantes para selecionar com base no seletor css usando queryselector.
*/

doacaoFinanceira.addEventListener("click", function(event) {
    cardFinanceira.style.display = 'block';
  });

hidenFinanceira.addEventListener("click", function(event) {
    cardFinanceira.style.display = 'none';
})

/* 
  Usamos o evento click para modificar a estilização do card para ele aparecer.
  Também usamos o click para fechar o mesmo.
*/

const doacaoProdutos = document.querySelector("#produtos");
const cardProdutos = document.querySelector("#card-produtos");
const hidenProdutos = document.querySelector("#hiden-produtos");


doacaoProdutos.addEventListener("click", function(event) {
    cardProdutos.style.display = 'block';
  });

hidenProdutos.addEventListener("click", function(event) {
    cardProdutos.style.display = 'none';
})

const doacaoTempo = document.querySelector("#tempo");
const cardTempo = document.querySelector("#card-tempo");
const hidenTempo = document.querySelector("#hiden-tempo");


doacaoTempo.addEventListener("click", function(event) {
    cardTempo.style.display = 'block';
  });

hidenTempo.addEventListener("click", function(event) {
    cardTempo.style.display = 'none';
})

const doacaoAdocao = document.querySelector("#adocao");
const cardAdocao = document.querySelector("#card-adocao");
const hidenAdocao = document.querySelector("#hiden-adocao");


doacaoAdocao.addEventListener("click", function(event) {
    cardAdocao.style.display = 'block';
  });

hidenAdocao.addEventListener("click", function(event) {
    cardAdocao.style.display = 'none';
})