@class QCPatch;

@interface QCPatchProfileView : QCProfileView {
    QCPatch *_patch;
    double _lastFrameTime;
    unsigned long long _lastFrameID;
    unsigned long long _lastPatchCount;
    void *_unused2[4];
}

- (void)dealloc;
- (void)addSample:(const double *)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)__addStats:(id)a0;
- (void)clearAllSamples;
- (void)_didRender:(id)a0;
- (void)_didStart:(id)a0;
- (id)patch;
- (void)setPatch:(id)a0;
- (void)setSampleSize:(unsigned long long)a0;

@end
