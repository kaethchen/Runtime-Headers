@class AXFUIElement, NSString, NSTimer, NSDictionary, SCRApplication;

@interface SCRObserverGroup : NSObject {
    struct __CFDictionary { } *_observers;
    _Atomic double _lastFireDate;
    _Atomic long long _throttleTimeMS;
}

@property (nonatomic, setter=_setRegistered:) BOOL _registered;
@property (nonatomic, setter=_setValid:) BOOL _isValid;
@property (readonly, weak, nonatomic) SCRApplication *application;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) AXFUIElement *uiElement;
@property (nonatomic) struct __AXObserver { } *axObserver;
@property (nonatomic) unsigned long long observerID;
@property (retain, nonatomic) NSTimer *delayedFireTimer;
@property double lastFireDate;
@property long long throttleTimeMS;
@property (readonly, nonatomic) NSDictionary *observers;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (struct __CFDictionary { } *)_observers;
- (unsigned long long)observerCount;
- (id)copyForFiring;
- (BOOL)registerObserver;
- (id)_copyAllTargets;
- (void)_fireWithAXUIElementRef:(struct __AXUIElement { } *)a0 userInfo:(id)a1;
- (void)_fireWithAXUIElementRef:(struct __AXUIElement { } *)a0 userInfo:(id)a1 allTargets:(id)a2;
- (BOOL)addObserver:(id)a0 selector:(SEL)a1 name:(struct __CFString { } *)a2 uiElement:(id)a3 cancelMask:(unsigned int)a4;
- (void)fireWithAXUIElementRef:(struct __AXUIElement { } *)a0 userInfo:(id)a1;
- (id)initWithName:(id)a0 uiElement:(id)a1 application:(id)a2;
- (BOOL)isObserving:(struct __CFString { } *)a0 forElement:(id)a1;
- (BOOL)removeObserverWithTarget:(id)a0;
- (BOOL)unRegisterObserver;

@end
