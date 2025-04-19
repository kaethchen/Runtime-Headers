@class NSAppleEventDescriptor;

@interface NSAppleEventManager : NSObject {
    BOOL _isPreparedForDispatch;
    char _padding[3];
}

@property (readonly, retain) NSAppleEventDescriptor *currentAppleEvent;
@property (readonly, retain) NSAppleEventDescriptor *currentReplyAppleEvent;

+ (BOOL)_eventAccessGroups:(id)a0 matchesDefinitionGroups:(id)a1;
+ (id)sharedAppleEventManager;

- (id)init;
- (id)replyAppleEventForSuspensionID:(struct __NSAppleEventManagerSuspension { } *)a0;
- (id)_perThreadHandlingStack:(BOOL)a0;
- (BOOL)_popIfTopHandling:(id)a0;
- (id)_poppedTopHandling;
- (void)_prepareForDispatch;
- (void)_pushHandling:(id)a0;
- (void)_resumeIfNotTopHandling:(id)a0 withScriptCommandResult:(id)a1;
- (void)_setEventSecurityHandler:(id)a0 andSelector:(SEL)a1 forEventClass:(unsigned int)a2 andEventID:(unsigned int)a3;
- (void)_suspendIfTopHandling:(id)a0;
- (id)_topHandling;
- (id)appleEventForSuspensionID:(struct __NSAppleEventManagerSuspension { } *)a0;
- (short)dispatchRawAppleEvent:(const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a0 withRawReply:(struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a1 handlerRefCon:(void *)a2;
- (void)removeEventHandlerForEventClass:(unsigned int)a0 andEventID:(unsigned int)a1;
- (void)resumeWithSuspensionID:(struct __NSAppleEventManagerSuspension { } *)a0;
- (void)setCurrentAppleEventAndReplyEventWithSuspensionID:(struct __NSAppleEventManagerSuspension { } *)a0;
- (void)setEventHandler:(id)a0 andSelector:(SEL)a1 forEventClass:(unsigned int)a2 andEventID:(unsigned int)a3;
- (struct __NSAppleEventManagerSuspension { } *)suspendCurrentAppleEvent;

@end
