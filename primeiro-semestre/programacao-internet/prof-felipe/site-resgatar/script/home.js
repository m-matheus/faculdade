const gatoLaranja = document.querySelector("#gatinho-ruivo");
const textSelec = document.querySelector('h1');

gatoLaranja.addEventListener("mouseenter", function(event) {
    gatoLaranja.style.width = "420px";
  });

  gatoLaranja.addEventListener("mouseout", function(event) {
    gatoLaranja.style.width = "400px";
  });
