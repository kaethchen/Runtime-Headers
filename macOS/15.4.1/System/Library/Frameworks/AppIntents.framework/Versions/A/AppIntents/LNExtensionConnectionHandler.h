@class LNAppContext, NSMutableSet;

@interface LNExtensionConnectionHandler : NSObject <_EXMainConnectionHandler> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) LNAppContext *appContext;
@property (retain, nonatomic) id principalObject;
@property (readonly, nonatomic) NSMutableSet *clientConnections;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPrincipalObject:(id)a0;
- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (void)addClientConnection:(id)a0;
- (void)removeClientConnection:(id)a0;

@end
