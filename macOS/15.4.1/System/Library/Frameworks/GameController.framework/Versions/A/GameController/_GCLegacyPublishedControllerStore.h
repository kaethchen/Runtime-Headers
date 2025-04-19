@class NSSet;

@interface _GCLegacyPublishedControllerStore : NSObject {
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _controllersLock;
}

@property (readonly) NSSet *publishedControllers;

- (id)init;
- (void).cxx_destruct;

@end
