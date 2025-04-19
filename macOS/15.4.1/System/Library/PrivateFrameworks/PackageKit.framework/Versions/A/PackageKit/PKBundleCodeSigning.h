@interface PKBundleCodeSigning : NSObject

+ (BOOL)_verifyCodeSignatureOnURL:(id)a0 requirements:(struct __SecRequirement { } *)a1 error:(id *)a2;
+ (BOOL)_verifyCodeSignaturesOfBundle:(struct __CFBundle { } *)a0 requirement:(struct __SecRequirement { } *)a1 rootBundle:(BOOL)a2 recursively:(BOOL)a3 addingErrorsTo:(id)a4 cancelUsingTest:(id /* block */)a5;
+ (BOOL)_verifyCodeSignaturesUnderDirectory:(id)a0 requirements:(struct __SecRequirement { } *)a1 exclusionPaths:(id)a2 addingErrorsTo:(id)a3 cancelUsingTest:(id /* block */)a4;
+ (BOOL)verifyCodeSignaturesOfBundle:(struct __CFBundle { } *)a0 withRequirement:(struct __SecRequirement { } *)a1 recursively:(BOOL)a2 errors:(id *)a3;
+ (BOOL)verifyCodeSignaturesOfBundle:(struct __CFBundle { } *)a0 withRequirement:(struct __SecRequirement { } *)a1 recursively:(BOOL)a2 errors:(id *)a3 cancelUsingTest:(id /* block */)a4;

@end
