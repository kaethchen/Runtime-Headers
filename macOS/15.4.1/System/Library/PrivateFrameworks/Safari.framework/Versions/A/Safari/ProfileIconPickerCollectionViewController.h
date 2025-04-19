@class NSArray, NSCollectionViewFlowLayout, NSString, NSCollectionView;
@protocol ProfileIconPickerCollectionViewDelegate;

@interface ProfileIconPickerCollectionViewController : NSViewController <NSCollectionViewDataSource, NSCollectionViewDelegate>

@property (weak, nonatomic) NSCollectionViewFlowLayout *layout;
@property (weak, nonatomic) NSCollectionView *collectionView;
@property (copy, nonatomic) NSArray *symbolNames;
@property (copy, nonatomic) NSString *selectedSymbolName;
@property (weak, nonatomic) id<ProfileIconPickerCollectionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)collectionView:(id)a0 didSelectItemsAtIndexPaths:(id)a1;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (id)_indexPathForSelectedSymbolName;
- (void)_didClickButton:(id)a0;
- (void)_updateSelectionIfNeeded;

@end
