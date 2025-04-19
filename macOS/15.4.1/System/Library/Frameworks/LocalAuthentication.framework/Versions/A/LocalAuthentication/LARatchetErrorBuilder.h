@interface LARatchetErrorBuilder : NSObject

+ (id)_errorWithCode:(long long)a0 debugDescription:(id)a1;
+ (id)_errorWithCode:(long long)a0 userInfo:(id)a1;
+ (id)beforeFirstUnlockWithUserInfo:(id)a0;
+ (id)biometryNotEnrolledWithUserInfo:(id)a0;
+ (id)deviceTypeNotSupportedWithUserInfo:(id)a0;
+ (id)errorNotArmedWithRatchetState:(id)a0;
+ (id)genericErrorWithDebugDescription:(id)a0;
+ (id)genericErrorWithUnderlyingError:(id)a0;
+ (id)notInteractiveErrorWithUserInfo:(id)a0;
+ (id)passcodeNotSetWithUserInfo:(id)a0;
+ (id)ratchetErrorWithError:(id)a0;
+ (id)userCustomCancelErrorWithUserInfo:(id)a0;

@end
