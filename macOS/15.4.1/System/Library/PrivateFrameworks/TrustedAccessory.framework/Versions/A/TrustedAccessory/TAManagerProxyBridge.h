@class NSString, NSXPCConnection;
@protocol TAXPCProtocol;

@interface TAManagerProxyBridge : TAManagerProxy <TAXPCClientProtocol> {
    NSXPCConnection<TAXPCProtocol> *_xpcConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proxy;

@end
