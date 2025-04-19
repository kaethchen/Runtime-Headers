@class NSKeyValueSharedObserversSnapshot, NSKeyValueObservationInfo;

@interface NSKeyValueSharedObservers : NSObject {
    Class _observableClass;
    Class _currentClass;
    NSKeyValueObservationInfo *_currentObservationInfo;
    NSKeyValueSharedObserversSnapshot *_snapshot;
}

- (void)dealloc;
- (void)addSharedObserver:(id)a0 forKey:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (id)initWithObservableClass:(Class)a0;
- (id)snapshot;

@end
