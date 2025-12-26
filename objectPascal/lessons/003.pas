
program ParOuImpar;

var
  numero: Integer;

begin
  Write('Digite um número: ');
  Readln(numero);

  if (numero mod 2 = 0) then
    Writeln('O número é par')
  else
    Writeln('O número é ímpar');

  Readln;
end.
