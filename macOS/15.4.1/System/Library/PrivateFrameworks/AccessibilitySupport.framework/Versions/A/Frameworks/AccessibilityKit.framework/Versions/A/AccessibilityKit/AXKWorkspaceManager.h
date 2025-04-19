@class NSPointerArray, NSString, AXFApplicationManager, NSArray, NSMutableDictionary, NSObject, NSRunningApplication, AXKApplicationController, NSObservation, AXFScreen;
@protocol NSObserver, AXKWorkspaceManagerDelegate, OS_dispatch_queue, NSObservable;

@interface AXKWorkspaceManager : NSObject <AXFApplicationManagerDelegate>

@property (class, readonly) AXKWorkspaceManager *shared;

@property (nonatomic, setter=_setState:) unsigned char _state;
@property (retain, nonatomic, setter=_setStateQueue:) NSObject<OS_dispatch_queue> *_stateQueue;
@property (retain, nonatomic, setter=_setApplicationManager:) AXFApplicationManager *_applicationManager;
@property (retain, nonatomic, setter=_setApplicationCache:) NSMutableDictionary *_applicationCache;
@property (retain, nonatomic, setter=_setApplicationCacheQueue:) NSObject<OS_dispatch_queue> *_applicationCacheQueue;
@property (retain, nonatomic, setter=_setDelegateQueue:) NSObject<OS_dispatch_queue> *_delegateQueue;
@property (retain, nonatomic, setter=_setFrontmostApplicationController:) AXKApplicationController *_frontmostApplicationController;
@property (retain, nonatomic, setter=_setFocusedApplicationController:) AXKApplicationController *_focusedApplicationController;
@property (retain, nonatomic) NSRunningApplication *menuBarOwningApplication;
@property (retain, nonatomic, setter=_setMenuBarOwningApplicationObserver:) NSObservation<NSObservable, NSObserver> *_menuBarOwningApplicationObserver;
@property (retain, nonatomic) AXFScreen *mainScreen;
@property (retain, nonatomic, setter=_setMainScreenObserver:) NSObservation<NSObservable, NSObserver> *_mainScreenObserver;
@property (nonatomic, setter=_setMenuBounds:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _menuBounds;
@property (retain, nonatomic, setter=_setMenuExtras:) NSArray *_menuExtras;
@property (nonatomic, setter=_setMenuExtrasBounds:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _menuExtrasBounds;
@property (nonatomic, setter=_setMenuExtrasGen:) unsigned long long _menuExtrasGen;
@property (retain, nonatomic) NSPointerArray *_observers;
@property (weak) id<AXKWorkspaceManagerDelegate> _delegate;
@property (readonly) AXKApplicationController *frontmostApplicationController;
@property (readonly) AXKApplicationController *focusedApplicationController;
@property (readonly, copy) NSArray *runningApplications;
@property (weak) id<AXKWorkspaceManagerDelegate> delegate;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } menuBarBounds;
@property (readonly, copy) NSArray *menuExtras;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } menuExtrasBounds;
@property (nonatomic) BOOL enableThreadingAssertions;
@property (nonatomic) BOOL trackOpenedMenus;
@property (nonatomic) BOOL trackFocusedElement;
@property (nonatomic) BOOL trackFocusedWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)applicationManager:(id)a0 didUpdateFocusedApplication:(id)a1;
- (void)applicationManager:(id)a0 didUpdateFrontmostApplication:(id)a1;
- (void)applicationManager:(id)a0 didUpdateRunningApplications:(id)a1;
- (void)_assertNotApplicationCacheQueue;
- (void)_frontmostApplicationDidChange:(id)a0;
- (void)_updateTracking;
- (Class)_applicationControllerClassForApplicationElement:(id)a0;
- (id)_applicationControllerForElement:(id)a0;
- (id)_applicationControllerWithApplicationElement:(id)a0 cache:(id)a1;
- (void)_assertApplicationCacheQueue;
- (void)_elementDidInvalidate:(id)a0;
- (void)_enumerateNonNilObserversOnDelegateQueueAndPerform:(id /* block */)a0;
- (long long)_findObserverIndex:(id)a0 in:(id)a1;
- (void)_focusedApplicationDidChange:(id)a0;
- (void)_performBlockOnApplicationCacheQueue:(id /* block */)a0;
- (void)_performBlockOnApplicationCacheQueueAndWait:(id /* block */)a0;
- (void)_runningApplicationsDidChange:(id)a0;
- (BOOL)_updateCacheWithApplicationElements:(id)a0 applicationControllers:(id)a1;
- (void)_updateMenuExtraInformation;
- (void)_updateMenuExtraInformation:(id)a0;
- (void)_updateMenuExtraInformationWithApplications:(id)a0 systemUIServer:(id)a1 menuBarApplicationController:(id)a2 counter:(unsigned long long)a3;
- (void)addWorkspaceObserver:(id)a0;
- (id)applicationControllerForElement:(id)a0;
- (id)applicationControllerForProcessIdentifier:(int)a0;
- (id)applicationControllerForProcessSerialNumber:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a0;
- (void)closeAllMenus;
- (void)disableAllTrackers;
- (id)elementControllerForElement:(id)a0;
- (id)elementControllerForElementAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)focusedApplicationControllerDidChange:(id)a0;
- (void)frontmostApplicationControllerDidChange:(id)a0;
- (void)frontmostApplicationDidChange:(id)a0;
- (void)makeApplicationControllerFrontmost:(id)a0 completionHandler:(id /* block */)a1;
- (void)makeApplicationFrontmost:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeWorkspaceObserverObserver:(id)a0;
- (BOOL)setApplicationControllerForTests:(id)a0 forApplicationElement:(id)a1;
- (void)updateMenuExtraInformation;

@end
