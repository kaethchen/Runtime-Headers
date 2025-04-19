@class NSMutableDictionary, NSMutableSet, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface BSAbstractDefaultDomain : NSObject {
    NSUserDefaults *_userDefaults;
    BOOL _boundDefaults;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMutableSet *_observerQueue_observers;
    NSMutableDictionary *_defaultKeyToDefaultValue;
}

+ (void)initialize;
+ (BOOL)__useDynamicMethodResolution;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)_bindAndRegisterDefaults;
- (void)_bindProperty:(id)a0 withDefaultKey:(id)a1;
- (void)_bindProperty:(id)a0 withDefaultKey:(id)a1 toDefaultValue:(id)a2;
- (void)_bindProperty:(id)a0 withDefaultKey:(id)a1 toDefaultValue:(id)a2 options:(unsigned long long)a3;
- (id)_initWithDefaults:(id)a0;
- (id)_initWithDomain:(id)a0;
- (void)_setUserDefaults:(id)a0;
- (id)_store;
- (id)observeDefault:(id)a0 onQueue:(id)a1 withBlock:(id /* block */)a2;
- (id)observeDefaults:(id)a0 onQueue:(id)a1 withBlock:(id /* block */)a2;
- (void)resetAllDefaults;
- (void)synchronizeDefaults;

@end
