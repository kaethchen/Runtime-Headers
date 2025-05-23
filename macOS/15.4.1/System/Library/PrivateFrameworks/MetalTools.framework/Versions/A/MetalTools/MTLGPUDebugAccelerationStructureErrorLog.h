@class NSString;

@interface MTLGPUDebugAccelerationStructureErrorLog : MTLGPUDebugGPULog

@property (retain, nonatomic) NSString *functionName;
@property (nonatomic) unsigned long long expectedAccelerationStructureType;
@property (nonatomic) unsigned long long actualAccelerationStructureType;

- (void)dealloc;
- (id)description;

@end
