@class NSString, NSObject;
@protocol OS_dispatch_queue, CalIconProvider;

@interface CALNNotificationIconCache : NSObject <CALNIconCache>

@property (readonly, nonatomic) id<CalIconProvider> iconProvider;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_iconCacheDirectory;
+ (id)_pathForCachedIconWithIdentifier:(id)a0;
+ (id)iconCacheDirectory;
+ (id)pathForCachedIconWithIdentifier:(id)a0;

- (void).cxx_destruct;
- (BOOL)removeIconWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)_addIconWithIdentifier:(id)a0 toCacheAtPath:(id)a1;
- (BOOL)_createCacheDirectoryIfNeeded;
- (BOOL)addIconsWithIdentifiers:(id)a0 error:(id *)a1;
- (id)cachedIconPathForIconIdentifier:(id)a0;
- (BOOL)forceRemoveAllCachedIconsWithError:(id *)a0;
- (id)iconIdentifierForCachedIconPath:(id)a0;
- (id)initWithIconProvider:(id)a0;

@end
