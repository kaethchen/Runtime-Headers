@class NSString;

@interface SCRActivityScheduler : NSObject <BSDescriptionProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activitySchedulerWithTargetQueue:(id)a0;
+ (id)isolatedActivitySchedulerWithTargetQueue:(id)a0;

- (id)init;
- (void)submitActivity:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)cancelActivityWithIdentifier:(id)a0;
- (id)initWithTargetQueue:(id)a0;
- (void)completeActivityWithIdentifier:(id)a0;

@end
