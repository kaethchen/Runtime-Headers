@protocol MTLBuffer;

@interface MTLIndirectInstanceAccelerationStructureDescriptor : MTLAccelerationStructureDescriptor {
    BOOL _overriddenInstanceDescriptorStride;
    unsigned long long _instanceDescriptorStride;
}

@property (retain, nonatomic) id<MTLBuffer> instanceDescriptorBuffer;
@property (nonatomic) unsigned long long instanceDescriptorBufferOffset;
@property (nonatomic) unsigned long long instanceDescriptorStride;
@property (nonatomic) unsigned long long maxInstanceCount;
@property (retain, nonatomic) id<MTLBuffer> instanceCountBuffer;
@property (nonatomic) unsigned long long instanceCountBufferOffset;
@property (nonatomic) unsigned long long instanceDescriptorType;
@property (retain, nonatomic) id<MTLBuffer> motionTransformBuffer;
@property (nonatomic) unsigned long long motionTransformBufferOffset;
@property (nonatomic) unsigned long long maxMotionTransformCount;
@property (retain, nonatomic) id<MTLBuffer> motionTransformCountBuffer;
@property (nonatomic) unsigned long long motionTransformCountBufferOffset;
@property (nonatomic) long long instanceTransformationMatrixLayout;
@property (nonatomic) long long motionTransformType;
@property (nonatomic) unsigned long long motionTransformStride;

+ (id)descriptor;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (BOOL)isInstanceDescriptor;

@end
