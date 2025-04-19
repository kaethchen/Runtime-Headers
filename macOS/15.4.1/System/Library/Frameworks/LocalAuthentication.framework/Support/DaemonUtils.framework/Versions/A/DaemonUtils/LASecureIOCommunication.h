@class NSMutableDictionary, NSString, BridgeXPCConnection, BridgeXPCListener, NSObject;
@protocol OS_dispatch_queue, LASecureIOCommunicationDelegate;

@interface LASecureIOCommunication : NSObject {
    NSMutableDictionary *_currentCalls;
    NSObject<OS_dispatch_queue> *_queue;
    BridgeXPCListener *_xpcListener;
    BridgeXPCConnection *_xpcConnection;
    NSString *_serviceName;
    BOOL _client;
}

@property (weak) NSObject<LASecureIOCommunicationDelegate> *delegate;

- (id)init;
- (void).cxx_destruct;
- (long long)send:(id)a0;
- (id /* block */)eventHandler;
- (long long)setupConnection;
- (long long)executeCommand:(unsigned int)a0 version:(id)a1 withData:(id)a2 andResponse:(id *)a3;
- (long long)executeCommand:(unsigned int)a0 withData:(id)a1 andResponse:(id *)a2;
- (long long)handleTransferRequest:(id)a0;
- (void)handleTransferResponse:(id)a0;
- (id)initAsClient:(id)a0;
- (id)initAsServer:(id)a0;
- (void)receive:(id)a0;

@end
