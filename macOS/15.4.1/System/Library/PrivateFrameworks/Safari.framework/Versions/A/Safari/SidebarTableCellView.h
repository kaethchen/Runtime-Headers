@protocol SidebarTableCellViewDelegate;

@interface SidebarTableCellView : RolloverActionButtonTableCellView

@property (weak, nonatomic) id<SidebarTableCellViewDelegate> delegate;
@property (readonly, nonatomic) double calculatedHeightOfRow;
@property (nonatomic, getter=isOffscreenCellForMeasurements) BOOL offscreenCellForMeasurements;

+ (double)fixedHeightOfRow;
+ (BOOL)hasVariableHeight;

- (id)initWithCoder:(id)a0;
- (id)accessibilityContents;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRole;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (BOOL)isFlipped;
- (void)setAccessibilityContents:(id)a0;
- (void)setAccessibilityLabel:(id)a0;
- (double)_actionButtonHorizontalMargin;
- (double)_actionButtonTopMargin;
- (double)_actionButtonYOffsetWhenVerticallyCentered;

@end
