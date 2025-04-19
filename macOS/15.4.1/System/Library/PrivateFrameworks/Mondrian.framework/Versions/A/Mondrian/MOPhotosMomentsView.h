@protocol MOPhotosMomentsViewDelegate;

@interface MOPhotosMomentsView : MOMediaView {
    unsigned char _delegateRecommendedCellSizeForThumbnailSize : 1;
    unsigned char _delegateShouldShowMainFooter : 1;
    unsigned char _delegateMainFooterTitle : 1;
    unsigned char _delegateMainFooterInfo : 1;
    unsigned char _delegateMainFooterHeight : 1;
}

@property (weak, nonatomic) id<MOPhotosMomentsViewDelegate> photosMomentsViewDelegate;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 recommendedCellSizeForThumbnailSize:(struct CGSize { double x0; double x1; })a2 inMaxSize:(struct CGSize { double x0; double x1; })a3;
- (double)mainFooterHeightForCollectionView:(id)a0;
- (id)mainFooterInfoForCollectionView:(id)a0;
- (id)mainFooterTitleForCollectionView:(id)a0;
- (void)mediaView:(id)a0 didUpdateSupplementaryView:(id)a1 ofKind:(id)a2 withMediaSection:(id)a3 atIndexPath:(id)a4;
- (id)momentsLayout;
- (void)scrollToEnd:(BOOL)a0;
- (BOOL)shouldShowMainFooterForCollectionView:(id)a0 layout:(id)a1 includingWhenInBounds:(BOOL *)a2;

@end
