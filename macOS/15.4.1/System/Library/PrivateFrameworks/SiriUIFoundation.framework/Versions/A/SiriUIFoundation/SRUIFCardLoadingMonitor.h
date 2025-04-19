@class NSMutableArray;

@interface SRUIFCardLoadingMonitor : NSObject {
    NSMutableArray *_observers;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)broadcastVisualResponseSnippet:(id)a0;
- (void)broadcastCardSnippet:(id)a0;
- (BOOL)isTrackingObserver:(id)a0;

@end
