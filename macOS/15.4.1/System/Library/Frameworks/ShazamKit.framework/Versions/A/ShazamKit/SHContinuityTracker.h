@interface SHContinuityTracker : NSObject

+ (id)buildSignatureAlignment:(id)a0;
+ (id)trackQuerySignature:(id)a0 inReferenceSignature:(id)a1 configuration:(id)a2 error:(id *)a3;
+ (id)trackQuerySignature:(id)a0 inReferenceSignature:(id)a1 usingMergePolicy:(long long)a2 configuration:(id)a3 error:(id *)a4;

@end
