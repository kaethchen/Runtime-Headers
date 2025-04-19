@interface ChronoCore.ProcessMonitor : NSObject {
    void /* unknown type, empty encoding */ _queue;
    void /* unknown type, empty encoding */ _calloutQueue;
    void /* unknown type, empty encoding */ _widgetHostService;
    void /* unknown type, empty encoding */ _controlHostService;
    void /* unknown type, empty encoding */ _extensionManager;
    void /* unknown type, empty encoding */ _carouselSessionService;
    void /* unknown type, empty encoding */ _subscriptions;
    void /* unknown type, empty encoding */ _keepAliveAssertionProvider;
    void /* unknown type, empty encoding */ _nowPlayingObserver;
    void /* unknown type, empty encoding */ _lock;
    void /* unknown type, empty encoding */ _lock_nowPlayingApp;
    void /* unknown type, empty encoding */ _lock_processMonitor;
    void /* unknown type, empty encoding */ _lock_knownExtensionBundleIdentifiers;
    void /* unknown type, empty encoding */ _lock_knownApplicationBundleIdentifiers;
    void /* unknown type, empty encoding */ _lock_runningBundleIdentifiersToPIDs;
    void /* unknown type, empty encoding */ _lock_processHandlesToObserve;
    void /* unknown type, empty encoding */ _lock_runningBundleIdentifiersWithVisibleScenes;
    void /* unknown type, empty encoding */ _lock_runningBundleIdentifiersWithSessionExemptions;
    void /* unknown type, empty encoding */ _lock_bundleIdentifiersToSuspensionObservers;
    void /* unknown type, empty encoding */ _lock_observers;
    void /* unknown type, empty encoding */ _lock_formerlyVisibleApplicationBundleIdentifiers;
    void /* unknown type, empty encoding */ _lock_formerlyVisibleApplicationsGraceExpirationTimer;
    void /* unknown type, empty encoding */ _lock_sceneBackedActivityBundleIdentifiers;
}

- (id)init;
- (void).cxx_destruct;

@end
