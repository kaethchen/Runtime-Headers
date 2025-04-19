@interface OSIError : NSObject

+ (id)errorWithCode:(unsigned long long)a0;
+ (id)errorWithCode:(unsigned long long)a0 underlyingError:(id)a1;
+ (id)errorWithCode:(unsigned long long)a0 underlyingError:(id)a1 userInfo:(id)a2;
+ (id)localizedDescriptionForErrorCode:(unsigned long long)a0;

@end
