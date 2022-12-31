const container: HTMLElement = document.getElementById("selectTheme") as HTMLElement;
const buttun: HTMLElement = document.getElementById("dark") as HTMLElement;
const submit: HTMLElement = document.getElementById("submit") as HTMLElement;

function validate() {
  console.log("clicado");
}

function darkMode(): void {
  let targetTheme =
    container.getAttribute("data-theme") === "dark" ? "light" : "dark";
  container.setAttribute("data-theme", targetTheme);
  localStorage.setItem("theme", targetTheme);
}

function trocaMode(): void  {
  darkMode();
}