@class PXGLayout, NSArray;

@interface PXGZoomLayout : PXGLayout {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    BOOL _settingSublayouts;
    BOOL _isUpdatingSublayouts;
}

@property (readonly, nonatomic) PXGLayout *primaryLayer;
@property (readonly, nonatomic) NSArray *layers;
@property (retain, nonatomic) id anchorObjectReference;
@property (nonatomic) struct CGPoint { double x; double y; } anchorViewportCenter;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;

- (id)init;
- (void).cxx_destruct;
- (void)update;
- (void)safeAreaInsetsDidChange;
- (id)axSpriteIndexes;
- (void)sublayoutDidChangeLastBaseline:(id)a0;
- (void)userInterfaceDirectionDidChange;
- (void)_configureSublayouts;
- (void)_updateSublayoutGeometries;
- (void)didChangeSublayoutOrigins;
- (void)displayScaleDidChange;
- (void)enumerateVisibleAnchoringLayoutsUsingBlock:(id /* block */)a0;
- (long long)itemForSpriteIndex:(unsigned int)a0;
- (void)referenceDepthDidChange;
- (void)referenceSizeDidChange;
- (void)scrollSpeedRegimeDidChange;
- (long long)scrollableAxis;
- (void)setLayers:(id)a0 primaryLayer:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sublayout:(id)a0 visibleRectForRequestedVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)sublayoutDidChangeContentSize:(id)a0;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (void)sublayoutNeedsUpdate:(id)a0;
- (void)viewEnvironmentDidChange;
- (void)visibleRectDidChange;

@end
