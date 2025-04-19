@interface RBSOpaqueProcessIdentity : RBSProcessIdentity

+ (BOOL)supportsRBSXPCSecureCoding;

- (id)_initOpaqueWithPid:(int)a0 auid:(unsigned int)a1 description:(id)a2;
- (id)_initOpaqueWithPid:(int)a0 name:(id)a1 auid:(unsigned int)a2;
- (id)copyWithAuid:(unsigned int)a0;
- (id)encodeForJob;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithDecodeFromJob:(id)a0 uuid:(id)a1;
- (id)initWithRBSXPCCoder:(id)a0;

@end
