@class NSURL, NSMutableDictionary;

@interface AMActionMetadataStore : NSObject

@property (retain) NSURL *cacheFileURL;
@property (retain) NSMutableDictionary *actionMetadataByBundleIdentifier;
@property BOOL cacheDataIsDirty;

+ (id)actionMetadataCacheFileURL;

- (void).cxx_destruct;
- (void)_loadCacheFileData;
- (void)_removeDeadEntries;
- (id)initWithCacheFileURL:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1 forActionWithBundleIdentifier:(id)a2;
- (id)valueForKey:(id)a0 forActionWithBundleIdentifier:(id)a1;
- (void)writeUpdatedStoreFileIfNeeded;

@end
