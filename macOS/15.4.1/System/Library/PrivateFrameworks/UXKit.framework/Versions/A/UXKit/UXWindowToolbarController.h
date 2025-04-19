@class NSSearchToolbarItem, NSString, NSArray, NSToolbar, UXNavigationItem, NSDictionary;

@interface UXWindowToolbarController : NSObject <NSToolbarDelegate> {
    NSArray *_defaultItemIdentifiers;
    NSArray *_allowedItemIdentifiers;
    NSDictionary *_itemByIdentifier;
}

@property (retain, nonatomic) UXNavigationItem *navigationItem;
@property (retain, nonatomic) NSSearchToolbarItem *searchToolbarItem;
@property (readonly, nonatomic) NSToolbar *toolbar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)toolbar:(id)a0 itemForItemIdentifier:(id)a1 willBeInsertedIntoToolbar:(BOOL)a2;
- (id)toolbarAllowedItemIdentifiers:(id)a0;
- (id)toolbarDefaultItemIdentifiers:(id)a0;
- (id)initWithNavigationItem:(id)a0;
- (void)_updateToolbarItems;
- (void)updateToolbar;

@end
