@class NSCollectionView, NSCollectionViewLayout;
@protocol SiriUIClumpViewDelegate;

@interface SiriUIClumpView : SiriUIScrollView

@property (readonly) NSCollectionView *collectionView;
@property (weak) NSCollectionViewLayout *collectionViewLayout;
@property (weak) id<SiriUIClumpViewDelegate> clumpViewDelegate;
@property BOOL acceptsFirstMouse;
@property BOOL allowsQuickLook;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionView:(id)a1 collectionViewLayout:(id)a2;

@end
