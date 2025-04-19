@class NSImage, NSString;

@interface EMIMDFRImageCellView : NSView

@property (copy) NSImage *image;
@property (copy) NSString *stringValue;
@property BOOL enabled;

- (void)dealloc;
- (BOOL)allowsVibrancy;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
