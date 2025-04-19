@interface TSWPLineRenderer : TSWPRenderer

- (void)drawLine:(struct TSWPLineRef { struct __CTLine *x0; struct CGPoint { double x0; double x1; } x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; unsigned long long x3; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x4; unsigned long long x5; })a0;
- (void)drawLineFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1 thickness:(double)a2 length:(double)a3 lineCount:(long long)a4 lineFragmentStart:(struct CGPoint { double x0; double x1; })a5 isWavyUnderline:(BOOL)a6;
- (void)drawRun:(const struct __CTRun { } *)a0 glyphRange:(struct { long long x0; long long x1; })a1;
- (void)drawWordMarkingsAtStart:(double)a0 length:(double)a1 linePos:(double)a2;
- (void)translateLinePositionForLine:(struct TSWPLineRef { struct __CTLine *x0; struct CGPoint { double x0; double x1; } x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; unsigned long long x3; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x4; unsigned long long x5; })a0 lineFragment:(const void *)a1 linePosition:(struct CGPoint { double x0; double x1; })a2;

@end
