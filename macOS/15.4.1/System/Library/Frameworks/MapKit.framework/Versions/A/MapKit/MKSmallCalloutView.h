@class _MKSmallCalloutPassthroughButton, NSString, NSView, NSArray, NSLayoutConstraint, _MKUILabel, NSLayoutGuide;
@protocol _MKCalloutAccessoryView;

@interface MKSmallCalloutView : NSView {
    _MKUILabel *_titleLabel;
    _MKUILabel *_subtitleLabel;
    NSView<_MKCalloutAccessoryView> *_leftView;
    NSView<_MKCalloutAccessoryView> *_rightView;
    NSView<_MKCalloutAccessoryView> *_externalLeftView;
    NSView<_MKCalloutAccessoryView> *_externalRightView;
    NSView<_MKCalloutAccessoryView> *_externalDetailView;
    NSView<_MKCalloutAccessoryView> *_detailView;
    BOOL _shouldPositionTitleForMapsTransitionMovingSideways;
    _MKSmallCalloutPassthroughButton *_maskedContainerView;
    NSView *_unmaskedContainerView;
    struct { double margin; double cornerRadius; double arrowBase; double arrowHeight; BOOL useRadialSmoothing; union { struct { double arrowBaseRadius; double arrowRadius; } radialSmoothing; struct { double arrowSmoothing; double arrowPointFactor; } nonRadialSmoothing; } ; BOOL alignDetailViewBaseline; BOOL scaleVerticalPaddingForDynamicType; struct NSEdgeInsets { double top; double left; double bottom; double right; } padding; } _metrics;
    BOOL _needsPreferredContentSizeUpdate;
    NSLayoutConstraint *_minWidthConstraint;
    NSLayoutConstraint *_maxWidthConstraint;
    NSLayoutConstraint *_unmaskedContainerLeadingConstraint;
    NSLayoutConstraint *_unmaskedContainerTrailingConstraint;
    NSArray *_titleLabelConstraints;
    NSLayoutConstraint *_titleBaselineFromTopMinimumConstraint;
    NSLayoutConstraint *_titleBaselineFromTopConstraint;
    NSLayoutConstraint *_titleMinimumBaselineToBottomConstraint;
    NSLayoutGuide *_centerContentLeadingGuide;
    NSLayoutGuide *_centerContentTrailingGuide;
    NSLayoutConstraint *_leftViewMinCalloutWidthConstraint;
    NSLayoutConstraint *_leftViewHorizontalPositionConstraint;
    NSLayoutConstraint *_leftViewTopSpacerBottomConstraint;
    NSLayoutConstraint *_leftViewCenterContentMarginConstraint;
    NSLayoutGuide *_leftViewTopSpacer;
    NSLayoutGuide *_leftViewLeftSpacer;
    NSLayoutConstraint *_rightViewHorizontalPositionConstraint;
    NSLayoutConstraint *_rightViewTopSpacerBottomConstraint;
    NSLayoutConstraint *_rightViewCenterContentMarginConstraint;
    NSLayoutGuide *_rightViewTopSpacer;
    NSLayoutGuide *_rightViewRightSpacer;
    NSLayoutConstraint *_detailViewMinTopConstraint;
    NSLayoutConstraint *_detailViewBottomConstraint;
    NSLayoutConstraint *_detailViewTrailingConstraint;
    NSLayoutGuide *_layoutMarginsGuide;
    NSLayoutConstraint *_layoutMarginsLeftConstraint;
    NSLayoutConstraint *_layoutMarginsRightConstraint;
    NSLayoutConstraint *_layoutMarginsTopConstraint;
    NSLayoutConstraint *_layoutMarginsBottomConstraint;
}

@property (copy, nonatomic) NSString *calloutTitle;
@property (copy, nonatomic) NSString *calloutSubtitle;
@property (retain, nonatomic) NSView *leftView;
@property (retain, nonatomic) NSView *rightView;
@property (retain, nonatomic) NSView *detailView;
@property (readonly, nonatomic) struct CGSize { double width; double height; } preferredContentSize;
@property (nonatomic) double minimumWidth;
@property (nonatomic) double maximumWidth;
@property (readonly, nonatomic) NSView *titlesContainerView;
@property (nonatomic) BOOL parallaxEnabled;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } layoutMargins;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutMarginsGuide;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_setNeedsUpdatePreferredContentSize;
- (void)_updatePreferredContentSize;
- (void)_updatePreferredContentSizeIfNeeded;
- (BOOL)canDisplayCompleteTitleWhenExpanded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 metrics:(struct { double x0; double x1; double x2; double x3; BOOL x4; union { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } x5; BOOL x6; BOOL x7; struct NSEdgeInsets { double x0; double x1; double x2; double x3; } x8; })a1;
- (void)setCalloutSubtitle:(id)a0 animated:(BOOL)a1;
- (void)setDetailView:(id)a0 animated:(BOOL)a1;
- (void)setLeftView:(id)a0 animated:(BOOL)a1;
- (void)setRightView:(id)a0 animated:(BOOL)a1;

@end
