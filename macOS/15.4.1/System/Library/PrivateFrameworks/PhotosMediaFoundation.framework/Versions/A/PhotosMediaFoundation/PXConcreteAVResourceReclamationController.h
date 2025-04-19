@class NSObject, NSHashTable;
@protocol OS_dispatch_queue, PXAVResourceReclamationEvent;

@interface PXConcreteAVResourceReclamationController : NSObject <PXAVResourceReclamationController> {
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_observersQueue;
}

@property (readonly, nonatomic) id<PXAVResourceReclamationEvent> mostRecentReclamationEvent;

- (id)init;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (id)observationWithWeakTarget:(id)a0 selector:(SEL)a1;
- (void)_enumerateObservers:(id /* block */)a0;
- (void)reclamationEventDidOccur:(id)a0;
- (void)setMostRecentReclamationEvent:(id)a0;
- (id)takeAssertionPreventingResourceReclamationWithReason:(id)a0;

@end
