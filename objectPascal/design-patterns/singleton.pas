
unit LoggerSingleton;

interface

type
  TLogger = class
  private
    class var FInstance: TLogger;
    constructor CreatePrivate;
  public
    class function GetInstance: TLogger;
    procedure Log(const Msg: string);
  end;

implementation

uses
  System.SysUtils;

constructor TLogger.CreatePrivate;
begin
  inherited Create;
end;

class function TLogger.GetInstance: TLogger;
begin
  if not Assigned(FInstance) then
    FInstance := TLogger.CreatePrivate;
  Result := FInstance;
end;

procedure TLogger.Log(const Msg: string);
begin
  Writeln('[LOG] ' + Msg);
end;

end.
