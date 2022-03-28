/*
Determine o valor das expressões lógicas abaixo, considerando que 
A, B e C contêm, respectivamente, 2, 7, 3.5 e que para a variável 
lógica L seu valor é falsidade (F):
a) B == A * C e (L ou V)
b) B > A ou B == pot(A, A)
c) L  e B div A >= C ou não A <= C
d) não L ou V e rad(A + B) >= C
e) B/A == C ou B/A != C
f) L ou pot (B, A) <= C * 10 + A * B 
---------------------------------------

conversão de algoritimos para nodejs

//Potenciação e Radiciação
pot(2,3) => Math.pow(2, 3) //2³
rad(x)   => Math.sqrt(x)   //√x

// Operador de resto e quociente de divisão inteira
mod 2 => num%2
div 9 => num/9

*/

const a = parseInt(2);
const b = parseInt(7);
const c = parseFloat(3.5);
const l = false


console.log(`ola`);
