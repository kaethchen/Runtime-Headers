@class NSNumber;

@interface MTRDoorLockClusterDoorStateChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *doorState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
