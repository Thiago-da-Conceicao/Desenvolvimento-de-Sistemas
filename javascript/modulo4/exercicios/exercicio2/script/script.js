let data = new Date();
let ano = data.getFullYear();
let elano = document.getElementById("Ano");
let elresultado = document.getElementById("Resultado");
let elsex = document.getElementsByName("radsex");

function verificar() {
  let AnoDigitado = Number(elano.value);

  // Validação de entrada
  if (elano.value.length === 0 || AnoDigitado > ano || AnoDigitado <= 0) {
    window.alert("[ERRO] Verifique os dados e tente novamente!");
    return;
  }

  let genero = "";
  let idade = ano - AnoDigitado;
  let elImagem = document.createElement("img");
  elImagem.setAttribute("id", "imagens");

  if (elsex[0].checked) {
    genero = "Homem";
    if (idade >= 0 && idade < 12) {
      elImagem.src = "imagens/h-criança.jpg";
    } else if (idade < 27) {
      elImagem.src = "imagens/h-jovem.jpg";
    } else if (idade < 50) {
      elImagem.src = "imagens/h-adulto.jpg";
    } else {
      elImagem.src = "imagens/h-idoso.jpg";
    }
  } else if (elsex[1].checked) {
    genero = "Mulher";
    if (idade >= 0 && idade < 12) {
      elImagem.src = "imagens/m-criança.jpg";
    } else if (idade < 27) {
      elImagem.src = "imagens/m-jovem.jpg";
    } else if (idade < 50) {
      elImagem.src = "imagens/m-adulto.jpg";
    } else {
      elImagem.src = "imagens/m-idosa.jpg";
    }
  }

  // Exibição do resultado
  elresultado.style.textAlign = "center";
  elresultado.innerHTML = `Detectamos ${genero} com ${idade} anos.<br>`;
  elresultado.appendChild(elImagem);
}