@class NSMenu, NSMapTable;

@interface KHProductSubgroupMenuController : NSObject {
    NSMenu *_menu;
    NSMapTable *_productSubgroupsByIdentifier;
    NSMapTable *_menuItemsByIdentifiers;
}

@property (readonly, nonatomic) NSMenu *menu;
@property (copy, nonatomic) id /* block */ selectionHandler;

- (void).cxx_destruct;
- (void)itemSelected:(id)a0;
- (void)setDisabledIdentifiers:(id)a0;
- (id)menuItemForProductSubgroup:(id)a0;
- (void)resetMenu;
- (void)setCheckedIdentifier:(id)a0;

@end
