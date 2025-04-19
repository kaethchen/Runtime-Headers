@class NSColor, NSView;

@interface LUI2VibrancyEffectView : NSView {
    NSView *_contentView;
}

@property (nonatomic, readonly) NSColor *tintColor;
@property (nonatomic) BOOL wantsLayer;
@property (retain, nonatomic) NSView *contentView;
@property (readonly, nonatomic) NSColor *tintColor;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)makeBackingLayer;

@end
