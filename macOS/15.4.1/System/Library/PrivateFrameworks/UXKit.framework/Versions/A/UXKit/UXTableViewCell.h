@class NSColor, UXView, _UXButton, NSLayoutConstraint, NSMutableArray, UXLabel;

@interface UXTableViewCell : UXCollectionViewCell {
    _UXButton *_internalAccessoryView;
    UXView *_defaultSelectedBackgroundView;
    UXView *__lineView;
    UXView *_upperSpace;
    UXView *_lowerSpace;
    NSLayoutConstraint *_leadingInsetConstraint;
    NSLayoutConstraint *_trailingInsetConstraint;
    NSLayoutConstraint *_lineHeightConstraint;
}

@property (readonly, nonatomic) _UXButton *internalAccessoryView;
@property (readonly, nonatomic) UXView *defaultSelectedBackgroundView;
@property (readonly, nonatomic) UXView *internalHighlightedBackgroundView;
@property (readonly, nonatomic) UXView *upperSpace;
@property (readonly, nonatomic) UXView *lowerSpace;
@property (retain, nonatomic) NSMutableArray *_addedConstraints;
@property (retain, nonatomic) UXLabel *textLabel;
@property (retain, nonatomic) UXLabel *detailTextLabel;
@property (nonatomic, setter=_setHighlightingForContext:) BOOL _highlightingForContext;
@property (nonatomic, setter=_setSeparatorStyle:) long long _separatorStyle;
@property (nonatomic, setter=_setSeparatorHeight:) double _separatorHeight;
@property (retain, nonatomic, setter=_setSeparatorColor:) NSColor *_separatorColor;
@property (nonatomic) long long style;
@property (retain, nonatomic) UXView *backgroundView;
@property (retain, nonatomic) UXView *selectedBackgroundView;
@property (nonatomic) long long accessoryType;
@property (retain, nonatomic) UXView *accessoryView;
@property (retain, nonatomic) NSColor *highlightColor;
@property (nonatomic) long long selectionStyle;
@property (nonatomic) long long indentationLevel;
@property (nonatomic) double indentationWidth;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } separatorInset;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)a0;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void)updateConstraints;
- (void)viewDidMoveToWindow;
- (void)_updateTextColor;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)_configureInternalAccessoryViewForType:(long long)a0;
- (long long)_detailTextAlignment;

@end
