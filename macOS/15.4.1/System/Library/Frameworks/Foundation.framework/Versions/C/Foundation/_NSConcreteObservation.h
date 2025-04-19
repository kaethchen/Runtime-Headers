@class NSObject;
@protocol NSObserver, NSObservable;

@interface _NSConcreteObservation : NSObservation {
    NSObject<NSObservable> *_LHSobservable;
    NSObject<NSObserver> *_RHSobserver;
    id _observers[4];
}

- (void)dealloc;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (void)finishObserving;
- (void *)_observerStorageOfSize:(unsigned long long)a0;
- (void)_receiveBox:(id)a0;
- (id)initWithObservable:(id)a0 observer:(id)a1;
- (void)remove;

@end
