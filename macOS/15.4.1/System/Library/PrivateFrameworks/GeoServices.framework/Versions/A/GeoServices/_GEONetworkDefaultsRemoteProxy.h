@class NSString, geo_isolater, NSMutableArray;
@protocol _GEONetworkDefaultsServerProxyDelegate;

@interface _GEONetworkDefaultsRemoteProxy : NSObject <_GEONetworkDefaultsServerProxy> {
    geo_isolater *_isolation;
    NSMutableArray *_updateCompletionHandlers;
    int _configChangedToken;
}

@property (weak, nonatomic) id<_GEONetworkDefaultsServerProxyDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_networkDefaultsDidChange;
- (unsigned long long)_updateReason;
- (void)updateNetworkDefaults:(id /* block */)a0;
- (void)updateNetworkDefaultsWithReason:(unsigned long long)a0 completionHandler:(id /* block */)a1;

@end
