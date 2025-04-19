@class NSMutableArray;

@interface ILObserverNode : NSObject {
    NSMutableArray *observers;
}

- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)observers;
- (id)initWithObserver:(id)a0;
- (long long)observedCount;
- (void)removeOneObserver:(id)a0;

@end
