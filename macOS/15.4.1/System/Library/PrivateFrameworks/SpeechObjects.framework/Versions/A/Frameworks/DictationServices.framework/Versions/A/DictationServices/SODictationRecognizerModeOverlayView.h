@class NSString;

@interface SODictationRecognizerModeOverlayView : NSView

@property (retain) NSString *imageName;

+ (id)_imageBundle;
+ (struct CGSize { double x0; double x1; })sizeOfImageWithName:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImageName:(id)a0;
- (id)tintedImage:(id)a0 tint:(id)a1;

@end
