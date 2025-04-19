@class _PASLock;

@interface PPSocialHighlightStorageUtilities : NSObject {
    _PASLock *_bundleIdToAppIdCacheLock;
}

+ (id)excludedChatBundleIds;
+ (id)filteredAllowedChatBundleIds:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)clearCache;
- (id)resolveBundleIdToApplicationIdentifierIfInstalled:(id)a0;

@end
