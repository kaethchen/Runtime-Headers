@class NSLock;

@interface SCRObserverTargetCache : NSObject {
    struct __CFDictionary { } *_targetToApplication;
    struct __CFDictionary { } *_applicationToTargets;
    struct __CFDictionary { } *_targetToObservers;
}

@property (readonly, nonatomic) NSLock *_lock;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserverGroups:(id)a0 forTarget:(id)a1;
- (void)addObserverGroup:(id)a0 forTarget:(id)a1 application:(id)a2;
- (id)applicationForTarget:(id)a0;
- (id)observerGroupsForTarget:(id)a0;
- (void)removeAllObserverGroupsForApplication:(id)a0;
- (void)removeObserverGroup:(id)a0 forTarget:(id)a1;

@end
