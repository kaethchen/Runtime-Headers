@class NSFont;

@interface GameCenterUI.GKMultiplayerStepperView : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ downButton;
    void /* unknown type, empty encoding */ upButton;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ model;
}

@property (class, nonatomic, readonly) NSFont *stepperButtonSymbolFont;

@property (nonatomic) void /* unknown type, empty encoding */ isStepperHidden;
@property (nonatomic) long long minimumValue;
@property (nonatomic) long long maximumValue;
@property (nonatomic, readonly) BOOL flipped;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (void)didTapDown:(id)a0;
- (void)didTapUp:(id)a0;
- (void)updateStepperViewWithValue:(long long)a0;

@end
