@class NSImage, IKPTSlider, IKImageCropView, NSButton;

@interface IKPTCropView : NSView {
    NSImage *_image;
    IKImageCropView *_cropView;
    IKPTSlider *_slider;
    NSButton *_leftButton;
    NSButton *_rightButton;
}

@property (retain, nonatomic) NSImage *image;
@property (readonly, nonatomic) NSImage *croppedImage;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)adjustZoomSliderValue;
- (void)maximizeSize:(id)a0;
- (void)minimizeSize:(id)a0;
- (void)moveSliderWithIncrement:(BOOL)a0;
- (void)zoomSliderAction:(id)a0;

@end
