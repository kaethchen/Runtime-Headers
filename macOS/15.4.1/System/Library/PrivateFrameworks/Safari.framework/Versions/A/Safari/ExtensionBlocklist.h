@class NSArray, NSTimer, NSURL, NSDate;

@interface ExtensionBlocklist : NSObject {
    NSArray *_appExtensionEntries;
    NSURL *_xProtectMetaPlistURL;
    NSDate *_previousXProtectMetaPlistModificationDate;
    NSTimer *_xProtectUpdateTimer;
    BOOL _activelyReading;
}

+ (id)sharedBlocklist;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_updateFromXProtectIfNecessary:(id)a0;
- (void)_readBlocklistWithfinishedLoadingHandler:(id /* block */)a0;
- (void)_updateBlocklists:(id)a0;
- (BOOL)containsAppExtensionWithDeveloperIdentifier:(id)a0 bundleIdentifier:(id)a1 version:(id)a2;
- (BOOL)containsAppExtensionWithDeveloperIdentifier:(id)a0 bundleIdentifier:(id)a1 version:(id)a2 allowUnsignedExtensions:(BOOL)a3;
- (id)initWithXProtectURL:(id)a0;
- (id)test_initWithXProtectURL:(id)a0 finishedLoadingHandler:(id /* block */)a1;

@end
