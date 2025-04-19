@class NSString, AVWeakReference, AVCaptureDataOutputDelegateCallbackHelper, NSObject;
@protocol OS_dispatch_queue, AVCaptureCameraCalibrationDataOutputDelegate;

@interface AVCaptureCameraCalibrationDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {
    AVCaptureDataOutputDelegateCallbackHelper *_delegateCallbackHelper;
    AVWeakReference *_weakReference;
    BOOL _alwaysDiscardsLateCameraCalibrationData;
}

@property (readonly, nonatomic) id<AVCaptureCameraCalibrationDataOutputDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (nonatomic) BOOL alwaysDiscardsLateCameraCalibrationData;
@property (readonly, nonatomic) id delegateOverride;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (void)initialize;

- (void)dealloc;
- (id)init;
- (BOOL)canAddConnection:(id)a0 failureReason:(id *)a1;
- (void)_handleLocalQueueMessage:(struct FigLocalQueueMessage { int x0; union { struct { struct opaqueCMSampleBuffer *x0; } x0; struct { long long x0; struct opaqueCMFormatDescription *x1; } x1; } x1; })a0;
- (void)_handleNotification:(id)a0 payload:(id)a1;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_updateLocalQueue:(struct localQueueOpaque { } *)a0;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (id)connectionMediaTypes;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)setDelegate:(id)a0 callbackQueue:(id)a1;
- (void)setDelegateOverride:(id)a0 delegateOverrideCallbackQueue:(id)a1;

@end
