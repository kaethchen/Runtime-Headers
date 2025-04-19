@interface RBUnmanagedJetsamProperties : RBJetsamProperties

+ (id)new;

- (id)init;
- (BOOL)isValid;
- (int)memoryLimitForCategory:(id)a0 strength:(unsigned char *)a1;

@end
