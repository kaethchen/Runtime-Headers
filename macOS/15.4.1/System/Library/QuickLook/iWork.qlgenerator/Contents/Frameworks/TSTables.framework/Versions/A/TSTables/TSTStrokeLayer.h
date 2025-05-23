@interface TSTStrokeLayer : TSPObject <NSCopying, NSMutableCopying, TSTStrokeLayerEnumerating> {
    struct vector<TSTStrokeLayerRun, std::allocator<TSTStrokeLayerRun>> { struct TSTStrokeLayerRun *__begin_; struct TSTStrokeLayerRun *__end_; struct __compressed_pair<TSTStrokeLayerRun *, std::allocator<TSTStrokeLayerRun>> { struct TSTStrokeLayerRun *__value_; } __end_cap_; } _strokeRuns;
}

@property (nonatomic) unsigned int columnOrRowIndex;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly) unsigned long long strokeLayerCount;

+ (id)strokeLayer;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (long long)startingIndex;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)enumerateStrokesInRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (void)enumerateStrokesUsingBlock:(id /* block */)a0;
- (void)enumerateWidthsInRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (id)findStrokeAndRangeAtIndex:(long long)a0;
- (struct { double x0; struct TSTSimpleRange { long long x0; unsigned long long x1; } x1; BOOL x2; unsigned long long x3; })findWidthAndRangeAtIndex:(long long)a0;
- (id)initWithContext:(id)a0 columnOrRowIndex:(unsigned int)a1;
- (id)nextStrokeAndRange:(id)a0;
- (struct { double x0; struct TSTSimpleRange { long long x0; unsigned long long x1; } x1; BOOL x2; unsigned long long x3; })nextWidthAndRange:(struct { double x0; struct TSTSimpleRange { long long x0; unsigned long long x1; } x1; BOOL x2; unsigned long long x3; })a0;
- (void)p_appendStroke:(id)a0 inRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a1 order:(int)a2;
- (void)p_flattenStrokeOrder;
- (void)p_insertSpaceAtRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a0;
- (void)p_invalidate;
- (void)p_invalidateRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a0;
- (void)p_mergeStrokeRunsAtPosition:(unsigned long long)a0;
- (void)p_removeRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a0;
- (void)p_setStroke:(id)a0 inRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a1 order:(int)a2;
- (int)startingStrokeOrder;
- (id)strokeLayerAtIndex:(unsigned long long)a0;
- (id)strokeLayerModifiedByInsertingSpaceAt:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a0;
- (id)strokeLayerModifiedByRemovingRangeAt:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a0;

@end
