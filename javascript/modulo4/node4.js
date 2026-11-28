let hora = new Date();
let minuto = new Date();

let hr = hora.getHours();
let min = minuto.getMinutes();

console.log(`Agora são exatamente ${hr} horas e ${min} minutos.`);

if (hr < 12) {
  console.log("Bom dia!");
} else if (hr <= 18) {
  console.log("Boa tarde!");
} else {
  console.log("Bom noite!");
}
