@class NSString, NSObject;
@protocol _GEOCountryConfigurationServerProxyDelegate, OS_dispatch_source, OS_dispatch_queue, GEOCancellable;

@interface _GEOCountryConfigurationLocalProxy : NSObject <_GEOCountryConfigurationServerProxy> {
    NSObject<OS_dispatch_queue> *_queue;
    id<_GEOCountryConfigurationServerProxyDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_source> *_scheduledUpdateTimer;
    id _countryCodeOverrideChangeListener;
    id<GEOCancellable> _geoIPLookupTask;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (BOOL)_checkThrottlerOrScheduleUpdate:(id *)a0;
- (void)_determineCurrentCountryCode:(id /* block */)a0;
- (void)_determineGeoIPCountryCode:(id /* block */)a0;
- (void)_postNotificationsForOldInfo:(id)a0 newInfo:(id)a1;
- (void)_reachabilityChanged:(id)a0;
- (void)_scheduleUpdate:(double)a0;
- (void)_updateCountryCodeWithCallbackQueue:(id)a0 callback:(id /* block */)a1;
- (void)updateCountryCodeWithCallbackQueue:(id)a0 callback:(id /* block */)a1;

@end
