@class GKLabel, NSString, NSView, NSLayoutConstraint, NSButton;

@interface GKSectionHeaderView : GKHeaderWithUnderlineView

@property (retain, nonatomic) NSButton *rightButton;
@property (nonatomic) NSLayoutConstraint *showAllRightMarginConstraint;
@property (nonatomic) double showAllRightMargin;
@property (nonatomic) unsigned long long sectionIndex;
@property (nonatomic) long long itemCount;
@property (nonatomic) long long maxItemCount;
@property (nonatomic) BOOL showShowAll;
@property (nonatomic) long long numberToShow;
@property (nonatomic) BOOL allSectionItemsVisible;
@property (retain, nonatomic) GKLabel *leftLabel;
@property (retain, nonatomic) NSString *leftText;
@property (retain, nonatomic) NSString *rightText;
@property (nonatomic) SEL showAllAction;
@property (nonatomic) id rightTarget;
@property (nonatomic) SEL rightAction;
@property (nonatomic) void /* function */ *itemCountFormatter;
@property (nonatomic) BOOL manualItemCount;
@property (nonatomic) long long maxRange;
@property (retain, nonatomic) NSView *backgroundView;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)a0;
- (void)awakeFromNib;
- (void)updateLabel;
- (void)rightButtonTouched:(id)a0;
- (void)updateGutterConstraints;

@end
