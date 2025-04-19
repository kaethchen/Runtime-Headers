@interface HMDCoreDataCloudKitOperationLogEvent : HMMLogEvent

@property (readonly) unsigned long long operationType;
@property (readonly) double interval;

- (id)initWithOperationType:(unsigned long long)a0 interval:(double)a1;
- (id)initWithOperationType:(unsigned long long)a0;

@end
