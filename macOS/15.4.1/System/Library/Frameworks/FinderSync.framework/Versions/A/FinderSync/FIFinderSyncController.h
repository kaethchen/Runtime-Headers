@class NSSet;

@interface FIFinderSyncController : NSExtensionContext

@property (class, readonly, getter=isExtensionEnabled) BOOL extensionEnabled;

@property (copy) NSSet *directoryURLs;

+ (id)defaultController;
+ (void)showExtensionManagementInterface;

- (id)lastUsedDateForItemWithURL:(id)a0;
- (id)selectedItemURLs;
- (void)setBadgeIdentifier:(id)a0 forURL:(id)a1;
- (void)setBadgeImage:(id)a0 label:(id)a1 forBadgeIdentifier:(id)a2;
- (void)setLastUsedDate:(id)a0 forItemWithURL:(id)a1 completion:(id /* block */)a2;
- (void)setTagData:(id)a0 forItemWithURL:(id)a1 completion:(id /* block */)a2;
- (id)tagDataForItemWithURL:(id)a0;
- (id)targetedURL;

@end
