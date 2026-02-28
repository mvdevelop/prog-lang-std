
{
    OCP - Open/Closed Principle (Princípio Aberto/Fechado)

    ❌ ERRADO — Usando IF para cada tipo
    type
    TDiscountCalculator = class
    public
        function Calculate(CustomerType: string; Value: Double): Double;
    end;

    function TDiscountCalculator.Calculate(CustomerType: string; Value: Double): Double;
    begin
    if CustomerType = 'regular' then
        Result := Value * 0.9
    else if CustomerType = 'vip' then
        Result := Value * 0.8
    else
        Result := Value;
    end;

    📌 Se surgir tipo "premium", você precisa alterar a classe.
}

{ ✅ CORRETO — Usando polimorfismo }

type
  IDiscount = interface
    function Apply(Value: Double): Double;
  end;

  TRegularDiscount = class(TInterfacedObject, IDiscount)
    function Apply(Value: Double): Double;
  end;

  TVipDiscount = class(TInterfacedObject, IDiscount)
    function Apply(Value: Double): Double;
  end;

function TRegularDiscount.Apply(Value: Double): Double;
begin
  Result := Value * 0.9;
end;

function TVipDiscount.Apply(Value: Double): Double;
begin
  Result := Value * 0.8;
end;

{ Agora podemos criar novas classes sem alterar código existente. }
