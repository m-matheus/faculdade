const gatoLaranja = document.querySelector("#gatinho-ruivo");
/* 
  Criando as contantes para selecionar a imagem do gato
*/

gatoLaranja.addEventListener("mouseenter", function(event) {
    gatoLaranja.style.width = "420px";
  });
/* 
  Modificando o tamnho do gato ao passar o mouse por cima
*/

gatoLaranja.addEventListener("mouseout", function(event) {
    gatoLaranja.style.width = "400px";
  });
/* 
  Modificando o tamanho do gato ao normal ao tirar o mouse
*/

var texto = document.getElementsByTagName("p");

texto[0].innerHTML = "O maior site de <strong>miaudoção</strong> de Poa e região!";
/* 
  Modificando o texto que está no "p"
*/
