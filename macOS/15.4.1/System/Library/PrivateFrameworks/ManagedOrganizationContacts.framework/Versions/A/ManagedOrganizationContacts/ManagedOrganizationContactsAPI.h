@class NSXPCListenerEndpoint;

@interface ManagedOrganizationContactsAPI : NSObject {
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
    NSXPCListenerEndpoint *_endpoint;
}

- (id)init;
- (void).cxx_destruct;
- (void)lock;
- (void)unlock;
- (id)initWithEndpoint:(id)a0;
- (void)objectsMatching:(id)a0 completion:(id /* block */)a1;
- (void)membersOfGroupWithIdentifier:(id)a0 completion:(id /* block */)a1;

@end
