"use strict";
const container = document.getElementById("selectTheme");
const buttun = document.getElementById("dark");
const submit = document.getElementById("submit");
function validate() {
    console.log("clicado");
}
function darkMode() {
    let targetTheme = container.getAttribute("data-theme") === "dark" ? "light" : "dark";
    container.setAttribute("data-theme", targetTheme);
    localStorage.setItem("theme", targetTheme);
}
function trocaMode() {
    darkMode();
}
