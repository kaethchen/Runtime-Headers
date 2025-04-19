@class RBSXPCServiceIdentity;

@interface RBSXPCServiceProcessIdentity : RBSProcessIdentity {
    RBSXPCServiceIdentity *_serviceIdentity;
}

+ (BOOL)shouldManageExtensionWithExtensionPoint:(id)a0;

- (void).cxx_destruct;
- (id)uuid;
- (id)validationToken;
- (BOOL)isExternal;
- (id)hostIdentifier;
- (id)_initWithXPCServiceID:(id)a0 pid:(int)a1 auid:(unsigned int)a2;
- (id)persona;
- (BOOL)_matchesIdentity:(id)a0;
- (id)copyWithAuid:(unsigned int)a0;
- (unsigned char)defaultManageFlags;
- (id)encodeForJob;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)hostIdentity;
- (BOOL)inheritsCoalitionBand;
- (id)initWithDecodeFromJob:(id)a0 uuid:(id)a1;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)isAnonymous;
- (BOOL)isEqualToIdentity:(id)a0;
- (BOOL)isExtension;
- (BOOL)isMultiInstanceExtension;
- (BOOL)isXPCService;
- (id)personaString;
- (BOOL)supportsLaunchingDirectly;
- (id)xpcServiceIdentifier;

@end
