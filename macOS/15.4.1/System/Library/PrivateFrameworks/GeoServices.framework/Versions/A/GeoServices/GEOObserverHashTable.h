@class Protocol, NSArray, NSMapTable, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface GEOObserverHashTable : NSObject {
    Protocol *_protocol;
    NSHashTable *_observers;
    NSMapTable *_observerQueues;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly, nonatomic) BOOL hasObservers;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *allObservers;

- (id)description;
- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)enumerateObserversWithGroup:(id)a0 visitor:(id /* block */)a1;
- (id)initWithProtocol:(id)a0 queue:(id)a1;
- (void)registerObserver:(id)a0 queue:(id)a1;

@end
