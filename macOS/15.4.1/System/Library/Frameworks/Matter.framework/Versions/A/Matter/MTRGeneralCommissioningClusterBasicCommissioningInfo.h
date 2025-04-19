@class NSNumber;

@interface MTRGeneralCommissioningClusterBasicCommissioningInfo : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *failSafeExpiryLengthSeconds;
@property (copy, nonatomic) NSNumber *maxCumulativeFailsafeSeconds;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
