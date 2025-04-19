@class AVCaptureDevice;
@protocol CRCodeRedeemerViewDebuggingDelegate, CRCodeRedeemerViewDelegate;

@interface CRCodeRedeemerView : NSView

@property (nonatomic) BOOL isActiveRedeemer;
@property (nonatomic) BOOL isCaptureModeOnly;
@property (nonatomic) BOOL isBatchModeOnly;
@property (nonatomic) BOOL isContinuousCapture;
@property (nonatomic) id<CRCodeRedeemerViewDebuggingDelegate> debuggingDelegate;
@property (nonatomic) long long whiteBalanceMode;
@property (nonatomic) long long focusMode;
@property (nonatomic) long long exposureMode;
@property (nonatomic) long long torchMode;
@property (nonatomic) long long cameraMode;
@property (retain, nonatomic) AVCaptureDevice *inputDevice;
@property (nonatomic) unsigned long long cameraModel;
@property id<CRCodeRedeemerViewDelegate> delegate;
@property (nonatomic) double sessionTimeout;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct CGColor { } *defaultColor;

+ (id)alloc;
+ (BOOL)isCRCodeRedeemerAvailable;

- (void)stopSession;
- (void)startSession;
- (void)captureImage;
- (void)gen:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0;
- (id)generateStringFromDate:(id)a0;
- (void)showCodeRedeemStatus:(id)a0 withColor:(struct CGColor { } *)a1 forDuration:(double)a2 style:(int)a3;
- (void)startSessionWithImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0;

@end
