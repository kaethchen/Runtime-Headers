@class NSTextField;

@interface _KHProductSubgroupMenuView : NSView {
    BOOL _ignoreMenuItemHighlight;
}

@property (readonly, nonatomic) NSTextField *stateLabel;
@property (readonly, nonatomic) NSTextField *titleLabel;
@property (readonly, nonatomic) NSTextField *detailLabel;

+ (id)newLabel;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewWillMoveToWindow:(id)a0;

@end
