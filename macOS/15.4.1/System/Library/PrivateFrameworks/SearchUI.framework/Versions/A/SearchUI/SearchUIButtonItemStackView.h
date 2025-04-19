@class NSArray, NSMutableDictionary, SearchUIButtonItemFactory, NSString, NSMutableArray, NSColor;
@protocol SearchUIButtonItemStackViewDelegate;

@interface SearchUIButtonItemStackView : TLKStackView <SearchUIButtonItemGeneratorViewDelegate>

@property (retain, nonatomic) NSArray *buttonItems;
@property (retain, nonatomic) SearchUIButtonItemFactory *buttonItemFactory;
@property (retain, nonatomic) NSMutableDictionary *buttonItemViewControllersForClassNames;
@property (retain, nonatomic) NSMutableArray *currentButtonItemViewControllers;
@property (nonatomic) BOOL hasLeftMainThread;
@property (nonatomic) BOOL shouldReverseButtonOrder;
@property (nonatomic) BOOL isCompact;
@property (retain, nonatomic) NSColor *overridenButtonColor;
@property (weak, nonatomic) id<SearchUIButtonItemStackViewDelegate> buttonItemStackViewDelegate;
@property (nonatomic) BOOL isDoneUpdating;
@property BOOL countMoreButtonTowardsMaxCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)buttonTypes;
- (BOOL)deviceIsAuthenticated;
- (void)enumerateCachedViewControllersUsingBlock:(id /* block */)a0;
- (void)updateWithButtonItems:(id)a0 maxButtonItems:(unsigned long long)a1 buttonItemViewType:(unsigned long long)a2 rowModel:(id)a3 feedbackDelegate:(id)a4;
- (id)viewForButtonItem:(id)a0;

@end
