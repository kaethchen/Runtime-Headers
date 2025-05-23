@class NSData;

@interface PCCWrappedKey : NSObject

@property struct pcc_wrapped_invocation_key { char *x0; unsigned long long x1; } *wrappedInvocationKey;
@property (retain) NSData *routingToken;

- (void)dealloc;
- (void).cxx_destruct;
- (id)data;
- (void)clear;
- (id)initWithKey:(id)a0 permittedRemoteMeasurement:(id)a1 attestation:(id)a2;

@end
