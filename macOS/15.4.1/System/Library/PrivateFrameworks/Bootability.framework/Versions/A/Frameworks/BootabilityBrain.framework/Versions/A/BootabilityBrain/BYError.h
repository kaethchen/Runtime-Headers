@interface BYError : NSObject

+ (id)errorWithCode:(long long)a0;
+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1;
+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1 userInfo:(id)a2;
+ (id)errorWithCode:(long long)a0 underlyingPOSIXErrorCode:(long long)a1;
+ (id)_localizedDescriptionForErrorCode:(long long)a0;
+ (id)errorWithCode:(long long)a0 underlyingAMAIErrorCode:(long long)a1;
+ (id)errorWithCode:(long long)a0 underlyingBootPolicyError:(unsigned int)a1;
+ (id)personalizationErrorWithAMAIStatus:(long long)a0 type:(id)a1;
+ (id)personalizationErrorWithAMAIStatus:(long long)a0 type:(id)a1 underlyingError:(id)a2;

@end
