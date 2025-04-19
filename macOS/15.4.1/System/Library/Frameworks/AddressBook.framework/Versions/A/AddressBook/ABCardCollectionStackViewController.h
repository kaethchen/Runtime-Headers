@class CNScrollableContainerView, NSString, NSStackView, NSMutableArray;
@protocol ABCardCollectionViewPresentationDelegate;

@interface ABCardCollectionStackViewController : NSObject <ABCardCollectionViewPresentation>

@property (retain, nonatomic) NSStackView *stackView;
@property (retain, nonatomic) CNScrollableContainerView *container;
@property (retain, nonatomic) NSMutableArray *items;
@property (weak, nonatomic) id<ABCardCollectionViewPresentationDelegate> delegate;
@property (nonatomic) long long contentInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)removeAllItems;
- (void)addItems:(id)a0;
- (void)performBatchUpdates:(id /* block */)a0;
- (double)desiredHeight;
- (void)insertItem:(id)a0 atIndex:(unsigned long long)a1 animated:(BOOL)a2;
- (void)reloadItem:(id)a0 animated:(BOOL)a1;
- (void)removeItem:(id)a0 animated:(BOOL)a1;
- (void)setSpacing:(double)a0 afterItem:(id)a1;
- (void)setUpContainer;
- (void)setUpStackView;
- (void)showItem:(id)a0 animated:(BOOL)a1;
- (id)viewForDisplay;

@end
