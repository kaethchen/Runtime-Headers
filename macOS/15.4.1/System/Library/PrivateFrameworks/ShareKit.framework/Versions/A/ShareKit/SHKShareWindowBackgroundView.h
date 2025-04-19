@class NSTextField, NSView, NSTextView, NSColor;

@interface SHKShareWindowBackgroundView : NSView {
    NSTextView *_messageTextView;
    NSTextField *_charactersCountTextField;
    NSView *_partsSeparatorTopView;
    NSView *_partsSeparatorBottomView;
    BOOL _hasLinesOfNonDefaultHeight;
    NSColor *_backgroundFillColor;
}

@property int textureStyle;
@property (copy) NSColor *backgroundFillColor;
@property (nonatomic) BOOL doNotDrawThirdSeparationLine;

+ (id)defaultAnimationForKey:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)drawGrid;
- (id)SHKBackgroundFillColor;
- (void)_beginClip;
- (id)_bezierPath;
- (void)_endClip;
- (void)drawBevel;
- (void)drawBevelInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawHorizontalSeparationLineAtHeight:(double)a0;
- (void)drawHorizontalSeparationLineAtHeight:(double)a0 horizontalPadding:(double)a1;
- (void)drawScalableImage:(id)a0 scaleTopLeft:(struct CGPoint { double x0; double x1; })a1 scaleBottomRight:(struct CGPoint { double x0; double x1; })a2 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)drawTexture;

@end
