@class NSArray, NSString, NSCollectionView;
@protocol ColorPickerCollectionViewControllerDelegate;

@interface ColorPickerCollectionViewController : NSViewController <NSCollectionViewDataSource, NSCollectionViewDelegate> {
    NSCollectionView *_collectionView;
    NSArray *_colors;
}

@property (nonatomic) long long selectedIndex;
@property (copy, nonatomic) NSArray *colorOptions;
@property (weak, nonatomic) id<ColorPickerCollectionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithColors:(id)a0;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)_updatePreferredContentSize;
- (void)_didClickOnColorButton:(id)a0;
- (void)_updateColorSelection;

@end
