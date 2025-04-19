@interface FAFamilyCircleChangeHandler : NSObject

+ (void)_refetchFamilyWithContext:(id)a0 completion:(id /* block */)a1;
+ (void)handleDidChangeInviteWithCompletion:(id /* block */)a0;
+ (void)handleDidRepairFamilyWithCompletion:(id /* block */)a0;
+ (void)handleDidSetupFamilyWithCompletion:(id /* block */)a0;
+ (void)handleInitialExtensionLoadWithCompletion:(id /* block */)a0;
+ (void)handleURLResponse:(id)a0;

@end
