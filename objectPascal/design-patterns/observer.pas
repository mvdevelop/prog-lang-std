
unit ObserverExample;

interface

uses
  System.Generics.Collections;

type
  IObserver = interface
    procedure Update(const Msg: string);
  end;

  TSubject = class
  private
    FObservers: TList<IObserver>;
  public
    constructor Create;
    destructor Destroy; override;
    procedure Attach(Observer: IObserver);
    procedure Notify(const Msg: string);
  end;

  TUser = class(TInterfacedObject, IObserver)
  private
    FName: string;
  public
    constructor Create(const Name: string);
    procedure Update(const Msg: string);
  end;

implementation

uses
  System.SysUtils;

constructor TSubject.Create;
begin
  FObservers := TList<IObserver>.Create;
end;

destructor TSubject.Destroy;
begin
  FObservers.Free;
  inherited;
end;

procedure TSubject.Attach(Observer: IObserver);
begin
  FObservers.Add(Observer);
end;

procedure TSubject.Notify(const Msg: string);
var
  Obs: IObserver;
begin
  for Obs in FObservers do
    Obs.Update(Msg);
end;

constructor TUser.Create(const Name: string);
begin
  FName := Name;
end;

procedure TUser.Update(const Msg: string);
begin
  Writeln(FName + ' recebeu: ' + Msg);
end;

end.
