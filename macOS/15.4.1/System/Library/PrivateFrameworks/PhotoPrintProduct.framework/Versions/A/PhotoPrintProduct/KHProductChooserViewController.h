@class UXBarButtonItem, NSDictionary, NSSet, NSString, UXLabel;
@protocol KHProductChooserViewControllerDelegate;

@interface KHProductChooserViewController : UXCollectionViewController <UXCollectionViewDataSource, UXCollectionViewDelegate, KHProductViewDelegate> {
    unsigned long long _viewDidAppearCalls;
}

@property (readonly, nonatomic) UXBarButtonItem *cancelButtonItem;
@property (retain, nonatomic) NSDictionary *configurationOptions;
@property (weak, nonatomic) NSSet *chosenProducts;
@property (retain, nonatomic) UXLabel *bottomNoticeLabel;
@property (nonatomic) BOOL compactMode;
@property (nonatomic) BOOL productsUpdated;
@property (weak, nonatomic) id<KHProductChooserViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void)cancelOperation:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)initWithCollectionViewLayout:(id)a0;
- (void)keyDown:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)windowDidResize:(id)a0;
- (void)collectionView:(id)a0 itemWasRightClickedAtIndexPath:(id)a1 withEvent:(id)a2;
- (long long)projectType;
- (void)changeStoreNotificationReceived;
- (void)setBottomNoticeHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)_disableScroll;
- (void)_enableScroll;
- (void)_initBottomNotice;
- (void)didSelectProduct:(id)a0 withConfigurationOptions:(id)a1;
- (void)productWasSelected:(id)a0;
- (void)setCompactMode:(BOOL)a0 forced:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeOfCollectionViewCell;
- (id)themeChooserViewControllerBackButtonTitle;
- (void)updateBottomNoticeWithProduct:(id)a0;
- (void)updatePricesInfo;

@end
