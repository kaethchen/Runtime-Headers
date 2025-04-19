@interface EKUISingleViewGadget : EKUIGadget

@property BOOL hasAddedControlViewConstraints;

- (double)bottomPadding;
- (void)updateConstraints;
- (id)control;
- (void)addSubviewsIfNeeded;
- (double)horizontalPadding;

@end
