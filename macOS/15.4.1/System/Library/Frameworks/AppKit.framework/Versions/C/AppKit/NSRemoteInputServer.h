@class NSConnection;

@interface NSRemoteInputServer : NSInputServer {
    NSConnection *_connection;
}

- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (void)_invalidateConnectionsAsNecessary:(id)a0;
- (id)initWithDelegate:(id)a0 name:(id)a1;
- (void)markedTextAbandoned:(id)a0;
- (void)terminate:(id)a0;

@end
