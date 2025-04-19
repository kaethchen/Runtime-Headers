@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SCRIsolatedActivityScheduler : SCRActivityScheduler {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSMutableDictionary *_lock_timerForTask;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)submitActivity:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)cancelActivityWithIdentifier:(id)a0;
- (id)initWithTargetQueue:(id)a0;
- (void)completeActivityWithIdentifier:(id)a0;
- (void)_timerFiredForActivity:(id)a0;

@end
