@class NSMapTable;

@interface _FEFocusStateObserver : NSObject {
    NSMapTable *_observers;
    struct { unsigned char wasActive : 1; unsigned char supressNotifyObservers : 1; } _flags;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)addObserver:(id /* block */)a0;
- (id)descriptionBuilder;
- (void)notifyObserversIfNecessary;
- (void)performUpdatesAndNotifyObservers:(id /* block */)a0;

@end
