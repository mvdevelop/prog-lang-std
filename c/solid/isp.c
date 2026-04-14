
// Em vez de uma struct com 'imprimir', 'escanear' e 'fax'
typedef struct { void (*imprimir)(); } IImpressora;
typedef struct { void (*escanear)(); } IEscanner;

// Um dispositivo simples só implementa a IImpressora
