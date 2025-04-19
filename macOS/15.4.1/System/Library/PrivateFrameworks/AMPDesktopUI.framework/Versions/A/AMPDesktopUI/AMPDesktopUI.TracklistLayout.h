@interface AMPDesktopUI.TracklistLayout : NSCollectionViewLayout {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ kSmallArtworkSize;
    void /* unknown type, empty encoding */ kLargeArtworkSize;
    void /* unknown type, empty encoding */ kLargeBreakpoint;
    void /* unknown type, empty encoding */ kAlbumHeaderHeight;
    void /* unknown type, empty encoding */ kAlbumTrackSpacing;
    void /* unknown type, empty encoding */ kMiddleGutterWidth;
    void /* unknown type, empty encoding */ kInterAlbumSpacing;
    void /* unknown type, empty encoding */ kTopMargin;
    void /* unknown type, empty encoding */ kOuterMargin;
    void /* unknown type, empty encoding */ artSizeForAlbumHeights;
    void /* unknown type, empty encoding */ albumHeights;
    void /* unknown type, empty encoding */ albumHeaderCachedHeight;
    void /* unknown type, empty encoding */ artHeightCache;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
