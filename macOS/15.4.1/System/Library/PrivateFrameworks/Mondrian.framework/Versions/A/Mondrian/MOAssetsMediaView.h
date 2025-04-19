@protocol MOAssetsMediaViewDelegate;

@interface MOAssetsMediaView : MOMediaView {
    unsigned char _delegateShouldShowHeaderAtIndexPath : 1;
    unsigned char _delegateShouldShowFooterAtIndexPath : 1;
    unsigned char _delegateRecommendedCellSizeForThumbnailSize : 1;
    unsigned char _delegateShouldShowMainFooter : 1;
    unsigned char _delegateMainFooterHeight : 1;
    unsigned char _delegateShouldShowMainHeader : 1;
    unsigned char _delegateMainHeaderHeight : 1;
}

@property (weak, nonatomic) id<MOAssetsMediaViewDelegate> assetsMediaViewDelegate;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)collectionView:(id)a0 layout:(id)a1 supplementaryViewDidBeginFloatingAtIndexPath:(id)a2 kind:(id)a3;
- (void)collectionView:(id)a0 layout:(id)a1 supplementaryViewDidEndFloatingAtIndexPath:(id)a2 kind:(id)a3;
- (id)assetsLayout;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 recommendedCellSizeForThumbnailSize:(struct CGSize { double x0; double x1; })a2 inMaxSize:(struct CGSize { double x0; double x1; })a3;
- (BOOL)collectionView:(id)a0 layout:(id)a1 shouldShowFooterAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 layout:(id)a1 shouldShowHeaderAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 layout:(id)a1 supplementaryViewDidBeginPushingAtIndexPath:(id)a2 kind:(id)a3;
- (double)mainFooterHeightForCollectionView:(id)a0 layout:(id)a1 width:(double)a2 scale:(double)a3;
- (double)mainHeaderHeightForCollectionView:(id)a0 layout:(id)a1 width:(double)a2 scale:(double)a3;
- (void)mediaView:(id)a0 didUpdateSupplementaryView:(id)a1 ofKind:(id)a2 withMediaSection:(id)a3 atIndexPath:(id)a4;
- (BOOL)shouldShowMainFooterForCollectionView:(id)a0 layout:(id)a1 includingWhenInBounds:(BOOL *)a2;
- (BOOL)shouldShowMainHeaderForCollectionView:(id)a0 layout:(id)a1;

@end
