@interface SSMediaNowPlaying : SSBaseConsumer

+ (id)sharedInstance;

- (id)init;
- (id)stream;
- (void)handleEvent:(id)a0;
- (BOOL)filterEvent:(id)a0;
- (id)_attributesUpdatesForEvent:(id)a0;
- (id)_identifierForItemUpdate:(id)a0;
- (id)_itemUpdateForEvent:(id)a0 itemIdentifier:(id)a1 bundleToUpdate:(id)a2;
- (id)consumerLabel;
- (id)itemUpdateForEvent:(id)a0 itemIdentifier:(id)a1 bundleToUpdate:(id)a2;

@end
