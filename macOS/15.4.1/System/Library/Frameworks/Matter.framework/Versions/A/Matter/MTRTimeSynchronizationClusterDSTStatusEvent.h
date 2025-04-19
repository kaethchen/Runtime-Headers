@class NSNumber;

@interface MTRTimeSynchronizationClusterDSTStatusEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *dstOffsetActive;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
