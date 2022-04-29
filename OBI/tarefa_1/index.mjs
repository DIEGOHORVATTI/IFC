// stub to include printf and scanf in javascript programs
import { printf, fprintf, sprintf, scanf, sscanf } from "../lib/scanf-printf-obi/lib/index.js";
// end of stub


// append your script here
printf("%d\n", 1000);

printf("Digite o valor de s: ");
const input = scanf("%s");

if (true)
  printf("Valor do input '%s' ok\n", input);
else printf("Valor do input '%s' off\n", input);

