
unit PaymentFactory;

interface

type
  IPayment = interface
    procedure Pay(Value: Double);
  end;

  TCreditCardPayment = class(TInterfacedObject, IPayment)
  public
    procedure Pay(Value: Double);
  end;

  TPixPayment = class(TInterfacedObject, IPayment)
  public
    procedure Pay(Value: Double);
  end;

  TPaymentFactory = class
  public
    class function CreatePayment(const PaymentType: string): IPayment;
  end;

implementation

uses
  System.SysUtils;

procedure TCreditCardPayment.Pay(Value: Double);
begin
  Writeln('Pagando R$ ' + FloatToStr(Value) + ' com Cartão');
end;

procedure TPixPayment.Pay(Value: Double);
begin
  Writeln('Pagando R$ ' + FloatToStr(Value) + ' via PIX');
end;

class function TPaymentFactory.CreatePayment(const PaymentType: string): IPayment;
begin
  if PaymentType = 'credit' then
    Result := TCreditCardPayment.Create
  else if PaymentType = 'pix' then
    Result := TPixPayment.Create
  else
    raise Exception.Create('Tipo de pagamento inválido');
end;

end.
