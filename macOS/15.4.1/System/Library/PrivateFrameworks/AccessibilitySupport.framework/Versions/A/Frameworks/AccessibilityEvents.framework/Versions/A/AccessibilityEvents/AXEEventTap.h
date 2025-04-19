@class NSString, NSLock, NSThread;
@protocol AXEEventTapDelegate;

@interface AXEEventTap : NSObject {
    _Atomic BOOL _isEnabled;
    struct __CFMachPort { } *__eventTap;
    struct __CFRunLoopSource { } *__runLoopSource;
}

@property (setter=_setEnabled:) BOOL isEnabled;
@property (readonly, nonatomic) unsigned int _location;
@property (readonly, copy, nonatomic) NSString *_priority;
@property (readonly, nonatomic) unsigned int _placement;
@property (readonly, nonatomic) unsigned int _options;
@property (readonly, nonatomic) NSLock *_eventTapThreadLock;
@property (retain) NSThread *_eventTapThread;
@property (nonatomic, setter=_setLastReconnectTimestamp:) double _lastReconnectTimestamp;
@property (nonatomic, setter=_setReconnectCount:) unsigned int _reconnectCount;
@property (readonly, nonatomic) long long _eventTapID;
@property (readonly, weak) id<AXEEventTapDelegate> delegate;
@property (readonly) BOOL isActiveEventTap;
@property (readonly) unsigned long long eventsOfInterest;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (void)_runBlock:(id /* block */)a0;
+ (id)_eventTapForEventTapID:(long long)a0;
+ (id)_eventTapIDQueue;
+ (id)_eventTapIDToEventTapInfoMap;
+ (void)_setEventTap:(id)a0 eventTapID:(long long)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)disable;
- (void)enable;
- (void)_performBlockOnMainThread:(id /* block */)a0;
- (void)_continueReconnectOnMainThread;
- (void)_createEventTapThreadIfNeeded;
- (void)_disableOnEventTapThread;
- (void)_enableOnEventTapThread;
- (struct __CFMachPort { } *)_eventTap;
- (struct __CGEvent { } *)_handleEventTapEvent:(struct __CGEvent { } *)a0 type:(unsigned int)a1 withProxy:(struct __CGEventTapProxy { } *)a2;
- (void)_installEventTapIfNeededAnyThread;
- (void)_installEventTapIfNeededOnEventTapThread;
- (void)_performBlockOnEventTapThread:(id /* block */)a0;
- (void)_performBlockOnMainThreadAfterDelay:(double)a0 block:(id /* block */)a1;
- (void)_performOnEventTapThreadAndWait:(SEL)a0;
- (void)_reconnectOnEventTapThread;
- (struct __CFRunLoopSource { } *)_runLoopSource;
- (void)_setEventTap:(struct __CFMachPort { } *)a0;
- (void)_setRunLoopSource:(struct __CFRunLoopSource { } *)a0;
- (void)_uninstallEventTapAnyThread;
- (void)_uninstallEventTapOnEventTapThread;
- (id)initWithTapLocation:(unsigned int)a0 priority:(struct __CFString { } *)a1 placement:(unsigned int)a2 options:(unsigned int)a3 eventsOfInterest:(unsigned long long)a4 delegate:(id)a5;

@end
