@interface BRXPCClientUtils : NSObject

+ (void)executeAsyncXPCWithMaxRetries:(unsigned long long)a0 completion:(id /* block */)a1 xpcInvokeBlock:(id /* block */)a2;
+ (BOOL)executeXPCWithMaxRetries:(unsigned long long)a0 error:(id *)a1 block:(id /* block */)a2;

@end
