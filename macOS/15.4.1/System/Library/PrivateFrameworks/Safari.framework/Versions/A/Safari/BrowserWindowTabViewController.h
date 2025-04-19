@class BrowserWindowTabView, NSArray, WBSTabOrderManager, NSString, BrowserTabViewItem;
@protocol WBSOrderedTab, BrowserWindowTabViewControllerDelegate;

@interface BrowserWindowTabViewController : NSTabViewController <WBSTabOrderProvider> {
    BOOL _isAddingOrRemovingTabViewItem;
    BOOL _didSetUpTabView;
}

@property (weak, nonatomic) id<BrowserWindowTabViewControllerDelegate> delegate;
@property (retain) BrowserWindowTabView *tabView;
@property (readonly, nonatomic) long long numberOfTabViewItems;
@property (retain, nonatomic) BrowserTabViewItem *selectedTabViewItem;
@property (retain, nonatomic) NSArray *selectedTabViewItems;
@property (readonly, nonatomic) BrowserTabViewItem *tabToSelectBeforeClosingSelectedTab;
@property (readonly, nonatomic) BOOL canReloadAllTabs;
@property (readonly, nonatomic) BOOL hasPinnedTabViewItems;
@property (readonly, nonatomic) long long numberOfPinnedTabViewItems;
@property (readonly, copy, nonatomic) NSArray *pinnedTabViewItems;
@property (retain, nonatomic) WBSTabOrderManager *tabOrderManager;
@property (readonly, nonatomic) unsigned long long indexOfSelectedTab;
@property (readonly, nonatomic) id<WBSOrderedTab> selectedTabForTabOrderProvider;
@property (readonly, nonatomic) unsigned long long numberOfTabs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)tabView;
- (long long)indexOfTabViewItem:(id)a0;
- (void)insertTabViewItem:(id)a0 atIndex:(long long)a1;
- (void)loadView;
- (void)removeTabViewItem:(id)a0;
- (void)setSelectedTabViewItemIndex:(long long)a0;
- (void)tabView:(id)a0 willSelectTabViewItem:(id)a1;
- (id)tabViewItemAtIndex:(long long)a0;
- (unsigned long long)indexForTab:(id)a0;
- (id)originatingTabForTab:(id)a0;
- (id)tabAtIndex:(unsigned long long)a0;
- (void)_setUpTabView;
- (BOOL)canReloadTab:(id)a0;
- (id)firstNonClosedAncestorForTab:(id)a0;
- (id)firstTabViewItemWithUnsavedCredentialsPassingTest:(id /* block */)a0;
- (void)reloadAllTabs;
- (void)reloadTab:(id)a0;
- (id)tabViewItemWithUUID:(id)a0;
- (id)tabViewItemsWithUnsubmittedFormTextPassingTest:(id /* block */)a0;

@end
