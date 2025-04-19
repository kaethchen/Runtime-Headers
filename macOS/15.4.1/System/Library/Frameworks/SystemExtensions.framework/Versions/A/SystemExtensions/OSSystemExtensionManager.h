@class NSMutableArray;

@interface OSSystemExtensionManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
}

@property (class, readonly) OSSystemExtensionManager *sharedManager;

@property (retain, nonatomic) NSMutableArray *requests;

- (id)init;
- (void).cxx_destruct;
- (void)finishRequest:(id)a0;
- (void)submitRequest:(id)a0;

@end
