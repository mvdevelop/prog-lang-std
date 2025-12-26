
program CalculadoraSimples;

var
  a, b: Real;
  opcao: Integer;

begin
  Write('Digite o primeiro número: ');
  Readln(a);

  Write('Digite o segundo número: ');
  Readln(b);

  Writeln('Escolha a operação:');
  Writeln('1 - Soma');
  Writeln('2 - Subtração');
  Writeln('3 - Multiplicação');
  Writeln('4 - Divisão');
  Readln(opcao);

  case opcao of
    1: Writeln('Resultado: ', a + b);
    2: Writeln('Resultado: ', a - b);
    3: Writeln('Resultado: ', a * b);
    4: Writeln('Resultado: ', a / b);
  else
    Writeln('Opção inválida');
  end;

  Readln;
end.
