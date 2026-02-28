
{
    LSP (Language Server Protocol) implementation for Solid.

    ❌ ERRADO
    type
    TBird = class
        procedure Fly; virtual;
    end;

    TPenguin = class(TBird)
        procedure Fly; override;
    end;

    procedure TBird.Fly;
    begin
    Writeln('Voando...');
    end;

    procedure TPenguin.Fly;
    begin
    raise Exception.Create('Pinguim não voa!');
    end;

    📌 Quebra LSP — se usar TPenguin como TBird, pode gerar erro.
}

{ ✅ CORRETO — Separando comportamento }

type
  IBird = interface
  end;

  IFlyingBird = interface(IBird)
    procedure Fly;
  end;

  TSparrow = class(TInterfacedObject, IFlyingBird)
    procedure Fly;
  end;

  TPenguin = class(TInterfacedObject, IBird)
  end;

procedure TSparrow.Fly;
begin
  Writeln('Pardal voando...');
end;

{ ✅ Agora, TPenguin não tem método Fly, e não viola LSP. }
