@class NSObject;
@protocol OS_dispatch_queue, OS_nw_path, OS_nw_path_evaluator;

@interface GEONetworkObserver : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_nw_path_evaluator> *_evaluator;
    NSObject<OS_nw_path> *_currentPath;
    BOOL _initialized;
    BOOL _networkReachable;
    BOOL _networkConstrained;
}

@property (readonly, nonatomic, getter=isNetworkReachable) BOOL networkReachable;
@property (readonly, nonatomic, getter=isNetworkConstrained) BOOL networkConstrained;
@property (readonly, nonatomic, getter=isCellConnection) BOOL cellConnection;
@property (readonly, nonatomic, getter=isWiFiConnection) BOOL wifiConnection;
@property (readonly, nonatomic, getter=isCompanionConnected) BOOL companionConnected;

+ (id)sharedNetworkObserver;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeNetworkReachableObserver:(id)a0;
- (void)addNetworkReachableObserver:(id)a0 selector:(SEL)a1;
- (void)_initializeNetworkMonitor;
- (BOOL)_isConnectionType:(int)a0;
- (void)_networkPathUpdated:(id)a0;
- (void)initializeIfNecessary;

@end
