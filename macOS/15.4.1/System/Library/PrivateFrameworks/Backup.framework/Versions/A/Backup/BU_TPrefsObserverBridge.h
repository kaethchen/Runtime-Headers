@class NSString, NSObject, BU_TNotificationCenterObserverGlue;

@interface BU_TPrefsObserverBridge : NSObject <TMarkTornDown> {
    struct IPrefsObserver { void /* function */ **x0; id x1; } *_observer;
    struct map<TString, TNotificationCenterObserver, std::less<TString>, std::allocator<std::pair<const TString, TNotificationCenterObserver>>> { struct __tree<std::__value_type<TString, TNotificationCenterObserver>, std::__map_value_compare<TString, std::__value_type<TString, TNotificationCenterObserver>, std::less<TString>>, std::allocator<std::__value_type<TString, TNotificationCenterObserver>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TString, TNotificationCenterObserver>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<TString, std::__value_type<TString, TNotificationCenterObserver>, std::less<TString>>> { unsigned long long __value_; } __pair3_; } __tree_; } _globalKeysToObserverMap;
    struct map<UDefaults::RegistryID, TNotificationCenterObserver, std::less<UDefaults::RegistryID>, std::allocator<std::pair<const UDefaults::RegistryID, TNotificationCenterObserver>>> { struct __tree<std::__value_type<UDefaults::RegistryID, TNotificationCenterObserver>, std::__map_value_compare<UDefaults::RegistryID, std::__value_type<UDefaults::RegistryID, TNotificationCenterObserver>, std::less<UDefaults::RegistryID>>, std::allocator<std::__value_type<UDefaults::RegistryID, TNotificationCenterObserver>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<UDefaults::RegistryID, TNotificationCenterObserver>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<UDefaults::RegistryID, std::__value_type<UDefaults::RegistryID, TNotificationCenterObserver>, std::less<UDefaults::RegistryID>>> { unsigned long long __value_; } __pair3_; } __tree_; } _regIDsToObserverMap;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; BU_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _finderPrefsResetObserver;
}

@property (getter=isTornDown) BOOL tornDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithObserver:(struct IPrefsObserver { void /* function */ **x0; id x1; } *)a0;
- (void)aboutToTearDown;
- (void)stopObservingGlobalPrefChanges:(const void *)a0;
- (void)finderPrefChanged:(id)a0;
- (void)globalPrefChanged:(id)a0;
- (void)startObservingFinderPrefsResetNotification;
- (void)startObservingGlobalPrefChanges:(const void *)a0;
- (void)startObservingRegIDChanges:(int)a0;
- (void)stopObservingAllPrefsChanges;
- (void)stopObservingFinderPrefsResetNotification;
- (void)stopObservingRegIDChanges:(int)a0;

@end
