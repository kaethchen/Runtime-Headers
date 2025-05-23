@class NSString;
@protocol DNDSBackingStoreRecord, DNDSBackingStore, DNDSCachedBackingStoreDelegate;

@interface DNDSMemoryCachedBackingStore : NSObject <DNDSBackingStoreDelegate, DNDSCachedBackingStore> {
    id<DNDSBackingStore> _underlyingBackingStore;
    id<DNDSBackingStoreRecord> _cache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<DNDSCachedBackingStoreDelegate> delegate;

- (void).cxx_destruct;
- (void)purgeCache;
- (id)initWithUnderlyingBackingStore:(id)a0;
- (id)backingStore:(id)a0 migrateDictionaryRepresentation:(id)a1 fromVersionNumber:(unsigned long long)a2 toVersionNumber:(unsigned long long)a3;
- (id)readRecordWithError:(id *)a0;
- (unsigned long long)writeRecord:(id)a0 error:(id *)a1;
- (unsigned long long)writeRecord:(id)a0 writePartition:(BOOL)a1 error:(id *)a2;

@end
