@class NSString;

@interface LTMComputeRef : NSObject <LTMComputeBase> {
    struct LTMCompute { void /* function */ **x0; unsigned long long x1; struct sLtmTuningParams *x2; struct sLtmDisplayParams { float x0[65]; float x1[65]; float x2; } x3; struct sLtmFrameParams { float x0[48]; float x1[48]; float x2; float x3; float x4[65]; float x5[64]; float x6[64]; float x7[64]; float x8[64]; float x9[64]; float x10[64]; float x11[64]; float x12[65]; float x13[3]; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; float x29; float x30; float x31; float x32; float x33; float x34; float x35; } x4; float x5[4][342]; BOOL x6[4]; } *_ltmCompute;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (int)computeLTM:(const struct sLtmComputeInput { float x0[3072]; float x1[64]; float x2[1024]; float x3[48]; float x4[48]; float x5[64]; float x6[64]; float x7[65]; float x8[48]; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; unsigned short x21; float x22[9]; float x23[192]; float x24; float x25; float x26; BOOL x27; BOOL x28; float x29[48]; float x30; } *)a0 withMetadata:(const struct sLtmComputeMeta { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; int x5; BOOL x6; int x7; float x8; unsigned char x9; struct LTMTuning { BOOL x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; } x10[6]; BOOL x11; } *)a1 to:(struct sLtmComputeOutput { float x0[3120]; float x1[65]; float x2[257]; float x3[257]; float x4[5184]; float x5[257]; float x6; unsigned long long x7; float x8; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 3; } *)a2;

@end
