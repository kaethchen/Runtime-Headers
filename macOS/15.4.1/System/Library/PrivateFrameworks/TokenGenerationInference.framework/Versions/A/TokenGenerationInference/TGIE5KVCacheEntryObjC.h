@interface TGIE5KVCacheEntryObjC : NSObject <NSCopying> {
    struct unique_ptr<TGIE5KVCacheEntry, std::default_delete<TGIE5KVCacheEntry>> { struct __compressed_pair<TGIE5KVCacheEntry *, std::default_delete<TGIE5KVCacheEntry>> { struct TGIE5KVCacheEntry *__value_; } __ptr_; } _kvCacheEntry;
}

@property (readonly) const void *kvCacheEntry;
@property (readonly) long long bufferSize;
@property (readonly) long long tokenCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithKVCacheEntry:(void *)a0;

@end
