@interface GameCenterUI.AchievementBadge : NSView {
    void /* unknown type, empty encoding */ theme;
    void /* unknown type, empty encoding */ metrics;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ $__lazy_storage_$_progressNumberFont;
    void /* unknown type, empty encoding */ $__lazy_storage_$_progressPercentageFont;
    void /* unknown type, empty encoding */ $__lazy_storage_$_numberFormatter;
    void /* unknown type, empty encoding */ status;
    void /* unknown type, empty encoding */ backgroundGradient;
    void /* unknown type, empty encoding */ image;
    void /* unknown type, empty encoding */ innerShadow;
    void /* unknown type, empty encoding */ progressBarLayer;
    void /* unknown type, empty encoding */ iconImageView;
    void /* unknown type, empty encoding */ progressLabel;
    void /* unknown type, empty encoding */ outerFoilLabel;
    void /* unknown type, empty encoding */ outerFoilRing;
    void /* unknown type, empty encoding */ innerFoil;
}

@property (nonatomic, readonly) BOOL flipped;
@property (nonatomic, readonly) BOOL wantsUpdateLayer;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)updateLayer;

@end
