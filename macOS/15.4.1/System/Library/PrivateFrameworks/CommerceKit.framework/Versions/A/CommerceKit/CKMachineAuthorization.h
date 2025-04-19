@interface CKMachineAuthorization : CKServiceInterface

+ (id)sharedMachineAuthorization;

- (void)authorizeMachineWithAppleID:(id)a0 completionHandler:(id /* block */)a1;
- (void)deauthorizeMachineWithCompletionHandler:(id /* block */)a0;

@end
