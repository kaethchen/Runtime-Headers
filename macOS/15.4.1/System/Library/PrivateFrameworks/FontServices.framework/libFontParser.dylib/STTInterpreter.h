@interface STTInterpreter : NSObject {
    void /* unknown type, empty encoding */ maxp;
    void /* unknown type, empty encoding */ stack;
    void /* unknown type, empty encoding */ gs;
    void /* unknown type, empty encoding */ idefs;
    void /* unknown type, empty encoding */ fdefs;
    void /* unknown type, empty encoding */ storageArea;
    void /* unknown type, empty encoding */ cvt;
    void /* unknown type, empty encoding */ variationCoord;
    void /* unknown type, empty encoding */ unitsPerEmScale;
    void /* unknown type, empty encoding */ pointSize;
    void /* unknown type, empty encoding */ isRotated;
    void /* unknown type, empty encoding */ isStretched;
    void /* unknown type, empty encoding */ ranFpgm;
    void /* unknown type, empty encoding */ ranPrep;
    void /* unknown type, empty encoding */ haveSetScaleFactors;
    void /* unknown type, empty encoding */ currentProgram;
    void /* unknown type, empty encoding */ glyphZone;
    void /* unknown type, empty encoding */ running;
}

@property (nonatomic, readonly) BOOL hasVariationCoord;
@property (nonatomic, retain) void /* unknown type, empty encoding */ twilightZone;

- (id)init;
- (void).cxx_destruct;
- (id)convertInstructions:(const char *)a0 count:(long long)a1;
- (id)initWithMaxp:(struct sfntMaxProfileTable { int x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; })a0;
- (BOOL)runFpgm:(id)a0 error:(id *)a1;
- (BOOL)runGlyf:(id)a0 zone:(id)a1 error:(id *)a2;
- (BOOL)runPrep:(id)a0 error:(id *)a1;
- (void)setCVT:(const int *)a0 count:(long long)a1;
- (void)setScaleFactorsWithXStretch:(int)a0 yStretch:(int)a1 unitsPerEm:(short)a2 pointSize:(int)a3 isRotated:(BOOL)a4 isStretched:(BOOL)a5;
- (void)setVariationCoord:(const short *)a0 count:(long long)a1;

@end
