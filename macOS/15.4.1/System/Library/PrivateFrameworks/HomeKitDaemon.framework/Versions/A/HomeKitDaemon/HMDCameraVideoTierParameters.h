@class HMDCameraVideoTier, NSArray, NSDictionary, NSString, HMDCameraStreamSessionID;

@interface HMDCameraVideoTierParameters : HMFObject <NSSecureCoding, HMFLogging>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *tierOrder;
@property (readonly, nonatomic) NSDictionary *videoTierCombinations;
@property (readonly, nonatomic) HMDCameraStreamSessionID *sessionID;
@property (retain, nonatomic) HMDCameraVideoTier *currentPickedTier;
@property (nonatomic) long long maximumQuality;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)logIdentifier;
- (void)_generateAllVideoTiers:(id)a0;
- (id)initWithSessionID:(id)a0 streamingCapabilities:(id)a1 maximumQuality:(long long)a2;
- (BOOL)pickBestTier;
- (BOOL)pickHigherTier;
- (BOOL)pickLowerTier;
- (void)selectInitialTierWithAspectRatio:(unsigned long long)a0;
- (void)updateTierOrder:(id)a0;
- (void)updateTierParameters:(id)a0 firstPickedParameter:(id)a1;

@end
