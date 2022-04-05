/*
Determine o valor das expressões lógicas abaixo, considerando que 
A, B e C contêm, respectivamente, 2, 7, 3.5 e que para a variável 
lógica L seu valor é falsidade (F):

a) B == A * C e (L ou V)
//A iqual B vezes C e falso ou true
b) B > A ou B == pot(A, A)
//B maior que A ou A na potencia A
c) L e B div A >= C ou não A <= C
//falso e B dividido por A maior ou iqual a C ou negação de A menor ou iqual a C 
d) não L ou V e rad(A + B) >= C
//falso negação ou verdadeiro e radiciação de A+B maior ou iqual a C 
e) B/A == C ou B/A != C
//B dividido por A iqual a C ou B dividido por A negativa ou iqual a C
f) L ou pot (B, A) <= C * 10 + A * B 
// falso ou B na potencia A menor ou iqual a C vezes dez mais A vezes B 

---------------------------------------

conversão de algoritimos para nodejs

//Potenciação e Radiciação
pot(2,3) => Math.pow(2, 3) //2³
rad(x)   => Math.sqrt(x)   //√x

// Operador de resto e quociente de divisão inteira
mod 2 => num%2
div 9 => num/9

//Operadores lógicos
não => ! //negação 
e => && //conjunção
ou => || //disjunção
*/

const chalk = require('chalk')

const A = parseInt(2);
const B = parseInt(7);
const C = parseFloat(3.5);
const L = false;
const V = true;


function a() {
 const retorno = `${chalk.red("A) ")}`;
  if (A == B * C && L || V ) {
    return retorno + true;
  } else {
    return retorno + false;
  }
}
console.log(a());

/* -------------- */

function b() {
  const retorno = `${chalk.red("B) ")}`;
  if (B > A || Math.pow(2, 2)) {
    return retorno + true;
  } else {
    return retorno + false;
  }
}
console.log(b());
/* -------------- */

function c() {
  const retorno = `${chalk.red("C) ")}`;
  if (L && B / A >= C || !(A <= C)) {
    return retorno + true;
  } else {
    return retorno + false;
  }
}
console.log(c());
/* -------------- */

function d() {
  const retorno = `${chalk.red("D) ")}`;
  if ( !(L || V && Math.sqrt(A+B) >= C) ) {
    return retorno + true;
  } else {
    return retorno + false;
  }
}
console.log(d());
/* -------------- */

function e() {
  const retorno = `${chalk.red("E) ")}`;
  if ( B/A == C || B/A != C ) {
    return retorno + true;
  } else {
    return retorno + false;
  }
}
console.log(e());
/* -------------- */

function f() {
  const retorno = `${chalk.red("F) ")}`;
  if ( L || Math.pow(B, A) <= C * 10 + A * B ) {
    return retorno + true;
  } else {
    return retorno + false;
  }
}
console.log(f());