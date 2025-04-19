@class NSThread, NSMutableDictionary, NSMutableOrderedSet, NSMutableArray, NSUserDefaults;
@protocol AXFWindowManagerDataSource;

@interface AXFWindowManagerController : NSObject {
    void *_lsNotificationID;
    unsigned int _wsConnectionID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _layoutObserversLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _layoutCacheLock;
    double _ignoreNextSynchronizeUntilTime;
    BOOL _layoutThreadIsValid;
}

@property unsigned long long _cachedStageManagerStatus;
@property (retain) NSUserDefaults *_userDefaults;
@property (retain, nonatomic) NSThread *_controllerThread;
@property (retain, nonatomic) NSMutableOrderedSet *_registeredWindowIDs;
@property (retain, nonatomic) NSMutableDictionary *_stageManagerStateObservers;
@property (retain, nonatomic) NSMutableArray *_cachedStageManagerLayout;
@property (retain, nonatomic) NSMutableDictionary *_stageManagerLayoutObservers;
@property (weak, nonatomic) id<AXFWindowManagerDataSource> dataSource;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)removeAllWindowManagerObservers;
- (void)_alertHandlersToDifferences:(id)a0;
- (void)_controllerThreadWillEnd:(id)a0;
- (void)_controllerThreadWillStart:(id)a0;
- (void)_enumerateWindowObserverNotifications:(id /* block */)a0;
- (BOOL)_hasLayoutObserverWithKey:(id)a0;
- (void)_removeAllLayoutObservers;
- (void)_removeAllWindowObservers:(id)a0;
- (void)_setupControllerThread;
- (void)_synchronizeLayout:(id)a0;
- (void)_synchronizeRegisteredWindows;
- (void)_tearDownControllerThread;
- (void)_updateObservers:(BOOL)a0;
- (void)_updateWindow:(id)a0;
- (BOOL)_updateWindowNotificationObservers;
- (unsigned long long)_windowStatusWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 screenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (unsigned int)_wsConnection;
- (void)addWindowManagerObserver:(unsigned long long)a0 forKey:(id)a1 handler:(id /* block */)a2;
- (void)dispatchUpdateWindow:(unsigned int)a0 insert:(BOOL)a1;
- (void)removeWindowManagerObserverWithKey:(id)a0;
- (void)removeWindowManagerObserversWithType:(unsigned long long)a0;
- (id)stageManagerLayout;
- (unsigned long long)stageManagerStatus;
- (unsigned long long)statusForWindow:(unsigned int)a0;

@end
