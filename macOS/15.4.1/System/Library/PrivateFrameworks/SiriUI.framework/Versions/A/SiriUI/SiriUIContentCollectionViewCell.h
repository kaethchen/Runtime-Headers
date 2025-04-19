@class NSTextField, NSView, SiriUIKeyline, SiriUITintedImageView, NSLayoutConstraint, NSMutableArray;
@protocol SiriUIAccessibilityDelegate;

@interface SiriUIContentCollectionViewCell : SiriUIClearBackgroundCell {
    SiriUITintedImageView *_chevronView;
    BOOL _hasSetUpSubviewConstraints;
    BOOL _hasSetupStaticSubviewConstraints;
    NSLayoutConstraint *leftChevronWidthConstraint;
    NSLayoutConstraint *rightChevronWidthConstraint;
    NSMutableArray *_subviewConstraints;
}

@property (nonatomic) BOOL accessibilityIsIgnored;
@property (nonatomic) BOOL accessibilityIsOverridden;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } textAndAccessoryInsets;
@property (retain, nonatomic) NSView *accessoryView;
@property (retain, nonatomic) NSTextField *textLabel;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } textOffset;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } accessoryOffset;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } chevronOffset;
@property (readonly, nonatomic) double chevronLeadingMargin;
@property (readonly, nonatomic) double chevronTrailingMargin;
@property (readonly, nonatomic) SiriUIKeyline *keyline;
@property (nonatomic) long long keylineType;
@property (nonatomic) BOOL hasChevron;
@property (weak, nonatomic) id<SiriUIAccessibilityDelegate> accessibilityDelegate;

+ (id)reuseIdentifier;
+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })defaultInsets;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)layout;
- (id)accessibilityActionNames;
- (id)accessibilityLabel;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityRole;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (void)setAccessibilityElement:(BOOL)a0;
- (void)updateConstraints;
- (void)_updateSubviewConstraints;
- (id)accessibilitySynthesizeMouseEventWithType:(unsigned long long)a0 clickCount:(long long)a1;
- (void)commitInit;
- (void)setChevronColor:(id)a0;
- (void)setNeedsUpdateSubviewConstraints;

@end
