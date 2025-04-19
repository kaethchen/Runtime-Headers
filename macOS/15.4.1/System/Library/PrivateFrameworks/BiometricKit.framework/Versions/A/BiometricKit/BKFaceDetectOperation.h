@protocol BKFaceDetectOperationDelegate;

@interface BKFaceDetectOperation : BKPresenceDetectOperation

@property (nonatomic) long long mode;
@property (nonatomic) double timeout;
@property (nonatomic) BOOL highPriority;
@property (nonatomic) BOOL eyeRelief;
@property (nonatomic) BOOL motionDetect;
@property (weak, nonatomic) id<BKFaceDetectOperationDelegate> delegate;

@end
