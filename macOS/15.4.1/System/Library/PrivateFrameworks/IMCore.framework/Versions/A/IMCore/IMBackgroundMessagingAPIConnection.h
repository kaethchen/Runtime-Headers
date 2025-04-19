@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface IMBackgroundMessagingAPIConnection : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void).cxx_destruct;
- (void)_clearConnection;
- (id)_currentConnection;
- (void)checkAuthorizationStatusForRecipients:(id)a0 completion:(id /* block */)a1;
- (void)requestBackgroundMessagingAuthorizationForRecipients:(id)a0 completion:(id /* block */)a1;
- (void)sendBackgroundMessage:(id)a0 toRecipient:(id)a1 completion:(id /* block */)a2;
- (id)_backgroundMessagingAPIServiceWithErrorHandler:(id /* block */)a0;

@end
