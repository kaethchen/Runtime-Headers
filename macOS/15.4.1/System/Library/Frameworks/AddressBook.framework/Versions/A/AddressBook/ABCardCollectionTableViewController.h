@class CNScrollableContainerView, NSString, NSTableView, NSMutableArray;
@protocol ABCardCollectionViewPresentationDelegate;

@interface ABCardCollectionTableViewController : NSObject <NSTableViewDataSource, NSTableViewDelegate, ABCardCollectionViewPresentation>

@property (retain, nonatomic) NSTableView *tableView;
@property (retain, nonatomic) CNScrollableContainerView *container;
@property (retain, nonatomic) NSMutableArray *items;
@property (weak, nonatomic) id<ABCardCollectionViewPresentationDelegate> delegate;
@property (nonatomic) BOOL allowsScrolling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long contentInset;

- (void).cxx_destruct;
- (id)separatorItem;
- (void)removeAllItems;
- (void)tableView:(id)a0 didAddRowView:(id)a1 forRow:(long long)a2;
- (void)addItems:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)performBatchUpdates:(id /* block */)a0;
- (id)tableView:(id)a0 rowViewForRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (double)desiredHeight;
- (id)initWithDelegate:(id)a0 allowsScrolling:(BOOL)a1;
- (void)insertItem:(id)a0 atIndex:(unsigned long long)a1 animated:(BOOL)a2;
- (void)reloadItem:(id)a0 animated:(BOOL)a1;
- (void)removeItem:(id)a0 animated:(BOOL)a1;
- (void)setSpacing:(double)a0 afterItem:(id)a1;
- (void)setUpTableView;
- (void)setupContainer;
- (BOOL)shouldOverwriteAnimationFlagWhenScrollingToItemAtIndex:(unsigned long long)a0;
- (void)showItem:(id)a0 animated:(BOOL)a1;
- (id)viewForDisplay;

@end
