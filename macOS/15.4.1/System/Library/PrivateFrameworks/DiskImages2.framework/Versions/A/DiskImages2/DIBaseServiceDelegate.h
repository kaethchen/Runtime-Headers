@class NSXPCListener, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface DIBaseServiceDelegate : NSObject <NSXPCListenerDelegate>

@property (retain, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)enterSandbox;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)serviceName;
- (id)sandboxProfile;
- (BOOL)setupNewConnection:(id)a0;
- (void)createListener;
- (void)startXPClistener;
- (void)validateConnection;

@end
