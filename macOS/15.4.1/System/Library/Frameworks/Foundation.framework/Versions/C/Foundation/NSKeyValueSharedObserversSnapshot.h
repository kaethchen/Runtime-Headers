@class NSKeyValueObservationInfo;

@interface NSKeyValueSharedObserversSnapshot : NSObject {
    NSKeyValueObservationInfo *_cachedObservationInfo;
    Class _observableClass;
    Class _autonotifyingClass;
}

- (void)dealloc;
- (void)_assignToObject:(id)a0;
- (id)_initWithObservationInfo:(id)a0 andNotifyingISA:(Class)a1 forObjectOfClass:(Class)a2;

@end
