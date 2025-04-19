@class NSMutableArray;

@interface ASKToolbarDelegate : NSObject {
    NSMutableArray *_toolbarItems;
    NSMutableArray *_allowedItemIdentifiers;
    NSMutableArray *_defaultItemIdentifiers;
    NSMutableArray *_selectableItemIdentifiers;
}

+ (id)_standardIdentifierWithKey:(id)a0;

- (void)dealloc;
- (id)init;
- (id)allowedItemIdentifiers;
- (id)defaultItemIdentifiers;
- (void)setAllowedItemIdentifiers:(id)a0;
- (void)setDefaultItemIdentifiers:(id)a0;
- (id)toolbar:(id)a0 itemForItemIdentifier:(id)a1 willBeInsertedIntoToolbar:(BOOL)a2;
- (id)toolbarAllowedItemIdentifiers:(id)a0;
- (id)toolbarDefaultItemIdentifiers:(id)a0;
- (void)toolbarItemClicked:(id)a0;
- (id)toolbarSelectableItemIdentifiers:(id)a0;
- (BOOL)validateToolbarItem:(id)a0;
- (void)setToolbarItems:(id)a0;
- (id)toolbarItems;
- (id)selectableItemIdentifiers;
- (void)setSelectableItemIdentifiers:(id)a0;

@end
