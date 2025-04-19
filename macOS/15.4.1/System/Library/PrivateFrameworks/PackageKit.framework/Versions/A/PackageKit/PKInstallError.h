@interface PKInstallError : NSObject

+ (id)errorWithCode:(long long)a0 userInfo:(id)a1;
+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1;
+ (id)errorWithCode:(long long)a0 package:(id)a1 userInfo:(id)a2;
+ (id)localizedDescriptionForCode:(long long)a0;

@end
