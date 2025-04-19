@class NSButton;

@interface GKSegmentWithAddButtonSectionHeaderView : GKSegmentedSectionHeaderView

@property (retain, nonatomic) NSButton *addButton;
@property (nonatomic) id addButtonTarget;
@property (nonatomic) SEL addButtonAction;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
