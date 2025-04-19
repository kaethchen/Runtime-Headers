@class NSTextField, ICCollapsibleImageView, ICCollapsibleContainerView, ICAutoCompleteSuggestionsItem, NSLayoutConstraint;

@interface ICAutoCompleteSuggestionsTableCellView : NSTableCellView

@property (weak, nonatomic) NSTextField *label;
@property (weak, nonatomic) ICCollapsibleImageView *iconView;
@property (weak, nonatomic) ICCollapsibleContainerView *collapsibleRightLabelContainer;
@property (weak, nonatomic) NSTextField *rightLabel;
@property (weak, nonatomic) NSLayoutConstraint *rightLabelMinWidthConstraint;
@property (retain, nonatomic) ICAutoCompleteSuggestionsItem *item;
@property (nonatomic) double rightLabelWidth;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)allowsVibrancy;
- (void)awakeFromNib;
- (BOOL)isSelectable;
- (BOOL)wantsLayer;
- (void)updateToMatchItem:(id)a0;

@end
