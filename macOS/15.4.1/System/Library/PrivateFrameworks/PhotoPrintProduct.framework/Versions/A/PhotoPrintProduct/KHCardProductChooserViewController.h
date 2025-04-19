@class UXBarButtonItem, NSMutableArray;

@interface KHCardProductChooserViewController : KHProductChooserViewController {
    long long _onceToken;
    NSMutableArray *_cardProductFamilies;
}

@property (readonly, nonatomic) UXBarButtonItem *helpButtonItem;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)showHelp:(id)a0;
- (void)viewDidLoad;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)projectType;
- (id)cardProductFamilies;

@end
