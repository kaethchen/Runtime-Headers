@class OITSUBezierPath;

@interface MFPhonePath : MFPath {
    OITSUBezierPath *m_path;
    int m_state;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (int)state;
- (int)end;
- (int)begin;
- (BOOL)isOpen;
- (struct CGPoint { double x0; double x1; })currentPoint;
- (int)abort;
- (int)flatten;
- (int)stroke:(id)a0;
- (void)appendBezierPath:(id)a0 dc:(id)a1;
- (int)closeFigure;
- (int)fill:(id)a0;
- (id)getBezierPath;
- (id)initWithPath:(id)a0 state:(int)a1;
- (int)widen:(id)a0;

@end
