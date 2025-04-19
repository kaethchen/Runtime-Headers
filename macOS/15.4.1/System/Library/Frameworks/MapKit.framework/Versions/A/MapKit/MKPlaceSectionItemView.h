@interface MKPlaceSectionItemView : MKViewWithHairline

@property (nonatomic, getter=isHairlineFullWidth) BOOL fullWidthHairline;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)_mapkit_layoutMarginsDidChange;
- (void)_updateHairlineInsets;
- (void)infoCardThemeChanged;

@end
