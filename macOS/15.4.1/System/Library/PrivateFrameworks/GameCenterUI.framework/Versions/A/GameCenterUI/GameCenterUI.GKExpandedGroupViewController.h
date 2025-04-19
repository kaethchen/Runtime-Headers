@interface GameCenterUI.GKExpandedGroupViewController : GameCenterUI.GKExpandedGroupBaseViewController <NSCollectionViewDelegateFlowLayout, NSCollectionViewDataSource> {
    void /* unknown type, empty encoding */ cornerRadius;
    void /* unknown type, empty encoding */ pickerPlayerCellReuseIdentifier;
    void /* unknown type, empty encoding */ pickerPlayerCellReuseIdentifierAX;
    void /* unknown type, empty encoding */ dataSourceIdentifier;
    void /* unknown type, empty encoding */ playerSelectionProxy;
    void /* unknown type, empty encoding */ multiplayerPickerDataSource;
    void /* unknown type, empty encoding */ selectedPlayerCount;
    void /* unknown type, empty encoding */ maxPlayerCount;
    void /* unknown type, empty encoding */ players;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ collectionContainer;
@property (nonatomic, weak) void /* unknown type, empty encoding */ collectionView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ visualEffectView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ container;
@property (nonatomic, weak) void /* unknown type, empty encoding */ titleLabel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ collectionViewHeightConstraint;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 shouldDeselectItemsAtIndexPaths:(id)a1;
- (id)collectionView:(id)a0 shouldSelectItemsAtIndexPaths:(id)a1;
- (void)viewDidLoad;
- (void)viewWillDisappear;
- (void)configureWithPlayers:(id)a0 groupName:(id)a1 caption:(id)a2 playerSelectionProxy:(id)a3;

@end
