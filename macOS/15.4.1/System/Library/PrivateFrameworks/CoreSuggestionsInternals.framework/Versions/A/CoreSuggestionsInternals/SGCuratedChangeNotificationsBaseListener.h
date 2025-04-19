@class NSMapTable;

@interface SGCuratedChangeNotificationsBaseListener : NSObject {
    NSMapTable *_liveObserversMap;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)fire;
- (void)startListening;
- (void)stopListening;
- (void)addObserver:(id /* block */)a0 forObjectLifetime:(id)a1;

@end
