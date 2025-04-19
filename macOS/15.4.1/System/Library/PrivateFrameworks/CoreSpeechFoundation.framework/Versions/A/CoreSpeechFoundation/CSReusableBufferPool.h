@class CSReusableBufferPoolConfiguration, NSMutableArray;

@interface CSReusableBufferPool : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _numberOfBackingStores;
    NSMutableArray *_recycledBackingStores;
}

@property (readonly, nonatomic) CSReusableBufferPoolConfiguration *configuration;

- (void).cxx_destruct;
- (void)cleanup;
- (id)dataWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)initWithConfiguration:(id)a0;
- (BOOL)_canCreateNewBackingStore;
- (void)_checkIdleBackingStores;
- (id)_createNewBackingStore;
- (id)_getAvailableBackingStore;
- (void)_recycleUsedBackingStore:(id)a0;
- (void)handleUsedBackingStore:(id)a0;

@end
