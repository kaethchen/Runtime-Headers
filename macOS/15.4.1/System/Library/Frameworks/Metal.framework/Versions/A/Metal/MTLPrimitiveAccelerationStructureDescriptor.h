@class NSArray;

@interface MTLPrimitiveAccelerationStructureDescriptor : MTLAccelerationStructureDescriptor

@property (retain, nonatomic) NSArray *geometryDescriptors;
@property (nonatomic) unsigned int motionStartBorderMode;
@property (nonatomic) unsigned int motionEndBorderMode;
@property (nonatomic) float motionStartTime;
@property (nonatomic) float motionEndTime;
@property (nonatomic) unsigned long long motionKeyframeCount;

+ (id)descriptor;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
