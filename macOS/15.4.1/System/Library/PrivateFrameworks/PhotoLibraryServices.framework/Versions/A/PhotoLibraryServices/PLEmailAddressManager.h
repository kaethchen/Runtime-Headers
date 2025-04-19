@class PLLazyObject, NSMutableDictionary, PLPhotoLibraryPathManager;

@interface PLEmailAddressManager : NSObject {
    NSMutableDictionary *_keysForEmails;
    NSMutableDictionary *_emailsForKey;
    int _maxKey;
    PLPhotoLibraryPathManager *_pathManager;
    PLLazyObject *_lazyAssetsdClient;
}

- (void).cxx_destruct;
- (id)plistPath;
- (id)assetsdClient;
- (id)emailAddressForKey:(id)a0;
- (void)_loadDictionariesIfNeeded;
- (id)initWithPathManager:(id)a0 lazyAssetsdClient:(id)a1;
- (id)keyForEmailAddress:(id)a0;

@end
