@class NSString, NSMutableIndexSet, CKDMMCS, NSObject;
@protocol OS_dispatch_queue;

@interface CKDMMCSEngineContext : NSObject {
    NSObject<OS_dispatch_queue> *_mmcsQueue;
    _Atomic unsigned long long _serializedThread;
}

@property (nonatomic) long long refCount;
@property (nonatomic) long long state;
@property (weak, nonatomic) CKDMMCS *MMCS;
@property (nonatomic) struct _mmcs_engine { } *MMCSEngine;
@property (retain, nonatomic) NSString *applicationBundleID;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned int maxChunkCountForSection;
@property (retain, nonatomic) NSMutableIndexSet *inMemoryItemsIDs;

+ (id)_appID;
+ (BOOL)hasCachedCKDMMCSEngineContextForPath:(id)a0;
+ (id)setupMMCSEngineWithApplicationBundleID:(id)a0 path:(id)a1 wasCached:(BOOL *)a2 error:(id *)a3;
+ (id)sharedContextsByPath;
+ (id)sharedContextsQueue;
+ (BOOL)tearDownMMCSEngineWithContext:(id)a0;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)MMCSSerializeSyncRecursive:(id /* block */)a0;
- (void)MMCSRunSerialized:(id /* block */)a0;
- (void)MMCSSerializeAsyncRecursive:(id /* block */)a0;
- (BOOL)_setupMMCSEngineWithError:(id *)a0;
- (BOOL)_setupMMCSEngineWithRetryCount:(unsigned long long)a0 error:(id *)a1;
- (void)_tearDownMMCSEngine;
- (void)assertMMCSSerialized;
- (void)cancelRequestWithContext:(void *)a0;
- (long long)decRefCount;
- (long long)incRefCount;
- (id)initWithApplicationBundleID:(id)a0 path:(id)a1;
- (unsigned long long)nextAvailableItemID;
- (void)stopTrackingItemID:(unsigned long long)a0;

@end
