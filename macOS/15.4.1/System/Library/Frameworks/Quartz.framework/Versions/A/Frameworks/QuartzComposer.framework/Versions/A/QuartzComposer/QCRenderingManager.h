@class NSDictionary, QCPatch;

@interface QCRenderingManager : NSObject {
    struct _QCExecutionArray { struct **x0; unsigned long long x1; unsigned long long x2; } *_patches;
    struct _QCExecutionStride { unsigned long long *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *_iterationStride;
    struct _QCIterationStack { unsigned long long *x0; unsigned long long *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } *_iterationStack;
    double _nextIdleTime;
    double _previousExecutionTime;
    NSDictionary *_previousArguments;
    unsigned long long _previousPatchCount;
    unsigned long long _subpatchesCount;
    unsigned long long _iteration;
    unsigned long long *_indices;
    unsigned long long _indicesCapacity;
    BOOL _canReset;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _dirtyRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _previousDirtyRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _dod;
    QCPatch *_rootPatch;
    BOOL _needsRender;
    BOOL _isIterator;
    void *_unused[4];
}

+ (void)initialize;

- (void)dealloc;
- (void)finalize;
- (void)_reset;
- (BOOL)renderAtTime:(double)a0 arguments:(id)a1;
- (unsigned long long)_currentIteration;
- (void)_nextFrame;
- (void)_nextIteration;
- (id)_renderTree;
- (BOOL)addPatch:(id)a0 context:(id)a1 time:(double)a2 arguments:(id)a3 nextExecutionTime:(double)a4;
- (unsigned long long)currentIteration;
- (void)finalize_QCRenderingManager;
- (id)initWithPatch:(id)a0;
- (BOOL)needsRender;
- (double)nextExecutionTime:(double)a0 arguments:(id)a1;
- (double)nextIdleTime;

@end
