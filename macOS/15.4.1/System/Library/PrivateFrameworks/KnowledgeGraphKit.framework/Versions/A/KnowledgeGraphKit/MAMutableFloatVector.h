@class _TtC17KnowledgeGraphKit27MAMutableFloatVectorWrapper;

@interface MAMutableFloatVector : MAFloatVector

@property (readonly, nonatomic) _TtC17KnowledgeGraphKit27MAMutableFloatVectorWrapper *wrapper;

+ (Class)wrapperClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addVector:(id)a0;
- (void)appendArray:(id)a0;
- (void)appendFloat:(float)a0;
- (void)multiplyByScalar:(float)a0;
- (void)appendVector:(id)a0;
- (void)divideByScalar:(float)a0;
- (void)appendDoubles:(const double *)a0 count:(long long)a1;
- (void)setFloat:(float)a0 atIndex:(long long)a1;
- (void)subtractScalar:(float)a0;
- (void)subtractVector:(id)a0;
- (void)addScalar:(float)a0;
- (void)appendFloats:(const float *)a0 count:(long long)a1;
- (void)elementwiseMultiplyByVector:(id)a0;
- (void)elementwiseRaiseToExponent:(float)a0;

@end
