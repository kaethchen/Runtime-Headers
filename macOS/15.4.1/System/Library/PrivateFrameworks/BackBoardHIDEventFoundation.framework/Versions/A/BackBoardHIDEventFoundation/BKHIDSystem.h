@class BKHIDEventDeliveryManager, NSString, BKHIDClientConnectionManager, NSObject, BKHIDEventSenderCache;
@protocol BKHIDEventProcessor, BKHIDDisplayChangeObserving, BKHIDEventDispatcherProviding, BKHIDSystemDelegate, OS_dispatch_queue, BKHIDBufferedEventProcessor, OS_dispatch_mach;

@interface BKHIDSystem : NSObject <BKHIDEventProcessor, BKHIDEventBufferingHIDSystem, BKHIDSystemInterfacing> {
    struct __IOHIDEventSystem { } *_HIDEventSystem;
    struct __IOHIDEventSystemClient { } *_HIDEventSystemClient;
    NSObject<OS_dispatch_queue> *_gsEventQueue;
}

@property (getter=isFullyInitialized) BOOL fullyInitialized;
@property (retain, getter=HIDSystemChannel) NSObject<OS_dispatch_mach> *HIDSystemChannel;
@property (readonly, nonatomic) id<BKHIDEventProcessor, BKHIDBufferedEventProcessor> eventProcessor;
@property (retain, nonatomic) id<BKHIDDisplayChangeObserving> mainDisplayObserver;
@property (retain, nonatomic) id<BKHIDEventDispatcherProviding> dispatcherProvider;
@property (weak) id<BKHIDSystemDelegate> delegate;
@property (readonly) BKHIDEventDeliveryManager *deliveryManager;
@property (readonly) BKHIDEventSenderCache *senderCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BKHIDClientConnectionManager *clientConnectionManager;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)systemPropertyForKey:(id)a0;
- (id)IOHIDServicesMatching:(id)a0;
- (void)_asyncScheduleWithHIDEventQuue:(id /* block */)a0;
- (long long)processEvent:(inout struct __IOHIDEvent **)a0 sender:(id)a1 dispatcher:(id)a2;
- (void)injectHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void)registerIOHIDServicesCallback:(void /* function */ *)a0 matchingDictionary:(id)a1 target:(void *)a2 refCon:(void *)a3;
- (void)_beginHandlingEvents;
- (void)buffer:(id)a0 drainEvent:(struct __IOHIDEvent { } *)a1 withContext:(id)a2 sender:(id)a3 sequence:(id)a4 toResolution:(id)a5;
- (void)bufferDidFinishDraining:(id)a0;
- (void)bufferWillBeginDraining:(id)a0;
- (void)bufferingDidAddNewBuffers:(id)a0;
- (void)injectGSEvent:(struct __GSEvent { } *)a0;
- (void)requestBufferReevaluationWithContext:(id)a0;
- (void)setSystemProperty:(id)a0 forKey:(id)a1;
- (void)startEventProcessor:(id)a0 mainDisplayObserver:(id)a1 deliveryManager:(id)a2 dispatcherProvider:(id)a3;
- (void)startEventRouting;
- (void)startHIDSystem;
- (void)startServerWithChannel:(id)a0;
- (struct __IOHIDEvent { } *)systemEventOfType:(unsigned int)a0 matchingEvent:(struct __IOHIDEvent { } *)a1 options:(unsigned int)a2;
- (void)unregisterIOHIDServicesCallback:(void /* function */ *)a0 matchingDictionary:(id)a1 target:(void *)a2 refCon:(void *)a3;

@end
