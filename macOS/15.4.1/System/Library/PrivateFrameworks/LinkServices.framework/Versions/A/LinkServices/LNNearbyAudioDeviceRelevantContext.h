@class NSString, NSNumber;

@interface LNNearbyAudioDeviceRelevantContext : LNRelevantContext

@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) NSNumber *isPlaying;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDeviceIdentifier:(id)a0 isPlaying:(id)a1;
- (id)analyticsDescription;

@end
