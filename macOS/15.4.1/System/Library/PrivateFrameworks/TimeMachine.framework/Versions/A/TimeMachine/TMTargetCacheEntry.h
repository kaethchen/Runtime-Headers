@class NSString, NSMutableDictionary;
@protocol TMMountableBackupProtocol, TMTargetCachePrimable;

@interface TMTargetCacheEntry : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _alreadyFoundLock;
    struct unordered_set<TMQueryTargetKey, std::hash<TMQueryTargetKey>, std::equal_to<TMQueryTargetKey>, std::allocator<TMQueryTargetKey>> { struct __hash_table<TMQueryTargetKey, std::hash<TMQueryTargetKey>, std::equal_to<TMQueryTargetKey>, std::allocator<TMQueryTargetKey>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<TMQueryTargetKey, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TMQueryTargetKey, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<TMQueryTargetKey, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TMQueryTargetKey, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TMQueryTargetKey, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<TMQueryTargetKey, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<TMQueryTargetKey, void *> *>, std::allocator<std::__hash_node<TMQueryTargetKey, void *>>> { struct __hash_node_base<std::__hash_node<TMQueryTargetKey, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::hash<TMQueryTargetKey>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::equal_to<TMQueryTargetKey>> { float __value_; } __p3_; } __table_; } _alreadyFoundTargets;
}

@property BOOL isInternallyPrimed;
@property BOOL isClientInfoPrimed;
@property (readonly) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } primingLock;
@property (readonly) id<TMMountableBackupProtocol> backup;
@property (readonly) id<TMTargetCachePrimable> clientInfo;
@property (copy) NSString *liveVolumeUUID;
@property (retain) NSMutableDictionary *uuidToDeviceID;
@property (retain) NSMutableDictionary *uuidToVolumeStorePath;
@property (retain) NSMutableDictionary *volumeStorePathToUUID;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)addVolumeStorePath:(id)a0 forVolumeUUID:(id)a1 deviceID:(int)a2;
- (int)deviceIDForUUID:(id)a0;
- (BOOL)hasHitAlreadyBeenFound:(id)a0;
- (id)initForNow;
- (id)initWithBackup:(id)a0 unprimedInfo:(id)a1;
- (void)markHitAlreadyFound:(id)a0;
- (void)primeEntry:(id /* block */)a0 clientPrimingBlock:(id /* block */)a1;
- (id)uuidForVolumeStorePath:(id)a0;
- (id)volumeStorePathForUUID:(id)a0;

@end
