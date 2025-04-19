@class NSMutableDictionary, NSXPCConnection, NSMutableSet, NSMutableArray, NSObject;
@protocol _ASWebAuthenticationSessionRequestServerDelegate, OS_dispatch_queue;

@interface _ASWebAuthenticationSessionRequestServer : NSObject {
    NSMutableArray *_requestQueue;
    NSMutableSet *_requestsInProgress;
    NSMutableDictionary *_requestsToCompletionHandlers;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSXPCConnection *_clientConnection;
}

@property (weak, nonatomic) id<_ASWebAuthenticationSessionRequestServerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)_dispatchRequest:(id)a0;
- (void)_invalidateClientConnection;
- (void)_dispatchNextRequest;
- (void)_immediatelyCancelRequest:(id)a0;
- (id)_inProgressRequestWithUUID:(id)a0;
- (id)_queuedRequestWithUUID:(id)a0;
- (id)_requestHandlerProxy;
- (void)cancelRequestWithUUID:(id)a0;
- (void)connectToClientWithEndpoint:(id)a0;
- (void)didFulfillRequest:(id)a0 withCallbackURL:(id)a1 error:(id)a2;
- (void)enqueueRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
