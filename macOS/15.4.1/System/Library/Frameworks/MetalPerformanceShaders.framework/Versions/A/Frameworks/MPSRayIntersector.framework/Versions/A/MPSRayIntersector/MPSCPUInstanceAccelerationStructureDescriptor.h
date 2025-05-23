@interface MPSCPUInstanceAccelerationStructureDescriptor : MPSCPUAccelerationStructureDescriptor

@property (nonatomic) void *instanceData;
@property (nonatomic) void *transformData;
@property (nonatomic) unsigned long long transformType;
@property (nonatomic) unsigned long long instanceCount;

- (void)dealloc;
- (id)init;

@end
