@interface OAHSUError : NSObject

+ (id)errorWithCode:(long long)a0;
+ (id)errorWithCode:(unsigned long long)a0 underlyingError:(id)a1 userInfo:(id)a2;
+ (id)errorWithCode:(unsigned long long)a0 underlyingPOSIXError:(int)a1;

@end
