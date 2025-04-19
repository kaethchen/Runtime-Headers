@interface BOSError : NSObject

+ (id)errorWithCode:(long long)a0;
+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1 userInfo:(id)a2;
+ (id)localizedDescriptionForErrorCode:(long long)a0;
+ (BOOL)errorIsNonRecoverable:(id)a0;
+ (id)localizedInternalRecoverySuggestionForErrorCode:(long long)a0 underlyingError:(id)a1 userInfo:(id)a2;
+ (id)recoverySuggestionURLForErrorCode:(long long)a0 underlyingError:(id)a1 userInfo:(id)a2;

@end
