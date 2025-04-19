@class NSString, NSBezierPath, NSAttributedString, NSFont;

@interface AppStoreKit.ButtonView : AppStoreKit.ClickableView {
    void /* unknown type, empty encoding */ titleColor;
    void /* unknown type, empty encoding */ background;
    void /* unknown type, empty encoding */ actionBlockTrampoline;
}

@property (class, nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } defaultLayoutMargins;
@property (class, nonatomic, readonly) struct CGSize { double x0; double x1; } defaultMinimumSize;
@property (class, nonatomic, readonly) struct CGSize { double x0; double x1; } defaultMaximumSize;
@property (class, nonatomic, readonly) NSFont *defaultFont;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ titleLabelView;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSAttributedString *attributedTitle;
@property (nonatomic, retain) NSFont *titleFont;
@property (nonatomic) void /* unknown type, empty encoding */ includeLastBaselineMeasurement;
@property (nonatomic, copy) id /* block */ actionBlock;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) void /* unknown type, empty encoding */ minimumSize;
@property (nonatomic) void /* unknown type, empty encoding */ maximumSize;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) BOOL hasContent;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } textLayoutFrame;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } backgroundRect;
@property (nonatomic, readonly) NSBezierPath *backgroundPath;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } focusRingMaskBounds;
@property (nonatomic) void /* unknown type, empty encoding */ isImportantForAccessibility;

+ (struct CGSize { double x0; double x1; })estimatedSizeWithFitting:(struct CGSize { double x0; double x1; })a0 title:(id)a1 font:(id)a2 layoutMargins:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a3 minimumSize:(struct CGSize { double x0; double x1; })a4 maximumSize:(struct CGSize { double x0; double x1; })a5 in:(id)a6;
+ (id)makeBorderlessButton;
+ (id)makeRoundedButton;
+ (id)makeTitleLabelView;

- (void).cxx_destruct;
- (void)layout;
- (id)accessibilityChildren;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRole;
- (BOOL)accessibilityShouldUseUniqueId;
- (id)accessibilityTitle;
- (void)drawFocusRingMask;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)sizeToFit;
- (void)didChangeState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 normalBackgroundColor:(id)a1;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (struct CGSize { double x0; double x1; })titleLabelSizeWithFitting:(struct CGSize { double x0; double x1; })a0;
- (void)updateTitleLabelViewAppearance;

@end
