@class CALayer, AVCaptureVideoPreviewLayer;

@interface AKSignatureCaptureView_Mac : NSView {
    AVCaptureVideoPreviewLayer *_captureLayer;
    CALayer *_frostingLayer;
    BOOL _frostingLayerShouldBeVisible;
    BOOL _shouldBeMirrored;
}

@property (nonatomic) BOOL mirrored;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)captureSession;
- (void)setCaptureSession:(id)a0;
- (void)_setupLayersWithSession:(id)a0;
- (void)setFrostingLayerVisible:(BOOL)a0;

@end
