@class NSString, IASAnalyticsServer, NSXPCInterface;

@interface IASXPCServer : NSObject <NSXPCListenerDelegate> {
    NSXPCInterface *_interface;
    IASAnalyticsServer *_analyticsServer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithAnalyticsServer:(id)a0;
- (id)initWithServiceName:(id)a0 analyticsServer:(id)a1;

@end
