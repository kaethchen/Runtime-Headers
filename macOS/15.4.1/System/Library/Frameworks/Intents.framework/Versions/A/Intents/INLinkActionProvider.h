@class NSArray, NSDictionary, NSMutableDictionary;
@protocol INAppIntentsMetadataProvider;

@interface INLinkActionProvider : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<INAppIntentsMetadataProvider> _metadataProvider;
    NSArray *_lockCachedBundleIdentifiers;
    NSMutableDictionary *_lockCachedActionIdentifiers;
    NSMutableDictionary *_lockCachedEntityIdentifiers;
    NSDictionary *_lockCachedActions;
    NSDictionary *_lockCachedEntities;
}

@property (class, readonly, nonatomic) INLinkActionProvider *sharedProvider;

@property (readonly, nonatomic) NSDictionary *actionsGroupedByBundleIdentifier;
@property (readonly, nonatomic) NSDictionary *entitiesGroupedByBundleIdentifier;
@property (nonatomic, getter=isCachingLinkMetadata) BOOL cacheLinkMetadata;

- (id)init;
- (void).cxx_destruct;
- (id)bundleIdentifiers;
- (id)cachedBundleIdentifiers;
- (void)cacheActionIdentifiers:(id)a0 forBundleIdentifier:(id)a1;
- (void)cacheActions:(id)a0;
- (void)cacheBundleIdentifiers:(id)a0;
- (void)cacheEntities:(id)a0;
- (void)cacheEntityIdentifiers:(id)a0 forBundleIdentifier:(id)a1;
- (id)cachedActionIdentifiersForBundleIdentifier:(id)a0;
- (id)cachedActions;
- (id)cachedEntities;
- (id)cachedEntityIdentifiersForBundleIdentifier:(id)a0;
- (void)evictCache;
- (id)supportedActionIdentifiersForBundleIdentifier:(id)a0;
- (id)supportedEntityIdentifiersForBundleIdentifier:(id)a0;

@end
