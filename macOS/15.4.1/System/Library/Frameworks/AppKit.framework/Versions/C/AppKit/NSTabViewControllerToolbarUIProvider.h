@class NSTabViewController, NSString, NSMutableDictionary, NSToolbar;

@interface NSTabViewControllerToolbarUIProvider : NSObject <NSTabViewControllerUIProvider, NSToolbarDelegate> {
    NSToolbar *_toolbar;
    NSMutableDictionary *_toolbarItems;
}

@property (readonly) NSToolbar *toolbar;
@property NSTabViewController *tabViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_toolbarDefaultItemIdentifiers:(id)a0;
- (id)_toolbarAllowedItemIdentifiers:(id)a0;
- (void)_addConstraintsForTabView:(id)a0 inContainer:(id)a1;
- (long long)_associatedTabStyle;
- (void)_removeAllToolbarItems;
- (id)_tabViewControllerToolbarItemIdentifiers:(id)a0;
- (long long)_tabViewItemIndexWithIdentifier:(id)a0;
- (id)_toolbar:(id)a0 itemForItemIdentifier:(id)a1 willBeInsertedIntoToolbar:(BOOL)a2;
- (void)_toolbarItemAction:(id)a0;
- (id)_toolbarItemIdentifierForTabViewItemIndex:(long long)a0;
- (id)_toolbarItemWithIdentifier:(id)a0;
- (id)_toolbarItems;
- (id)_toolbarSelectableItemIdentifiers:(id)a0;
- (void)insertTabView:(id)a0 atIndex:(unsigned long long)a1 newSelectedIndex:(long long)a2;
- (void)removeTabView:(id)a0 atIndex:(unsigned long long)a1 newSelectedIndex:(long long)a2;
- (void)selectTabViewItemAtIndex:(long long)a0;
- (void)setUpForTabView:(id)a0 inContainer:(id)a1;
- (void)tabViewContainerWillMoveFromWindow:(id)a0 toWindow:(id)a1;
- (void)tearDown;
- (id)toolbar:(id)a0 itemForItemIdentifier:(id)a1 willBeInsertedIntoToolbar:(BOOL)a2;
- (id)toolbarAllowedItemIdentifiers:(id)a0;
- (id)toolbarDefaultItemIdentifiers:(id)a0;
- (void)toolbarDidRemoveItem:(id)a0;
- (id)toolbarSelectableItemIdentifiers:(id)a0;
- (void)toolbarWillAddItem:(id)a0;

@end
