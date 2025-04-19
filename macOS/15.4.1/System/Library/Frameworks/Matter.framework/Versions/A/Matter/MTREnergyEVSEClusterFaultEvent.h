@class NSNumber;

@interface MTREnergyEVSEClusterFaultEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *sessionID;
@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSNumber *faultStatePreviousState;
@property (copy, nonatomic) NSNumber *faultStateCurrentState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
