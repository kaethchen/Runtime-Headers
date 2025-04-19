@class SOLabeledBadgeWindowController;

@interface SOGridElementView : NSView

@property (retain) SOLabeledBadgeWindowController *badgeWindowController;
@property (readonly) unsigned long long badgeNumber;

- (void)dealloc;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_sizeOfGridBadgeGivenNumberOfDisplayedDigits:(long long)a0 badgePresentation:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_centeredBadgeFrameForBadgeSize:(struct CGSize { double x0; double x1; })a0 screenOrigin:(struct CGPoint { double x0; double x1; })a1;
- (void)_setupLabelSubview:(id)a0 forView:(id)a1 badgePresentation:(long long)a2;
- (void)createGridBadgeWithBorder:(BOOL)a0 screenOrigin:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 badgeNumber:(unsigned long long)a1;

@end
