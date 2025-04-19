@class NSArray, NSString, NSLock, AXEEventTap;

@interface AXEEventTapManager : NSObject <AXEEventTapDelegate>

@property (class, readonly) AXEEventTapManager *sharedHIDTapManager;
@property (class, readonly) AXEEventTapManager *sharedSessionTapManager;
@property (class, readonly) AXEEventTapManager *sharedAnnotatedSessionTapManager;

@property (readonly, nonatomic) unsigned int _tapPlacement;
@property (readonly, nonatomic) unsigned long long _priority;
@property (readonly, nonatomic) NSLock *_listenerLock;
@property (copy, nonatomic) NSArray *_passiveListeners;
@property (copy, nonatomic) NSArray *_activeListeners;
@property (retain, nonatomic) AXEEventTap *_passiveEventTap;
@property (retain, nonatomic) AXEEventTap *_activeEventTap;
@property (readonly, nonatomic) unsigned long long location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;
+ (id)_cgPriorityStringForAXEPriority:(unsigned long long)a0;
+ (id)_createEventTapManagerAtLevel:(unsigned long long)a0;
+ (id)sharedTapForLocation:(unsigned long long)a0;
+ (id)sharedTapManagerAtLevel:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)registerListener:(id)a0 listenOnly:(BOOL)a1 forEventMask:(unsigned long long)a2;
- (void)unregisterListener:(id)a0 listenOnly:(BOOL)a1 forEventMask:(unsigned long long)a2;
- (void)registerMouseEventListener:(id)a0 listenOnly:(BOOL)a1;
- (void)unregisterMouseEventListener:(id)a0 listenOnly:(BOOL)a1;
- (void)unregisterListenerForAllEvents:(id)a0;
- (id)_createEventTapWithEventsOfInterest:(unsigned long long)a0 listenOnly:(BOOL)a1;
- (unsigned long long)_eventsOfInterestAcrossAllListeners:(id)a0;
- (id)_findWrapperForListener:(void *)a0 inListeners:(id)a1;
- (id)_initWithPlacement:(unsigned int)a0 location:(unsigned long long)a1 priority:(unsigned long long)a2;
- (void)_recreateEventTapAsNeededForListenerWrappers:(id)a0 listenOnly:(BOOL)a1;
- (void)_unregisterListener:(void *)a0 listenOnly:(BOOL)a1 forEventMask:(unsigned long long)a2;
- (void)_unregisterListenerForAllEvents:(void *)a0;
- (struct __CGEvent { } *)eventTap:(id)a0 handleEvent:(struct __CGEvent { } *)a1 type:(unsigned int)a2 withProxy:(struct __CGEventTapProxy { } *)a3;
- (void)registerGestureEventListener:(id)a0 listenOnly:(BOOL)a1;
- (void)registerKeyboardEventListener:(id)a0 listenOnly:(BOOL)a1;
- (void)unregisterGestureEventListener:(id)a0 listenOnly:(BOOL)a1;
- (void)unregisterKeyboardEventListener:(id)a0 listenOnly:(BOOL)a1;

@end
