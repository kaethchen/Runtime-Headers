@interface ChronoCore.DescriptorService : NSObject {
    void /* unknown type, empty encoding */ _widgetDescriptorPublisher;
    void /* unknown type, empty encoding */ _controlDescriptorPublisher;
    void /* unknown type, empty encoding */ _extensionPublisher;
    void /* unknown type, empty encoding */ descriptorProvider;
    void /* unknown type, empty encoding */ _test_noRetries;
    void /* unknown type, empty encoding */ extensionManager;
    void /* unknown type, empty encoding */ userManager;
    void /* unknown type, empty encoding */ remoteWidgetDescriptorService;
    void /* unknown type, empty encoding */ preferences;
    void /* unknown type, empty encoding */ descriptorCache;
    void /* unknown type, empty encoding */ hostService;
    void /* unknown type, empty encoding */ intentResolver;
    void /* unknown type, empty encoding */ keybagStateProvider;
    void /* unknown type, empty encoding */ stateCaptureManager;
    void /* unknown type, empty encoding */ taskService;
    void /* unknown type, empty encoding */ persistentSubscriptions;
    void /* unknown type, empty encoding */ finishLaunchingToken;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ _queue_currentExtensionsAndCompletionsBeingFetched;
    void /* unknown type, empty encoding */ _queue_extensionEvents;
    void /* unknown type, empty encoding */ _queue_readyDataSources;
    void /* unknown type, empty encoding */ initialQueryTimerInterval;
    void /* unknown type, empty encoding */ queryTimerInterval;
    void /* unknown type, empty encoding */ queryTimerLeeway;
    void /* unknown type, empty encoding */ _queue_queryTimer;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
