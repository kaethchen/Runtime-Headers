@class NSImageView, NSImage, NSProgressIndicator, NSButton;

@interface NSImagePreview : NSView

@property (retain, nonatomic) NSImageView *imageView;
@property (retain, nonatomic) NSProgressIndicator *spinner;
@property (retain, nonatomic) NSButton *openBtn;
@property (retain, nonatomic) NSImage *localImageCopy;
@property (retain, nonatomic) NSImage *image;

+ (id)previewForImage:(id)a0;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)viewDidUnhide;
- (void)viewWillMoveToWindow:(id)a0;
- (void)_windowShown:(id)a0;
- (void)kickOffLocalImageLoad;
- (void)openAsPNG:(id)a0;
- (void)pinFromImageSize:(id)a0;
- (void)rawAssignLocalImage:(id)a0;

@end
