@class PMSupplyBar, NSImageView, NSTextField;

@interface PMSupplyBarView : NSView

@property (weak) NSTextField *supplyNameField;
@property (weak) NSImageView *supplyLevelLowImageView;
@property (weak) PMSupplyBar *supplyBar;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
