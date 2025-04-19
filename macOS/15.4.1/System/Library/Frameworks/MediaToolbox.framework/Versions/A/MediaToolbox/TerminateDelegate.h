@class NSString;

@interface TerminateDelegate : NSObject <SLVirtualDisplayDelegate> {
    struct OpaqueFigVirtualDisplayServerSLVD { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; unsigned int x1; unsigned int x2; float x3; int x4; struct __CFDictionary *x5; struct __CFDictionary *x6; id x7; id x8; unsigned char x9; id x10; unsigned char x11; id x12; id x13; unsigned char x14; id x15; id x16; id x17; id x18; unsigned long long x19; id x20; int x21; void *x22; unsigned char x23; struct __CFArray *x24; int x25; double x26; unsigned char x27; unsigned int x28; unsigned int x29; unsigned char x30; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x31; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x32; unsigned char x33; } *_slvdServer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)virtualDisplayDidTerminate:(id)a0;
- (id)initWithServer:(struct OpaqueFigVirtualDisplayServerSLVD { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; unsigned int x1; unsigned int x2; float x3; int x4; struct __CFDictionary *x5; struct __CFDictionary *x6; id x7; id x8; unsigned char x9; id x10; unsigned char x11; id x12; id x13; unsigned char x14; id x15; id x16; id x17; id x18; unsigned long long x19; id x20; int x21; void *x22; unsigned char x23; struct __CFArray *x24; int x25; double x26; unsigned char x27; unsigned int x28; unsigned int x29; unsigned char x30; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x31; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x32; unsigned char x33; } *)a0;

@end
