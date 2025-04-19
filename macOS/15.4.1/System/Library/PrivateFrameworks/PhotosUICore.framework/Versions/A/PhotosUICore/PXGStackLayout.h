@class NSString, NSSet;
@protocol PXGSublayoutFaultingDelegate, PXGStackLayoutSublayoutAlignmentDelegate;

@interface PXGStackLayout : PXGLayout <PXGDataSourceDrivenLayout> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _postUpdateFlags;
    BOOL _isUpdatingSublayouts;
    struct { double x0; double x1; double x2; } *_sublayoutOriginsBeforeUpdate;
    NSSet *_sublayoutsToAlignToVisibleTopEdge;
    struct { BOOL shouldAlignSublayoutToVisibleTopEdge; BOOL shouldAlignSublayoutToVisibleBottomEdge; } _sublayoutAlignmentDelegateRespondsTo;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _flexibleRegionInsets;
}

@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } faultInOutsets;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } faultOutOutsets;
@property (nonatomic) long long axis;
@property (nonatomic) double interlayoutSpacing;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (weak, nonatomic) id<PXGStackLayoutSublayoutAlignmentDelegate> sublayoutAlignmentDelegate;
@property (weak, nonatomic) id<PXGSublayoutFaultingDelegate> sublayoutFaultingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)update;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })axFrame;
- (void)didUpdate;
- (void)sublayoutDidChangeLastBaseline:(id)a0;
- (void)_invalidateEstimatedSublayoutContentSizes;
- (void)_invalidateFirstFloatingLayout;
- (void)_updateFirstFloatingLayout;
- (void)_updateInterlayoutSpacing;
- (void)_updateSublayouts;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })additionalSafeAreaInsetsForSublayout:(id)a0;
- (BOOL)definesContextForPointReferences;
- (void)didAddSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (void)displayScaleDidChange;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })flexibleRegionInsets;
- (void)insertSublayoutProvider:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)invalidateAdditionalSafeAreaInsets;
- (void)referenceDepthDidChange;
- (void)referenceSizeDidChange;
- (void)scrollSpeedRegimeDidChange;
- (long long)scrollableAxis;
- (void)sublayoutDidChangeContentSize:(id)a0;
- (void)sublayoutNeedsUpdate:(id)a0;
- (void)viewEnvironmentDidChange;
- (void)visibleRectDidChange;
- (void)willRemoveSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (void)willUpdate;
- (struct CGSize { double x0; double x1; })сontentSizeForProposedContentSize:(struct CGSize { double x0; double x1; })a0;

@end
