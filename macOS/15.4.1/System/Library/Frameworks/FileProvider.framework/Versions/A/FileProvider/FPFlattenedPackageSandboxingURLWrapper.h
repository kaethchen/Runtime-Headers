@class FPSandboxingURLWrapper;

@interface FPFlattenedPackageSandboxingURLWrapper : FPSandboxingURLWrapper {
    FPSandboxingURLWrapper *_packageWrapper;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 packageURL:(id)a1 error:(id *)a2;

@end
