@class NSLock, NSString, NSArray, AXKWorkspaceManager, AXKElementController, AXFUIElement, NSMutableSet, AXKApplicationController, NSObject;
@protocol OS_dispatch_queue;

@interface AXKKeyboardFocusTracker : NSObject <AXKWorkspaceObserver>

@property (class, readonly, nonatomic) AXKKeyboardFocusTracker *shared;

@property (nonatomic, getter=isStarted) BOOL started;
@property (retain, nonatomic) AXFUIElement *_originalSharedElement;
@property (readonly, nonatomic) NSMutableSet *_listenerWrappers;
@property (retain, nonatomic, setter=_setKeyboardFocusedApplicationController:) AXKApplicationController *_keyboardFocusedApplicationController;
@property (retain, nonatomic, setter=_setKeyboardFocusedElementController:) AXKElementController *_keyboardFocusedElementController;
@property (copy, nonatomic, setter=_setSelectedElementControllers:) NSArray *_selectedElementControllers;
@property (retain, nonatomic, setter=_setDockApplicationController:) AXKApplicationController *_dockApplicationController;
@property (retain, nonatomic, setter=_setDockProcessSwitcherListElementController:) AXKElementController *_dockProcessSwitcherListElementController;
@property (retain, nonatomic, setter=_setLaunchPadGridElementController:) AXKElementController *_launchPadGridElementController;
@property (retain, nonatomic, setter=_setSpotlightApplicationController:) AXKApplicationController *_spotlightApplicationController;
@property (retain, nonatomic) NSLock *_propertyLock;
@property (retain, nonatomic, setter=_setSharedKeyboardFocusedElementController:) AXKElementController *_sharedKeyboardFocusedElementController;
@property (copy, nonatomic, setter=_setSharedKeyboardFocusedElementSelectedElementControllers:) NSArray *_sharedKeyboardFocusedElementSelectedElementControllers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_trackerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_delegateQueue;
@property (retain, nonatomic) AXKWorkspaceManager *_workspaceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_start;
- (void)_stop;
- (void)registerListener:(id)a0;
- (void)_refreshKeyboardFocusedElement:(id)a0;
- (void)_signalSelectedElementsChanged:(id)a0;
- (void)_dockElementCreated:(id)a0;
- (void)_dockElementDestroyed:(id)a0;
- (void)_dockProcessSwitcherListSelectedElementChanged:(id)a0;
- (void)_elementCreatedNotification:(id)a0;
- (void)_focusedUIElementChanged:(id)a0;
- (void)_keyboardFocusedElementDestroyed:(id)a0;
- (void)_launchPadDidShow:(id)a0;
- (void)_launchPadSelectedChildrenChanged:(id)a0;
- (void)_menuWasCreated:(id)a0;
- (void)_performAsyncOnApplicationQueueOfElement:(id)a0 block:(id /* block */)a1;
- (void)_performAsyncOnDelegateQueue:(id /* block */)a0;
- (void)_performAsyncOnTrackerQueue:(id /* block */)a0;
- (void)_refreshKeyboardFocusedApplication:(id)a0;
- (void)_selectedChildrenChanged:(id)a0;
- (void)_selectedRowsChanged:(id)a0;
- (void)_selectedTextChangedNotification:(id)a0;
- (void)_sharedKeyboardFocusdSelectedChildrenChange:(id)a0;
- (void)_sharedKeyboardFocusedElementDestroyed:(id)a0;
- (void)_sharedKeyboardFocusedElementRowCountChanged:(id)a0;
- (void)_sharedKeyboardFocusedElementSelectedRowsChanged:(id)a0;
- (BOOL)_shouldProcessSharedFocusedElementRowChange:(id)a0;
- (void)_signalKeyboardFocusedApplicationChanged:(id)a0;
- (void)_signalKeyboardFocusedElementChanged:(id)a0;
- (void)_signalSelectionChanged:(id)a0;
- (void)_signalSharedKeyboardFocusedElementChanged:(id)a0 elementInfo:(id)a1;
- (void)_signalSharedKeyboardFocusedElementDestroyed:(id)a0;
- (void)_signalSharedKeyboardFocusedElementSelectedElementsChanged:(id)a0 elementInfo:(id)a1;
- (void)_spotlightElementCreated:(id)a0;
- (void)_spotlightElementDestroyed:(id)a0;
- (id)_stringForElement:(id)a0;
- (void)pruneListeners;
- (void)unregisterListener:(id)a0;
- (void)workspaceManager:(id)a0 didUpdateFrontmostApplicationController:(id)a1;
- (void)workspaceManager:(id)a0 didUpdateRunningApplications:(id)a1;

@end
