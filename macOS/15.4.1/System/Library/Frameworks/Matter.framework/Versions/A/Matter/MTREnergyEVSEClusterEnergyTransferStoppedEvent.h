@class NSNumber;

@interface MTREnergyEVSEClusterEnergyTransferStoppedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *sessionID;
@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSNumber *reason;
@property (copy, nonatomic) NSNumber *energyTransferred;
@property (copy, nonatomic) NSNumber *energyDischarged;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
