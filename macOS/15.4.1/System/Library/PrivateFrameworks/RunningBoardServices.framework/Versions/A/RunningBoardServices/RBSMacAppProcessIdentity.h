@class NSString;

@interface RBSMacAppProcessIdentity : RBSProcessIdentity {
    NSString *_embeddedApplicationIdentifier;
    NSString *_applicationJobLabel;
    NSString *_personaString;
}

- (id)debugDescription;
- (void).cxx_destruct;
- (BOOL)isApplication;
- (id)_generateMacAppLabelWithInfo:(id)a0 uuid:(id)a1;
- (id)_initMacAppWithInfo:(id)a0 auid:(unsigned int)a1 uuid:(id)a2;
- (id)_initMacAppWithLabel:(id)a0 bundleID:(id)a1 personaString:(id)a2 auid:(unsigned int)a3 platform:(int)a4;
- (BOOL)_matchesIdentity:(id)a0;
- (id)applicationJobLabel;
- (id)copyWithAuid:(unsigned int)a0;
- (id)copyWithPersonaString:(id)a0;
- (unsigned char)defaultManageFlags;
- (id)embeddedApplicationIdentifier;
- (id)encodeForJob;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithDecodeFromJob:(id)a0 uuid:(id)a1;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)isAnonymous;
- (BOOL)isEmbeddedApplication;
- (id)personaString;
- (BOOL)supportsLaunchingDirectly;
- (BOOL)treatedAsAnAppByFrontBoard:(id *)a0;

@end
