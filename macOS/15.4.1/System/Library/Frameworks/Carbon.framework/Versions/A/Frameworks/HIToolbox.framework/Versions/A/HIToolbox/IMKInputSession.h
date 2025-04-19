@class NSString, NSXPCConnection, IMKClient, NSMutableDictionary, NSMutableArray;

@interface IMKInputSession : NSObject <IMKTextInput, IMKUnicodeTextInput, IMTSMSupport, IMKXPCSupport, IMKTextInput_FunctionRowUI, IMKTextInput_AutoCorrection, IMKTextInput_NSAppearance> {
    IMKClient *_client;
    NSMutableDictionary *_supportedEvents;
    int _eventStatus;
    struct OpaqueTSMDocumentID { } *_tsmDocument;
    long long _charactersEntered;
    struct _NSRange { unsigned long long location; unsigned long long length; } _markedRange;
    BOOL _supportsDocumentAccess;
    long long _eventPending;
    BOOL _commiting;
    BOOL _sessionFinishedPreviously;
    BOOL _allowRetryOnInvalidPortException;
    BOOL didActivate;
    BOOL activatePending;
    BOOL deferredActivatePending;
    BOOL deferredActivateHaveEventsQueued;
    BOOL deferredActivateHaveInputSessionActionsQueued;
    NSMutableArray *queuedInputSessionActions;
    NSMutableArray *queuedDeferredEvents;
    NSString *deferredActivateInputMode;
    NSMutableDictionary *placeholdersCachedWeakRef;
    NSMutableDictionary *_pendingEvents;
    NSXPCConnection *inputMethodXPCConnection;
    id touchBarViewController;
}

@property BOOL _allowRetryOnInvalidPortException;
@property BOOL didActivate;
@property BOOL activatePending;
@property BOOL deferredActivatePending;
@property (retain, nonatomic) NSString *deferredActivateInputMode;
@property BOOL deferredActivateHaveEventsQueued;
@property BOOL deferredActivateHaveInputSessionActionsQueued;
@property (retain, nonatomic) NSMutableArray *queuedInputSessionActions;
@property (retain, nonatomic) NSMutableArray *queuedDeferredEvents;
@property (retain, nonatomic) NSXPCConnection *inputMethodXPCConnection;
@property (retain, nonatomic) id touchBarViewController;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)IMKXPCPerformBlockOnMainThreadInMode:(struct __CFString { } *)a0 performHow:(int)a1 callerCmd:(SEL)a2 workBlock:(id /* block */)a3;
+ (void)IMKCFRunLoopSetup;
+ (id)inputSessionWithClient:(id)a0 document:(struct OpaqueTSMDocumentID { } *)a1;
+ (Class)subclass;

@end
