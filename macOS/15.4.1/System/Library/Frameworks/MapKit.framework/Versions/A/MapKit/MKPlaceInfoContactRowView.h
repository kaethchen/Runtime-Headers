@class MKPlaceSectionHeaderView, CNLabeledValue, NSString, NSArray, NSLayoutConstraint, _MKUILabel, NSColor;

@interface MKPlaceInfoContactRowView : MKPlaceSectionRowView <NSGestureRecognizerDelegate> {
    MKPlaceSectionHeaderView *_headerView;
    NSLayoutConstraint *_topToTitleConstraint;
    NSLayoutConstraint *_topToIconConstraint;
    NSLayoutConstraint *_titleToValueConstraint;
    NSLayoutConstraint *_valueToTrailingViewConstraint;
    NSArray *_iconConstraints;
    NSArray *_titleConstraints;
    BOOL _isInRightMouseDownEvent;
    BOOL _textIsSelectable;
}

@property (readonly, nonatomic) _MKUILabel *titleLabel;
@property (readonly, nonatomic) _MKUILabel *valueLabel;
@property (retain, nonatomic) NSLayoutConstraint *valueToBottomConstraint;
@property (retain, nonatomic) NSColor *labelColor;
@property (retain, nonatomic) CNLabeledValue *labeledValue;
@property (copy, nonatomic) id /* block */ iconSelectedBlock;
@property (nonatomic, getter=isTextSelectable) BOOL textIsSelectable;
@property (readonly, nonatomic) int analyticsTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)icon;

- (void).cxx_destruct;
- (id)_icon;
- (void)rightMouseDown:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)_contentSizeDidChange;
- (id)_iconAccessibilityLabel;
- (Class)_labeledValueExpectedValueType;
- (void)_menuDone;
- (id)_valueString;

@end
