@interface CalUIEqualWidthsSegmentedControl : NSSegmentedControl

@property BOOL resizeSegmentsOnFrameChange;

- (id)init;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setSegmentLabels:(id)a0;

@end
