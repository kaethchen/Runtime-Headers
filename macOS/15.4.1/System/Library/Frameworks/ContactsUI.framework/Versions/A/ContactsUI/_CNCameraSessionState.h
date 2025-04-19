@class AVCaptureSession;

@interface _CNCameraSessionState : NSObject

@property (retain, nonatomic) AVCaptureSession *session;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isConfigured) BOOL configured;

- (void).cxx_destruct;

@end
