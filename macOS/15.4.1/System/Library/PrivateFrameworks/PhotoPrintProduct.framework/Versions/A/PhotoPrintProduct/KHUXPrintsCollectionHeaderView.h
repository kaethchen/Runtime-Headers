@class UXLabel, NSMutableArray, KHSwitch;

@interface KHUXPrintsCollectionHeaderView : KHUXCollectionHeaderView

@property (nonatomic) struct CGSize { double width; double height; } previousSize;
@property (readonly, nonatomic) NSMutableArray *addedConstraints;
@property (readonly, nonatomic) UXLabel *productFamilyLabel;
@property (readonly, nonatomic) UXLabel *layoutAmountLabel;
@property (readonly, nonatomic) KHSwitch *finishSwitch;
@property (readonly, nonatomic) KHSwitch *borderSwitch;
@property (nonatomic) BOOL titlesHidden;
@property (nonatomic) BOOL finishControlsHidden;
@property (nonatomic) BOOL borderControlsHidden;

+ (BOOL)requiresConstraintBasedLayout;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;

@end
