@class NSNumber;

@interface MTREnergyEVSEClusterEVNotDetectedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *sessionID;
@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSNumber *sessionDuration;
@property (copy, nonatomic) NSNumber *sessionEnergyCharged;
@property (copy, nonatomic) NSNumber *sessionEnergyDischarged;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
