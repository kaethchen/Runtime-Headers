@interface GameCenterUI.TappableArtworkView : GameCenterUI.ArtworkView {
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* unknown type, empty encoding */ tapHandler;
}

@property (nonatomic, copy) id /* block */ tapHandler;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didTap;

@end
