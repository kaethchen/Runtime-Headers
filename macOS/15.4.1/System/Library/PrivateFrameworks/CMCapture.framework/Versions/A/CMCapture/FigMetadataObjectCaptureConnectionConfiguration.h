@class NSArray;

@interface FigMetadataObjectCaptureConnectionConfiguration : FigCaptureConnectionConfiguration

@property (copy, nonatomic) NSArray *metadataIdentifiers;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } metadataRectOfInterest;
@property (nonatomic) int faceTrackingMaxFaces;
@property (nonatomic) BOOL faceTrackingUsesFaceRecognition;
@property (nonatomic) BOOL faceTrackingPlusEnabled;
@property (nonatomic) float faceTrackingNetworkFailureThresholdMultiplier;
@property (nonatomic) float faceTrackingFailureFieldOfViewModifier;
@property (nonatomic) BOOL attentionDetectionEnabled;
@property (nonatomic) BOOL periocularForFaceIDReadinessEnabled;
@property (nonatomic) BOOL attentionForFaceIDReadinessRequired;
@property (nonatomic) BOOL faceOcclusionDetectionEnabled;
@property (nonatomic) float motionToWakeTargetFrameRate;
@property (nonatomic) float objectDetectionTargetFrameRate;
@property (nonatomic) BOOL attachMetadataToVideoBuffers;
@property (nonatomic) BOOL emitsEmptyObjectDetectionMetadata;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;

@end
