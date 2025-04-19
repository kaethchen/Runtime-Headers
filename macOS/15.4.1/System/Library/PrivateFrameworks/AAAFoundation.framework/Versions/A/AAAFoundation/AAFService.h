@class NSXPCListener, NSString, NSArray, Protocol;

@interface AAFService : NSObject <NSXPCListenerDelegate>

@property (retain, nonatomic) NSXPCListener *serviceListener;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSArray *preConnectEntitlements;
@property (readonly, nonatomic) Protocol *exportedProtocol;
@property (readonly, nonatomic) id exportedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (BOOL)shouldAcceptNewConnection:(id)a0;
- (void)configureExportedInterface:(id)a0;
- (void)startup;
- (void)_configureListener;

@end
