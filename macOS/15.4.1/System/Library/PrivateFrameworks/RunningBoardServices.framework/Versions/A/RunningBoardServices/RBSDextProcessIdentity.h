@class NSString;

@interface RBSDextProcessIdentity : RBSProcessIdentity {
    NSString *_serverName;
    NSString *_label;
    NSString *_bundleID;
    unsigned char _type;
}

- (id)debugDescription;
- (void).cxx_destruct;
- (id)_initDextWithServerName:(id)a0 label:(id)a1 containingAppBundleID:(id)a2;
- (id)_initDextWithServerName:(id)a0 tagString:(id)a1 containingAppBundleID:(id)a2;
- (BOOL)_matchesIdentity:(id)a0;
- (id)copyWithAuid:(unsigned int)a0;
- (id)dextContainingAppBundleID;
- (id)dextLabel;
- (id)dextServerName;
- (id)encodeForJob;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithDecodeFromJob:(id)a0 uuid:(id)a1;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)isAnonymous;
- (BOOL)isDext;

@end
