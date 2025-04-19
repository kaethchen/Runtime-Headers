@class SFButtonItem, NSMutableDictionary, CNContactQuickActionsController, NSString;

@interface SearchUIContactButtonItemGenerator : SearchUIButtonItemGenerator <CNContactQuickActionViewContainer, CNContactQuickActionsControllerDelegate>

@property (retain) CNContactQuickActionsController *quickActionsController;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain) NSMutableDictionary *quickActionViews;
@property (retain) SFButtonItem *sfButtonItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonCategoriesForActionTypes:(id)a0;
+ (id)buttonTitleForActionType:(id)a0 contact:(id)a1;
+ (id)cachedEnabledActionsForButtonItems;
+ (id)defaultButtonCategoriesForPerson:(id)a0;

- (void).cxx_destruct;
- (void)updateButtons;
- (void)contactQuickActionsController:(id)a0 presentDisambiguationMenu:(id)a1 forActionType:(id)a2;
- (id)viewForActionType:(id)a0;
- (void)cacheEnabledActionType:(id)a0;
- (id)cachedEnabledActionTypes;
- (void)generateSearchUIButtonItemsWithSFButtonItem:(id)a0 completion:(id /* block */)a1;
- (id)visibleButtonForActionType:(id)a0;

@end
