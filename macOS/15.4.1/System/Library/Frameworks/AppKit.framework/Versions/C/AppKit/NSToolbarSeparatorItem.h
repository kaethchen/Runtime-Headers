@interface NSToolbarSeparatorItem : NSToolbarItem {
    id _separatorItemReserved;
}

+ (id)itemIdentifier;

- (id)init;
- (id)view;
- (void)_separatorFinishInit;
- (BOOL)allowsDuplicatesInToolbar;
- (id)initWithItemIdentifier:(id)a0;

@end
