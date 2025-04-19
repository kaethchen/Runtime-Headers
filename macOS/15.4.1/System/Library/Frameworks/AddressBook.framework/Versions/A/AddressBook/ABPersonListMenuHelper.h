@class NSString, ABPersonListController, NSMenu, ABPersonListSharingHelper;

@interface ABPersonListMenuHelper : NSObject <NSMenuDelegate> {
    ABPersonListController *_personListController;
    ABPersonListSharingHelper *_sharingHelper;
}

@property (readonly) NSMenu *contextMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)menuNeedsUpdate:(id)a0;
- (id)contactsForCuratedEntries:(id)a0;
- (id)contactsForDonatedEntries:(id)a0;
- (id)contactsForEntries:(id)a0;
- (id)initWithPersonListController:(id)a0;
- (id)makeDeleteSelectedEntriesMenuItemWithEntries:(id)a0;
- (id)makeEditEntryMenuItemWithEntries:(id)a0;
- (id)makeExportVCardMenuItemWithPeople:(id)a0;
- (id)makeFindInSpotlightMenuItemWithEntries:(id)a0;
- (id)makeShareMenuItemWithEntries:(id)a0;
- (id)menuItemsForContextMenuWithEntries:(id)a0;
- (id)peopleForIdentifiers:(id)a0;

@end
