@class NSArray, NSMapTable;

@interface GEOServiceRequester : NSObject {
    NSMapTable *_pendingRequests;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pendingRequestsLock;
    NSArray *_networkOperationClasses;
}

@property (retain, nonatomic) NSArray *networkOperationClasses;

- (id)init;
- (void).cxx_destruct;
- (void)_cancelRequest:(id)a0;
- (id)_keyForRequest:(id)a0;
- (void)_removeAllOperationsForRequest:(id)a0;
- (void)_addOperation:(id)a0 forRequest:(id)a1;
- (id)_currentOperationForRequest:(id)a0;
- (void)_request:(id)a0 completed:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (BOOL)_shouldTryNextOperation:(id)a0 forError:(id)a1 fromOperation:(id)a2;
- (void)_startWithRequest:(id)a0 traits:(id)a1 auditToken:(id)a2 config:(id)a3 throttleToken:(id)a4 options:(unsigned long long)a5 completionHandler:(id /* block */)a6;
- (void)_startWithRequest:(id)a0 traits:(id)a1 auditToken:(id)a2 config:(id)a3 throttleToken:(id)a4 options:(unsigned long long)a5 willSendRequestHandler:(id /* block */)a6 completionHandler:(id /* block */)a7;
- (id)_takeCurrentOperationForRequest:(id)a0;
- (id)_validateResponse:(id)a0;

@end
