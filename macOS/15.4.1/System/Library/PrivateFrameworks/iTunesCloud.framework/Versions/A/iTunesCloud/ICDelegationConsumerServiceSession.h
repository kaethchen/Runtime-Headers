@class ICDelegationConsumerNetService, NSString, ICDelegationConsumerServiceProtocolHandler, ICDelegationConsumerServiceRequest, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICDelegationConsumerServiceSession : NSObject <ICDelegationConsumerNetServiceDelegate, ICDelegationServiceConnectionDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_acceptedConnections;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    ICDelegationConsumerNetService *_netService;
    NSMutableArray *_pendingUserIdentities;
    ICDelegationConsumerServiceProtocolHandler *_protocolHandler;
    NSMutableDictionary *_sessionIDToRequestInfoMap;
    NSObject<OS_dispatch_source> *_timeoutDispatchSource;
}

@property (readonly, copy, nonatomic) ICDelegationConsumerServiceRequest *request;
@property (readonly, nonatomic) id /* block */ responseHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)_stop;
- (void)_handleTimeout;
- (void)delegationConsumerNetService:(id)a0 didAcceptConnectionWithInputStream:(id)a1 outputStream:(id)a2;
- (void)delegationServiceConnection:(id)a0 didEncouterError:(id)a1;
- (BOOL)delegationServiceConnection:(id)a0 didReceiveRequest:(id)a1;
- (void)delegationServiceConnectionDidClose:(id)a0;
- (id)initWithRequest:(id)a0 responseHandler:(id /* block */)a1;

@end
