@class NSMutableSet;

@interface SOSystemBehaviorManager : NSObject {
    NSMutableSet *_registeredTimers;
}

+ (id)sharedSOSystemBehaviorManager;

- (void)dealloc;
- (id)init;
- (id)_numberObjectFromTimer:(id)a0;
- (void)addTimer:(id)a0;
- (void)removeTimer:(id)a0;

@end
