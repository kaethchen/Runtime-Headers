@class NSArray;
@protocol MTLBuffer, MTLArgumentEncoder;

@interface MPSPolygonAccelerationStructure : MPSAccelerationStructure {
    unsigned int _indexType;
    unsigned long long _polygonType;
    void *_bvh;
    id<MTLArgumentEncoder> _resourceEncoder;
    void *_resourceBufferRange;
}

@property (nonatomic) unsigned long long polygonType;
@property (nonatomic) unsigned long long vertexStride;
@property (nonatomic) unsigned int indexType;
@property (retain, nonatomic) id<MTLBuffer> vertexBuffer;
@property (nonatomic) unsigned long long vertexBufferOffset;
@property (retain, nonatomic) id<MTLBuffer> indexBuffer;
@property (nonatomic) unsigned long long indexBufferOffset;
@property (retain, nonatomic) id<MTLBuffer> maskBuffer;
@property (nonatomic) unsigned long long maskBufferOffset;
@property (nonatomic) unsigned long long polygonCount;
@property (retain, nonatomic) NSArray *polygonBuffers;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDevice:(id)a0;
- (id)boundingBoxBuffer;
- (id)statistics;
- (struct _MPSAxisAlignedBoundingBox { })boundingBox;
- (void)validate;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (unsigned long long)branchingFactor;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (void *)pageBufferRange;
- (void *)bvh;
- (unsigned long long)innerNodeStride;
- (void)rebuild;
- (void)bindResourcesWithEncoder:(id)a0 commandBuffer:(id)a1 retainedResources:(id)a2;
- (id)copyPolygonAccelerationStructureWithZone:(struct _NSZone { } *)a0 device:(id)a1 group:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0 group:(id)a1;
- (void)decodePolygonAccelerationStructureWithCoder:(id)a0;
- (void)encodeRefitToCommandBuffer:(id)a0;
- (void)encodeResourcesToBuffer:(id)a0;
- (id)initWithCoder:(id)a0 group:(id)a1;
- (id)initWithGroup:(id)a0;
- (void *)innerNodeBufferRange;
- (unsigned long long)innerNodeCount;
- (void *)leafNodeBufferRange;
- (unsigned long long)leafNodeCount;
- (id)newResourceEncoder;
- (int)nodeLayout;
- (void *)pageTable0BufferRange;
- (void *)pageTable1BufferRange;
- (void *)primitiveIndexBufferRange;
- (void)rebuildWithCompletionHandler:(id /* block */)a0;
- (int)rootNodeType;
- (void)sharedInitPolygonAccelerationStructure;
- (BOOL)useResourceBuffer;

@end
