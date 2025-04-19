@class NSString, NSDictionary, NSURL, NSArray, BootCacheItemStoreKey;

@interface BootCacheBundle : BootCacheFileItem {
    BootCacheItemStoreKey *_infoDictionaryItemKey;
    BootCacheItemStoreKey *_localizationsKey;
    NSDictionary *_localizedInfoDictionary;
}

@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSDictionary *infoDictionary;
@property (readonly, copy) NSURL *executablePath;
@property (readonly, copy) NSArray *localizations;
@property (readonly, copy) NSString *developmentLocalization;
@property (readonly, copy) NSURL *iconFileURL;
@property (readonly, copy) NSURL *supportFolderURL;
@property (readonly, copy) NSString *displayName;
@property (readonly) NSArray *architectures;
@property (readonly, copy) NSDictionary *entitlements;
@property (readonly, copy) NSDictionary *intentionResourcesAndURLs;

- (id)description;
- (void).cxx_destruct;
- (id)resourceURL:(id)a0 withExtension:(id)a1;
- (id)_initWithStore:(id)a0 key:(id)a1;
- (id)localizedInfoPlistDictionary:(id)a0;

@end
