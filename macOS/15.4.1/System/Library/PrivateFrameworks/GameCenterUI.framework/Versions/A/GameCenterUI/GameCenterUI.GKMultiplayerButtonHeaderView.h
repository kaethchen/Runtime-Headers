@interface GameCenterUI.GKMultiplayerButtonHeaderView : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ playerCountLabel;
    void /* unknown type, empty encoding */ iconView;
    void /* unknown type, empty encoding */ cancelButton;
    void /* unknown type, empty encoding */ cancelButtonHandler;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ bottomSeparator;
}

@property (nonatomic, readonly) BOOL flipped;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)cancelPressed:(id)a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (void)applyGame:(id)a0;
- (id)initWithCancelButtonHandler:(id /* block */)a0;
- (id)initWithMinimumValue:(long long)a0 maximumValue:(long long)a1 initialValue:(long long)a2 cancelButtonHandler:(id /* block */)a3;
- (void)setCancelButtonHidden:(BOOL)a0;
- (void)updateCountWithMinPlayers:(long long)a0 maxPlayers:(long long)a1;
- (void)wantsMaterialBackgroundWithScrollOffset:(double)a0;

@end
