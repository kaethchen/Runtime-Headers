@interface SUSignedFlatPkg : NSObject

+ (int)_verifyComponentPackage:(id)a0 atPath:(id)a1 minimumTrust:(int)a2 error:(id *)a3;
+ (int)_verifyProductArchive:(id)a0 atPath:(id)a1 minimumTrust:(int)a2 error:(id *)a3;
+ (int)verifyPackageAtPath:(id)a0 minimumTrust:(int)a1 error:(id *)a2;

@end
