@class NSString;

@interface PXGGridLayout : PXGItemsLayout <PXZoomablePhotosContentLayout, PXGItemsGeometry, PXGDiagnosticsProvider> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    BOOL _isUpdating;
    struct CGSize { double width; double height; } _itemSize;
    struct CGSize { double width; double height; } _finalInterItemSpacing;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _finalInsets;
}

@property (nonatomic) long long numberOfColumns;
@property (nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } padding;
@property (nonatomic) struct CGSize { double x0; double x1; } interItemSpacing;
@property (nonatomic) double itemCaptionSpacing;
@property (nonatomic) BOOL enableBestCropRect;
@property (nonatomic) BOOL enablePerItemInsets;
@property (nonatomic) unsigned char spriteInfoFlags;
@property (nonatomic) double itemAspectRatio;
@property (nonatomic) struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } itemCornerRadius;
@property (readonly, nonatomic) long long visualItemShift;
@property (readonly, nonatomic) double rowHeight;
@property (nonatomic) BOOL hideIncompleteLastRowOrColumn;
@property (nonatomic) BOOL fillSafeAreaTopInset;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } loadedItems;
@property (nonatomic) long long numberOfItems;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } loadedItemsRect;
@property (readonly, nonatomic) BOOL supportsContentMode;
@property (readonly, nonatomic) BOOL itemCaptionsVisible;
@property (retain, nonatomic) id anchorObjectReference;
@property (nonatomic) struct CGPoint { double x0; double x1; } anchorViewportCenter;
@property (nonatomic) BOOL loadItemsOutsideAnchorViewport;
@property (nonatomic) BOOL enableEffects;
@property (nonatomic) BOOL enablePerItemCornerRadius;
@property (nonatomic) double accessoryAlpha;
@property (nonatomic) long long contentMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long numberOfVisualItems;
@property (readonly, nonatomic) long long numberOfVisualRows;
@property (readonly, nonatomic) long long numberOfVisualColumns;
@property (nonatomic) struct CGPoint { double x; double y; } contentOrigin;
@property (nonatomic) long long style;
@property (nonatomic) long long contentMode;
@property (nonatomic) long long axis;
@property (nonatomic) long long numberOfColumns;
@property (nonatomic) long long numberOfRows;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) struct CGSize { double width; double height; } interItemSpacing;
@property (nonatomic) double itemCaptionSpacing;
@property (nonatomic) double itemAspectRatio;
@property (nonatomic) BOOL enableBestCropRect;
@property (nonatomic) BOOL enableEffects;
@property (nonatomic) BOOL enablePerItemCornerRadius;
@property (nonatomic) BOOL enablePerItemMargin;
@property (nonatomic) BOOL enablePerItemInsets;
@property (nonatomic) double aspectRatioLimit;
@property (nonatomic) unsigned char mediaKind;
@property (nonatomic) unsigned char spriteInfoFlags;
@property (nonatomic) unsigned char presentationType;
@property (nonatomic) unsigned char accessoryMediaKind;
@property (nonatomic) unsigned char accessoryPresentationType;
@property (nonatomic) double accessoryAlpha;
@property (nonatomic) BOOL fillSafeAreaTopInset;
@property (nonatomic) BOOL supportsAutomaticContentRotation;
@property (readonly, nonatomic) double rowHeight;
@property (nonatomic) long long visualItemShift;
@property (nonatomic, getter=isLazy) BOOL lazy;
@property (nonatomic) BOOL hideIncompleteLastRowOrColumn;
@property (nonatomic) BOOL mediaTargetSizeIgnoresSpacing;
@property (nonatomic) struct { union { struct { float topLeft; float topRight; float bottomLeft; float bottomRight; } ; float byIndex[4]; } ; } itemCornerRadius;
@property (nonatomic) struct { union { struct { float topLeft; float topRight; float bottomLeft; float bottomRight; } ; float byIndex[4]; } ; } edgeCornerRadius;
@property (nonatomic) float itemZPosition;
@property (retain, nonatomic) id anchorObjectReference;
@property (nonatomic) struct CGPoint { double x; double y; } anchorViewportCenter;
@property (nonatomic) BOOL loadItemsOutsideAnchorViewport;
@property (nonatomic) BOOL canHandleVisibleRectRejection;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } loadedItemsRect;
@property (readonly, copy, nonatomic) NSString *diagnosticDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)update;
- (void)didUpdate;
- (void)_updateContentSize;
- (void)safeAreaInsetsDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItem:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pageAlignedRectForVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)numberOfAccessoryItemsDidChange;
- (struct CGPoint { double x0; double x1; })_contentPointInLayout:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentRectInLayout:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForItem:(long long)a0 usingInterItemSpacing:(struct CGSize { double x0; double x1; })a1 itemSize:(struct CGSize { double x0; double x1; })a2 insets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a3 contentMode:(long long)a4;
- (void)_getItemSize:(struct CGSize { double x0; double x1; } *)a0 finalInteritemSpacing:(struct CGSize { double x0; double x1; } *)a1 finalInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; } *)a2 forDesiredInterItemSpacing:(struct CGSize { double x0; double x1; })a3 padding:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a4;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_itemsToLoadForVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })_layoutPointInContent:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutRectInContent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)_rowForItem:(long long)a0;
- (void)_updateColumnsMetrics;
- (void)_updateSpriteStyles;
- (void)_updateSprites;
- (void)accessoryItemsDidChange;
- (void)alphaDidChange;
- (void)applySpriteChangeDetails:(id)a0 countAfterChanges:(unsigned int)a1 initialState:(id /* block */)a2 modifyState:(id /* block */)a3;
- (id)axBorderSpriteIndexes;
- (long long)columnForItem:(long long)a0;
- (void)displayScaleDidChange;
- (void)dropTargetObjectReferenceDidChange;
- (id)dropTargetObjectReferenceForLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)effectsDidChange;
- (void)entityManagerDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItem:(long long)a0 usingInterItemSpacing:(struct CGSize { double x0; double x1; })a1;
- (id)insetDelegate;
- (long long)itemClosestTo:(struct CGPoint { double x0; double x1; })a0;
- (long long)itemClosestToItem:(long long)a0 inDirection:(unsigned long long)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })itemRangeForSpriteIndexRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })itemRangeInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)itemsBetweenItem:(long long)a0 andItem:(long long)a1;
- (id)itemsGeometry;
- (id)itemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inLayout:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })itemsToLoad;
- (void)loadedItemsDidChange;
- (id)marginDelegate;
- (id)navigationObjectReferenceForLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)referenceSizeDidChange;
- (long long)scrollableAxis;
- (void)setNeedsUpdateOfScrollableAxis;
- (void)setNumberOfItems:(long long)a0 withChangeDetails:(id)a1 changeMediaVersionHandler:(id /* block */)a2;
- (BOOL)shiftItem:(long long)a0 toColumn:(long long)a1 topPaddingRows:(long long)a2 hideIncompleteRows:(BOOL)a3;
- (BOOL)shouldUpdateDecorationMediaTargetSizes;
- (struct CGSize { double x0; double x1; })sizeForItem:(long long)a0;
- (unsigned int)spriteIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })spriteIndexRangeCoveringRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)visibleRectDidChange;
- (void)willUpdate;

@end
