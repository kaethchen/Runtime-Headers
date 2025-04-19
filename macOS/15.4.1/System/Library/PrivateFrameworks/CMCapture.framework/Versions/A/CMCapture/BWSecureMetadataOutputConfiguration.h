@class NSSet, NSDictionary;

@interface BWSecureMetadataOutputConfiguration : NSObject <NSCopying>

@property (nonatomic) BOOL objectDetectionEnabled;
@property (copy, nonatomic) NSSet *enabledDetectedObjectTypes;
@property (nonatomic) BOOL attentionDetectionEnabled;
@property (nonatomic) BOOL faceOcclusionDetectionEnabled;
@property (nonatomic) float objectDetectionTargetFrameRate;
@property (nonatomic) BOOL faceTrackingEnabled;
@property (nonatomic) int faceTrackingMaxNumTrackedFaces;
@property (nonatomic) float faceTrackingNetworkFailureThresholdMultiplier;
@property (nonatomic) float faceTrackingFailureFieldOfViewModifier;
@property (nonatomic) BOOL eyeReliefStatusDetectionEnabled;
@property (nonatomic) BOOL motionToWakeEnabled;
@property (nonatomic) float motionToWakeTargetFrameRate;
@property (nonatomic) BOOL faceIDReadinessEnabled;
@property (nonatomic) BOOL faceIDReadinessPeriocularEnabled;
@property (nonatomic) BOOL faceIDReadinessAttentionRequired;
@property (readonly, nonatomic) NSDictionary *metadataOutputConfigurationDictionary;
@property (readonly, nonatomic) BOOL isEmpty;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
