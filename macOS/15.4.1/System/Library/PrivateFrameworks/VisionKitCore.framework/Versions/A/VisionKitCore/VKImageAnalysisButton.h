@class NSView, NSImage, CALayer, NSVisualEffectView, NSFont;

@interface VKImageAnalysisButton : NSButton

@property (retain, nonatomic) NSView *imageLayerContainer;
@property (retain, nonatomic) CALayer *imageLayer;
@property (retain, nonatomic) NSVisualEffectView *visualEffectView;
@property (retain, nonatomic) NSView *selectedBackgroundView;
@property (retain, nonatomic) NSImage *_image;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly, nonatomic) double backgroundDiameter;
@property (retain, nonatomic) NSFont *customFont;

- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (void)layout;
- (id)accessibilityTitle;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isFlipped;
- (void)mouseDown:(id)a0;
- (void)resetCursorRects;
- (void)updateLayer;
- (BOOL)wantsLayer;
- (void)updateSelectedState;

@end
