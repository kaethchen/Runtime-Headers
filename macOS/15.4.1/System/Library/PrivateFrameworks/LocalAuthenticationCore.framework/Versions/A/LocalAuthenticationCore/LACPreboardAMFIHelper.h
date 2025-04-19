@interface LACPreboardAMFIHelper : NSObject

@property (class, readonly, nonatomic) long long useCase;

+ (void)completeCurrentBootModeWithSuccess:(BOOL)a0;
+ (id)getUPPProfile;
+ (BOOL)installProfileWithUUID:(id)a0 signature:(id)a1 error:(id *)a2;

@end
