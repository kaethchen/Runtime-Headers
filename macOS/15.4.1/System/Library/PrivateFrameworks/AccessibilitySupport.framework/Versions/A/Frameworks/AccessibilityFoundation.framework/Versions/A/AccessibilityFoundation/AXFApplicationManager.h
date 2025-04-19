@class _AXFLaunchServicesProvider, NSString, NSArray, AXFDispatchQueue, NSOperationQueue, AXFUIElement, NSMutableArray, _AXFEventProvider;
@protocol AXFApplicationManagerDelegate;

@interface AXFApplicationManager : NSObject <_AXFLaunchServicesProviderDelegate, _AXFEventProviderDelegate>

@property (class, readonly) AXFApplicationManager *shared;

@property (retain, nonatomic, setter=_setLaunchServicesProvider:) _AXFLaunchServicesProvider *_launchServicesProvider;
@property (copy, nonatomic, setter=_setLaunchServicesProviderProvider:) id /* block */ _launchServicesProviderProvider;
@property (retain, nonatomic, setter=_setEventProvider:) _AXFEventProvider *_eventProvider;
@property (copy, nonatomic, setter=_setEventProviderProvider:) id /* block */ _eventProviderProvider;
@property (retain, nonatomic, setter=_setFrontmostApplication:) AXFUIElement *_frontmostApplication;
@property (retain, nonatomic, setter=_setFocusedApplication:) AXFUIElement *_focusedApplication;
@property (retain, nonatomic, setter=_setRunningApplications:) NSMutableArray *_runningApplications;
@property (readonly, nonatomic) AXFDispatchQueue *_applicationManagerQueue;
@property (readonly, nonatomic) AXFDispatchQueue *_delegateQueue;
@property (readonly, nonatomic) NSOperationQueue *_updateQueue;
@property (nonatomic) int _updateGen;
@property (weak) id<AXFApplicationManagerDelegate> delegate;
@property (readonly, copy) NSArray *runningApplications;
@property (readonly) AXFUIElement *frontmostApplication;
@property (readonly) AXFUIElement *focusedApplication;
@property (readonly) AXFUIElement *applicationWithMenubar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (BOOL)automaticallyNotifiesObserversOfApplicationWithMenubar;
+ (BOOL)automaticallyNotifiesObserversOfFrontmostApplication;
+ (BOOL)automaticallyNotifiesObserversOfRunningApplications;

- (id)init;
- (void).cxx_destruct;
- (void)launchServicesProvider:(id)a0 applicationWithProcessSerialNumberReady:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a1;
- (void)_appendApplication:(id)a0;
- (id)_applicationWithProcessIdentifier:(int)a0 applicationIdentifier:(id)a1;
- (id)_applicationWithProcessSerialNumber:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a0 applicationIdentifier:(id)a1;
- (void)_assertApplicationManagerQueue;
- (void)_assertNotApplicationManagerQueue;
- (void)_createApplicationWithPSNIfNeeded:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a0;
- (id)_knownApplicationWithElement:(id)a0;
- (id)_knownApplicationWithPSN:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a0;
- (id)_newEventProvider;
- (id)_newLaunchServicesProvider;
- (void)_notifyFocusedApplicationDidChangeHandler;
- (void)_notifyFrontmostApplicationDidChangeHandler;
- (void)_notifyRunningApplicationsDidChangeHandler;
- (void)_performBlockOnApplicationManagerQueue:(id /* block */)a0;
- (void)_performBlockOnApplicationManagerQueueAndWait:(id /* block */)a0;
- (void)_registerCurrentlyRunningApplications;
- (void)_removeApplicationWithPSN:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a0;
- (void)_setFrontmostApplication:(id)a0 preflight:(BOOL)a1;
- (void)_startObservingApplications;
- (void)_stopObservingApplications;
- (void)_updateFrontmostAndFocusedApplications;
- (id)applicationWithProcessIdentifier:(int)a0 applicationIdentifier:(id)a1;
- (id)applicationWithProcessSerialNumber:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a0 applicationIdentifier:(id)a1;
- (void)eventProviderKeyFocusChanged:(id)a0;
- (void)eventProviderNewFront:(id)a0;
- (id)initWithLaunchServicesProvider:(id /* block */)a0 eventProvider:(id /* block */)a1;
- (void)launchServicesProvider:(id)a0 applicationWithProcessSerialNumberBecameFrontMost:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a1;
- (void)launchServicesProvider:(id)a0 applicationWithProcessSerialNumberDied:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a1;
- (void)startObservingApplications;
- (void)stopObservingApplications;

@end
