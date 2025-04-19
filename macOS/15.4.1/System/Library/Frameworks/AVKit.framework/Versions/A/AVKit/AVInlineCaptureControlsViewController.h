@class NSView;

@interface AVInlineCaptureControlsViewController : AVCaptureControlsRecordingViewController {
    NSView *_initialFirstResponder;
    double _unmutedVolume;
    id /* block */ _nextKeyViewSetupBlock;
}

- (void).cxx_destruct;
- (id)initialFirstResponder;
- (void)loadView;
- (long long)layoutStyle;
- (id)backgroundBackdropViewMaskImage;
- (struct { double x0; double x1; double x2; double x3; })controlsContentViewMargin;
- (struct CGSize { double x0; double x1; })intrinsicControlsContentViewSize;
- (id)recordButtonPauseImage;
- (id)recordButtonRecordImage;
- (id)recordButtonStopImage;
- (void)setupNextKeyView;

@end
