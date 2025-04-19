@interface SearchUIAutoShortcutButtonItemGenerator : SearchUIButtonItemGenerator

+ (BOOL)mayRequireAsyncGenerationForButtonItem:(id)a0;
+ (id)shortcutsForBundleId:(id)a0;

- (void)generateSearchUIButtonItemsWithSFButtonItem:(id)a0 completion:(id /* block */)a1;

@end
