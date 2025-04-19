@interface MCMessageTracer : NSObject

+ (void)messageTraceDomain:(id)a0 withCustomKeysAndValues:(id)a1;
+ (void)messageTraceOperationError:(id)a0 domainPrefix:(id)a1 domainSuffix:(id)a2 uuid:(id)a3 duration:(double)a4 count:(unsigned long long)a5 size:(unsigned long long)a6;
+ (void)messageTraceResult:(const char *)a0 domain:(id)a1 signature:(id)a2 extraStatus:(id)a3;
+ (id)bucketSignatureForValue:(long long)a0;
+ (void)messageTraceDomainPrefix:(id)a0 domainSuffix:(id)a1 signature:(id)a2 signature2:(id)a3 extraStatus:(id)a4;
+ (void)messageTraceResult:(const char *)a0 count:(unsigned long long)a1 domainPrefix:(id)a2 domainSuffix:(id)a3 signature:(id)a4 extraStatus:(id)a5;
+ (void)messageTraceResult:(const char *)a0 domain:(id)a1 signature:(id)a2;
+ (void)messageTraceResult:(const char *)a0 domain:(id)a1 uuid:(id)a2 signature:(id)a3 extraStatus:(id)a4;

@end
