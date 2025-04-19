@class NSImageView, NSTextField, NSImage, NSString, NSVisualEffectView, NSStackView, NSTimer;

@interface AVStatusOverlayView : NSView {
    NSVisualEffectView *_backgroundView;
    NSStackView *_stackView;
    NSImageView *_imageView;
    NSTextField *_textField;
    NSImage *_persistentImage;
    NSString *_persistentString;
    NSTimer *_transientTimeoutTimer;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)_validateString:(id)a0;
- (void)clearPersistentImageAndString;
- (void)clearTransientImageAndString;
- (void)setPersistentImage:(id)a0 string:(id)a1;
- (void)setTransientImage:(id)a0 string:(id)a1;

@end
