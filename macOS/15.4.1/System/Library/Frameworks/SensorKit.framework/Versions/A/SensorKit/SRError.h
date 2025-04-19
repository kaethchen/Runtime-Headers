@interface SRError : NSObject

+ (id)errorWithCode:(long long)a0;
+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1;
+ (id)authorizationError;
+ (id)errorWithCode:(long long)a0 description:(id)a1 recoverySuggestion:(id)a2;
+ (id)errorWithCode:(long long)a0 description:(id)a1 recoverySuggestion:(id)a2 underlyingError:(id)a3;
+ (id)authorizationErrorWithStatus:(long long)a0;
+ (id)connectionNotFoundError;
+ (id)invalidEntitlementError;
+ (id)invalidInfoPlistErrorWithMissingKey:(id)a0 code:(long long)a1;

@end
