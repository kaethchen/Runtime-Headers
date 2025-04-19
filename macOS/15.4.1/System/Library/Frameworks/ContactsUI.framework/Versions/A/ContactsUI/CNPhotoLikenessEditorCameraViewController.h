@class AVCaptureDeviceInput, NSImageView, AVCaptureStillImageOutput, NSString, AVCaptureVideoPreviewLayer, _CNCameraSessionState;

@interface CNPhotoLikenessEditorCameraViewController : NSViewController <CNPhotoLikenessEditorCameraViewDelegate>

@property (retain, nonatomic) _CNCameraSessionState *sessionState;
@property (retain, nonatomic) AVCaptureDeviceInput *videoDeviceInput;
@property (retain, nonatomic) AVCaptureStillImageOutput *stillImageOutput;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (nonatomic) long long setupResult;
@property (nonatomic) unsigned long long screenID;
@property (retain) NSImageView *cameraOff;
@property double viewFinderCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLayout;
- (void)viewWillAppear;
- (void)windowDidChangeScreen:(id)a0;
- (void)cameraView:(id)a0 didHide:(BOOL)a1;
- (void)cameraView:(id)a0 willMoveToWindow:(id)a1;
- (void)nts_initCaptureSessionWithDevice:(id)a0;
- (BOOL)nts_updateVideoInputForDevice:(id)a0;
- (void)setupCaptureSession;
- (void)setupCaptureSessionIfNeededWithCompletion:(id /* block */)a0;
- (void)takePhotoWithCompletionBlock:(id /* block */)a0;
- (void)teardownCaptureSession;
- (id)videoDeviceForScreenOfWindow:(id)a0;

@end
