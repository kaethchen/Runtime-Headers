@interface STTIHintingZone : NSObject {
    void /* unknown type, empty encoding */ zoneType;
    void /* unknown type, empty encoding */ glyphIndex;
    void /* unknown type, empty encoding */ points;
    void /* unknown type, empty encoding */ contours;
    void /* unknown type, empty encoding */ hintingSucceeded;
}

@property (nonatomic) void /* unknown type, empty encoding */ unscaledOutlineIsWrong;

+ (id)glyphZoneWithIndex:(int)a0;

- (id)init;
- (void).cxx_destruct;
- (void)appendContour:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)exportPointsWithX:(int *)a0 y:(int *)a1 onCurve:(char *)a2 count:(long long)a3;
- (void)exportToElement:(struct fnt_ElementType { int x0; int x1; int *x2; int *x3; unsigned short *x4; unsigned short *x5; char *x6; char *x7; int *x8; int *x9; short *x10; short *x11; int x12; struct unscaledBounds { short x0; short x1; short x2; short x3; } x13; struct unscaledMetrics { short x0; short x1; } x14; struct unscaledMetrics { short x0; short x1; } x15; int x16; int x17; short *x18; } *)a0;
- (void)importFromElement:(struct fnt_ElementType { int x0; int x1; int *x2; int *x3; unsigned short *x4; unsigned short *x5; char *x6; char *x7; int *x8; int *x9; short *x10; short *x11; int x12; struct unscaledBounds { short x0; short x1; short x2; short x3; } x13; struct unscaledMetrics { short x0; short x1; } x14; struct unscaledMetrics { short x0; short x1; } x15; int x16; int x17; short *x18; } *)a0;
- (void)setPointsWithOx:(const int *)a0 oy:(const int *)a1 oox:(const short *)a2 ooy:(const short *)a3 onCurve:(const char *)a4 count:(long long)a5;

@end
