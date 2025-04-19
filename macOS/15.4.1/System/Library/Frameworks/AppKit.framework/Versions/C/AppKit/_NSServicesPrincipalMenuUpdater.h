@interface _NSServicesPrincipalMenuUpdater : _NSServicesMenuUpdater

+ (id)_sharedPrincipalUpdater;

- (void)dealloc;
- (id)init;
- (BOOL)updateMenu:(id)a0 withEvent:(id)a1 withFlags:(unsigned long long)a2;
- (void)addNonserviceMenuItemsToMenu:(id)a0;
- (BOOL)contentsNeedsUpdatingForMenu:(id)a0;
- (id)menuContext;
- (void)menuDidClose:(id)a0;
- (BOOL)menuShowsKeyEquivalents;
- (void)menuWillOpen:(id)a0;
- (id)menus;
- (void)populateMenu:(id)a0 withServiceEntries:(id)a1 forDisplay:(BOOL)a2;
- (void)populateMenuForUnavailableServices:(id)a0;
- (unsigned long long)serviceEntryKinds;
- (void)updateVisibilityOfServicesItemsForMenu:(id)a0 isForDisplay:(BOOL)a1;

@end
