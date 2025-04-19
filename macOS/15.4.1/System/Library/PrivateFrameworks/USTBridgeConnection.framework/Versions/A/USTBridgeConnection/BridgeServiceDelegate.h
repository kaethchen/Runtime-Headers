@class NSString;
@protocol USTAgentClientInterface;

@interface BridgeServiceDelegate : NSObject <NSXPCListenerDelegate> {
    id<USTAgentClientInterface> _server;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithServer:(id)a0;

@end
