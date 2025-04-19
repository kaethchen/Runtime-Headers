@class NSString;

@interface PXDebug : NSView

@property (nonatomic) struct CGImage { } *previewImage;
@property (nonatomic) struct CGColor { } *backgroundColor;
@property (copy, nonatomic) NSString *name;

- (id)description;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)__dbg_formattedDisplayName;

@end
