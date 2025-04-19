@class JUTraitCollection;

@interface GameCenterUI.DirectionalImageView : NSImageView

@property (nonatomic, readonly) JUTraitCollection *jet_traitCollection;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)jet_traitCollectionDidChange:(id)a0;

@end
