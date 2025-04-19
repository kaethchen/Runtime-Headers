@class NSSet, NSMutableSet;

@interface WFLSApplicationStateObserver : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_mutableObservingBundleIdentifiers;
    void *_notificationID;
    id /* block */ _observingBlock;
}

@property (readonly, nonatomic) NSSet *observingBundleIdentifiers;
@property (readonly, nonatomic) unsigned long long eventsOfInterest;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithBundleIdentifiers:(id)a0 eventsOfInterest:(unsigned long long)a1 observingBlock:(id /* block */)a2;
- (BOOL)stopObservingBundleIdentifier:(id)a0;
- (void)startObservingBundleIdentifier:(id)a0;
- (void)startObservingIfNeeded;
- (void)stopObservingIfNeeded;

@end
