@class SLHighlightPillView, NSString, NSMenuItem, SLHighlight, NSLayoutConstraint, NSButton, NSColor;
@protocol SLAttributionViewDelegate;

@interface SLAttributionView : NSView <SLHighlightPillViewDelegate>

@property (retain, nonatomic) SLHighlight *highlight;
@property (nonatomic) BOOL isCollaboration;
@property (retain, nonatomic) SLHighlightPillView *pillView;
@property (nonatomic) long long preferredAlignment;
@property (nonatomic) long long preferredBackgroundStyle;
@property (retain, nonatomic) NSColor *preferredBackgroundColor;
@property (nonatomic) BOOL usesBannerLayout;
@property (retain, nonatomic) NSLayoutConstraint *ourWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *ourHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *pillCenterYConstraint;
@property (retain, nonatomic) NSLayoutConstraint *pillHorizontalAlignmentConstraint;
@property (retain, nonatomic) NSLayoutConstraint *closeButtonXDimensionConstraint;
@property (retain, nonatomic) NSLayoutConstraint *closeButtonVerticalConstraint;
@property (nonatomic) double maxWidthForClippingMarquee;
@property (nonatomic) BOOL marqueeRequired;
@property (readonly, nonatomic) NSButton *closeButton;
@property (weak, nonatomic) id<SLAttributionViewDelegate> delegate;
@property (nonatomic) BOOL enablesMarquee;
@property (retain, nonatomic) NSString *blurEffectGroupName;
@property (retain, nonatomic) NSString *hideMenuItemTitle;
@property (retain, nonatomic) NSMenuItem *supplementalMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)useNewDefaultBackgroundStyle;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (unsigned long long)variant;
- (BOOL)clipsToBounds;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)prepareLayout;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateConstraints;
- (BOOL)wantsUpdateLayer;
- (void)updateInterfaceStyle:(long long)a0;
- (id)initWithHighlight:(id)a0;
- (void)useBannerLayout;
- (id)contextMenuItems;
- (void)updateBackgroundStyle:(long long)a0;
- (void)excludeContextMenuItemsWithIdentifiers:(id)a0;
- (void)prepareLayoutWithMaxWidth:(double)a0;
- (void)updateAlignment:(long long)a0;
- (void)updateBackgroundColor:(id)a0;
- (void)loadCloseButton;
- (long long)_alignmentEnforcingPolicies;
- (id)_backgroundColorEnforcingPolicies;
- (long long)_backgroundStyleEnforcingPolicies;
- (void)_crossPlatformCloseButtonTapped:(id)a0;
- (BOOL)_crossPlatformIsRTL;
- (void)_crossPlatformNeedsLayout;
- (void)_crossPlatformNeedsUpdateConstraints;
- (BOOL)_hasiOSBannerVariant;
- (double)_minHeightForCurrentStyle;
- (void)_sanitizeFrameIfNecessaryForTAMIC;
- (void)_updateMarqueeRequiredIfNecessary;
- (void)_updateMarqueeTargetContentAlignment;
- (id)additionalContextMenuItemsForHighlightPillView:(id)a0;
- (void)feedbackForCloseButtonHit;
- (void)highlightPillViewDidLoadNewRemoteContent:(id)a0;

@end
