@interface OSPError : NSObject

+ (id)errorWithCode:(long long)a0;
+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1 userInfo:(id)a2;
+ (id)localizedDescriptionForErrorCode:(long long)a0;
+ (id)errorWithCode:(long long)a0 underlyingPOSIXErrorCode:(long long)a1;
+ (id)errorWithCode:(long long)a0 underlyingRestoreErrorCode:(long long)a1 userInfo:(id)a2;
+ (id)localizedInternalRecoverySuggestionForErrorCode:(long long)a0 userInfo:(id)a1;

@end
