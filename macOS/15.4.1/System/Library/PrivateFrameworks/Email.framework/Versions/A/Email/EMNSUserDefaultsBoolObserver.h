@protocol EFCancelable;

@interface EMNSUserDefaultsBoolObserver : NSObject {
    id<EFCancelable> _observationToken;
    BOOL _enabled;
}

@property (readonly, getter=isEnabled) BOOL enabled;

- (void).cxx_destruct;
- (id)initWithUserDefaultKey:(id)a0 keyRepresentsDisabled:(BOOL)a1 handler:(id /* block */)a2;
- (id)initWithUserDefaults:(id)a0 keyPath:(id)a1 keyRepresentsDisabled:(BOOL)a2 handler:(id /* block */)a3;

@end
