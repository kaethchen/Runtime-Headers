@class NSXPCListenerEndpoint, NSXPCConnection, NSXPCInterface, NSNumber;

@interface TKCTKDConnection : NSObject {
    NSXPCListenerEndpoint *_serverEndpoint;
    NSXPCConnection *_serverConnection;
    BOOL _namedConnection;
    NSNumber *_targetUID;
}

@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly, nonatomic) NSXPCListenerEndpoint *configurationEndpoint;
@property (readonly, nonatomic) NSXPCConnection *serverConnection;
@property (retain, nonatomic) NSXPCInterface *exportedInterface;
@property (retain, nonatomic) id exportedObject;
@property (nonatomic) BOOL _testing_noAutomaticReconnect;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithCTKDEndpoint:(id)a0 targetUID:(id)a1;
- (id)withError:(id *)a0 invoke:(id /* block */)a1;

@end
