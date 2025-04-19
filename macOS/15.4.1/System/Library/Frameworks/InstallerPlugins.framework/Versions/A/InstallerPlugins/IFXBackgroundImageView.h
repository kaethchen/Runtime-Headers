@class NSImage, NSString, NSImageView;

@interface IFXBackgroundImageView : NSView {
    NSImageView *_imageCell;
}

@property (retain) NSImage *image;
@property unsigned long long imageAlignment;
@property unsigned long long imageScaling;
@property (retain) NSString *imageAccessibilityIdentifier;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
