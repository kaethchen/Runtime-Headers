@class NSString;
@protocol GEOWiFiQualityServiceProxy;

@interface GEOWiFiQualityServiceManager : NSObject <GEOWiFiQualityServiceProxy> {
    id<GEOWiFiQualityServiceProxy> _proxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (void)useProxyClass:(Class)a0;

- (id)init;
- (void).cxx_destruct;
- (void)cancelRequestId:(id)a0;
- (void)submitWiFiQualityServiceRequest:(id)a0 requestId:(id)a1 auditToken:(id)a2 completionQueue:(id)a3 completion:(id /* block */)a4;
- (void)submitWiFiQualityTileLoadForKey:(id)a0 eTag:(id)a1 requestId:(id)a2 auditToken:(id)a3 completionQueue:(id)a4 completion:(id /* block */)a5;

@end
