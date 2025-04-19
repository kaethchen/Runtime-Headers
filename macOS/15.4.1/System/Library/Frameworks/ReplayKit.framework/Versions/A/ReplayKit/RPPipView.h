@class AVCaptureVideoPreviewLayer;

@interface RPPipView : NSView

@property (retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)addPreviewLayer:(id)a0;

@end
