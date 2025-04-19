@class NSNumber;

@interface BKFaceDetectStateInfo : NSObject

@property (readonly, nonatomic) BOOL faceDetected;
@property (readonly, nonatomic) NSNumber *pitch;
@property (readonly, nonatomic) NSNumber *yaw;
@property (readonly, nonatomic) NSNumber *roll;
@property (readonly, nonatomic) NSNumber *distance;
@property (readonly, nonatomic) unsigned long long orientation;
@property (readonly, nonatomic) unsigned long long eyeReliefStatus;
@property (readonly, nonatomic) NSNumber *isCameraObstructed;
@property (readonly, nonatomic) NSNumber *cameraObstructionScore;
@property (readonly, nonatomic) NSNumber *frameNumber;
@property (readonly, nonatomic) NSNumber *attentionScore;
@property (readonly, nonatomic) NSNumber *faceDetectionScore;
@property (readonly, nonatomic) BOOL tooCloseToCamera;
@property (readonly, nonatomic) BOOL tooFarFromCamera;
@property (readonly, nonatomic) BOOL multipleFaces;
@property (readonly, nonatomic) BOOL flare;
@property (readonly, nonatomic) BOOL occlusion;
@property (readonly, nonatomic) BOOL partiallyOutOfView;
@property (readonly, nonatomic) BOOL unsupportedGlasses;
@property (readonly, nonatomic) BOOL glassesMismatch;

- (void).cxx_destruct;

@end
