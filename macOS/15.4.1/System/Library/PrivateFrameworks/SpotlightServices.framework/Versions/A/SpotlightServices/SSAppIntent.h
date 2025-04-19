@interface SSAppIntent : SSBaseConsumer

+ (id)sharedInstance;

- (id)init;
- (id)stream;
- (void)handleEvent:(id)a0;
- (BOOL)filterEvent:(id)a0;
- (id)_attributesUpdatesForEvent:(id)a0;
- (id)_extractIdentifiersForIndex:(id)a0 interaction:(id)a1;
- (id)_getInteraction:(id)a0;
- (id)_itemUpdatesForEvent:(id)a0 itemIdentifiers:(id)a1 bundleToUpdate:(id)a2;
- (id)consumerLabel;
- (id)extractIdentifiersForIndex:(id)a0 interaction:(id)a1;
- (id)itemUpdatesForEvent:(id)a0 itemIdentifiers:(id)a1 bundleToUpdate:(id)a2;

@end
