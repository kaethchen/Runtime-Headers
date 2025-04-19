@class NSPreference, NSTabViewItem, NSTabView;

@interface NSPrefTabsController : NSObject {
    NSTabView *tabView;
    NSPreference *parentLayout;
    NSTabViewItem *fTabViewItemToSwitchTo;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)tabView:(id)a0 didSelectTabViewItem:(id)a1;
- (BOOL)tabView:(id)a0 shouldSelectTabViewItem:(id)a1;
- (void)tabView:(id)a0 willSelectTabViewItem:(id)a1;
- (id)tabViewItems;
- (void)didHide;
- (void)didBecomeActive;
- (void)didSelect;
- (void)didUnselect;
- (void)willSelect;
- (void)willUnselect;
- (void)didResignActive;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)cancelPaneSwitch:(id)a0;
- (void)didUnhide;
- (void)finishPaneSwitch:(id)a0;
- (BOOL)isLayoutLoadedForTabViewItem:(id)a0;
- (id)layoutForTabViewItem:(id)a0;
- (void)selectTabWithIdentifier:(id)a0;
- (id)selectedLayoutObject;
- (void)setPrefs:(id)a0;
- (void)setPrefs:(id)a0 lastSelected:(id)a1;
- (void)setUpTabViewItemKeyViews:(id)a0 layout:(id)a1;
- (unsigned long long)shouldUnselect;
- (void)willHide;
- (void)willUnhide;

@end
