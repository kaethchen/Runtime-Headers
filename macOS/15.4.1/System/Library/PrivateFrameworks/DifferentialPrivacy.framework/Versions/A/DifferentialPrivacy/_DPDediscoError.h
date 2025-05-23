@interface _DPDediscoError : NSError

+ (id)errorWithCode:(long long)a0 description:(id)a1;
+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1 description:(id)a2;

- (id)initWithCode:(long long)a0 description:(id)a1;
- (id)initWithCode:(long long)a0 underlyingError:(id)a1 description:(id)a2;
- (BOOL)logAndStoreInError:(id *)a0;

@end
