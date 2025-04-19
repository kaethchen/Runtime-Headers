@interface TSUHasher : NSObject

@property (nonatomic) unsigned long long currentHash;

+ (BOOL)addFileToSha1HashWithFileHandle:(id)a0 hashContext:(struct CC_SHA1state_st { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7[16]; int x8; } *)a1 error:(id *)a2;
+ (id)computeSha1WithFile:(id)a0 error:(id *)a1;
+ (id)computeSha1WithFileOrDirectory:(id)a0 error:(id *)a1;

- (id)init;
- (void)addObject:(id)a0;
- (void)addRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)hashValue;
- (void)addInt:(int)a0;
- (void)addUnsignedInt:(unsigned int)a0;
- (void)addBool:(BOOL)a0;
- (void)addInteger:(long long)a0;
- (void)addUnsignedInteger:(unsigned long long)a0;
- (void)p_appendUnsignedInteger:(unsigned long long)a0;

@end
