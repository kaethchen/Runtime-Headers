@class NSMapTable;

@interface MRClientApplicationConnectionManager : NSObject

@property (class, readonly, nonatomic) MRClientApplicationConnectionManager *sharedManager;

@property (readonly, nonatomic) NSMapTable *connections;
@property (readonly, nonatomic) NSMapTable *listeners;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) NSMapTable *listenerPendingConnections;
@property (readonly, nonatomic) NSMapTable *handoffSessionHandlers;

- (id)init;
- (void).cxx_destruct;
- (void)registerListener:(id)a0;
- (id)connectionForIdentifier:(id)a0;
- (id /* block */)handoffSessionHandlerForPlayerPath:(id)a0;
- (void)listenerForHandlingConnection:(id)a0 completion:(id /* block */)a1;
- (id)listenerForServiceName:(id)a0 playerPath:(id)a1;
- (void)registerConnection:(id)a0;
- (void)registerHandoffSessionHandlerForPlayerPath:(id)a0 handler:(id /* block */)a1;
- (void)unregisterConnection:(id)a0;

@end
