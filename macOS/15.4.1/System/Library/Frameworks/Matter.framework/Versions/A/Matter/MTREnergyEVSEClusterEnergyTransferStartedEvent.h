@class NSNumber;

@interface MTREnergyEVSEClusterEnergyTransferStartedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *sessionID;
@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSNumber *maximumCurrent;
@property (copy, nonatomic) NSNumber *maximumDischargeCurrent;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
