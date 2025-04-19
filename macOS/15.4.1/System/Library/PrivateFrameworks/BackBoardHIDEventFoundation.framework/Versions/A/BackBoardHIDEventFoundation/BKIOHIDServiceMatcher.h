@class NSString, NSDictionary, BKSHIDEventSenderDescriptor, NSObject;
@protocol OS_dispatch_queue, BKIOHIDServiceMatcherDataProviding, BKIOHIDServiceMatchObserver;

@interface BKIOHIDServiceMatcher : NSObject <BSInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BKSHIDEventSenderDescriptor *_senderDescriptor;
    BOOL _observeSynchronously;
    BOOL _startedMatching;
    _Atomic BOOL _invalidated;
    NSDictionary *_matchingDictionary;
    Class _serviceClass;
    id<BKIOHIDServiceMatchObserver> _observer;
    NSObject<OS_dispatch_queue> *_observerQueue;
    id<BKIOHIDServiceMatcherDataProviding> _dataProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)existingServices;
- (id)initWithMatchingDictionary:(id)a0 dataProvider:(id)a1;
- (id)initWithSenderDescriptor:(id)a0 dataProvider:(id)a1;
- (id)initWithUsagePage:(int)a0 usage:(int)a1 builtIn:(BOOL)a2 dataProvider:(id)a3;
- (void)startObserving:(id)a0 queue:(id)a1;
- (id)startObservingSynchronously:(id)a0;

@end
