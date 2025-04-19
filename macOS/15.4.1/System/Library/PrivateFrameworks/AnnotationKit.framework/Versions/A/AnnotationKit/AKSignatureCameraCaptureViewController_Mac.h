@class NSTextField, NSView, AKSignatureCaptureView_Mac, AKSignatureDescriptionViewController_Mac, NSString, AVCaptureVideoDataOutput, NSError, AVCaptureSession, AKSignature, NSButton, AKSignatureOutputView_Mac, AVCaptureDeviceInput;
@protocol AKSignatureDetectorProtocol;

@interface AKSignatureCameraCaptureViewController_Mac : NSViewController <AKSignatureDescriptionDelegate, AVCaptureVideoDataOutputSampleBufferDelegate> {
    AVCaptureSession *_captureSession;
    AVCaptureDeviceInput *_captureDeviceInput;
    AVCaptureVideoDataOutput *_captureVideoDataOutput;
    id _captureErrorObserver;
    id<AKSignatureDetectorProtocol> _detector;
    AKSignature *_lastSignature;
    AKSignature *_acceptedSignature;
    NSError *_captureError;
    NSString *_signatureDescription;
}

@property (retain) NSButton *cancelButton;
@property (retain) NSButton *clearButton;
@property (retain) NSButton *doneButton;
@property (retain) NSTextField *topInstructionsTextField;
@property (retain) AKSignatureCaptureView_Mac *captureView;
@property (retain) AKSignatureOutputView_Mac *outputView;
@property (retain) NSView *captureContainerView;
@property (retain) AKSignatureDescriptionViewController_Mac *signatureDescriptionViewController;
@property BOOL captureViewMirrored;
@property BOOL persistSignature;
@property (copy) id /* block */ actionBlock;
@property (copy) id /* block */ appearanceBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)captureDeviceIsAvailable;
+ (id)defaultCaptureDeviceName;
+ (void)presentError:(id)a0 inParentWindow:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)cancel:(id)a0;
- (void)clear:(id)a0;
- (void)done:(id)a0;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)setCurrentSignatureDescription:(id)a0;
- (BOOL)_startCaptureSession:(id *)a0;
- (struct { int x0; int x1; })bestDimensionsForCameraInputDevice:(id)a0;
- (void)closeCapturePanel;
- (void)descriptionViewController:(id)a0 willHide:(BOOL)a1;
- (void)setupCaptureSizeForCameraInputDevice:(id)a0;
- (void)startCaptureSession;
- (void)stopCaptureSession;

@end
