@class NSUUID, NSString, NSDate, NSURL, NSSet, NSArray, NSDictionary, BootCacheItemStore;

@interface BootCacheInformationProvider : NSObject {
    NSSet *_paths;
    NSDictionary *_applications;
    NSDictionary *_bundles;
    NSSet *_applicationURLsSet;
    NSSet *_bundleURLsSet;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) BootCacheItemStore *store;
@property (readonly, copy) NSDate *creationDate;
@property (readonly, copy) NSDate *modificationDate;
@property (readonly, copy) NSUUID *creationUUID;
@property (readonly, copy) NSString *bootCacheLibVersionStr;
@property (readonly, copy) NSURL *bootCacheURL;
@property (readonly) unsigned long long applicationCount;
@property (readonly, copy) NSArray *applications;
@property (readonly, copy) NSSet *applicationURLs;
@property (readonly) unsigned long long bundleCount;
@property (readonly, copy) NSSet *bundleURLs;

+ (id)openRootVolumeVersion:(id *)a0;
+ (id)openWithURL:(id)a0 error:(id *)a1;
+ (id)newWithData:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (void)lock;
- (void)unlock;
- (id)applicationForURL:(id)a0;
- (id)paths;
- (BOOL)lock:(id /* block */)a0;
- (id)bundles;
- (id)bundleForURL:(id)a0;
- (BOOL)containsBundle:(id)a0;
- (unsigned long long)applicationCount;
- (id)applicationFromIndex:(unsigned long long)a0;
- (unsigned long long)bundleCount;
- (id)bundleWithIndex:(unsigned long long)a0;
- (BOOL)containsApplication:(id)a0;
- (BOOL)validateURL:(id)a0;

@end
