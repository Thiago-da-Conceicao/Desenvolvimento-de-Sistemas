function carregar() {
  let elMensagem = window.document.getElementById("msg");
  let elImagem = window.document.getElementById("imagem");

  let agora = new Date();
  let hr = agora.getHours();
  let min = agora.getMinutes();

  elMensagem.innerHTML = `<p><strong>Horário:</strong> São ${hr} horas e ${min} minutos</p>`;

  if (hr >= 0 && hr < 12) {
    // Bom dia
    elImagem.src = "imagens/manhã.jpg";
    document.body.style.background = "#73A3B8"
  } else if (hr >= 12 && hr < 18) {
    // Boa tarde
    elImagem.src = "imagens/tarde.jpg";
    document.body.style.background = "#977440"
  } else {
    // Boa noite
    elImagem.src = "imagens/noite.jpg";
    document.body.style.background = "#394D4A"
  }
}

