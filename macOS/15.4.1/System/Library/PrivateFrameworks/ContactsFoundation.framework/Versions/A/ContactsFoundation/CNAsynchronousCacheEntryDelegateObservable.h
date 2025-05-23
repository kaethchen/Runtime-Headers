@class NSString, NSMutableArray;

@interface CNAsynchronousCacheEntryDelegateObservable : CNObservable <CNAsynchronousCacheEntryDelegate> {
    NSMutableArray *_observers;
    id _currentValue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)subscribe:(id)a0;
- (void)cacheEntryDidUpdateValue:(id)a0;

@end
