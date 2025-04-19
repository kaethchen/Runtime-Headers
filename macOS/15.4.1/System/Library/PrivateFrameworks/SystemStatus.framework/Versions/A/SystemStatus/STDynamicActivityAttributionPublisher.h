@class NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue, STServerLaunchObservable;

@interface STDynamicActivityAttributionPublisher : NSObject <STServerLaunchObserver> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSXPCConnection *_serverXPCConnection;
    NSString *_cachedLocalizedPlistKey;
    NSString *_cachedAppBundleID;
    id<STServerLaunchObservable> _serverLaunchObservable;
}

+ (void)setCurrentAttributionKey:(id)a0 andApp:(id)a1;
+ (void)setCurrentAttributionLocalizableKey:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1;
+ (void)setCurrentAttributionStringWithFormat:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1;
+ (void)setCurrentAttributionWebsiteString:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)didObserveServerLaunch:(id)a0;

@end
