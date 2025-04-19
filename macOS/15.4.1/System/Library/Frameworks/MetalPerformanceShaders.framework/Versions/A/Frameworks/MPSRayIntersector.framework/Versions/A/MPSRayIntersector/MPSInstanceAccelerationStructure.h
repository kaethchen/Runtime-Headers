@class NSArray;
@protocol MTLBuffer;

@interface MPSInstanceAccelerationStructure : MPSAccelerationStructure {
    unsigned long long _transformType;
    void *_bvh;
}

@property (retain, nonatomic) NSArray *accelerationStructures;
@property (retain, nonatomic) id<MTLBuffer> instanceBuffer;
@property (nonatomic) unsigned long long instanceBufferOffset;
@property (retain, nonatomic) id<MTLBuffer> transformBuffer;
@property (nonatomic) unsigned long long transformBufferOffset;
@property (nonatomic) unsigned long long transformType;
@property (retain, nonatomic) id<MTLBuffer> maskBuffer;
@property (nonatomic) unsigned long long maskBufferOffset;
@property (nonatomic) unsigned long long instanceCount;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDevice:(id)a0;
- (id)statistics;
- (struct _MPSAxisAlignedBoundingBox { })boundingBox;
- (void)validate;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (unsigned long long)branchingFactor;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (void *)pageBufferRange;
- (void)rebuild;
- (void)bindResourcesWithEncoder:(id)a0 commandBuffer:(id)a1 retainedResources:(id)a2;
- (id)copyInstanceAccelerationStructureWithZone:(struct _NSZone { } *)a0 device:(id)a1 group:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0 group:(id)a1;
- (void)decodeInstanceAccelerationStructureWithCoder:(id)a0;
- (void)encodeInstanceOffsetsToBuffer:(id)a0;
- (void)encodeRefitToCommandBuffer:(id)a0;
- (void)encodeResourcesToBuffer:(id)a0;
- (id)initWithCoder:(id)a0 group:(id)a1;
- (id)initWithGroup:(id)a0;
- (void *)innerNodeBufferRange;
- (unsigned long long)innerNodeCount;
- (void *)leafNodeBufferRange;
- (unsigned long long)leafNodeCount;
- (int)nodeLayout;
- (void *)pageTable0BufferRange;
- (void *)pageTable1BufferRange;
- (void)rebuildWithCompletionHandler:(id /* block */)a0;
- (int)rootNodeType;
- (void)sharedInitInstanceAccelerationStructure;
- (BOOL)useResourceBuffer;

@end
