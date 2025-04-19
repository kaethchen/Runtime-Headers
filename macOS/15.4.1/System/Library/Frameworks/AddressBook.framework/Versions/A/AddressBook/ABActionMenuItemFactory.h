@class ABActionManager;

@interface ABActionMenuItemFactory : NSObject {
    ABActionManager *_actionManager;
}

- (void).cxx_destruct;
- (id)initWithActionManager:(id)a0;
- (id)actionMenuItemsForPersonUniqueId:(id)a0 inAddressBook:(id)a1 property:(id)a2 identifier:(id)a3;
- (id)actionMenuItemsForPersonUniqueId:(id)a0 inAddressBook:(id)a1 property:(id)a2 identifier:(id)a3 value:(id)a4 isSuggested:(BOOL)a5 delegate:(id)a6 item:(id)a7;
- (id)actionMenuItemsForPersonUniqueId:(id)a0 property:(id)a1 identifier:(id)a2 value:(id)a3;
- (id)actionMenuItemsForPersonUniqueId:(id)a0 property:(id)a1 identifier:(id)a2 value:(id)a3 isSuggested:(BOOL)a4 delegate:(id)a5 item:(id)a6;
- (id)actionsForPerson:(id)a0 property:(id)a1 identifier:(id)a2 value:(id)a3 isSuggested:(BOOL)a4 delegate:(id)a5 item:(id)a6;
- (id)instantMessageServicePropertyActionsForPerson:(id)a0 identifier:(id)a1;
- (id)linkedPeopleActionsForPerson:(id)a0 identifier:(id)a1 value:(id)a2;
- (id)menuItemForActionResponder:(id)a0 person:(id)a1 identifier:(id)a2;
- (id)relatedNamesActionsForPerson:(id)a0 identifier:(id)a1;

@end
