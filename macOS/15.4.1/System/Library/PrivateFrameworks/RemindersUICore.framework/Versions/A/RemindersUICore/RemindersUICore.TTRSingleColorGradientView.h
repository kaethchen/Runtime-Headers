@interface RemindersUICore.TTRSingleColorGradientView : NSView {
    void /* unknown type, empty encoding */ color;
    void /* unknown type, empty encoding */ hasGradient;
    void /* unknown type, empty encoding */ wantsVibrancy;
    void /* unknown type, empty encoding */ lighteningGradient;
    void /* unknown type, empty encoding */ lightenBlendMode;
    void /* unknown type, empty encoding */ darkeningGradient;
    void /* unknown type, empty encoding */ darkenBlendMode;
}

@property (nonatomic, readonly) BOOL flipped;
@property (nonatomic, readonly) BOOL allowsVibrancy;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;

@end
