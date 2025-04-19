@class NSString;

@interface QCProfileView : NSView {
    unsigned long long _size;
    id *_colors;
    id *_names;
    NSString *_label;
    double _units;
    double *_buffer;
    unsigned long long _bufferStart;
    unsigned long long _bufferLength;
    double *_min;
    double *_max;
    void *_unused[4];
}

- (void)dealloc;
- (id)label;
- (void)setLabel:(id)a0;
- (void)addSample:(const double *)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (void)mouseDown:(id)a0;
- (void)setUnits:(double)a0;
- (double)units;
- (id)colorForIndex:(unsigned long long)a0;
- (void)clearAllSamples;
- (void)_plotCurve:(struct CGContext { } *)a0 offset:(double)a1 scale:(double)a2 sample:(double *)a3 min:(double *)a4 max:(double *)a5 stride:(unsigned long long)a6 count:(unsigned long long)a7;
- (id)nameForIndex:(unsigned long long)a0;
- (unsigned long long)sampleSize;
- (void)setColor:(id)a0 forIndex:(unsigned long long)a1;
- (void)setName:(id)a0 forIndex:(unsigned long long)a1;
- (void)setSampleSize:(unsigned long long)a0;

@end
