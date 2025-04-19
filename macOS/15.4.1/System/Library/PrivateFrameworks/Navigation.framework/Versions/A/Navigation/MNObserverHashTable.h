@class Protocol, NSHashTable, NSObject, geo_isolater;
@protocol OS_dispatch_queue;

@interface MNObserverHashTable : NSObject {
    Protocol *_protocol;
    NSHashTable *_observers;
    geo_isolater *_observerLock;
}

@property (readonly) BOOL hasObservers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

- (id)description;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)unregisterObserver:(id)a0;
- (id)initWithProtocol:(id)a0;
- (void)registerObserver:(id)a0;

@end
