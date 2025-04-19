@interface DMCCodeUtilities : NSObject

+ (id)_signingInfoForStaticCode:(struct __SecCode { } *)a0 path:(id)a1;
+ (BOOL)_checkValidityOfStaticCode:(struct __SecCode { } *)a0 path:(id)a1;
+ (id)_codeIdentityForSigningInfo:(id)a0 path:(id)a1;
+ (id)_codeIdentityFromSecTask:(struct __SecTask { } *)a0 path:(id)a1;
+ (id)_codeSigningIDFromSecTask:(struct __SecTask { } *)a0;
+ (id)_pathFromAuditToken:(struct { unsigned int x0[8]; })a0;
+ (struct __SecCode { } *)_staticCodeFromPath:(id)a0;
+ (id)_teamIDFromSecTask:(struct __SecTask { } *)a0;
+ (BOOL)_verifyCodeIdentity:(id)a0 composedIdentifier:(id)a1;
+ (BOOL)_verifyCodeIdentity:(id)a0 other:(id)a1;
+ (id)codeIdentityForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)codeIdentityForPath:(id)a0;
+ (BOOL)verifySignatureForAuditToken:(struct { unsigned int x0[8]; })a0 codeIdentity:(id)a1;
+ (BOOL)verifySignatureForAuditToken:(struct { unsigned int x0[8]; })a0 composedIdentifier:(id)a1;
+ (BOOL)verifySignatureForPath:(id)a0 codeIdentity:(id)a1;
+ (BOOL)verifySignatureForPath:(id)a0 composedIdentifier:(id)a1;

@end
