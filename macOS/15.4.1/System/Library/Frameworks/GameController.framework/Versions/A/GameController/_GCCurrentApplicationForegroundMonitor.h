@class NSMutableSet;

@interface _GCCurrentApplicationForegroundMonitor : NSObject {
    NSMutableSet *_observers;
    _Atomic BOOL _appInBackground;
}

@property (readonly, getter=isAppInBackground) BOOL appInBackground;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)CBApplicationDidBecomeActive:(id)a0;
- (void)CBApplicationWillResignActive:(id)a0;
- (void)CBApplicationDidBecomeActive;
- (void)CBApplicationWillResignActive;
- (void)addObserver:(id)a0 notifyCurrent:(BOOL)a1;

@end
