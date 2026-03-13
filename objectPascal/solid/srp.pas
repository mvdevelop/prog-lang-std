
{
    SRP (Single Responsibility Principle) — Princípio da Responsabilidade Única

    ❌ ERRADO — Classe fazendo tudo:
    type
    TReport = class
    public
        procedure Generate;
        procedure SaveToFile;
        procedure SendByEmail;
    end;

    procedure TReport.Generate;
    begin
    Writeln('Gerando relatório...');
    end;

    procedure TReport.SaveToFile;
    begin
    Writeln('Salvando em arquivo...');
    end;

    procedure TReport.SendByEmail;
    begin
    Writeln('Enviando por email...');
    end;

    📌 Problema:
    Essa classe tem 3 responsabilidades:
    Gerar relatório; Salvar; Enviar email

    Se mudar a regra de email, você mexe na classe inteira.
}

{ ✅ CORRETO — Separando responsabilidades }
type
  TReportGenerator = class
  public
    procedure Generate;
  end;

  TReportSaver = class
  public
    procedure Save(const Content: string);
  end;

  TEmailSender = class
  public
    procedure Send(const Content: string);
  end;

procedure TReportGenerator.Generate;
begin
  Writeln('Gerando relatório...');
end;

procedure TReportSaver.Save(const Content: string);
begin
  Writeln('Salvando relatório...');
end;

procedure TEmailSender.Send(const Content: string);
begin
  Writeln('Enviando relatório por email...');
end;

{ Agora cada classe tem uma responsabilidade. }
