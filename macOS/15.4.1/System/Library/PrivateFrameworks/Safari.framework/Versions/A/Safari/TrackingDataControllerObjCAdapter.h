@class NSTimer;

@interface TrackingDataControllerObjCAdapter : NSObject {
    struct TrackingDataController { void /* function */ **x0; id x1; struct TrackingDataControllerClient *x2; id x3; int x4; id x5; } *_trackingDataController;
    NSTimer *_cookieUpdateCoalescingTimer;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTrackingDataController:(struct TrackingDataController { void /* function */ **x0; id x1; struct TrackingDataControllerClient *x2; id x3; int x4; id x5; } *)a0;
- (void)_updateCookiesTimerFired:(id)a0;
- (void)acceptCookiesPolicyChangedHandler:(id)a0;
- (void)invalidateCookieUpdateCoalescingTimer;
- (void)refreshCookieUpdateCoalescingTimer;
- (void)registerForBlockCookiesPolicyChangeNotifications;

@end
