@class NSString;

@interface BWStereoVideoCaptureAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (nonatomic) BOOL stereoVideoCaptureEnabled;
@property (nonatomic) int stereoVideoCaptureStatus;
@property (nonatomic) float stereoVideoCaptureDuration;
@property (nonatomic) float percentageOfFramesWithAggressiveLuxLevel;
@property (nonatomic) float percentageOfFramesWithAggressiveFocusDistance;
@property (nonatomic) int videoOrientation;
@property (nonatomic) int cameraPosture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
