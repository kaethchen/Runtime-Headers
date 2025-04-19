@interface VCMockRouter : VCObject

+ (id)sharedInstance;

- (BOOL)routeDatagram:(const void *)a0 datagramSize:(unsigned int)a1 datagramOptions:(struct { unsigned int x0; unsigned long long x1; unsigned short x2; unsigned char x3; char x4; unsigned short x5[12]; unsigned char x6; unsigned short x7; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x8; double x9; unsigned long long x10; BOOL x11; unsigned long long x12; unsigned char x13[16]; BOOL x14; BOOL x15; } *)a2 fromDatagramChannel:(id)a3 error:(id *)a4;

@end
