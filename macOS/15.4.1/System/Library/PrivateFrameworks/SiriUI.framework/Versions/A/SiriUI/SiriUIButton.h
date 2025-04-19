@class NSColor;

@interface SiriUIButton : NSButton {
    NSColor *_titleColor;
    NSColor *_highligtTitleColor;
    double highlightAlpha;
}

@property (retain) NSColor *defaultBackgroundColor;
@property (retain) NSColor *hoverBackgroundColor;
@property (nonatomic, setter=setIsHovered:) BOOL isHovered;
@property struct NSEdgeInsets { double x0; double x1; double x2; double x3; } imageEdgeInsets;
@property struct NSEdgeInsets { double x0; double x1; double x2; double x3; } titleEdgeInsets;
@property (nonatomic) BOOL highlightsOnHover;

+ (Class)cellClass;
+ (id)buttonWithImageTemplate:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setTitle:(id)a0;
- (void)_commonInit;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTitleColor:(id)a0;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)setTarget:(id)a0 action:(SEL)a1;
- (void)setHighlightTitleColor:(id)a0;

@end
