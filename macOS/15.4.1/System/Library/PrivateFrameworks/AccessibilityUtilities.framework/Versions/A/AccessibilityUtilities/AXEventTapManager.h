@class NSRecursiveLock, NSMutableDictionary, NSMutableSet, NSMutableArray;

@interface AXEventTapManager : NSObject {
    NSMutableArray *_eventTaps;
    NSMutableArray *_addedEventTapPairs;
    NSMutableSet *_removedEventTapIdentifiers;
    BOOL _isEnumeratingEventTaps;
    BOOL _shouldReorderEventTaps;
    NSRecursiveLock *_eventTapLock;
    struct __IOHIDEventSystemClient { } *_ioSystemPostBackClient;
}

@property (retain, nonatomic) NSMutableDictionary *disabledIDMappingRegistry;
@property (copy, nonatomic) id /* block */ installationGSCallback;
@property (copy, nonatomic) id /* block */ installationHIDCallback;
@property (copy, nonatomic) id /* block */ installationEventRepPost;
@property (nonatomic) BOOL ignoreEventsForContinuitySession;

+ (id)sharedManager;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)removeEventTap:(id)a0;
- (BOOL)_accessibilityShouldIgnoreHIDServiceForContinuity:(struct __IOHIDServiceClient { } *)a0;
- (id)_copyCurrentEventTapPairs;
- (void)_enumerateEventTapPairsUsingBlock:(id /* block */)a0;
- (void)_handleTestIOHIDEvent:(struct __IOHIDEvent { } *)a0;
- (id)_hidFilterListForPair:(id)a0 filterEvents:(id)a1;
- (void)_installEventTap:(id)a0 skipDeviceMatching:(BOOL)a1 filterEvents:(id)a2;
- (void)_installHIDFilter:(id)a0 skipDeviceMatching:(BOOL)a1 filterEvents:(id)a2;
- (void)_installSystemEventTap:(id)a0;
- (void)_passivelyPeakAtHIDEventWithTarget:(void *)a0 tapPair:(id)a1 sender:(void *)a2 event:(struct __IOHIDEvent { } *)a3 axEventRep:(id)a4 didHandle:(BOOL)a5;
- (BOOL)_processHIDEvent:(struct __IOHIDEvent { } *)a0 taskPort:(unsigned int)a1 bundleId:(id)a2;
- (void)_removeHIDEventTapFilter:(id)a0;
- (void)_reorderEventTaps;
- (void)_runMatchingServiceHandler:(id)a0;
- (void)_setEventTapPriority:(id)a0 priority:(int)a1;
- (void)_setHIDEventTapCallback:(void *)a0;
- (id)installEventTap:(id /* block */)a0 identifier:(id)a1 type:(int)a2;
- (id)installEventTap:(id /* block */)a0 identifier:(id)a1 type:(int)a2 skipDeviceMatching:(BOOL)a3 filterEvents:(id)a4 matchingServiceHandler:(id /* block */)a5;
- (id)installKeyboardEventTap:(id /* block */)a0 identifier:(id)a1 matchingServiceHandler:(id /* block */)a2;
- (void)runMatchingServiceHandlerForEventTap:(id)a0;
- (void)sendEvent:(id)a0 afterTap:(id)a1 useGSEvent:(BOOL)a2 namedTaps:(id)a3 options:(unsigned long long)a4;
- (void)sendHIDSystemEvent:(id)a0 repostCreatorHIDEvent:(BOOL)a1 senderID:(unsigned long long)a2;
- (void)sendHIDSystemEvent:(id)a0 senderID:(unsigned long long)a1;
- (void)setEventTapPriority:(id)a0 priority:(int)a1;
- (void)setFailedToProcessInTimeCallback:(id)a0 callback:(id /* block */)a1;

@end
