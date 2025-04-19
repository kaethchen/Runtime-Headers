@interface SHError : NSObject

+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1;
+ (BOOL)remapErrorToClientErrorPointer:(id *)a0;
+ (id)messageForCode:(long long)a0;
+ (BOOL)annotateClientError:(id *)a0 code:(long long)a1 underlyingError:(id)a2;
+ (BOOL)annotateClientError:(id *)a0 code:(long long)a1 underlyingError:(id)a2 keyOverrides:(id)a3;
+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1 keyOverrides:(id)a2;
+ (id)normalizedError:(id)a0;
+ (id)normalizedUserInfo:(id)a0;
+ (id)privateErrorWithCode:(long long)a0 underlyingError:(id)a1;
+ (id)remapErrorToClientError:(id)a0;

@end
