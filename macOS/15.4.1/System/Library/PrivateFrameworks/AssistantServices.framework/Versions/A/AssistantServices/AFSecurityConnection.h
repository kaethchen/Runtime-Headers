@class NSString, NSXPCConnection, AFInstanceContext, NSObject;
@protocol OS_dispatch_queue;

@interface AFSecurityConnection : NSObject <AFSecurityService> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    AFInstanceContext *_instanceContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id)_connection;
- (void)_connectionInvalidated;
- (void)_connectionInterrupted;
- (id)initWithInstanceContext:(id)a0;
- (void)_dispatchCallbackForProcessedData:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)_dispatchCallbackForProcessedDataMap:(id)a0 errorMap:(id)a1 completion:(id /* block */)a2;
- (void)_invalidateConnection;
- (void)_processData:(id)a0 usingProcedure:(long long)a1 completion:(id /* block */)a2;
- (void)_processDataMap:(id)a0 usingProcedure:(long long)a1 completion:(id /* block */)a2;
- (oneway void)internalAuthAppleConnectServiceTicket:(id /* block */)a0;
- (oneway void)internalAuthSessionToken:(id /* block */)a0;
- (oneway void)processData:(id)a0 usingProcedure:(long long)a1 completion:(id /* block */)a2;
- (oneway void)processDataMap:(id)a0 usingProcedure:(long long)a1 completion:(id /* block */)a2;
- (oneway void)setInternalAuthAppleConnectServiceTicket:(id)a0 completion:(id /* block */)a1;
- (oneway void)setInternalAuthSessionToken:(id)a0 completion:(id /* block */)a1;
- (oneway void)setKeychainValue:(id)a0 forKey:(id)a1 accountIdentifier:(id)a2 completion:(id /* block */)a3;

@end
