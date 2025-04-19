@interface SSSystemSettingsSearchTerms : SSBaseConsumer

+ (id)sharedInstance;

- (id)init;
- (id)stream;
- (void)handleEvent:(id)a0;
- (BOOL)filterEvent:(id)a0;
- (id)_identifierForItemUpdate:(id)a0;
- (id)_itemUpdatesForEvent:(id)a0 bundleToUpdate:(id)a1 timestamp:(id)a2;
- (id)consumerLabel;
- (id)itemUpdatesForEvent:(id)a0 bundleToUpdate:(id)a1 timestamp:(id)a2;

@end
