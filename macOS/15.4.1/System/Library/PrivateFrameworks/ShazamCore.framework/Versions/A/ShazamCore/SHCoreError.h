@interface SHCoreError : NSObject

+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1;
+ (id)messageForCode:(long long)a0;
+ (BOOL)annotateError:(id *)a0 withError:(id)a1;
+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1 keyOverrides:(id)a2;
+ (BOOL)annotateError:(id *)a0 code:(long long)a1 underlyingError:(id)a2 keyOverrides:(id)a3;

@end
