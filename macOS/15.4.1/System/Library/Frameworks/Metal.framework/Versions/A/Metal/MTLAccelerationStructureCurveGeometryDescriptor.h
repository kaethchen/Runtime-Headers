@protocol MTLBuffer;

@interface MTLAccelerationStructureCurveGeometryDescriptor : MTLAccelerationStructureGeometryDescriptor

@property (nonatomic) long long endCaps;
@property (retain, nonatomic) id<MTLBuffer> controlPointBuffer;
@property (nonatomic) unsigned long long controlPointBufferOffset;
@property (nonatomic) unsigned long long controlPointCount;
@property (nonatomic) unsigned long long controlPointStride;
@property (nonatomic) unsigned long long controlPointFormat;
@property (retain, nonatomic) id<MTLBuffer> radiusBuffer;
@property (nonatomic) unsigned long long radiusBufferOffset;
@property (nonatomic) unsigned long long radiusFormat;
@property (nonatomic) unsigned long long radiusStride;
@property (retain, nonatomic) id<MTLBuffer> indexBuffer;
@property (nonatomic) unsigned long long indexBufferOffset;
@property (nonatomic) unsigned long long indexType;
@property (nonatomic) unsigned long long segmentCount;
@property (nonatomic) unsigned long long segmentControlPointCount;
@property (nonatomic) long long curveType;
@property (nonatomic) long long curveBasis;
@property (nonatomic) long long curveEndCaps;

+ (id)descriptor;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
