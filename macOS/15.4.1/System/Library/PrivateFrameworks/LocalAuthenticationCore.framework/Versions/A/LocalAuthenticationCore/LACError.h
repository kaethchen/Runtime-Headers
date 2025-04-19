@interface LACError : NSObject

+ (BOOL)error:(id)a0 hasCode:(long long)a1;
+ (BOOL)error:(id)a0 hasCode:(long long)a1 subcode:(long long)a2;
+ (id)errorWithCode:(long long)a0;
+ (id)errorWithCode:(long long)a0 userInfo:(id)a1;
+ (id)missingEntitlementError:(id)a0;
+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1;
+ (id)_errorWithCode:(long long)a0 userInfo:(id)a1;
+ (id)errorWithCode:(long long)a0 debugDescription:(id)a1;
+ (id)errorWithCode:(long long)a0 subcode:(long long)a1 debugDescription:(id)a2;
+ (id)errorWithCode:(long long)a0 subcode:(long long)a1 userInfo:(id)a2;
+ (id)errorWithCode:(long long)a0 localizedDescription:(id)a1;
+ (id)errorWithCode:(long long)a0 localizedDescription:(id)a1 underlyingError:(id)a2;
+ (id)errorWithCode:(long long)a0 subcode:(long long)a1;
+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1 debugDescription:(id)a2;

@end
