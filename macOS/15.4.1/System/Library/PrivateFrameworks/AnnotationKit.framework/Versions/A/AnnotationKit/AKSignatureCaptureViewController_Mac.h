@class AKController, AKSignatureCameraCaptureViewController_Mac, NSView, AKSignatureSidecarCaptureViewController_Mac, AKSignatureGestureCaptureViewController_Mac, NSSegmentedControl;
@protocol AKSignatureCaptureViewControllerDelegate;

@interface AKSignatureCaptureViewController_Mac : NSViewController {
    long long _captureMode;
    AKSignatureCameraCaptureViewController_Mac *_cameraCaptureController;
    AKSignatureGestureCaptureViewController_Mac *_trackpadCaptureController;
    AKSignatureSidecarCaptureViewController_Mac *_sidecarCaptureController;
}

@property (weak) AKController *controller;
@property (retain) NSSegmentedControl *segmentedControl;
@property (retain) NSView *captureViewHolder;
@property (weak) id<AKSignatureCaptureViewControllerDelegate> delegate;

+ (BOOL)isCameraAvailable;
+ (BOOL)isSidecarAvailable;
+ (BOOL)isSignatureCaptureAvailable;
+ (BOOL)isTrackpadAvailable;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)teardown;
- (id)initWithController:(id)a0;
- (void)viewDidLoad;
- (void)_setupCameraCapture;
- (void)_setupSidecarCapture;
- (void)_setupTrackpadCapture;
- (void)_showPreferredCaptureViewMode:(id)a0;
- (void)_switchToCaptureMode:(long long)a0;
- (void)segmentedValueDidChange:(id)a0;

@end
