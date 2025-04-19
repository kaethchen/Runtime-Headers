@class NSMutableDictionary, SCRObserverTargetCache, NSLock;

@interface SCRObserverManager : NSObject {
    NSLock *_observerLock;
    struct __CFDictionary { } *_applicationLocks;
    struct __CFDictionary { } *_applicationAXObservers;
    NSLock *_observerIDToAppLock;
    struct __CFDictionary { } *_observerIDToApp;
    SCRObserverTargetCache *_targetCache;
    _Atomic unsigned long long _observerID;
}

@property (class, readonly) SCRObserverManager *sharedManager;

@property (nonatomic) struct __CFDictionary { } *applicationObserverGroupSets;
@property (retain, nonatomic) NSMutableDictionary *_lastProcessedLayoutChangeNotificationTimestampForObserverIDs;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)status;
- (BOOL)removeAllObserversForApplication:(id)a0;
- (BOOL)_removeApplication:(id)a0;
- (id)_applicationForObserverID:(unsigned long long)a0;
- (void)_fireDelayedObserver:(id)a0;
- (void)_fireObserverID:(id)a0 forApplication:(id)a1 withAXElementRef:(struct __AXUIElement { } *)a2 userInfo:(id)a3;
- (void)_fireObserverID:(id)a0 forApplication:(id)a1 withAXElementRef:(struct __AXUIElement { } *)a2 userInfo:(id)a3 isTimerFire:(BOOL)a4;
- (void)_fireObserverID:(unsigned long long)a0 forNotification:(id)a1 withAXElementRef:(struct __AXUIElement { } *)a2 userInfo:(id)a3;
- (BOOL)_removeObserversForApplication:(id)a0 withObserverTarget:(id)a1 force:(BOOL)a2;
- (BOOL)addObserver:(id)a0 selector:(SEL)a1 name:(struct __CFString { } *)a2 uiElement:(id)a3 application:(id)a4 cancelMask:(unsigned int)a5;
- (BOOL)registerSCRApplication:(id)a0;
- (BOOL)removeObserversForApplication:(id)a0 withObserverTarget:(id)a1;
- (BOOL)removeObserversForApplication:(id)a0 withObserverTarget:(id)a1 name:(struct __CFString { } *)a2 uiElement:(id)a3;
- (BOOL)removeObserversForObserverTargetForced:(id)a0;
- (BOOL)setThrottleTime:(int)a0 forApplication:(id)a1 name:(struct __CFString { } *)a2 uiElement:(id)a3;
- (BOOL)unregisterSCRApplication:(id)a0;

@end
