@class NSNumber;

@interface MTRSampleMEIClusterPingCountEventEvent : NSObject <NSCopying>

@property (copy, nonatomic, getter=getCount) NSNumber *count;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
