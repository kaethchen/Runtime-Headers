@interface TSCEFunction_MODE : TSCEFunctionNode

+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (id)evaluateVector:(id)a0 context:(id)a1 functionSpec:(id)a2 resultFormat:(const struct TSCEFormat { id x0; unsigned int x1; unsigned char x2; struct TSCEDurationFormat { unsigned char x0 : 1; unsigned char x1 : 6; unsigned char x2 : 6; unsigned char x3 : 3; } x3; struct TSCEBaseFormat { unsigned char x0; unsigned char x1; BOOL x2; } x4; struct TSCEFractionFormat { char x0; } x5; struct TSCENumberFormat { unsigned char x0; unsigned char x1 : 3; unsigned char x2 : 1; unsigned char x3 : 1; unsigned short x4; } x6; } *)a3;
+ (unsigned short)functionIndex;
+ (id)modeArrayForArray:(id)a0 context:(id)a1 functionSpec:(id)a2 originalArray:(id *)a3 outError:(id *)a4;

@end
