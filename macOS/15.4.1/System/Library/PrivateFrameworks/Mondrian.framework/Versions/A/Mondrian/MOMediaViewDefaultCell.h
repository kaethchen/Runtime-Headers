@class NSString, MOMediaViewCellThumbnailView, NSView, CALayer;

@interface MOMediaViewDefaultCell : MOMediaViewCell <MOMediaViewCellThumbnailViewDelegate> {
    BOOL _thumbnailViewImageInitialized;
    double _thumbnailCornerRadiusForLayout;
    struct CGSize { double width; double height; } _thumbnailSizeForLayout;
    unsigned long long _thumbnailVersion;
    CALayer *_selectionLayer;
    CALayer *_selectionInterspaceLayer;
    CALayer *_modalSelectionDimmingLayer;
    NSView *_modalSelectionIndicatorView;
}

@property (readonly, nonatomic) MOMediaViewCellThumbnailView *thumbnailView;
@property (readonly, nonatomic) BOOL wantsTransparentThumbnailBackground;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } thumbnailViewFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } effectiveThumbnailViewFrame;
@property (readonly, nonatomic) CALayer *thumbnailCornerLayer;
@property (nonatomic) double thumbnailCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearColorCaches;
+ (struct CGColor { } *)modalSelectionDimmingColor;
+ (BOOL)supportsSelectionAnimation;
+ (id)thumbnailContentsGravity;
+ (struct CGColor { } *)thumbnailEmptyColor;
+ (id)thumbnailEmptyImage;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (BOOL)_isEmpty;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityRole;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0;
- (id)thumbnailImage;
- (void)viewDidChangeEffectiveAppearance;
- (BOOL)wantsUpdateLayer;
- (unsigned long long)thumbnailVersion;
- (double)selectionBorderWidth;
- (id)selectionLayer;
- (void)setSelectionBorderShouldUsePrimaryColor:(BOOL)a0;
- (void)_updateSelectionBorderColor;
- (void)updateWithMediaItem:(id)a0;
- (void)_layoutModalSelectionIfNeeded;
- (void)_layoutSelectionLayerIfNeeded;
- (void)_setMediaView:(id)a0;
- (void)_setNeedsUpdateColors;
- (void)_updateModalSelection:(BOOL)a0;
- (void)_updateModalState;
- (id)accessibilityIdentifierForMediaViewCellThumbnailView:(id)a0;
- (id)accessibilityLabelForMediaViewCellThumbnailView:(id)a0;
- (id)accessibilityRoleDescriptionForMediaViewCellThumbnailView:(id)a0;
- (void)indicateSelectionState:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)mediaViewCellThumbnailViewWantsTransparentThumbnailBackground:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mouseTrackingBounds;
- (id)newModalSelectionIndicatorView;
- (void)prepareForRecycling;
- (struct CGColor { } *)primarySelectionBorderColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForModalSelectionIndicatorOfSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGColor { } *)secondarySelectionBorderColor;
- (id)selectionBorderAnchorView;
- (double)selectionBorderCornerRadius;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionBorderFrame;
- (struct CGColor { } *)selectionBorderInterspaceColor;
- (double)selectionBorderInterspaceWidth;
- (void)setThumbnailContentsGravity:(id)a0;
- (void)setThumbnailImage:(id)a0 usingNearestInterpolation:(BOOL)a1 animated:(BOOL)a2;
- (struct CGColor { } *)thumbnailEmptyColorForMediaViewCellThumbnailView:(id)a0;
- (id)thumbnailEmptyImageForMediaViewCellThumbnailView:(id)a0;
- (BOOL)useNearestInterpolation;

@end
