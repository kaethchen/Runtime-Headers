@class NSMapTable;

@interface AVBPTPManager : NSObject {
    NSMapTable *_instanceMap;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _instanceMapLock;
}

+ (id)sharedPTPManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)ptpInstanceWithIdentifier:(unsigned long long)a0;

@end
