@interface CFPDDataBuffer : NSObject

+ (id)newBufferFromCFData:(struct __CFData { } *)a0;
+ (id)newBufferFromFile:(int)a0 allowMappingIfSafe:(BOOL)a1;
+ (id)newBufferFromPropertyList:(void *)a0;

- (unsigned long long)length;
- (void *)bytes;
- (BOOL)beginAccessing;
- (struct __CFData { } *)copyCFData;
- (void *)copyPropertyListWithMutability:(unsigned long long)a0 error:(struct __CFError **)a1;
- (id)copyXPCData;
- (void)endAccessing;
- (BOOL)purgable;
- (void)quicklyValidatePlistAndOnFailureInvokeBlock:(id /* block */)a0;
- (BOOL)validatePlist;

@end
