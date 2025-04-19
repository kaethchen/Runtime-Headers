@class NSString, AMSUICommonCollectionView;
@protocol AMSUICommonCollectionViewDelegate;

@interface AMSUICommonCollectionViewHandler : NSObject <NSCollectionViewDelegate>

@property (readonly, weak) AMSUICommonCollectionView *collectionView;
@property (weak) id<AMSUICommonCollectionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)collectionView:(id)a0 willDisplayItem:(id)a1 forRepresentedObjectAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingItem:(id)a1 forRepresentedObjectAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 shouldChangeItemsAtIndexPaths:(id)a1 toHighlightState:(long long)a2;
- (id)initWithCollectionView:(id)a0;

@end
