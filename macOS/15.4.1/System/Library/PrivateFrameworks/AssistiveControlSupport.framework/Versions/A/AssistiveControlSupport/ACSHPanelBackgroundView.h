@class NSColor;

@interface ACSHPanelBackgroundView : ACSHView {
    struct CGImage { } *__cachedImage;
}

@property (readonly, nonatomic) struct CGImage { } *_image;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSColor *borderColor;

- (void)dealloc;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (void)viewDidMoveToWindow;
- (BOOL)wantsUpdateLayer;

@end
